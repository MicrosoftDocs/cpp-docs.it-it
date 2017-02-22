---
title: "CShellManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CShellManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CShellManager class"
ms.assetid: f15c4c1a-6fae-487d-9913-9b7369b33da0
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CShellManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa diversi metodi che consentono di utilizzare i puntatori agli elenchi dell'identificatore \(PIDLs\).  
  
## Sintassi  
  
```  
class CShellManager : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CShellManager::CShellManager](../Topic/CShellManager::CShellManager.md)|Costruisce un oggetto `CShellManager`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CShellManager::BrowseForFolder](../Topic/CShellManager::BrowseForFolder.md)|Visualizza una finestra di dialogo che consente all'utente di selezionare una cartella della shell.|  
|[CShellManager::ConcatenateItem](../Topic/CShellManager::ConcatenateItem.md)|Concatena due PIDLs.|  
|[CShellManager::CopyItem](../Topic/CShellManager::CopyItem.md)|Crea un nuovo PIDL e copia il PIDL fornito in.|  
|[CShellManager::CreateItem](../Topic/CShellManager::CreateItem.md)|Crea un nuovo PIDL la dimensione specificata.|  
|[CShellManager::FreeItem](../Topic/CShellManager::FreeItem.md)|Elimina il PIDL fornito.|  
|[CShellManager::GetItemCount](../Topic/CShellManager::GetItemCount.md)|Restituisce il numero di elementi in PIDL fornito.|  
|[CShellManager::GetItemSize](../Topic/CShellManager::GetItemSize.md)|Restituisce la dimensione del PIDL fornito.|  
|[CShellManager::GetNextItem](../Topic/CShellManager::GetNextItem.md)|Restituisce l'elemento successivo dal PIDL.|  
|[CShellManager::GetParentItem](../Topic/CShellManager::GetParentItem.md)|Recupera l'elemento padre dell'elemento specificato.|  
|[CShellManager::ItemFromPath](../Topic/CShellManager::ItemFromPath.md)|Recupera il PIDL per l'elemento identificato dal percorso specificato.|  
  
## Note  
 I metodi `CShellManager` classe qualsiasi l'acquisto con PIDLs.  Un PIDL è un identificatore univoco per un oggetto della shell.  
  
 Non è necessario creare un oggetto `CShellManager` manualmente.  Verrà creato automaticamente dal framework dell'applicazione.  Tuttavia, è necessario chiamare [CWinAppEx::InitShellManager](../Topic/CWinAppEx::InitShellManager.md) durante il processo di inizializzazione dell'applicazione.  Per ottenere un puntatore all'amministratore della shell per l'applicazione, chiamare [CWinAppEx::GetShellManager](../Topic/CWinAppEx::GetShellManager.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CShellManager](../../mfc/reference/cshellmanager-class.md)  
  
## Requisiti  
 **intestazione:** afxshellmanager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)