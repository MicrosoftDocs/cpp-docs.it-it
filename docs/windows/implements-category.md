---
title: "implements_category | Microsoft Docs"
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
  - "vc-attr.implements_category"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "implements_category attribute"
ms.assetid: fb162df3-1ebe-43dc-a084-668d7ef8c03f
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# implements_category
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica le categorie componenti implementati dalla classe di destinazione.  
  
## Sintassi  
  
```  
  
      [ implements_category(  
   implements_category="uuid"  
) ]  
```  
  
#### Parametri  
 **implements\_category**  
 L'ID della categoria distribuita.  
  
## Note  
 **implements\_category** L'attributo C\+\+ specifica le categorie componenti implementati dalla classe di destinazione.  Questa operazione viene eseguita creando un mapping di CATEGORIA e l'aggiunta di voci sono state specificate da **implements\_category** attributo.  Per ulteriori informazioni, vedere [Cosa sono categorie componenti e il loro funzionamento?](http://msdn.microsoft.com/library/windows/desktop/ms694322).  
  
 L'attributo richiede che [coclasse](../windows/coclass.md),  [progid](../windows/progid.md), o  [vi\_progid](../windows/vi-progid.md) attributo o un altro attributo che implica uno di questi\) viene applicato anche allo stesso elemento.  Se qualsiasi singolo attributo viene utilizzato, gli altri due vengono applicate automaticamente.  Ad esempio, se **progid** viene applicato,  **vi\_progid** e  **coclasse** anche applicati.  
  
## Esempio  
 Il codice seguente specifica che nell'oggetto implementi la categoria del controllo.  
  
```  
// cpp_attr_ref_implements_category.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module (name="MyLib")];  
[ coclass, implements_category("CATID_Control"),  
  uuid("20a0d0cc-5172-40f5-99ae-5e032f3205ae")]  
class CMyClass {};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|Sì|  
|**attributi obbligatori**|Uno dei seguenti elementi: **coclasse**,  **progid**, o  **vi\_progid**|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [COM Attributes](../windows/com-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [IMPLEMENTED\_CATEGORY](../Topic/IMPLEMENTED_CATEGORY.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)