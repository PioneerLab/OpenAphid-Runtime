	const AJOABindingType AJNamespaceAphid::s_type = AJNamespaceAphidBindingType;

ASSERT_CLASS_FITS_IN_CELL(AJNamespaceAphid);
ASSERT_CLASS_FITS_IN_CELL(AJNamespaceAphidPrototype);

#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

	static const HashTableValue AJNamespaceAphidTableValues[7] = 
	{
		{"core", ReadOnly|DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(ajNamespaceAphidCore), (intptr_t)0 THUNK_GENERATOR(0)},
		{"g2d", ReadOnly|DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(ajNamespaceAphidG2d), (intptr_t)0 THUNK_GENERATOR(0)},
		{"js", ReadOnly|DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(ajNamespaceAphidJs), (intptr_t)0 THUNK_GENERATOR(0)},
		{"ext", ReadOnly|DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(ajNamespaceAphidExt), (intptr_t)0 THUNK_GENERATOR(0)},
		{"android", ReadOnly|DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(ajNamespaceAphidAndroid), (intptr_t)0 THUNK_GENERATOR(0)},
		{"extandroid", ReadOnly|DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(ajNamespaceAphidExtandroid), (intptr_t)0 THUNK_GENERATOR(0)},
		{0, 0, 0, 0 THUNK_GENERATOR(0)}
	};	

	static JSC_CONST_HASHTABLE HashTable AJNamespaceAphidTable = 
	{16, 15, AJNamespaceAphidTableValues, 0};



	const ClassInfo AJNamespaceAphid::s_info = {"NamespaceAphid", 0, &AJNamespaceAphidTable, 0};
	
	bool AJNamespaceAphid::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot) 
	{
		return getStaticValueSlot<AJNamespaceAphid, Base>(exec, &AJNamespaceAphidTable, this, propertyName, slot);
	}
	
	bool AJNamespaceAphid::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& slot)
	{
		return getStaticValueDescriptor<AJNamespaceAphid, Base>(exec, &AJNamespaceAphidTable, this, propertyName, slot);
	}

	void AJNamespaceAphid::put(ExecState* exec, const Identifier& propertyName, AJValue value, PutPropertySlot& slot)
	{
		oalookupPut<AJNamespaceAphid, Base>(exec, propertyName, value, &AJNamespaceAphidTable, this, slot);
	}

	AJObject* AJNamespaceAphid::createPrototype(ExecState* exec, AJGlobalObject* globalObject)
	{
		return new(exec)AJNamespaceAphidPrototype(AJNamespaceAphidPrototype::createStructure(globalObject->objectPrototype()));
	}

	///-------------------------------------------------------------------------------------------------------------------	
	AJNamespaceAphidPrototype::AJNamespaceAphidPrototype(NonNullPassRefPtr<Structure> structure)
	: Base(structure)
	{
	}
	
	const ClassInfo AJNamespaceAphidPrototype::s_info = {"NamespaceAphidPrototype", 0, 0, 0};



#undef THUNK_GENERATOR
