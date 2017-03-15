---
title: "bindable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.bindable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bindable attribute"
ms.assetid: a2360f92-927b-4af8-98cc-6eca7f4ec954
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# bindable
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica che la proprietà supporta l'associazione dati.  
  
## Sintassi  
  
```  
  
[bindable]  
  
```  
  
## Note  
 **associabile** L'attributo di C\+\+ ha la stessa funzionalità di  [associabile](http://msdn.microsoft.com/library/windows/desktop/aa366738) Attributo MIDL.  È possibile utilizzarlo sulle proprietà definite con [propget](../windows/propget.md),  [set](../windows/propput.md), o  [propputref](../windows/propputref.md) gli attributi, oppure è possibile definire manualmente un metodo associabile.  
  
 Negli esempi di MFC viene illustrato l'utilizzo di **associabile**:  
  
-   [Esempi di controlli: Controlli ActiveX basati su ATL](http://msdn.microsoft.com/it-it/a44adf86-0ba0-4504-bedb-512b6cba2e63)  
  
-   [Esempio CIRC: controllo ActiveX](http://msdn.microsoft.com/it-it/9ba34d04-280e-49f4-90ae-41a6be44c95b)  
  
-   [Esempio TESTHELP: controllo ActiveX con descrizioni comandi e Guida](http://msdn.microsoft.com/it-it/d822861d-c6f0-4d0a-ad11-970eebb1e8cd)  
  
## Esempio  
 Nel codice seguente viene illustrato come è possibile utilizzare **associabile** in una proprietà:  
  
```  
// cpp_attr_ref_bindable.cpp  
// compile with: /LD  
#include <windows.h>  
[  
   uuid("479B29E3-9A2C-11D0-B696-00A0C903487A"),  
   dispinterface,  
   helpstring("property demo Interface")  
]  
__interface IPropDemo : IDispatch {  
  
   [propget, id(1), bindable, displaybind, defaultbind, requestedit] HRESULT P1([out, retval] long *nSize);  
   [propput, id(1), bindable, displaybind, defaultbind, requestedit] HRESULT P1([in] long nSize);  
   [id(3), bindable, propget] HRESULT Object([out, retval] IDispatch **ppObj);  
   [id(3), bindable, propputref] HRESULT Object([in] IDispatch* pObj);     
   [id(-552), helpstring("method AboutBox")] HRESULT AboutBox();  
};  
  
[ module(name="PropDemoLib", uuid="479B29E2-9A2C-11D0-B696-00A0C903487A", version="1.0", helpstring="property demo") ];  
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
 [defaultbind](../windows/defaultbind.md)   
 [displaybind](../windows/displaybind.md)   
 [immediatebind](../windows/immediatebind.md)   
 [requestedit](../windows/requestedit.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)