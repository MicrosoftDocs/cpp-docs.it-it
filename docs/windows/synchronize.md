---
title: "synchronize | Microsoft Docs"
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
  - "vc-attr.synchronize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "synchronize attribute"
ms.assetid: 15fc8544-955d-4765-b3d5-0f619c8b3f40
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# synchronize
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sincronizza l'accesso al metodo di destinazione.  
  
## Sintassi  
  
```  
  
[synchronize]  
  
```  
  
## Note  
 **sincronizzare** Supporto di risorse dell'attributo di C\+\+ a sincronizzare il metodo di destinazione di un oggetto.  La sincronizzazione consente a più oggetti utilizzare una risorsa comune \(ad esempio un metodo di classe\) controllando l'accesso del metodo di destinazione.  
  
 il codice inserito da questo attributo chiama l'appropriato `Lock` metodo \(determinato dal modello di threading\) all'inizio del metodo di destinazione.  Quando il metodo viene disconnesso, `Unlock` viene chiamato.  per ulteriori informazioni su queste funzioni, vedere [CComAutoThreadModule:: blocco](../Topic/CComAutoThreadModule::Lock.md)  
  
 L'attributo richiede che [coclasse](../windows/coclass.md),  [progid](../windows/progid.md), o  [vi\_progid](../windows/vi-progid.md) attributo o un altro attributo che implica uno di questi\) viene applicato anche allo stesso elemento.  Se qualsiasi singolo attributo viene utilizzato, gli altri due vengono applicate automaticamente.  Ad esempio, se **progid** viene applicato,  **vi\_progid** e  **coclasse** anche applicati.  
  
## Esempio  
 Il codice seguente viene illustrata la sincronizzazione per `UpdateBalance` metodo di  `CMyClass` oggetto.  
  
```  
// cpp_attr_ref_synchronize.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module(name="SYNC")];  
  
[coclass,  
 threading(both),  
 vi_progid("MyProject.MyClass"),  
 progid("MyProject.MyClass.1"),  
 uuid("7a7baa0d-59b8-4576-b754-79d07e1d1cc3")  
]  
class CMyClass {  
   float m_nBalance;  
  
   [synchronize]  
   void UpdateBalance(float nAdjust) {  
      m_nBalance += nAdjust;  
   }  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Metodo della classe, metodo|  
|**ripetibile**|No|  
|**attributi obbligatori**|Uno o più dei seguenti elementi: **coclasse**,  **progid**, o  **vi\_progid**.|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [COM Attributes](../windows/com-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)