---
title: "default (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.default"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributo default"
  - "attributi [C#], attributo default"
  - "impostazioni predefinite, attributo default"
ms.assetid: 0cdca716-1ba8-46d7-9399-167e55492870
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# default (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.  
  
## Sintassi  
  
```  
  
[ default(  
interface1  
,  
   interface2  
) ]  
  
```  
  
#### Parametri  
 *interfaccia1*  
 L'interfaccia predefinita che sarà resa disponibile per gli ambienti di script che creano un oggetto basato sulla classe definita con l'attributo **default**.  
  
 Se non si specifica un'interfaccia predefinita, la prima occorrenza di un'interfaccia non di origine viene usata come predefinita.  
  
 *interfaccia2*\(facoltativo\)  
 L'interfaccia di origine predefinita. È necessario anche specificare questa interfaccia con l'attributo [source](../windows/source-cpp.md).  
  
 Se non si specifica un'interfaccia di origine predefinita, viene usata come predefinita la prima interfaccia di origine.  
  
## Note  
 L'attributo C\+\+ **default** ha la stessa funzione dell'attributo MIDL [default](http://msdn.microsoft.com/library/windows/desktop/aa366787). L'attributo **default** viene usato anche con l'attributo [case](../windows/case-cpp.md).  
  
## Esempio  
 Il codice seguente mostra come viene usato **default** sulla definizione di una coclasse per specificare **ICustomDispatch** come interfaccia di programmabilità predefinita:  
  
```  
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
  
## Requisiti  
  
### Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`, membro dati|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**coclass** \(quando applicato a **class** o `struct`\)|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [coclass](../windows/coclass.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)