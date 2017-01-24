---
title: "requires_category | Microsoft Docs"
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
  - "vc-attr.requires_category"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "requires_category attribute"
ms.assetid: a645fdc6-1ef5-414d-8c56-5fe2686d4687
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# requires_category
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica le categorie componenti necessari della classe di destinazione.  
  
## Sintassi  
  
```  
  
     [ requires_category(   
  requires_category  
) ]  
```  
  
#### Parametri  
 *requires\_category*  
 L'ID della categoria richiesta.  
  
## Note  
 **requires\_category** L'attributo C\+\+ specifica le categorie componenti necessari dalla classe di destinazione.  Per ulteriori informazioni, vedere [REQUIRED\_CATEGORY](../Topic/REQUIRED_CATEGORY.md).  
  
 L'attributo richiede che [coclasse](../windows/coclass.md),  [progid](../windows/progid.md), o  [vi\_progid](../windows/vi-progid.md) attributo o un altro attributo che implica uno di questi\) viene applicato anche allo stesso elemento.  
  
## Esempio  
 Il seguente codice richiede che il centro della categoria del controllo.  
  
```  
// cpp_attr_ref_requires_category.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module (name="MyLibrary")];  
  
[ coclass, requires_category("CATID_Control"),  
  uuid("1e1a2436-f3ea-4ff3-80bf-5409370e8144")]  
class CMyClass {};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Uno o più dei seguenti elementi: **coclasse**,  **progid**, o  **vi\_progid**.|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [COM Attributes](../windows/com-attributes.md)   
 [implements\_category](../windows/implements-category.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)