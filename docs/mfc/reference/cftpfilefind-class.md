---
title: "CFtpFileFind Class | Microsoft Docs"
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
  - "CFtpFileFind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFtpFileFind class"
  - "ricerche nei file [C++]"
ms.assetid: 9667cf01-657f-4b11-b9db-f11e5a7b4e4c
caps.latest.revision: 23
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFtpFileFind Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Persino nelle ricerche di file Internet dei server FTP.  
  
## Sintassi  
  
```  
class CFtpFileFind : public CFileFind  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFtpFileFind::CFtpFileFind](../Topic/CFtpFileFind::CFtpFileFind.md)|Costruisce un oggetto `CFtpFileFind`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFtpFileFind::FindFile](../Topic/CFtpFileFind::FindFile.md)|Cerca un file su un server FTP.|  
|[CFtpFileFind::FindNextFile](../Topic/CFtpFileFind::FindNextFile.md)|Continua la ricerca di file da una chiamata precedente a [FindFile](../Topic/CFtpFileFind::FindFile.md).|  
|[CFtpFileFind::GetFileURL](../Topic/CFtpFileFind::GetFileURL.md)|Ottiene l'url, incluso il percorso, il file trovato.|  
  
## Note  
 `CFtpFileFind` include le funzioni membro che avviano una ricerca, individua un file e restituisce l'url o altre informazioni descrittive sul file.  
  
 Altre classi MFC progettate per Internet e il file locale sono presenti [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) e [CFileFind](../../mfc/reference/cfilefind-class.md).  Insieme a `CFtpFileFind`, queste classi forniscono un singolo meccanismo per il client utilizzano i file specifici, indipendentemente dal protocollo o dal tipo di file server \(un computer locale o un server remoto.  Si noti che non c'è classe MFC per la ricerca nei server HTTP perché HTTP non supporta del file con richiesto per ricerche.  
  
 Per ulteriori informazioni su come utilizzare `CFtpFileFind` e le altre classi di ATL, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
## Esempio  
 Il codice seguente viene illustrato come enumerare tutti i file nella directory corrente del server FTP.  
  
 [!code-cpp[NVC_MFCWinInet#8](../../mfc/codesnippet/CPP/cftpfilefind-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFileFind](../../mfc/reference/cfilefind-class.md)  
  
 `CFtpFileFind`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CFileFind Class](../../mfc/reference/cfilefind-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CGopherFileFind Class](../../mfc/reference/cgopherfilefind-class.md)   
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile Class](../../mfc/reference/cgopherfile-class.md)   
 [CHttpFile Class](../../mfc/reference/chttpfile-class.md)