---
title: "appobject | Microsoft Docs"
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
  - "vc-attr.appobject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "appobject attribute"
ms.assetid: 8ce30b73-e945-403e-a755-6bc78078a695
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# appobject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Identifica la coclasse come oggetto applicazione, associato a un'applicazione completa con estensione exe e indica che le funzioni e le proprietà della coclasse vengono globalmente disponibili in questa [libreria dei tipi](../mfc/automation-clients-using-type-libraries.md).  
  
## Sintassi  
  
```  
  
[appobject]  
  
```  
  
## Note  
 **appobject** L'attributo di C\+\+ ha la stessa funzionalità di  [appobject](http://msdn.microsoft.com/library/windows/desktop/aa366726) Attributo MIDL.  
  
## Esempio  
 Il codice riportato di seguito viene illustrata una definizione di classe semplice preceduta da un blocco di attributi che includa **appobject**:  
  
```  
// cpp_attr_ref_appobject.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLib", uuid="f1ce17f0-a5df-4d26-95f6-0a122197ac5b")];  
  
[object, uuid="905de6db-7a12-45ab-9f8b-b39f5112f010"]  
__interface ICustom {};  
  
[coclass, appobject,uuid="00395340-745f-4b69-bd58-e2921452b9fc"]  
class A : public ICustom {  
   int i;  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|**coclasse**|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)