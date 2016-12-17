---
title: "uuid (C++ Attributes) | Microsoft Docs"
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
  - "vc-attr.uuid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "uuid attribute"
ms.assetid: 90562a94-5e28-451b-a4b0-cadda7f66efe
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# uuid (C++ Attributes)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica l'ID univoco per una classe o l'interfaccia.  
  
## Sintassi  
  
```  
  
      [ uuid(  
   "uuid"  
) ]  
```  
  
#### Parametri  
 *uuid*  
 i 128 bit, identificatore univoco.  
  
## Note  
 se la definizione di un'interfaccia o di una classe non specifica `uuid` L'attributo C\+\+, il compilatore di Visual C\+\+ fornito uno.  Quando si specifica un oggetto `uuid`, è necessario includere le virgolette doppie.  
  
 Se non si specifica `uuid`, il compilatore genererà lo stesso GUID per interfacce o classi con lo stesso nome in progetti diversi di attributo su un computer.  
  
 È possibile utilizzare Uuidgen.exe o Guidgen.exe per generare diventi proprietaria degli identificatori univoci.  \(Per eseguire uno di questi strumenti, fare clic su **inizio** e clic su  **esecuzione** scegliere dal menu.  Immettere il nome dello strumento richiesto.\)  
  
 Una volta utilizzato in un progetto che non utilizzano ATL, specificare `uuid` l'attributo è lo stesso di specifica  [uuid](../cpp/uuid-cpp.md) modificatore di \_\_declspec.  Per recuperare `uuid` di classe, è possibile utilizzare  [\_\_uuidof](../cpp/uuidof-operator.md)  
  
## Esempio  
 vedere [associabile](../windows/bindable.md) esempio per un esempio di utilizzo  `uuid`.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`,  `interface`,  **unione**,  `enum`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [uuid](http://msdn.microsoft.com/library/windows/desktop/aa367302)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)