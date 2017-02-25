---
title: "CGopherFileFind Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CGopherFileFind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CGopherFileFind class"
  - "ricerche nei file [C++]"
ms.assetid: 8465a979-6323-496d-ab4b-e81383fb999d
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CGopherFileFind Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Persino nelle ricerche di file Internet di server gopher.  
  
> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i membri sono deprecate in quanto non funzionano nella piattaforma Windows XP, ma continueranno a lavorare su piattaforme precedenti.  
  
## Sintassi  
  
```  
class CGopherFileFind : public CFileFind  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherFileFind::CGopherFileFind](../Topic/CGopherFileFind::CGopherFileFind.md)|Costruisce un oggetto `CGopherFileFind`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherFileFind::FindFile](../Topic/CGopherFileFind::FindFile.md)|Cerca un file in un server gopher.|  
|[CGopherFileFind::FindNextFile](../Topic/CGopherFileFind::FindNextFile.md)|Continua la ricerca di file da una chiamata precedente a [FindFile](../Topic/CGopherFileFind::FindFile.md).|  
|[CGopherFileFind::GetCreationTime](../Topic/CGopherFileFind::GetCreationTime.md)|Ottiene il tempo che il file specificato è stato creato.|  
|[CGopherFileFind::GetLastAccessTime](../Topic/CGopherFileFind::GetLastAccessTime.md)|Ottiene il tempo che il file specificatoultimo accesso.|  
|[CGopherFileFind::GetLastWriteTime](../Topic/CGopherFileFind::GetLastWriteTime.md)|Ottiene il tempo che il file specificato è stato scritto per ultimo su.|  
|[CGopherFileFind::GetLength](../Topic/CGopherFileFind::GetLength.md)|Ottiene la lunghezza del file trovato, in byte.|  
|[CGopherFileFind::GetLocator](../Topic/CGopherFileFind::GetLocator.md)|Ottenere un oggetto `CGopherLocator`.|  
|[CGopherFileFind::GetScreenName](../Topic/CGopherFileFind::GetScreenName.md)|Ottiene il nome dello schermo di gopher.|  
|[CGopherFileFind::IsDots](../Topic/CGopherFileFind::IsDots.md)|Test dei marcatori della directory padre e la directory corrente quando ripetendo tra i file.|  
  
## Note  
 `CGopherFileFind` include le funzioni membro che avviano una ricerca, individua un file e restituisce l'url di un file.  
  
 Altre classi MFC progettate per Internet e il file locale sono presenti [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) e [CFileFind](../../mfc/reference/cfilefind-class.md).  Insieme a `CGopherFileFind`, queste classi forniscono un meccanismo solo per l'utente per individuare i file specifici, indipendentemente dal protocollo, dal tipo di file, o dal percorso server \(un computer locale o un server remoto\). Si noti che non c'è classe MFC per la ricerca nei server HTTP perché HTTP non supporta del file con richiesto delle ricerche.  
  
> [!NOTE]
>  `CGopherFileFind` non supporta le seguenti funzioni membro della classe base [CFileFind](../../mfc/reference/cfilefind-class.md):  
  
-   [GetRoot](../Topic/CFileFind::GetRoot.md)  
  
-   [GetFileName](../Topic/CFileFind::GetFileName.md)  
  
-   [GetFilePath](../Topic/CFileFind::GetFilePath.md)  
  
-   [GetFileTitle](../Topic/CFileFind::GetFileTitle.md)  
  
-   [GetFileURL](../Topic/CFileFind::GetFileURL.md)  
  
 Inoltre, se utilizzato con `CGopherFileFind`, la funzione membro [IsDots](../Topic/CFileFind::IsDots.md)`CFileFind` è sempre **FALSE**.  
  
 Per ulteriori informazioni su come utilizzare `CGopherFileFind` e le altre classi di ATL, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFileFind](../../mfc/reference/cfilefind-class.md)  
  
 `CGopherFileFind`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CFileFind Class](../../mfc/reference/cfilefind-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFtpFileFind Class](../../mfc/reference/cftpfilefind-class.md)   
 [CFileFind Class](../../mfc/reference/cfilefind-class.md)   
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile Class](../../mfc/reference/cgopherfile-class.md)   
 [CHttpFile Class](../../mfc/reference/chttpfile-class.md)