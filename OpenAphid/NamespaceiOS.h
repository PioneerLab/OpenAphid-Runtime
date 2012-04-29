/*
Copyright 2012 Aphid Mobile

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
 
   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

 */

#ifndef OpenAphid_NamespaceiOS_h
#define OpenAphid_NamespaceiOS_h

#include <wtf/PassRefPtr.h>
#include <wtf/RefCounted.h>
#include <runtime/AJGlobalObject.h>

#include "DirectWrapper.h"

namespace Aphid {
	class AJNamespaceiOS;
	
	class NamespaceiOS : public RefCounted<NamespaceiOS>, public DirectWrapper<AJNamespaceiOS> {
		typedef NamespaceiOS Self;
	public:
		virtual ~NamespaceiOS();
		
		static PassRefPtr<Self> create()
		{
			return adoptRef(new Self());
		}
		
	protected:
		NamespaceiOS();
	};
}


#endif