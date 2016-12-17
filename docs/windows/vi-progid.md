---
title: "vi_progid | Microsoft Docs"
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
  - "vc-attr.vi_progid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vi_progid attribute"
ms.assetid: a52449be-b93e-4111-b883-44bb8da53261
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# vi_progid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica un form dell'versione\-indipendente del ProgID.  
  
## Sintassi  
  
```  
  
      [ vi_progid(  
   name  
) ];  
```  
  
#### Parametri  
 *name*  
 l'versione\-indipendente ProgID che rappresenta l'oggetto.  
  
 Presente in Progid una versione leggibile dell'identificatore di classe \(CLSID\) utilizzato per identificare gli oggetti COM E ActiveX.  
  
## Note  
 **vi\_progid** L'attributo di C\+\+ consente di specificare un versione\-indipendente ProgID per un oggetto COM.  Un ProgID presenta il formato *name1*.*name2*.*versione*.  Un versione\-indipendente ProgID non dispone di un oggetto *versione*.  È possibile specificare entrambe **progid** e  **vi\_progid** attributi su una coclasse.  Se non si specifica **vi\_progid**, l'versione\-indipendente ProgID è il valore specificato da  [progid](../windows/progid.md) attributo.  
  
 **vi\_progid** implica  **coclasse** attributo, ovvero, se si specifica  **vi\_progid**, è la stessa operazione di specifica  **coclasse** e  **vi\_progid** attributi.  
  
 **vi\_progid** l'attributo determina la classe automaticamente a essere registrato nel nome specificato.  Il file generato IDL non viene visualizzato il valore di ProgID.  
  
 Nei progetti ATL, se [coclasse](../windows/coclass.md) l'attributo è presente anche, il ProgID specificato viene utilizzato da  **GetVersionIndependentProgID** funzione \(inserita da  **coclasse** attributo\).  
  
## Esempio  
 vedere [coclasse](../windows/coclass.md) esempio per un esempio di utilizzo  **vi\_progid**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [ProgID Key](http://msdn.microsoft.com/library/windows/desktop/dd542719)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)