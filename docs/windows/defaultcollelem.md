---
title: "defaultcollelem | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.defaultcollelem"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "defaultcollelem attribute"
ms.assetid: 3dbbd293-8b83-4f70-a36b-64cc1d0b6713
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# defaultcollelem
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzato per l'ottimizzazione del codice di Visual Basic.  
  
## Sintassi  
  
```  
  
[defaultcollelem]  
  
```  
  
## Note  
 **defaultcollelem** L'attributo di C\+\+ ha la stessa funzionalità di  [defaultcollelem](http://msdn.microsoft.com/library/windows/desktop/aa366792) Attributo MIDL.  
  
## Esempio  
 Il codice seguente viene illustrato un metodo di interfaccia utilizzando il **defaultcollelem** attributo:  
  
```  
// cpp_attr_ref_defaultcollelem.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMyForm   
{     
   [propget, id(1), bindable, defaultcollelem, displaybind,   
   defaultbind, requestedit] HRESULT P1([out, retval] long *nSize);  
   [propput, id(1), bindable, defaultcollelem, displaybind,   
   defaultbind, requestedit] HRESULT P1([in] long nSize);  
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
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)