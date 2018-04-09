//                                               -*- C++ -*-
/**
 *  @brief Implementation of the rational kernel
 *
 *  Copyright 2005-2018 EDF-EADS-Phimeca
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License.
 *
 *  This library is distributed in the hope that it will be useful
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 */

#ifndef OTSVM_SIGMOIDKERNEL_HXX
#define OTSVM_SIGMOIDKERNEL_HXX


#include "SVMKernelImplementation.hxx"


namespace OTSVM
{


class OTSVM_API SigmoidKernel : public SVMKernelImplementation
{
  CLASSNAME

public:

  /* Constructor with parameters */
  SigmoidKernel( const OT::Scalar linear = 1.0 , const OT::Scalar constant = 0.0 );

  /* Virtual constructor */
  virtual SigmoidKernel * clone() const;

  /* String converter */
  virtual OT::String __repr__() const;

  /* Linear term accessor */
  virtual OT::Scalar getLinear() const;
  virtual void setLinear( OT::Scalar linear );

  /* Constant term accessor */
  virtual OT::Scalar getConstant() const;
  virtual void setConstant( OT::Scalar constant );

  /* Parameters value and description accessor */
  virtual OT::PointWithDescription getParameters() const;
  virtual void setParameters( const OT::PointWithDescription & parameters );

  /* Operator () */
  virtual OT::Scalar operator() ( const OT::Point & x1 , const OT::Point & x2 ) const;

  /* Partial gradient */
  virtual OT::Point partialGradient( const OT::Point & x1 , const OT::Point & x2 ) const;

  /* Partial hessian */
  virtual OT::SymmetricMatrix partialHessian( const OT::Point & x1 , const OT::Point & x2 ) const;

  /** Method save() stores the object through the StorageManager */
  void save(OT::Advocate & adv) const;

  /** Method load() reloads the object from the StorageManager */
  void load(OT::Advocate & adv);
  
protected:

  /* Linear term */
  OT::Scalar linear_;

  /* Constant term */
  OT::Scalar constant_;

};

}

#endif

