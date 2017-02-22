---
title: "CFileFind Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFileFind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFileFind class"
  - "file [C++], ricerca"
  - "Internet files [C++], ricerca"
  - "local files"
  - "local files, ricerca"
  - "URLs [C++], ricerca"
ms.assetid: 9990068c-b023-4114-9580-a50182d15240
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CFileFind Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue la ricerca dei file locali e è la classe base per [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) e [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md), che eseguono ricerche di file Internet.  
  
## Sintassi  
  
```  
class CFileFind : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::CFileFind](../Topic/CFileFind::CFileFind.md)|Costruisce un oggetto `CFileFind`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::Close](../Topic/CFileFind::Close.md)|Chiude la richiesta.|  
|[CFileFind::FindFile](../Topic/CFileFind::FindFile.md)|Cerca una directory un nome file specificato.|  
|[CFileFind::FindNextFile](../Topic/CFileFind::FindNextFile.md)|Continua la ricerca di file da una chiamata precedente a [FindFile](../Topic/CFileFind::FindFile.md).|  
|[CFileFind::GetCreationTime](../Topic/CFileFind::GetCreationTime.md)|Ottiene l'ora in cui è stato creato.|  
|[CFileFind::GetFileName](../Topic/CFileFind::GetFileName.md)|Ottiene il nome, inclusa l'estensione, il file trovato|  
|[CFileFind::GetFilePath](../Topic/CFileFind::GetFilePath.md)|Ottiene l'intero percorso del file trovato.|  
|[CFileFind::GetFileTitle](../Topic/CFileFind::GetFileTitle.md)|Ottiene il nome del file trovato.  Il titolo non include l'estensione.|  
|[CFileFind::GetFileURL](../Topic/CFileFind::GetFileURL.md)|Ottiene l'url, incluso il percorso del file, il file trovato.|  
|[CFileFind::GetLastAccessTime](../Topic/CFileFind::GetLastAccessTime.md)|Ottiene il tempo che il file sia ultimo accesso.|  
|[CFileFind::GetLastWriteTime](../Topic/CFileFind::GetLastWriteTime.md)|Ottiene il tempo che il file ultima è stato modificato e salvato stato.|  
|[CFileFind::GetLength](../Topic/CFileFind::GetLength.md)|Ottiene la lunghezza del file trovato, in byte.|  
|[CFileFind::GetRoot](../Topic/CFileFind::GetRoot.md)|Ottiene la directory radice del file trovato.|  
|[CFileFind::IsArchived](../Topic/CFileFind::IsArchived.md)|Determina se il file trovato viene archiviato.|  
|[CFileFind::IsCompressed](../Topic/CFileFind::IsCompressed.md)|Determina se il file ubicato è compresso.|  
|[CFileFind::IsDirectory](../Topic/CFileFind::IsDirectory.md)|Determina se il file è presente una directory.|  
|[CFileFind::IsDots](../Topic/CFileFind::IsDots.md)|Determina se il nome del file trovato il nome "." o ". ", a indicare che rappresenti una directory.|  
|[CFileFind::IsHidden](../Topic/CFileFind::IsHidden.md)|Determina se il file è nascosto trovato.|  
|[CFileFind::IsNormal](../Topic/CFileFind::IsNormal.md)|Determina se il file viene trovato normale \(ovvero non include altri attributi\).|  
|[CFileFind::IsReadOnly](../Topic/CFileFind::IsReadOnly.md)|Determina se il file ubicato è di sola lettura.|  
|[CFileFind::IsSystem](../Topic/CFileFind::IsSystem.md)|Determina se il file viene trovato un file system.|  
|[CFileFind::IsTemporary](../Topic/CFileFind::IsTemporary.md)|Determina se il file ubicato è temporaneo.|  
|[CFileFind::MatchesMask](../Topic/CFileFind::MatchesMask.md)|Indica gli attributi del file desiderati del file da cercare.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::CloseContext](../Topic/CFileFind::CloseContext.md)|Chiudere il file specificato da un handle di ricerca correnti.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileFind::m\_pTM](../Topic/CFileFind::m_pTM.md)|Puntatore a un oggetto `CAtlTransactionManager`.|  
  
## Note  
 `CFileFind` include le funzioni membro che avviano una ricerca, individua un file e restituiscono il titolo, il nome, o il percorso del file.  Per le ricerche Internet, la funzione membro [GetFileURL](../Topic/CFileFind::GetFileURL.md) restituisce l'url del file.  
  
 `CFileFind` è la classe base per le altre due classi MFC progettate per individuare i tipi di server aspetti: funzionamento `CGopherFileFind` specificamente con i server gopher e funzionamento `CFtpFileFind` specificamente con i server FTP.  Insieme, queste tre classi forniscono un singolo meccanismo per il client utilizzano i file, indipendentemente dal protocollo server, dal tipo di file, o alla posizione, nel computer locale o in un server remoto.  
  
 Il codice seguente enumererà tutti i file nella directory corrente, stampante il nome di ogni file:  
  
 [!code-cpp[NVC_MFCFiles#31](../../mfc/codesnippet/CPP/cfilefind-class_1.cpp)]  
  
 Per mantenere il semplice di esempio, questo codice utilizza la classe `cout` della libreria C\+\+ standard.  La linea `cout` potrebbe essere sostituita con una chiamata a `CListBox::AddString`, ad esempio, in un programma con un'interfaccia utente grafica.  
  
 Per ulteriori informazioni su come utilizzare `CFileFind` e le altre classi di ATL, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CFileFind`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFtpFileFind Class](../../mfc/reference/cftpfilefind-class.md)   
 [CGopherFileFind Class](../../mfc/reference/cgopherfilefind-class.md)   
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile Class](../../mfc/reference/cgopherfile-class.md)   
 [CHttpFile Class](../../mfc/reference/chttpfile-class.md)