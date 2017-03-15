---
title: "source (C++) | Microsoft Docs"
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
  - "vc-attr.source"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "source attribute"
ms.assetid: 1878d05d-7709-4e97-b114-c62f38f5140e
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# source (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In una classe, specifica le interfacce di origine oggetto COM per i punti di connessione.  In una proprietà o un metodo, indica che il membro restituisce un oggetto o un VARIANT che rappresentano un database di origine eventi.  
  
## Sintassi  
  
```  
  
      [ source(  
   interfaces  
) ]  
```  
  
#### Parametri  
 `interfaces`  
 Una o più interfacce specificate quando si applica l'attributo di origine a una classe.  Questo parametro non viene utilizzato quando l'origine è applicato a una proprietà o un metodo.  
  
## Note  
 **database di origine** L'attributo di C\+\+ ha la stessa funzionalità di  [database di origine](http://msdn.microsoft.com/library/windows/desktop/aa367166) Attributo MIDL.  
  
 È possibile utilizzare [impostazione predefinita](../windows/default-cpp.md) attributo per specificare l'interfaccia di origine predefinito per un oggetto.  
  
## Esempio  
  
```  
// cpp_attr_ref_source.cpp  
// compile with: /LD  
#include "windows.h"  
#include "unknwn.h"  
[module(name="MyLib")];  
  
[object, uuid(11111111-1111-1111-1111-111111111111)]  
__interface b  
{  
   [id(0), propget, bindable, displaybind, defaultbind, requestedit]  
   HRESULT get_I([out, retval]long *i);  
};  
  
[object, uuid(11111111-1111-1111-1111-111111111131)]  
__interface c  
{  
   [id(0), propget, bindable, displaybind, defaultbind, requestedit]   
   HRESULT et_I([out, retval]long *i);  
};  
  
[coclass, default(c), uuid(11111111-1111-1111-1111-111111111132)]  
class N : public b  
{  
};  
  
[coclass, source(c), default(b, c), uuid(11111111-1111-1111-1111-111111111133)]  
class NN : public b  
{  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`,  `interface`|  
|**ripetibile**|No|  
|**attributi obbligatori**|**coclasse** \(se applicato alla classe o la struttura\)|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [coclass](../windows/coclass.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)