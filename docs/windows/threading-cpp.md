---
title: "threading (C++) | Microsoft Docs"
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
  - "vc-attr.threading"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "threading attribute"
ms.assetid: 9b558cd6-fbf0-4602-aed5-31c068550ce3
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# threading (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il modello di threading su un oggetto COM.  
  
## Sintassi  
  
```  
  
      [ threading(  
   model=enumeration  
) ]  
```  
  
#### Parametri  
 ***modello*** \(facoltativo\)  
 Uno dei modelli di threading:  
  
-   **apartment** \(threading apartment\)  
  
-   **non associate ad alcun paese** \(componenti.NET Framework senza interfaccia utente\)  
  
-   **singolo** \(threading semplice\)  
  
-   **libero** \(modello di threading Free\)  
  
-   **entrambi** \(apartment e modello di threading Free\)  
  
 il valore predefinito è **apartment**.  
  
## Note  
 **il threading** L'attributo C\+\+ non viene visualizzato nel file generato con estensione .idl ma verrà utilizzato nell'implementazione dell'oggetto COM.  
  
 Nei progetti ATL, se [coclasse](../windows/coclass.md) l'attributo è presente anche, il modello di threading specificato da modello viene passato come parametro di modello a  [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) classe, immessa da l  **coclasse** attributo.  
  
 **il threading** di attributo accesso di protezione anche a  [un event\_source](../windows/event-source.md).  
  
## Esempio  
 vedere [concesso in licenza](../windows/licensed.md) esempio per un esempio di utilizzo  **il threading**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|**coclasse**|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [COM Attributes](../windows/com-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Supporto del multithreading per il codice precedente \(Visual C\+\+\)](../parallel/multithreading-support-for-older-code-visual-cpp.md)   
 [Neutral Apartments](http://msdn.microsoft.com/library/windows/desktop/ms681813)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)