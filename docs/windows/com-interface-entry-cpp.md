---
title: COM_INTERFACE_ENTRY (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.com_interface_entry
dev_langs: C++
helpviewer_keywords: com_interface_entry attribute
ms.assetid: 10368f81-b99b-4a0f-ba4f-a142e6911a5c
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 58c74602c4170cbe0816dcdf14e0196cca44af42
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cominterfaceentry-c"></a>com_interface_entry (C++)
Aggiunge una voce di interfaccia nella mappa COM della classe di destinazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
     [ com_interface_entry(   
  com_interface_entry  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *COM_INTERFACE_ENTRY*  
 Stringa contenente il testo effettivo della voce. Per un elenco di valori possibili, vedere [macro COM_INTERFACE_ENTRY](../atl/reference/com-interface-entry-macros.md).  
  
## <a name="remarks"></a>Note  
 Il `com_interface_entry` attributo C++ inserisce il contenuto di una stringa di caratteri ridotta la mappa dell'interfaccia COM dell'oggetto di destinazione. Se l'attributo viene applicato a una sola volta per l'oggetto di destinazione, la voce viene inserita all'inizio della mappa dell'interfaccia esistente. Se l'attributo viene applicato più volte allo stesso oggetto di destinazione, le voci vengono inserite all'inizio della mappa dell'interfaccia nell'ordine in che cui vengono ricevuti.  
  
 Questo attributo richiede che anche l'attributo [coclass](../windows/coclass.md), [progid](../windows/progid.md)o [vi_progid](../windows/vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se viene usato **progid** , vengono applicati anche **vi_progid** e **coclass** .  
  
 Poiché il primo utilizzo di `com_interface_entry` fa sì che la nuova interfaccia deve essere inserito all'inizio della mappa dell'interfaccia, deve essere uno dei seguenti tipi di COM_INTERFACE_ENTRY:  
  
-   COM_INTERFACE_ENTRY  
  
-   COM_INTERFACE_ENTRY_IID  
  
-   COM_INTERFACE_ENTRY2  
  
-   COM_INTERFACE_ENTRY2_IID  
  
 Altri utilizzi del `com_interface_entry` attributo può utilizzare tipi COM_INTERFACE_ENTRY tutte supportati.  
  
 Questa restrizione è necessaria poiché ATL viene utilizzata la prima voce nella mappa dell'interfaccia come identità **IUnknown**; pertanto, la voce deve essere un'interfaccia valida. Esempio di codice seguente, ad esempio, non è valido perché la prima voce della mappa di interfaccia non specifica un'interfaccia COM effettiva.  
  
```  
[ coclass, com_interface_entry =  
    "COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)"  
]  
   class CMyClass  
   {  
   };  
```  
  
## <a name="example"></a>Esempio  
 Il codice seguente aggiunge due voci per la mappa dell'interfaccia COM esistente di **CMyBaseClass**. Il primo è un'interfaccia standard, e il secondo nasconde il **IDebugTest** interfaccia.  
  
```  
// cpp_attr_ref_com_interface_entry.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module (name ="ldld")];  
  
[ object,  
  uuid("7dbebed3-d636-4917-af62-c767a720a5b9")]  
__interface IDebugTest{};  
  
[ object,  
  uuid("2875ceac-f94b-4087-8e13-d13dc167fcfc")]  
__interface IMyClass{};  
  
[ coclass,  
  com_interface_entry ("COM_INTERFACE_ENTRY (IMyClass)"),  
  com_interface_entry ("COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)"),  
  uuid("b85f8626-e76e-4775-b6a0-4826a9e94af2")  
]  
  
class CMyClass: public IMyClass, public IDebugTest  
{  
};  
```  
  
 La mappa di oggetti COM risulta per **CMyBaseClass** è indicato di seguito:  
  
```  
BEGIN_COM_MAP(CMyClass)  
    COM_INTERFACE_ENTRY (IMyClass)  
    COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)  
    COM_INTERFACE_ENTRY(IMyClass)  
    COM_INTERFACE_ENTRY2(IDispatch, IMyClass)  
    COM_INTERFACE_ENTRY(IDebugTest)  
    COM_INTERFACE_ENTRY(IProvideClassInfo)  
END_COM_MAP()  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|Yes|  
|**Attributi obbligatori**|Uno o più degli attributi seguenti: **coclass**, **progid**o **vi_progid**.|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi COM](../windows/com-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)   
