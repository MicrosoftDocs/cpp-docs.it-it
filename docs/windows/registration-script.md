---
title: "registration_script | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.registration_script"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "registration_script attribute"
ms.assetid: 786f8072-9187-4163-a979-7a604dd4c888
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# registration_script
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

esegue lo script personalizzato specificato di registrazione.  
  
## Sintassi  
  
```  
  
      [ registration_script(   
   script   
) ]  
```  
  
#### Parametri  
 *script*  
 Il percorso completo di un file personalizzato di script di registrazione \(rgs\).  un valore di **nessuno**, ad esempio  `script = "none"`, indica che la coclasse non presenta requisiti di registrazione.  
  
## Note  
 **registration\_script** L'attributo di C\+\+ esegue lo script personalizzato di registrazione specificato da  **script**.  Se questo attributo non viene specificato, un file standard rgs \(contenente informazioni per registrare il componente\) viene utilizzato.  Per ulteriori informazioni sui file RGS, vedere [Il componente ATL il Registro Di Sistema \(Ufficiale del registrar\)](../atl/atl-registry-component-registrar.md).  
  
 L'attributo richiede che [coclasse](../windows/coclass.md),  [progid](../windows/progid.md), o  [vi\_progid](../windows/vi-progid.md) attributo o un altro attributo che implica uno di questi\) viene applicato anche allo stesso elemento.  
  
## Esempio  
 Il codice seguente specifica che il componente ha uno script del Registro di sistema denominato cpp\_attr\_ref\_registration\_script.rgs.  
  
```  
// cpp_attr_ref_registration_script.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module (name="REG")];  
  
[object, uuid("d9cd196b-6836-470b-9b9b-5b04b828e5b0")]  
__interface IFace {};  
  
// requires "cpp_attr_ref_registration_script.rgs"  
// create sample .RGS file "cpp_attr_ref_registration_script.rgs" if it does not exist  
[ coclass, registration_script(script="cpp_attr_ref_registration_script.rgs"),  
  uuid("50d3ad42-3601-4f26-8cfe-0f1f26f98f67")]  
class CMyClass:public IFace {};  
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
 [Class Attributes](../windows/class-attributes.md)   
 [rdx](../windows/rdx.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)