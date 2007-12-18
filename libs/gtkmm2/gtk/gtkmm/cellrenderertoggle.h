// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERERTOGGLE_H
#define _GTKMM_CELLRENDERERTOGGLE_H


#include <glibmm.h>

/* $Id$ */

/* cellrenderertoggle.h
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

#include <gtkmm/cellrenderer.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCellRendererToggle GtkCellRendererToggle;
typedef struct _GtkCellRendererToggleClass GtkCellRendererToggleClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class CellRendererToggle_Class; } // namespace Gtk
namespace Gtk
{

/** Renders a toggle button in a cell.
 * The button is drawn as a radio- or checkbutton, depending on the radio property. When activated, it 
 * emits the toggled signal.
 *
 * @ingroup TreeView
 */

class CellRendererToggle : public CellRenderer
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellRendererToggle CppObjectType;
  typedef CellRendererToggle_Class CppClassType;
  typedef GtkCellRendererToggle BaseObjectType;
  typedef GtkCellRendererToggleClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~CellRendererToggle();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class CellRendererToggle_Class;
  static CppClassType cellrenderertoggle_class_;

  // noncopyable
  CellRendererToggle(const CellRendererToggle&);
  CellRendererToggle& operator=(const CellRendererToggle&);

protected:
  explicit CellRendererToggle(const Glib::ConstructParams& construct_params);
  explicit CellRendererToggle(GtkCellRendererToggle* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkCellRendererToggle*       gobj()       { return reinterpret_cast<GtkCellRendererToggle*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkCellRendererToggle* gobj() const { return reinterpret_cast<GtkCellRendererToggle*>(gobject_); }


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
  virtual void on_toggled(const Glib::ustring& path);
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

public:

  CellRendererToggle();
  

  /** Return value: <tt>true</tt> if we're rendering radio toggles rather than checkboxes
   * @return <tt>true</tt> if we're rendering radio toggles rather than checkboxes.
   */
  bool get_radio() const;
  
  /** If @a radio  is <tt>true</tt>, the cell renderer renders a radio toggle
   * (i.e.\ a toggle in a group of mutually-exclusive toggles).
   * If <tt>false</tt>, it renders a check toggle (a standalone boolean option).
   * This can be set globally for the cell renderer, or changed just
   * before rendering each cell in the model (for Gtk::TreeView, you set
   * up a per-row setting using Gtk::TreeViewColumn to associate model
   * columns with cell renderer properties).
   * @param radio <tt>true</tt> to make the toggle look like a radio button.
   */
  void set_radio(bool radio = true);
  
  /** Return value: <tt>true</tt> if the cell renderer is active.
   * @return <tt>true</tt> if the cell renderer is active.
   */
  bool get_active() const;
  
  /** Activates or deactivates a cell renderer.
   * @param setting The value to set.
   */
  void set_active(bool setting = true);

   //TODO: Maybe the parameter should be a TreePath.
  /** The toggled signal is emitted when the cell is toggled.
   *
   * @param path string representation of TreePath describing the event location
   *
   * @par Prototype:
   * <tt>void on_my_%toggled(const Glib::ustring& path)</tt>
   */

  Glib::SignalProxy1< void,const Glib::ustring& > signal_toggled();


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The toggle button can be activated.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_activatable() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The toggle button can be activated.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_activatable() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The toggle state of the button.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_active() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The toggle state of the button.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_active() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Draw the toggle button as a radio button.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_radio() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Draw the toggle button as a radio button.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_radio() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Size of check or radio indicator.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<int> property_indicator_size() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Size of check or radio indicator.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_indicator_size() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


#ifdef GLIBMM_PROPERTIES_ENABLED
  virtual Glib::PropertyProxy_Base _property_renderable();
#else
  virtual Glib::ustring _property_renderable();
#endif


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
   * @relates Gtk::CellRendererToggle
   */
  Gtk::CellRendererToggle* wrap(GtkCellRendererToggle* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CELLRENDERERTOGGLE_H */

