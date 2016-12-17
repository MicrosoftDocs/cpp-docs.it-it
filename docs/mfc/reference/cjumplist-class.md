---
title: "CJumpList Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxadv/CJumpList"
  - "CJumpList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CJumpList class"
ms.assetid: d364d27e-f512-4b12-9872-c2a17c78ab1f
caps.latest.revision: 15
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CJumpList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CJumpList` è l'elenco di collegamenti rivelatori facendo clic con il pulsante destro del mouse su un'icona nella barra delle applicazioni.  
  
## Sintassi  
  
```  
class CJumpList;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CJumpList::CJumpList](../Topic/CJumpList::CJumpList.md)|Costruisce un oggetto `CJumpList`.|  
|[CJumpList::~CJumpList](../Topic/CJumpList::~CJumpList.md)|Elimina un oggetto `CJumpList`.|  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CJumpList::AbortList](../Topic/CJumpList::AbortList.md)|Interrompe una transazione di elenco\- compilazione senza eseguire il commit.|  
|[CJumpList::AddDestination](../Topic/CJumpList::AddDestination.md)|Di overload.  Aggiungere una destinazione all'elenco.|  
|[CJumpList::AddKnownCategory](../Topic/CJumpList::AddKnownCategory.md)|Aggiunge una categoria denominata nell'elenco.|  
|[CJumpList::AddTask](../Topic/CJumpList::AddTask.md)|Di overload.  Aggiunge elementi alla categoria canonica di attività.|  
|[CJumpList::AddTasks](../Topic/CJumpList::AddTasks.md)|Aggiunge elementi alla categoria canonica di attività.|  
|[CJumpList::AddTaskSeparator](../Topic/CJumpList::AddTaskSeparator.md)|Aggiunge un separatore tra le attività.|  
|[CJumpList::ClearAll](../Topic/CJumpList::ClearAll.md)|Rimuove tutte le attività e destinazioni che sono state finoraistanza corrente `CJumpList`.|  
|[CJumpList::ClearAllDestinations](../Topic/CJumpList::ClearAllDestinations.md)|Rimuove tutte le destinazioni che sono state finoraistanza corrente `CJumpList`.|  
|[CJumpList::CommitList](../Topic/CJumpList::CommitList.md)|Termina una transazione di elenco\- compilazione ed esegue il commit dell'elenco riportato nell'archivio collegato \(Registro di sistema in questo caso\).|  
|[CJumpList::GetDestinationList](../Topic/CJumpList::GetDestinationList.md)|Recupera un puntatore a interfaccia all'elenco di destinazione.|  
|[CJumpList::GetMaxSlots](../Topic/CJumpList::GetMaxSlots.md)|Recupera il numero massimo di elementi, incluse le intestazioni di categoria che possono essere visualizzati nel menu di destinazione dell'applicazione chiamante.|  
|[CJumpList::GetRemovedItems](../Topic/CJumpList::GetRemovedItems.md)|Restituisce una matrice di elementi che rappresentano le destinazioni rimosse.|  
|[CJumpList::InitializeList](../Topic/CJumpList::InitializeList.md)|Avvia una transazione di elenco\- compilazione.|  
|[CJumpList::SetAppID](../Topic/CJumpList::SetAppID.md)|Impostare l'id modello dell'applicazione per l'elenco che verrà compilato.|  
  
## Gerarchia di ereditarietà  
 [CJumpList](../../mfc/reference/cjumplist-class.md)  
  
## Requisiti  
 **intestazione:** afxadv.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)