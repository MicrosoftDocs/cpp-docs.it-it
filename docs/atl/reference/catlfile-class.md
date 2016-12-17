---
title: "CAtlFile Class | Microsoft Docs"
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
  - "CAtlFile"
  - "ATL::CAtlFile"
  - "ATL.CAtlFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlFile class"
ms.assetid: 93ed160b-af2a-448c-9cbe-e5fa46c199bb
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce un thin wrapper la gestione dei file API di Windows.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CAtlFile : public CHandle  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFile::CAtlFile](../Topic/CAtlFile::CAtlFile.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFile::Create](../Topic/CAtlFile::Create.md)|Chiamare questo metodo per creare o aprire un file.|  
|[CAtlFile::Flush](../Topic/CAtlFile::Flush.md)|Chiamare questo metodo per rimuovere i buffer per il file e per visualizzare tutti i dati memorizzati nel buffer venga scritto nel file.|  
|[CAtlFile::GetOverlappedResult](../Topic/CAtlFile::GetOverlappedResult.md)|Chiamare questo metodo per ottenere risultati di un'operazione sovrapposta sul file.|  
|[CAtlFile::GetPosition](../Topic/CAtlFile::GetPosition.md)|Chiamare questo metodo per ottenere la posizione corrente del puntatore del file dal file.|  
|[CAtlFile::GetSize](../Topic/CAtlFile::GetSize.md)|Chiamare questo metodo per ottenere la dimensione in byte del file.|  
|[CAtlFile::LockRange](../Topic/CAtlFile::LockRange.md)|Chiamare questo metodo per bloccare un'area di file per impedire altri processi di accedervi.|  
|[CAtlFile::Read](../Topic/CAtlFile::Read.md)|Chiamare questo metodo per leggere i dati da un file a partire dalla posizione indicata dal puntatore del file.|  
|[CAtlFile::Seek](../Topic/CAtlFile::Seek.md)|Chiamare questo metodo per spostare il puntatore del file.|  
|[CAtlFile::SetSize](../Topic/CAtlFile::SetSize.md)|Chiamare questo metodo per impostare le dimensioni del file.|  
|[CAtlFile::UnlockRange](../Topic/CAtlFile::UnlockRange.md)|Chiamare questo metodo per sbloccare un'area di file.|  
|[CAtlFile::Write](../Topic/CAtlFile::Write.md)|Chiamare questo metodo per scrivere i dati nel file a partire dalla posizione indicata dal puntatore del file.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFile::m\_pTM](../Topic/CAtlFile::m_pTM.md)|Puntatore all'oggetto `CAtlTransactionManager`|  
  
## Note  
 Utilizzare la classe quando i requisiti di gestione dei file sono relativamente semplici, ma maggiore astrazione dell'API Windows fornisce richiesto, senza includere dipendenze MFC.  
  
## Gerarchia di ereditarietà  
 [CHandle](../../atl/reference/chandle-class.md)  
  
 `CAtlFile`  
  
## Requisiti  
 **Header:** atlfile.h  
  
## Vedere anche  
 [Esempio di marquee](../../top/visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CHandle Class](../../atl/reference/chandle-class.md)