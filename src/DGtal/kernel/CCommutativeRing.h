/**
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 **/

#pragma once

/**
 * @file CCommutativeRing.h
 * @author David Coeurjolly (\c david.coeurjolly@liris.cnrs.fr )
 * Laboratoire d'InfoRmatique en Image et Systèmes d'information - LIRIS (CNRS, UMR 5205), CNRS, France
 * @author Jacques-Olivier Lachaud (\c jacques-olivier.lachaud@univ-savoie.fr )
 * Laboratory of Mathematics (CNRS, UMR 5807), University of Savoie, France
 *
 * @date 2011/08/26
 *
 * Header file for concept CCommutativeRing.cpp
 *
 * This file is part of the DGtal library.
 */

#if defined(CCommutativeRing_RECURSES)
#error Recursive header files inclusion detected in CCommutativeRing.h
#else // defined(CCommutativeRing_RECURSES)
/** Prevents recursive inclusion of headers. */
#define CCommutativeRing_RECURSES

#if !defined CCommutativeRing_h
/** Prevents repeated inclusion of headers. */
#define CCommutativeRing_h

//////////////////////////////////////////////////////////////////////////////
// Inclusions
#include <iostream>
#include "DGtal/base/Common.h"
#include "DGtal/kernel/CSignedInteger.h"
#include "DGtal/kernel/NumberTraits.h"

#ifdef WITH_GMP
#include <gmpxx.h>
#endif
//////////////////////////////////////////////////////////////////////////////

namespace DGtal
{

  /////////////////////////////////////////////////////////////////////////////
  // class CCommutativeRing
  /**
     Description of \b concept '\b CCommutativeRing' <p>
     @ingroup Concepts
    
     @brief Aim: Defines the mathematical concept equivalent to a
     unitary commutative ring.
     
     <p> Refinement of boost::Assignable<T>,
     boost::EqualityComparable<T>, boost::LessThanComparable<T>
    
     <p> Associated types :
    
     <p> Notation
     - \t X : A type that is a model of CCommutativeRing
     - \t x, \t y	: Object of type Integer
    
     <p> Definitions
    
     <p> Valid expressions and semantics <br>
     <table> 
     <tr> 
     <td class=CName> \b Name </td> 
     <td class=CExpression> \b Expression </td>
     <td class=CRequirements> \b Type requirements </td> 
     <td class=CReturnType> \b Return type </td>
     <td class=CPrecondition> \b Precondition </td> 
     <td class=CSemantics> \b Semantics </td> 
     <td class=CPostCondition> \b Postcondition </td> 
     <td class=CComplexity> \b Complexity </td>
     </tr>
     <tr> 
     <td class=CName>            Construction from basic integer type </td>
     <td class=CExpression>      X( i ) </td> 
     <td class=CRequirements>    </td>
     <td class=CReturnType>      </td>
     <td class=CPrecondition>    </td> 
     <td class=CSemantics>       \t X represents the integer \t i</td> 
     <td class=CPostCondition>   </td> 
     <td class=CComplexity>      </td>
     </tr>
     <tr> 
     <td class=CName>            Addition </td>
     <td class=CExpression>      \t x + \t y </td> 
     <td class=CRequirements>    </td>
     <td class=CReturnType>      \t X</td>
     <td class=CPrecondition>    </td> 
     <td class=CSemantics>       addition of two numbers </td> 
     <td class=CPostCondition>   </td> 
     <td class=CComplexity>      </td>
     </tr>
     <tr> 
     <td class=CName>            Subtraction </td>
     <td class=CExpression>      \t x - \t y </td> 
     <td class=CRequirements>    </td>
     <td class=CReturnType>      \t X</td>
     <td class=CPrecondition>    </td> 
     <td class=CSemantics>       subtraction of two numbers </td> 
     <td class=CPostCondition>   </td> 
     <td class=CComplexity>      </td>
     </tr>
     <tr> 
     <td class=CName>            Multiplication </td>
     <td class=CExpression>      \t x - \t y </td> 
     <td class=CRequirements>    </td>
     <td class=CReturnType>      \t X</td>
     <td class=CPrecondition>    </td> 
     <td class=CSemantics>       subtraction of two numbers </td> 
     <td class=CPostCondition>   </td> 
     <td class=CComplexity>      </td>
     </tr>
     <tr> 
     <td class=CName>            Opposite operator </td>
     <td class=CExpression>      - \t x </td> 
     <td class=CRequirements>    </td>
     <td class=CReturnType>      \t X</td>
     <td class=CPrecondition>    </td> 
     <td class=CSemantics>       defines the opposite of \t x (\t x + \t -x = 0) </td> 
     <td class=CPostCondition>   </td> 
     <td class=CComplexity>      </td>
     </tr>
     <tr> 
     <td class=CName>             \t X should have constant \t ZERO  in \t NumberTraits. </td> 
     <td class=CExpression>      NumberTraits<X>::ZERO </td>
     <td class=CRequirements>    constant should be defined </td> 
     <td class=CReturnType>      const \t X </td>
     <td class=CPrecondition>    </td> 
     <td class=CSemantics>       the value 0</td> 
     <td class=CPostCondition>   </td> 
     <td class=CComplexity>      </td>
     </tr>
     <tr> 
     <td class=CName>             \t X should have constant \t ONE in \t NumberTraits. </td> 
     <td class=CExpression>      NumberTraits<X>::ONE </td>
     <td class=CRequirements>    constant should be defined </td> 
     <td class=CReturnType>      const \t X </td>
     <td class=CPrecondition>    </td> 
     <td class=CSemantics>       the value 1</td> 
     <td class=CPostCondition>   </td> 
     <td class=CComplexity>      </td>
     </tr>
     </table>
    
     <p> Invariants <br>
    
     <p> Models <br>
       DGtal::int32_t, DGtal::int64_t, DGtal::int8_t, float, double, long double, mpz_class
    
     <p> Notes <br>
   
     @tparam T the type that should be a model of commutative ring.
   */
  template <typename T>
  struct CCommutativeRing : boost::Assignable<T>, boost::EqualityComparable<T>, boost::LessThanComparable<T>
  {
    // ----------------------- Concept checks ------------------------------
  public:

    BOOST_CONCEPT_USAGE( CCommutativeRing )
    {
      ConceptUtils::sameType( c, T( a+b ) );
      ConceptUtils::sameType( c, T( -a ) );
      ConceptUtils::sameType( c, T( a-b ) );
      ConceptUtils::sameType( c, T( a*b ) );  
      ConceptUtils::sameType( c, NumberTraits<T>::ONE );  
      ConceptUtils::sameType( c, NumberTraits<T>::ZERO );  

      // JOL: BOOST_CONCEPT cannot check values.
      // static T two = NumberTraits<T>::ONE+NumberTraits<T>::ONE;
      // static T three =  two+NumberTraits<T>::ONE;
      
      // BOOST_STATIC_ASSERT(NumberTraits<T>::ZERO  == 
      // 			  three * NumberTraits<T>::ZERO );
    
      // BOOST_STATIC_ASSERT(three  == 
      // 			  three + NumberTraits<T>::ZERO );

      // BOOST_STATIC_ASSERT(NumberTraits<T>::ONE  == 
      // 			  ((NumberTraits<T>::ONE+NumberTraits<T>::ONE)
      // 			   - NumberTraits<T>::ONE ) );

      // BOOST_STATIC_ASSERT(NumberTraits<T>::ONE  == 
      // 			  NumberTraits<T>::ONE*NumberTraits<T>::ONE );
    
    }
    // ------------------------- Private Datas --------------------------------
  private:
    
    // ------------------------- Internals ------------------------------------
  private:
    T a,b,c;
  
  };

#ifdef WITH_GMP
  template<>
  struct CCommutativeRing<mpz_class>
  {
    // ----------------------- Concept checks ------------------------------
  public:

    BOOST_CONCEPT_ASSERT((CSignedInteger<mpz_class>));

    BOOST_CONCEPT_USAGE( CCommutativeRing )
    {
      //ConceptUtils::sameType( c, a+b );
      //ConceptUtils::sameType( c, -a );
      //ConceptUtils::sameType( c, a*b );  
      ConceptUtils::sameType( c, NumberTraits<mpz_class>::ONE );  
      ConceptUtils::sameType( c, NumberTraits<mpz_class>::ZERO );  

      // JOL: BOOST_CONCEPT cannot check values.
      // static mpz_class two = NumberTraits<mpz_class>::ONE+NumberTraits<mpz_class>::ONE;
      // static mpz_class three =  two+NumberTraits<mpz_class>::ONE;
      
      // BOOST_STATIC_ASSERT(NumberTraits<mpz_class>::ZERO  == 
      // 			  three * NumberTraits<mpz_class>::ZERO );
    
      // BOOST_STATIC_ASSERT(three  == 
      // 			  three + NumberTraits<mpz_class>::ZERO );

      // BOOST_STATIC_ASSERT(NumberTraits<mpz_class>::ONE  == 
      // 			  ((NumberTraits<mpz_class>::ONE+NumberTraits<mpz_class>::ONE)
      // 			   - NumberTraits<mpz_class>::ONE ) );

      // BOOST_STATIC_ASSERT(NumberTraits<mpz_class>::ONE  == 
      // 			  NumberTraits<mpz_class>::ONE*NumberTraits<mpz_class>::ONE );
    
    }
    // ------------------------- Private Datas --------------------------------
  private:
    
    // ------------------------- Internals ------------------------------------
  private:
    mpz_class a,b,c;
    
  }; // end of concept CCommutativeRing
#endif
} // namespace DGtal


//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#endif // !defined CCommutativeRing_h

#undef CCommutativeRing_RECURSES
#endif // else defined(CCommutativeRing_RECURSES)
