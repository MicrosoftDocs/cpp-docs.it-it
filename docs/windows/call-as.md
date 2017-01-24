---
title: "call_as | Microsoft Docs"
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
  - "vc-attr.call_as"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "call_as attribute"
ms.assetid: a09d7f1f-353b-4870-9b45-f0284161695d
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# call_as
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente a un oggetto [locale](../windows/local-cpp.md) funzione da eseguire il mapping a una funzione remota in modo che quando la funzione remota viene chiamata, richiamare la funzione locale.  
  
## Sintassi  
  
```  
  
      [ call_as(  
   function  
) ]  
```  
  
#### Parametri  
 *funzione*  
 La funzione locale che si desidera essere chiamato quando una funzione remota viene richiamata.  
  
## Note  
 **call\_as** L'attributo di C\+\+ ha la stessa funzionalità di  [call\_as](http://msdn.microsoft.com/library/windows/desktop/aa366748) Attributo MIDL.  
  
## Esempio  
 Nel codice seguente viene illustrato come è possibile utilizzare **call\_as** per eseguire il mapping di una funzione non utilizzabile in modalità remota**f1**\) a una funzione utilizzabile in modalità remota**Remf1**\):  
  
```  
// cpp_attr_ref_call_as.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="MyLib")];  
[dual, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMInterface {  
   [local] HRESULT f1 ( int i );  
   [call_as(f1)] HRESULT Remf1 ( int i );   
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [local](../windows/local-cpp.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)