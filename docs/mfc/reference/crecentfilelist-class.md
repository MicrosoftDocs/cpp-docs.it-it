---
title: "CRecentFileList Class | Microsoft Docs"
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
  - "CRecentFileList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRecentFileList class"
  - "file [C++], most recently used"
  - "MRU (file)"
ms.assetid: a77f0524-7584-4582-849a-7e97b76d186e
caps.latest.revision: 19
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRecentFileList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controllo supportate dall'elenco dei file aperti più di recente \(MRU\).  
  
## Sintassi  
  
```  
class CRecentFileList  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecentFileList::CRecentFileList](../Topic/CRecentFileList::CRecentFileList.md)|Costruisce un oggetto `CRecentFileList`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecentFileList::Add](../Topic/CRecentFileList::Add.md)|Aggiungere un file all'elenco file utilizzati di recente.|  
|[CRecentFileList::GetDisplayName](../Topic/CRecentFileList::GetDisplayName.md)|Fornisce un nome visualizzato per la visualizzazione di menu di un nome file utilizzati di recente.|  
|[CRecentFileList::GetSize](../Topic/CRecentFileList::GetSize.md)|Recupera il numero di file nell'elenco dei file utilizzati di recente.|  
|[CRecentFileList::ReadList](../Topic/CRecentFileList::ReadList.md)|Legge l'elenco file utilizzati di recente dal Registro di sistema o file di .INI.|  
|[CRecentFileList::Remove](../Topic/CRecentFileList::Remove.md)|Rimuove un file dall'elenco dei file utilizzati di recente.|  
|[CRecentFileList::UpdateMenu](../Topic/CRecentFileList::UpdateMenu.md)|Aggiorna la visualizzazione del menu dell'elenco dei file utilizzati di recente.|  
|[CRecentFileList::WriteList](../Topic/CRecentFileList::WriteList.md)|Scrive l'elenco file utilizzati di recente dal Registro di sistema o file di .INI.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecentFileList::operator](../Topic/CRecentFileList::operator.md)|Restituisce un oggetto `CString` a una posizione specificata.|  
  
## Note  
 I file possono aggiungere o eliminare dall'elenco dei file utilizzati di recente, l'elenco file può essere letto da o possibile scrivere nel Registro di sistema o in un file di .INI e il menu visualizzato l'elenco file utilizzati di recente può essere aggiornato.  
  
 Per ulteriori informazioni sulle voci di menu utilizzati di recente, vedere  
  
-   Articolo della Knowledge Base Q243751: HOWTO: Aggiungere gestori comandi per le voci di menu utilizzati di recente nell'applicazione MFC  
  
## Gerarchia di ereditarietà  
 `CRecentFileList`  
  
## Requisiti  
 **Header:** afxadv.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)