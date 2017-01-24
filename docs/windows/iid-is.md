---
title: "iid_is | Microsoft Docs"
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
  - "vc-attr.iid_is"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iid_is attribute"
ms.assetid: 2f9b42a9-7130-4b08-9b1e-0d5d360e10ff
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# iid_is
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica l'IID dell'interfaccia COM a cui fa riferimento un puntatore a interfaccia.  
  
## Sintassi  
  
```  
  
      [ iid_is(  
   "expression"  
) ]  
```  
  
#### Parametri  
 *espressione*  
 L'espressione del linguaggio c che specifica un IID di un'interfaccia COM indicato da un puntatore a interfaccia.  
  
## Note  
 **iid\_is** L'attributo di C\+\+ ha la stessa funzionalità di  [iid\_is](http://msdn.microsoft.com/library/windows/desktop/aa367044) Attributo MIDL.  
  
## Esempio  
 Il codice seguente viene illustrato l'utilizzo di **iid\_is**:  
  
```  
// cpp_attr_ref_iid_is.cpp  
// compile with: /LD  
#include "wtypes.h"  
#include "unknwn.h"  
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl : IDispatch  
{  
   [id(1)] HRESULT CreateInstance([in] REFIID riid,[out, iid_is("riid")]   
   IUnknown ** ppvObject);  
};  
  
[module(name="ATLFIRELib")];  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|parametro di interfaccia, membro dati|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)