// -*- LSST-C++ -*-
/* 
 * LSST Data Management System
 * Copyright 2008, 2009 LSST Corporation.
 * 
 * This product includes software developed by the
 * LSST Project (http://www.lsst.org/).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the LSST License Statement and 
 * the GNU General Public License along with this program.  If not, 
 * see <http://www.lsstcorp.org/LegalNotices/>.
 */

/* 
RULE

[LsstDm-3-24b - 5]
Begin all boolean type methods with 'is' or 'has', 'can', 'should'.


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-24  The prefix 'is' should be used for boolean variables and methods.

EXAMPLE 

    isSet, isVisible, isFinished, isFound, isOpen
    bool hasLicense();
    bool canEvaluate();
    Bool shouldSort();

DEFINITION

Common practice in the C++ development community and partially enforced in Java.

Using the 'is' prefix solves a common problem of choosing bad boolean names 
like 'state' or 'flag'. 'isStatus' or 'isFlag' simply don't fit, and the 
programmer is forced to choose more meaningful names.

There are a few alternatives to the 'is' prefix that fit better in some 
situations. These are the 'has', 'can' and 'should' prefixes.

CAVEAT

This Rule only checks boolean methods.  Boolean variables are checked in Rule
LsstDm-3-24a].  Boolean operator functions are not affected by this Rule.


ATTRIBUTION

Implementation based on Parasoft: NAMING-20.
*/


// EXAMPLE

bool sorted();       // Violation
bool licensed();     // Violation



// REPAIR

bool shouldSort();  // OK
bool hasLicense();  // OK

