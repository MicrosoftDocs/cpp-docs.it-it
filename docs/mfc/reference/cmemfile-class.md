---
title: "CMemFile Class | Microsoft Docs"
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
  - "CMemFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMemFile class"
  - "memory files"
  - "temporary files, memory files"
ms.assetid: 20e86515-e465-4f73-b2ea-e49789d63165
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMemFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

[file C](../../mfc/reference/cfile-class.md)classe derivata da che supporta i file di memoria.  
  
## Sintassi  
  
```  
class CMemFile : public CFile  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemFile::CMemFile](../Topic/CMemFile::CMemFile.md)|Costruisce un oggetto file di memoria.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemFile::Attach](../Topic/CMemFile::Attach.md)|Aggiunge un blocco di memoria a `CMemFile`.|  
|[CMemFile::Detach](../Topic/CMemFile::Detach.md)|Rimuovere il blocco di memoria da `CMemFile` e restituisce un puntatore al blocco di memoria rimosso.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemFile::Alloc](../Topic/CMemFile::Alloc.md)|Override per modificare il comportamento dell'allocazione di memoria.|  
|[CMemFile::Free](../Topic/CMemFile::Free.md)|Override per modificare il comportamento di deallocazione della memoria.|  
|[CMemFile::GrowFile](../Topic/CMemFile::GrowFile.md)|Override per modificare il comportamento quando le impostazioni cultura un file.|  
|[CMemFile::Memcpy](../Topic/CMemFile::Memcpy.md)|Override per modificare il comportamento della copia in memoria durante la lettura e la scrittura dei file.|  
|[CMemFile::Realloc](../Topic/CMemFile::Realloc.md)|Override per modificare il comportamento di riallocazione di memoria.|  
  
## Note  
 Questi file di memoria si comportano come i file su disco con l'eccezione che il file viene archiviato in RAM anziché su disco.  Un file di memoria è utile per l'archiviazione temporanea veloce oppure per trasferire i byte non elaborati o oggetti serializzati tra processi indipendenti.  
  
 Gli oggetti di`CMemFile` possono automaticamente allocare la propria memoria oppure connettere un blocco di memoriaoggetto `CMemFile` chiamando [Connetti](../Topic/CMemFile::Attach.md).  In entrambi i casi, la memoria per la coltura del file di memoria automaticamente viene allocata in incrementi di dimensioni `nGrowBytes`se `nGrowBytes` non è zero.  
  
 Il blocco di memoria automaticamente eliminato dalla distruzione dell'oggetto `CMemFile` se originariamente la memoria è stata allocata dall'oggetto `CMemFile` ; in caso contrario, il responsabile del rilascio di memoria avere allegato all'oggetto.  
  
 È possibile accedere al blocco di memoria tramite il puntatore fornito quando viene rimosso dall'oggetto `CMemFile` chiamando [Disconnetti](../Topic/CMemFile::Detach.md).  
  
 La maggior parte di utilizzo comune `CMemFile` consiste nel creare un oggetto `CMemFile` e di utilizzarla chiamando le funzioni membro [file C](../../mfc/reference/cfile-class.md).  Si noti che crea automaticamente `CMemFile` aperto: non chiamare [CFile::Open](../Topic/CFile::Open.md), utilizzato solo per i file su disco.  Poiché `CMemFile` non utilizza un file su disco, il membro dati `CFile::m_hFile` non viene utilizzato e non ha alcun significato.  
  
 Le funzioni membro [duplicato](../Topic/CFile::Duplicate.md), [LockRange](../Topic/CFile::LockRange.md)e [UnlockRange](../Topic/CFile::UnlockRange.md)`CFile` non vengono implementate per `CMemFile`.  Se queste funzioni vengono chiamate in `CMemFile` oggetto, si otterranno [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 `CMemFile` utilizza funzioni [malloc](../../c-runtime-library/reference/malloc.md), [realloc](../../c-runtime-library/reference/realloc.md)e [libero](../../c-runtime-library/reference/free.md) della libreria di runtime per allocare, allocare e liberare la memoria; e l'intrinseco [memcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md) per bloccare memoria della copia durante la lettura e scrittura.  Se si desidera modificare questo comportamento o il comportamento quando `CMemFile` ingrandito un file, derivare la classe da `CMemFile` ed eseguire l'override delle funzioni appropriate.  
  
 Per ulteriori informazioni su `CMemFile`, vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [Gestione della memoria \(MFC\)](../../mfc/memory-management.md) e [Gestione dei file](../../c-runtime-library/file-handling.md) vedere *in riferimenti alla libreria di runtime*.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 `CMemFile`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [CFile Class](../../mfc/reference/cfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)