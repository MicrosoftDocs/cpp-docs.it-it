---
title: "async_uuid | Microsoft Docs"
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
  - "vc-attr.async_uuid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "async_uuid attribute"
ms.assetid: 235cb0d7-be58-4dd9-983c-e2a21bbc42c6
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# async_uuid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il UUID che indica al compilatore MIDL per definire sia le versioni sincrone che asincrone di un'interfaccia COM.  
  
## Sintassi  
  
```  
  
      [async_uuid (  
   uuid  
)]  
```  
  
#### Parametri  
 *uuid*  
 Un UUID che identifica la versione dell'interfaccia.  
  
## Note  
 **async\_uuid** L'attributo di C\+\+ ha la stessa funzionalità di  [async\_uuid](http://msdn.microsoft.com/library/windows/desktop/aa366735) Attributo MIDL.  
  
## Esempio  
  
```  
// cpp_attr_ref_async_uuid.cpp  
// compile with: /LD  
#include <Windows.h>  
[module(name="Test")];  
[object, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb"),   
async_uuid("e8583106-38fd-487e-912e-4fc8645c677e")]  
__interface ICustom {  
   HRESULT Custom([in] long l, [out, retval] long *pLong);  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|**doppio**,  **interfaccia dispatch**|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)