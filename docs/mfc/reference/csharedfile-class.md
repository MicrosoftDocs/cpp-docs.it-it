---
title: "CSharedFile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSharedFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSharedFile class"
  - "memory files"
  - "shared memory files"
ms.assetid: 5d000422-9ede-4318-a8c9-f7412b674f39
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CSharedFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

[CMemFile](../../mfc/reference/cmemfile-class.md)nella classe derivata da che supporta la memoria condivisa file.  
  
## Sintassi  
  
```  
class CSharedFile : public CMemFile  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSharedFile::CSharedFile](../Topic/CSharedFile::CSharedFile.md)|Costruisce un oggetto `CSharedFile`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSharedFile::Detach](../Topic/CSharedFile::Detach.md)|Chiudere il file condiviso di memoria e restituisce l'handle del blocco di memoria.|  
|[CSharedFile::SetHandle](../Topic/CSharedFile::SetHandle.md)|Connette il file condiviso di memoria a un blocco di memoria.|  
  
## Note  
 I file di memoria si comportano come i file su disco con l'eccezione che il file viene archiviato in RAM anziché su disco.  Un file di memoria è utile per l'archiviazione temporanea veloce oppure per trasferire i byte non elaborati o oggetti serializzati tra processi indipendenti.  
  
 I file di memoria condivisa differiscono dagli altri file di memoria in tale memoria per essi viene allocato con la funzione di Windows [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574).  La classe `CSharedFile` archivia i dati a livello globale in un blocco di memoria allocata \(creato utilizzando **GlobalAlloc**\) e questo blocco di memoria può essere condiviso mediante DDE, gli Appunti, o di altre operazioni di trasferimento dei dati uniforme di OGGETTI, ad esempio, utilizzando `IDataObject`.  
  
 **GlobalAlloc** restituisce l'handle `HGLOBAL` anziché un puntatore alla memoria, come il puntatore restituito da [malloc](../../c-runtime-library/reference/malloc.md).  Handle `HGLOBAL` necessari in alcune applicazioni.  Ad esempio, per inserire dati negli Appunti è necessario disporre di un handle `HGLOBAL`.  
  
 Si noti che `CSharedFile` non utilizza i file mappati alla memoria e i dati direttamente non possono essere condivisi tra processi.  
  
 Gli oggetti di`CSharedFile` possono automaticamente allocare la propria memoria oppure connettere un blocco di memoriaoggetto `CSharedFile` chiamando [CSharedFile::SetHandle](../Topic/CSharedFile::SetHandle.md).  In entrambi i casi, la memoria per la coltura del file di memoria automaticamente viene allocata in incrementi di dimensioni `nGrowBytes`se `nGrowBytes` non è zero.  
  
 Per ulteriori informazioni, vedere l'articolo [file in MFC](../../mfc/files-in-mfc.md) e [Gestione dei file](../../c-runtime-library/file-handling.md)*in riferimenti alla libreria di runtime*.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 [CMemFile](../../mfc/reference/cmemfile-class.md)  
  
 `CSharedFile`  
  
## Requisiti  
 **Header:** afxadv.h  
  
## Vedere anche  
 [CMemFile Class](../../mfc/reference/cmemfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CMemFile Class](../../mfc/reference/cmemfile-class.md)   
 [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574)   
 [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579)   
 [GlobalRealloc](http://msdn.microsoft.com/library/windows/desktop/aa366590)