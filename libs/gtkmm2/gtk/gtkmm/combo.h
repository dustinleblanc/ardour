// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_COMBO_H
#define _GTKMM_COMBO_H

#include <gtkmmconfig.h>

#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm.h>

/* $Id$ */

/* combo.h
 * 
 * Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

// This is for including the config header before any code (such as
// the #ifndef GTKMM_DISABLE_DEPRECATED in deprecated classes) is generated:


#include <glibmm/listhandle.h>
#include <glibmm/helperlist.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/entry.h>
#include <gtkmm/item.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkListItem GtkListItem;
typedef struct _GtkListItemClass GtkListItemClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class ComboDropDownItem_Class; } // namespace Gtk
#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkList GtkList;
typedef struct _GtkListClass GtkListClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class ComboDropDown_Class; } // namespace Gtk
#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCombo GtkCombo;
typedef struct _GtkComboClass GtkComboClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Combo_Class; } // namespace Gtk
namespace Gtk
{


/** An item in a ComboDropDownList.
 * 
 * Items in a ComboDropDownList inherit Item. Two signals are added.
 *
 * @deprecated Use the ComboBox widget instead. 
 */

class ComboDropDownItem : public Gtk::Item
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ComboDropDownItem CppObjectType;
  typedef ComboDropDownItem_Class CppClassType;
  typedef GtkListItem BaseObjectType;
  typedef GtkListItemClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~ComboDropDownItem();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ComboDropDownItem_Class;
  static CppClassType combodropdownitem_class_;

  // noncopyable
  ComboDropDownItem(const ComboDropDownItem&);
  ComboDropDownItem& operator=(const ComboDropDownItem&);

protected:
  explicit ComboDropDownItem(const Glib::ConstructParams& construct_params);
  explicit ComboDropDownItem(GtkListItem* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkListItem*       gobj()       { return reinterpret_cast<GtkListItem*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkListItem* gobj() const { return reinterpret_cast<GtkListItem*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  virtual void on_scroll_horizontal(ScrollType scroll_type, float position);
  virtual void on_scroll_vertical(ScrollType scroll_type, float position);
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

  
public:
  ComboDropDownItem();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%scroll_horizontal(ScrollType scroll_type, float position)</tt>
   */

  Glib::SignalProxy2< void,ScrollType,float > signal_scroll_horizontal();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%scroll_vertical(ScrollType scroll_type, float position)</tt>
   */

  Glib::SignalProxy2< void,ScrollType,float > signal_scroll_vertical();


};


namespace ComboDropDown_Helpers
{

typedef Gtk::ComboDropDownItem Element;

 
class ComboDropDownList : public Glib::HelperList< ComboDropDownItem, const Element, Glib::List_Cpp_Iterator<GtkListItem,ComboDropDownItem> >
{
public:
  ComboDropDownList();
  explicit ComboDropDownList(GtkList* gparent);
  ComboDropDownList(const ComboDropDownList& src);
  virtual ~ComboDropDownList() {}

  ComboDropDownList& operator=(const ComboDropDownList& src);

  typedef Glib::HelperList< ComboDropDownItem, const Element,  Glib::List_Cpp_Iterator<GtkListItem,ComboDropDownItem> > type_base;

  GtkList* gparent();
  const GtkList* gparent() const;

  virtual GList*& glist() const;      // front of list

  virtual void erase(iterator start, iterator stop);
  virtual iterator erase(iterator);  //Implented as custom or by LIST_CONTAINER_REMOVE
  virtual void remove(const_reference); //Implented as custom or by LIST_CONTAINER_REMOVE

  /// This is order n. (use at own risk)
  reference operator[](size_type l) const;

public:
  iterator insert(iterator position, element_type& e); //custom-implemented.

  template <class InputIterator>
  inline void insert(iterator position, InputIterator first, InputIterator last)
  {
    for(;first != last; ++first)
      position = insert(position, *first);
  }

 inline void push_front(element_type& e)
    { insert(begin(), e); }
  inline void push_back(element_type& e)
    { insert(end(), e); }


  iterator find(const_reference c);
  iterator find(Widget&);

  };


} /* namespace ComboDropDown_Helpers */


class Combo;

/** The dropdown list of a Combo.
 * 
 * A combo is a compound widget which crosses a text entry area and a pull
 * down list. The dropdown list is implemented with the deprecated GtkList
 * widget on the gtk+ side. ComboDropDown is a thin wrapper around GtkList
 * containing just the functionality necessary for a Combo's list. To add
 * and remove items use the STL-style interface that is accessible through
 * ComboDropDown::children().
 *
 * @deprecated Use the ComboBox widget instead.
 */

class ComboDropDown : public Gtk::Container
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ComboDropDown CppObjectType;
  typedef ComboDropDown_Class CppClassType;
  typedef GtkList BaseObjectType;
  typedef GtkListClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~ComboDropDown();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ComboDropDown_Class;
  static CppClassType combodropdown_class_;

  // noncopyable
  ComboDropDown(const ComboDropDown&);
  ComboDropDown& operator=(const ComboDropDown&);

protected:
  explicit ComboDropDown(const Glib::ConstructParams& construct_params);
  explicit ComboDropDown(GtkList* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkList*       gobj()       { return reinterpret_cast<GtkList*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkList* gobj() const { return reinterpret_cast<GtkList*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  virtual void on_select_child(Widget& item);
  virtual void on_selection_changed();
  virtual void on_unselect_child(Widget& item);
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

  
public:
  typedef ComboDropDown_Helpers::ComboDropDownList ComboDropDownList;

protected:
  ComboDropDown();
  friend class Combo;
public:

  
  void scroll_horizontal(ScrollType scroll_type, float position);
  
  void scroll_vertical(ScrollType scroll_type, float position);

  ComboDropDownList& children();
  const ComboDropDownList& children() const;

  
  /**
   * @par Prototype:
   * <tt>void on_my_%select_child(Widget& item)</tt>
   */

  Glib::SignalProxy1< void,Widget& > signal_select_child();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%selection_changed()</tt>
   */

  Glib::SignalProxy0< void > signal_selection_changed();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%unselect_child(Widget& item)</tt>
   */

  Glib::SignalProxy1< void,Widget& > signal_unselect_child();


protected:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  mutable ComboDropDownList children_proxy_;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


};


class ScrolledWindow;
class Window;

/** A text entry field with a dropdown list.
 * 
 * A combo is a compound widget which crosses a text entry area and a pull
 * down list.  It may allow text entry or it may just allow list
 * values depending on the settings.
 *
 * Access members allow altering of the widget components.
 *
 * @deprecated Use the ComboBox widget instead.
 */

class Combo : public HBox
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Combo CppObjectType;
  typedef Combo_Class CppClassType;
  typedef GtkCombo BaseObjectType;
  typedef GtkComboClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Combo();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Combo_Class;
  static CppClassType combo_class_;

  // noncopyable
  Combo(const Combo&);
  Combo& operator=(const Combo&);

protected:
  explicit Combo(const Glib::ConstructParams& construct_params);
  explicit Combo(GtkCombo* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkCombo*       gobj()       { return reinterpret_cast<GtkCombo*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkCombo* gobj() const { return reinterpret_cast<GtkCombo*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

  
public:

  Combo();
  
  /** Allow direct text entry
   * Whether the text in the entry must be or not be in the list.
   *
   * @param value Set to true if the value must be in list.
   * @param empty Set to true if the text area is allowed to be empty.
   */
  
  void set_value_in_list(bool value = true, bool empty = false);

  /** Set arrows keys to change value
   * Up and down will scroll through the list items.
   * Useful when there is a small list of value that the
   * list must have.
   *
   * @param arrows_on true indicates the arrow keys scroll.
   */
  
  void set_use_arrows(bool arrows_on = true);

  /** Set arrows keys to change if value not in list
   * Up and down will scroll through the list items but only
   * change the current value if the text does not match a list item..
   * Useful when there is a small list of value that the
   * list must have.
   *
   * @param arrows_always true indicates the value will change.
   */
  
  void set_use_arrows_always(bool arrows_always = true);

  /** Sets list case sensitive
   * Determines if the list items and text comparisons for
   * set_use_arrows_always() should be case sensitive.
   */
  
  void set_case_sensitive(bool val = true);

  /** Set the current entry Glib::ustring
   * Call this function on an item if it isn't a label or you
   * want it to have a different value to be displayed in the entry
   */
  
  void set_item_string(Gtk::Item& item, const Glib::ustring& item_value);
   void remove_item_string(Gtk::Item& item);

  /// Insert a list of items.
  
  void set_popdown_strings(const Glib::ListHandle<Glib::ustring>& strings);

  Glib::ListHandle<Glib::ustring> get_popdown_strings() const;

  
  void disable_activate();

   Entry* get_entry();
  const Entry* get_entry() const;
    ComboDropDown* get_list();
  const ComboDropDown* get_list() const;
 
  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the arrow keys move through the list of items.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_enable_arrow_keys() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the arrow keys move through the list of items.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_enable_arrow_keys() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Obsolete property
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_enable_arrows_always() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Obsolete property
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_enable_arrows_always() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether list item matching is case sensitive.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_case_sensitive() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether list item matching is case sensitive.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_case_sensitive() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether an empty value may be entered in this field.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_allow_empty() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether an empty value may be entered in this field.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_allow_empty() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether entered values must already be present in the list.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_value_in_list() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether entered values must already be present in the list.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_value_in_list() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};


} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ComboDropDownItem
   */
  Gtk::ComboDropDownItem* wrap(GtkListItem* object, bool take_copy = false);
} //namespace Glib


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ComboDropDown
   */
  Gtk::ComboDropDown* wrap(GtkList* object, bool take_copy = false);
} //namespace Glib


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Combo
   */
  Gtk::Combo* wrap(GtkCombo* object, bool take_copy = false);
} //namespace Glib


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_COMBO_H */

