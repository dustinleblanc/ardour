// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/selectiondata.h>
#include <gtkmm/private/selectiondata_p.h>

// -*- c++ -*-
/* $Id$ */

/* Copyright 2002 The gtkmm Development Team
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

#include <gtkmm/textbuffer.h>
#include <gdkmm/pixbuf.h>
#include <glibmm/utility.h> //For ScopedPtr<>.
#include <gtk/gtkselection.h>


namespace Gtk
{

void SelectionData::set(const std::string& type, int format, const guint8* data, int length)
{
  gtk_selection_data_set(gobj(), gdk_atom_intern(type.c_str(), 0), format, data, length);
}

void SelectionData::set(int format, const guint8* data, int length)
{
  //The C examples do this - that's why I added this method overload. murrayc.
  set(get_target(), format, data, length);
}

void SelectionData::set(const std::string& type, const std::string& data)
{
  gtk_selection_data_set(gobj(), gdk_atom_intern(type.c_str(), 0),
                         sizeof(char) * 8, // format is 8 bits per unit
                         reinterpret_cast<const guint8*>(data.data()), data.size());
}

bool SelectionData::set_text(const Glib::ustring& data)
{
  return gtk_selection_data_set_text(gobj(), data.data(), data.bytes());
}

Glib::ustring SelectionData::get_text() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(
      reinterpret_cast<char*>(gtk_selection_data_get_text(const_cast<GtkSelectionData*>(gobj()))));
}

std::string SelectionData::get_data_as_string() const
{
  if(gobj()->data && gobj()->length > 0)
    return std::string(reinterpret_cast<char*>(gobj()->data), gobj()->length);
  else
    return std::string();
}

std::string SelectionData::get_target() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(
      gdk_atom_name(const_cast<GtkSelectionData*>(gobj())->target));
}

Gdk::ArrayHandle_AtomString SelectionData::get_targets() const
{
  GdkAtom* targets = 0;
  int    n_targets = 0;

  if(!gtk_selection_data_get_targets(const_cast<GtkSelectionData*>(gobj()), &targets, &n_targets))
    n_targets = 0; // it's set to -1 otherwise

  //Note that we free the GdkAtom* array, but we don't need to free its items:
  return Gdk::ArrayHandle_AtomString(targets, n_targets, Glib::OWNERSHIP_SHALLOW);
}


std::string SelectionData::get_data_type() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(
      gdk_atom_name(const_cast<GtkSelectionData*>(gobj())->type));
}

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::SelectionData wrap(GtkSelectionData* object, bool take_copy)
{
  return Gtk::SelectionData(object, take_copy);
}

} // namespace Glib


namespace Gtk
{


// static
GType SelectionData::get_type()
{
  return gtk_selection_data_get_type();
}

SelectionData::SelectionData()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

SelectionData::SelectionData(const SelectionData& other)
:
  gobject_ ((other.gobject_) ? gtk_selection_data_copy(other.gobject_) : 0)
{}

SelectionData::SelectionData(GtkSelectionData* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gtk_selection_data_copy(gobject) : gobject)
{}

SelectionData& SelectionData::operator=(const SelectionData& other)
{
  SelectionData temp (other);
  swap(temp);
  return *this;
}

SelectionData::~SelectionData()
{
  if(gobject_)
    gtk_selection_data_free(gobject_);
}

void SelectionData::swap(SelectionData& other)
{
  GtkSelectionData *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

GtkSelectionData* SelectionData::gobj_copy() const
{
  return gtk_selection_data_copy(gobject_);
}


bool SelectionData::set_pixbuf(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  return gtk_selection_data_set_pixbuf(gobj(), Glib::unwrap(pixbuf));
}

Glib::RefPtr<Gdk::Pixbuf> SelectionData::get_pixbuf()
{
  return Glib::wrap(gtk_selection_data_get_pixbuf(gobj()));
}

Glib::RefPtr<const Gdk::Pixbuf> SelectionData::get_pixbuf() const
{
  return const_cast<SelectionData*>(this)->get_pixbuf();
}

bool SelectionData::set_uris(const Glib::StringArrayHandle& uris)
{
  return gtk_selection_data_set_uris(gobj(), const_cast<char**>((uris).data()));
}

Glib::StringArrayHandle SelectionData::get_uris() const
{
  return Glib::StringArrayHandle(gtk_selection_data_get_uris(const_cast<GtkSelectionData*>(gobj())));
}

 const guint8* SelectionData::get_data() const
{
  return gobj()->data;
}
 
 int SelectionData::get_length() const
{
  return gobj()->length;
}
 
 GdkAtom SelectionData::get_selection() const
{
  return gobj()->selection;
}
 
 int SelectionData::get_format() const
{
  return gobj()->format;
}
 
 Glib::RefPtr<Gdk::Display> SelectionData::get_display()
{
  Glib::RefPtr<Gdk::Display> ref_ptr(Glib::wrap(gobj()->display));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

Glib::RefPtr<const Gdk::Display> SelectionData::get_display() const
{
  Glib::RefPtr<const Gdk::Display> ref_ptr(Glib::wrap(gobj()->display));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}
 
bool SelectionData::targets_include_uri() const
{
  return gtk_selection_data_targets_include_uri(const_cast<GtkSelectionData*>(gobj()));
}

bool SelectionData::targets_include_text() const
{
  return gtk_selection_data_targets_include_text(const_cast<GtkSelectionData*>(gobj()));
}

bool SelectionData::targets_include_rich_text(const Glib::RefPtr<TextBuffer>& buffer) const
{
  return gtk_selection_data_targets_include_rich_text(const_cast<GtkSelectionData*>(gobj()), Glib::unwrap(buffer));
}

bool SelectionData::targets_include_image(bool writable) const
{
  return gtk_selection_data_targets_include_image(const_cast<GtkSelectionData*>(gobj()), static_cast<int>(writable));
}


} // namespace Gtk


