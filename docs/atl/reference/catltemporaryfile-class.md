---
title: "CAtlTemporaryFile Class | Microsoft Docs"
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
  - "CAtlTemporaryFile"
  - "ATL.CAtlTemporaryFile"
  - "ATL::CAtlTemporaryFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlTemporaryFile class"
ms.assetid: 05f0f2a5-94f6-4594-8dae-b114292ff5f9
caps.latest.revision: 18
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlTemporaryFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce i metodi per la creazione e l'utilizzo di un file temporaneo.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CAtlTemporaryFile  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md)|Costruttore.|  
|[CAtlTemporaryFile::~CAtlTemporaryFile](../Topic/CAtlTemporaryFile::~CAtlTemporaryFile.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlTemporaryFile::Close](../Topic/CAtlTemporaryFile::Close.md)|Chiamare questo metodo per chiudere un file temporaneo ed eliminare il contenuto o di archiviarli nel nome file specificato.|  
|[CAtlTemporaryFile::Create](../Topic/CAtlTemporaryFile::Create.md)|Chiamare questo metodo per creare un file temporaneo.|  
|[CAtlTemporaryFile::Flush](../Topic/CAtlTemporaryFile::Flush.md)|Chiamare questo metodo per forzare tutti i dati che rimangono nel buffer di file da scrivere nel file temporaneo.|  
|[CAtlTemporaryFile::GetPosition](../Topic/CAtlTemporaryFile::GetPosition.md)|Chiamare questo metodo per ottenere la posizione corrente del puntatore del file.|  
|[CAtlTemporaryFile::GetSize](../Topic/CAtlTemporaryFile::GetSize.md)|Chiamare questo metodo per ottenere la dimensione in byte del file temporaneo.|  
|[CAtlTemporaryFile::HandsOff](../Topic/CAtlTemporaryFile::HandsOff.md)|Chiamare questo metodo per eliminare l'associazione del file dall'oggetto `CAtlTemporaryFile`.|  
|[CAtlTemporaryFile::HandsOn](../Topic/CAtlTemporaryFile::HandsOn.md)|Chiamare questo metodo per aprire un file temporaneo esistente e posizionare il puntatore alla fine del file.|  
|[CAtlTemporaryFile::LockRange](../Topic/CAtlTemporaryFile::LockRange.md)|Chiamare questo metodo per bloccare un'area di file per impedire altri processi di accedervi.|  
|[CAtlTemporaryFile::Read](../Topic/CAtlTemporaryFile::Read.md)|Chiamare questo metodo per leggere i dati da file temporaneo a partire dalla posizione indicata dal puntatore del file.|  
|[CAtlTemporaryFile::Seek](../Topic/CAtlTemporaryFile::Seek.md)|Chiamare questo metodo per spostare il puntatore del file temporaneo.|  
|[CAtlTemporaryFile::SetSize](../Topic/CAtlTemporaryFile::SetSize.md)|Chiamare questo metodo per impostare le dimensioni del file temporaneo.|  
|[CAtlTemporaryFile::TempFileName](../Topic/CAtlTemporaryFile::TempFileName.md)|Chiamare questo metodo per restituire il nome di file temporaneo.|  
|[CAtlTemporaryFile::UnlockRange](../Topic/CAtlTemporaryFile::UnlockRange.md)|Chiamare questo metodo per sbloccare un'area di file temporaneo.|  
|[CAtlTemporaryFile::Write](../Topic/CAtlTemporaryFile::Write.md)|Chiamare questo metodo per scrivere i dati nel file temporaneo a partire dalla posizione indicata dal puntatore del file.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlTemporaryFile::operator HANDLE](../Topic/CAtlTemporaryFile::operator%20HANDLE.md)|Restituisce un handle al file temporaneo.|  
  
## Note  
 `CAtlTemporaryFile` semplice creare e utilizzare un file temporaneo.  Il file verrà assegnato automaticamente un nome, aprire, chiuso e viene eliminato.  Se i contenuti del file sono necessari dopo che il file è chiuso, possono essere salvati in un nuovo file con un nome specificato.  
  
## Requisiti  
 **Header:** atlfile.h  
  
## Esempio  
 Vedere l'esempio relativo [CAtlTemporaryFile::CAtlTemporaryFile](../Topic/CAtlTemporaryFile::CAtlTemporaryFile.md).  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [CAtlFile Class](../../atl/reference/catlfile-class.md)