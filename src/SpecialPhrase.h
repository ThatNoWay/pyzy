/* vim:set et ts=4 sts=4:
 *
 * libpyzy - The Chinese PinYin and Bopomofo conversion library.
 *
 * Copyright (c) 2008-2010 Peng Huang <shawn.p.huang@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
 * USA
 */
#ifndef __PYZY_SPECIAL_PHRASE_H_
#define __PYZY_SPECIAL_PHRASE_H_

#include <string>

namespace PyZy {

class SpecialPhrase {
public:
    SpecialPhrase (size_t pos) : m_position (pos) { }
    virtual ~SpecialPhrase (void) { }

    size_t position (void) const
    {
        return m_position;
    }

    virtual std::string text (void) = 0;

private:
    size_t m_position;
};

};  // namespace PyZy

#endif  // __PYZY_SPECIAL_PHRASE_H_
