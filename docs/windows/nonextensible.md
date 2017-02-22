---
title: "nonextensible | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.nonextensible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nonextensible attribute"
ms.assetid: c7ef1554-809f-4ea0-a7cd-dc7786d40c3e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# nonextensible
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

specifica che `IDispatch` l'implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non può essere estesa con i membri aggiuntivi in fase di esecuzione.  
  
## Sintassi  
  
```  
  
[nonextensible]  
  
```  
  
## Note  
 **non estensibile** L'attributo di C\+\+ ha la stessa funzionalità di  [non estensibile](http://msdn.microsoft.com/library/windows/desktop/aa367120) Attributo MIDL.  
  
 utilizzo di **non estensibile** è necessario inoltre  [oleautomation](../windows/oleautomation.md) attributo.  
  
## Esempio  
 Il codice seguente viene illustrato un utilizzo di **non estensibile** attributo:  
  
```  
// cpp_attr_ref_nonextensible.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="ATLFIRELib")];  
[export] typedef long HRESULT;  
  
[dual, nonextensible, ms_union, oleautomation,   
uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl  
{  
   HRESULT procedure (int i);   
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**ripetibile**|No|  
|**attributi obbligatori**|**doppio** e  **oleautomation**, o  **interfaccia dispatch**|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)