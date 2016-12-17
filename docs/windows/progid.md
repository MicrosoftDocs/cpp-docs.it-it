---
title: "progid | Microsoft Docs"
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
  - "vc-attr.progid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "progid attribute"
ms.assetid: afcf559c-e432-481f-aa9a-bd3bb72c02a8
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# progid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

specifica il ProgID per un oggetto COM.  
  
## Sintassi  
  
```  
  
      [ progid(  
   name  
) ];  
```  
  
#### Parametri  
 *name*  
 il ProgID che rappresenta l'oggetto.  
  
 Presente in Progid una versione leggibile dell'identificatore di classe \(CLSID\) utilizzato per identificare gli oggetti COM E ActiveX.  
  
## Note  
 **progid** L'attributo di C\+\+ consente di specificare il ProgID per un oggetto COM.  Un ProgID presenta il formato *name1*.*name2*.*versione*.  Se non si specifica un oggetto *versione* per un ProgID, la versione predefinita è 1.  Se non si specifica *name1*.*name2*, il nome predefinito è *nomeclasse*.*nomeclasse*.  Se non si specifica **progid** e si specifica  **vi\_progid**, name1.name2 derivano da  **vi\_progid** e \(la versione di numero sequenziale seguente\) accodata.  
  
 se un blocco di attributi che utilizza **progid** inoltre non utilizza  `uuid`, il compilatore verificherà il Registro di sistema per verificare se a  `uuid` esiste per specificato  **progid**.  se **progid** non è specificato, la versione \(e nome della coclasse, se creando una coclasse\) verrà utilizzato per generare un'eccezione  **progid**.  
  
 **progid** implica  **coclasse** attributo, ovvero, se si specifica  **progid**, è la stessa operazione di specifica  **coclasse** e  **progid** attributi.  
  
 **progid** l'attributo determina la classe automaticamente a essere registrato nel nome specificato.  Il file generato IDL non vengono visualizzati **progid** valore.  
  
 Quando questo attributo viene utilizzato in un progetto che utilizza ATL, il comportamento dell'attributo viene modificato.  Oltre a quello sopra, le informazioni specificate con questo attributo vengono utilizzate in **GetProgID** funzione, inserita da  **coclasse** attributo.  Per ulteriori informazioni, vedere [coclasse](../windows/coclass.md) attributo.  
  
## Esempio  
 Vedere l'esempio relativo a [coclasse](../windows/coclass.md) per un esempio di utilizzo  **progid**.  
  
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
 [Class Attributes](../windows/class-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [ProgID Key](http://msdn.microsoft.com/library/windows/desktop/dd542719)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)