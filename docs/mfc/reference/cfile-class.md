---
title: "CFile Class | Microsoft Docs"
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
  - "CFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArchive class, using with CFile"
  - "CFile class"
  - "file [C++], classes for"
ms.assetid: b2eb5757-d499-4e67-b044-dd7d1abaa0f8
caps.latest.revision: 22
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base per le classi file di Microsoft Foundation Class\).  
  
## Sintassi  
  
```  
class CFile : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFile::CFile](../Topic/CFile::CFile.md)|Costruisce un oggetto `CFile` da un percorso o handle di file.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFile::Abort](../Topic/CFile::Abort.md)|Chiude un file che ignora eventuali avvisi ed errori.|  
|[CFile::Close](../Topic/CFile::Close.md)|Chiude un file ed elimina l'oggetto.|  
|[CFile::Duplicate](../Topic/CFile::Duplicate.md)|Costruisce un oggetto duplicato basato su questo file.|  
|[CFile::Flush](../Topic/CFile::Flush.md)|Elimina tutti i dati da scrivere.|  
|[CFile::GetFileName](../Topic/CFile::GetFileName.md)|Recupera il nome del file selezionato.|  
|[CFile::GetFilePath](../Topic/CFile::GetFilePath.md)|Recupera il percorso del file completo del file selezionato.|  
|[CFile::GetFileTitle](../Topic/CFile::GetFileTitle.md)|Recupera il nome del file selezionato.|  
|[CFile::GetLength](../Topic/CFile::GetLength.md)|Recupera la lunghezza del file.|  
|[CFile::GetPosition](../Topic/CFile::GetPosition.md)|Recupera il puntatore del file corrente.|  
|[CFile::GetStatus](../Topic/CFile::GetStatus.md)|Recupera lo stato del file aperto, o nella versione di, recupera lo stato del file specificato \(statico, funzione virtuale\).|  
|[CFile::LockRange](../Topic/CFile::LockRange.md)|Blocca un intervallo di byte in un file.|  
|[CFile::Open](../Topic/CFile::Open.md)|In modo sicuro apre un file con un'opzione a test.|  
|[CFile::Read](../Topic/CFile::Read.md)|Legge i dati \(privo\) da un file nella posizione corrente del file.|  
|[CFile::Remove](../Topic/CFile::Remove.md)|Eliminare il file specificato \(funzione statica\).|  
|[CFile::Rename](../Topic/CFile::Rename.md)|Rinomina il file specificato \(funzione statica\).|  
|[CFile::Seek](../Topic/CFile::Seek.md)|Posizionare il puntatore del file corrente.|  
|[CFile::SeekToBegin](../Topic/CFile::SeekToBegin.md)|Posizionare il puntatore del file corrente all'inizio del file.|  
|[CFile::SeekToEnd](../Topic/CFile::SeekToEnd.md)|Posizionare il puntatore del file corrente alla fine del file.|  
|[CFile::SetFilePath](../Topic/CFile::SetFilePath.md)|Imposta il percorso del file completo del file selezionato.|  
|[CFile::SetLength](../Topic/CFile::SetLength.md)|Modifica la lunghezza del file.|  
|[CFile::SetStatus](../Topic/CFile::SetStatus.md)|Imposta lo stato del file specificato \(statico, funzione virtuale\).|  
|[CFile::UnlockRange](../Topic/CFile::UnlockRange.md)|Sblocca un intervallo di byte in un file.|  
|[CFile::Write](../Topic/CFile::Write.md)|Scrive i dati \(privo\) in un file nella posizione corrente del file.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFile::operator HANDLE](../Topic/CFile::operator%20HANDLE.md)|Handle a un oggetto `CFile`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFile::hFileNull](../Topic/CFile::hFileNull.md)|Determina se l'oggetto `CFile` dispone di un handle valido.|  
|[CFile::m\_hFile](../Topic/CFile::m_hFile.md)|Contiene in genere handle di file del sistema operativo.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFile::m\_pTM](../Topic/CFile::m_pTM.md)|Puntatore all'oggetto `CAtlTransactionManager`.|  
  
## Note  
 Direttamente fornisce servizi privo e binari di output disco e supporta indirettamente i file di testo e di memoria tramite le relative classi derivate.  Funzionamento di`CFile` insieme a `CArchive` classe per supportare la serializzazione di oggetti MFC.  
  
 La relazione gerarchica tra la classe e le relative classi derivate consente al programma venga eseguito su tutti gli oggetti file tramite l'interfaccia e `CFile`.  Un file di memoria, ad esempio, si comporta come un file su disco.  
  
 Utilizzare `CFile` e le relative classi derivate dal disco di utilizzo generale I\/O.  Utilizzare `ofstream` o altre classi iostream di Microsoft per il testo formattato inviato a un file su disco.  
  
 In genere, un file su disco viene aperto automaticamente nella costruzione `CFile` e chiuso la distruzione.  Le funzioni membro static consentono di interrogare lo stato di un file senza aprire il file.  
  
 Per ulteriori informazioni su l `CFile`, vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [Gestione dei file](../../c-runtime-library/file-handling.md)*in riferimenti alla libreria di runtime*.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CFile`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [MFC campione DRAWCLI](../../top/visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CStdioFile Class](../../mfc/reference/cstdiofile-class.md)   
 [CMemFile Class](../../mfc/reference/cmemfile-class.md)   
 [Ricerca di categorie: Utilizzare la classe del file C?](http://go.microsoft.com/fwlink/?LinkId=128046)