---
title: "Supporti delle classi di raccolte | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.classes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi di raccolte, funzioni di supporto"
  - "ConstructElements (funzione)"
  - "DestructElements (funzione)"
  - "classe di raccolta delle funzioni di supporto"
  - "SerializeElements (funzione)"
ms.assetid: bc3a2368-9edd-4748-9e6a-13cba79517ca
caps.latest.revision: 14
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporti delle classi di raccolte
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le classi di raccolte `CMap`, `CList` e funzioni di supporto globali basate su modelli di utilizzo di `CArray` per tali scopo di confronto, copia e la serializzazione degli elementi.  Come parte dell'implementazione delle classi basate su `CMap`, `CList` e `CArray`, è necessario eseguire l'override in base alle esigenze queste funzioni con le versioni adeguate al tipo di dati memorizzati nella mappa, list, o matrice.  Per informazioni sull'override funzioni di supporto come `SerializeElements`, vedere l'articolo [Raccolte: Come creare una raccolta indipendente dai tipi](../../mfc/how-to-make-a-type-safe-collection.md).  Si noti che **ConstructElements** e **DestructElements** sono deprecati.  
  
 La libreria MFC fornisce le seguenti funzioni globali che consentono di personalizzare le classi di raccolte:  
  
### Supporto di classi collection  
  
|||  
|-|-|  
|[CompareElements](../Topic/CompareElements.md)|Indica se gli elementi sono uguali.|  
|[CopyElements](../Topic/CopyElements.md)|Elementi di copie da una matrice a un'altra.|  
|[DumpElements](../Topic/DumpElements.md)|Fornisce all'output orientato al flusso di diagnostica.|  
|[HashKey](../Topic/HashKey.md)|Calcola una chiave hash.|  
|[SerializeElements](../Topic/SerializeElements.md)|Gli archivi o recuperare gli elementi o da un archivio.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [CMap Class](../../mfc/reference/cmap-class.md)   
 [CList Class](../../mfc/reference/clist-class.md)   
 [CArray Class](../../mfc/reference/carray-class.md)