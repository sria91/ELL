// Constant.h
#pragma once

#include "Mapping.h"

namespace mappings
{
	class Constant : public Mapping
	{
	public:

		/// Constructs a default Mapping
		///
		Constant(double c = 0.0);

		/// Sets the output Constant
		///
		void SetConstant(double c);
		
		/// \returns The output Constant
		///
		double GetConstant() const;
		
		/// applys the Mapping (reads inputs from the input vector and writes output to the output vector
		///
		virtual void apply(const double* input, double* output) const;

		/// \returns The input dimension of the Mapping. Namely, the apply function assumes that the input array is at least this long
		///
		virtual int GetMinInputDim() const;

		/// \returns The output dimension of the Mapping. Namely, the apply function assumes that the output array is at least this long
		///	
		virtual int GetOutputDim() const;

		/// Serializes the Mapping in json format
		///
		virtual void Serialize(JsonSerializer& js) const;

		/// Deserializes the Mapping in json format
		///
		virtual void Deserialize(JsonSerializer& js, int version = _current_version);

	protected:
		double _c;
		static const int _current_version = 1;
	};
}