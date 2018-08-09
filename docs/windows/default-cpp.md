---
title: predefinito (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.default
dev_langs:
- C++
helpviewer_keywords:
- default attribute
- attributes [C#], default attribute
- defaults, default attribute
ms.assetid: 0cdca716-1ba8-46d7-9399-167e55492870
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fbd2ab9481d8658bac75b62a4afa18f3ff77f0d5
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646257"
---
# <a name="default-c"></a>default (C++)
Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ default(  
   interface1,  
   interface2  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *interfaccia1*  
 L'interfaccia predefinita che sarà resa disponibile per gli ambienti di script che creano un oggetto basato sulla classe definita con l'attributo **default** .  
  
 Se non si specifica un'interfaccia predefinita, la prima occorrenza di un'interfaccia non di origine viene usata come predefinita.  
  
 *interfaccia2*(facoltativo)  
 L'interfaccia di origine predefinita. È necessario anche specificare questa interfaccia con l'attributo [source](../windows/source-cpp.md) .  
  
 Se non si specifica un'interfaccia di origine predefinita, viene usata come predefinita la prima interfaccia di origine.  
  
## <a name="remarks"></a>Note  
 L'attributo C++ **default** ha la stessa funzione dell'attributo MIDL [default](http://msdn.microsoft.com/library/windows/desktop/aa366787) . L'attributo **default** viene usato anche con l'attributo [case](../windows/case-cpp.md) .  
  
## <a name="example"></a>Esempio  
 Il codice seguente illustra la modalità **predefinite** viene utilizzato sulla definizione di una coclasse per specificare `ICustomDispatch` come interfaccia di programmabilità predefinita:  
  
```cpp  
// cpp_attr_ref_default.cpp  
// compile with: /LD  
#include "windows.h"  
[module(name="MyLibrary")];  
  
[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]  
__interface ICustom {  
   HRESULT Custom([in] long l, [out, retval] long *pLong);  
};  
  
[dual, uuid("9E66A291-4365-11D2-A997-00C04FA37DDB")]   
__interface IDual {  
   HRESULT Dual([in] long l, [out, retval] long *pLong);  
};  
  
[object, uuid("9E66A293-4365-11D2-A997-00C04FA37DDB")]  
__interface ICustomDispatch : public IDispatch {  
   HRESULT Dispatch([in] long l, [out, retval] long *pLong);  
};  
  
[   coclass,  
   default(ICustomDispatch),   
   source(IDual),  
   uuid("9E66A294-4365-11D2-A997-00C04FA37DDB")  
]  
class CClass : public ICustom, public IDual, public ICustomDispatch {  
   HRESULT Custom(long l, long *pLong) { return(S_OK); }  
   HRESULT Dual(long l, long *pLong) { return(S_OK); }  
   HRESULT Dispatch(long l, long *pLong) { return(S_OK); }  
};  
  
int main() {  
#if 0 // Can't instantiate without implementations of IUnknown/IDispatch  
   CClass *pClass = new CClass;  
  
   long llong;  
  
   pClass->custom(1, &llong);  
   pClass->dual(1, &llong);  
   pClass->dispinterface(1, &llong);  
   pClass->dispatch(1, &llong);  
  
   delete pClass;  
#endif  
   return(0);  
}  
```  
  
 Anche l'attributo [source](../windows/source-cpp.md) presenta un esempio di come usare **default**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, **struct**, membro dati|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**Coclasse** (quando applicato a **classe** oppure **struct**)|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi della classe](../windows/class-attributes.md)   
 [coclass](../windows/coclass.md)   