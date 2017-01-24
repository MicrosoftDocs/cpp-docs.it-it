---
title: "CInternetFile Class | Microsoft Docs"
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
  - "CInternetFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CInternetFile class"
  - "Internet files"
  - "Internet files, CInternetFile class"
ms.assetid: 96935681-ee71-4a8d-9783-5abc7b3e6f10
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CInternetFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente l'accesso ai file nei sistemi remoti che utilizzano protocolli Internet.  
  
## Sintassi  
  
```  
  
class CInternetFile : public CStdioFile  
  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetFile::CInternetFile](../Topic/CInternetFile::CInternetFile.md)|Costruisce un oggetto `CInternetFile`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetFile::Abort](../Topic/CInternetFile::Abort.md)|Chiudere il file, ignorando gli eventuali avvisi ed errori.|  
|[CInternetFile::Close](../Topic/CInternetFile::Close.md)|Chiude `CInternetFile` e libera le risorse.|  
|[CInternetFile::Flush](../Topic/CInternetFile::Flush.md)|Elimina il contenuto del buffer di lettura e scrittura che garantisce che i dati in memoria vengono scritti nel computer di destinazione.|  
|[CInternetFile::GetLength](../Topic/CInternetFile::GetLength.md)|Restituisce la dimensione del file.|  
|[CInternetFile::Read](../Topic/CInternetFile::Read.md)|Legge il numero di byte specificati.|  
|[CInternetFile::ReadString](../Topic/CInternetFile::ReadString.md)|Legge un flusso di caratteri.|  
|[CInternetFile::Seek](../Topic/CInternetFile::Seek.md)|Riposizionare il puntatore in un file aperto.|  
|[CInternetFile::SetReadBufferSize](../Topic/CInternetFile::SetReadBufferSize.md)|Imposta la dimensione del buffer in cui i dati vengono letti.|  
|[CInternetFile::SetWriteBufferSize](../Topic/CInternetFile::SetWriteBufferSize.md)|Imposta la dimensione del buffer in cui i dati vengono scritti.|  
|[CInternetFile::Write](../Topic/CInternetFile::Write.md)|Scrive il numero di byte specificati.|  
|[CInternetFile::WriteString](../Topic/CInternetFile::WriteString.md)|Scrive una stringa con terminazione null a un file.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetFile::operator HINTERNET](../Topic/CInternetFile::operator%20HINTERNET.md)|Un operatore di cast per gli handle Internet.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetFile::m\_hFile](../Topic/CInternetFile::m_hFile.md)|Handle in un file.|  
  
## Note  
 Fornisce una classe base per [CHttpFile](../../mfc/reference/chttpfile-class.md) e il file [CGopherFile](../../mfc/reference/cgopherfile-class.md) classi.  Non creare mai direttamente un oggetto `CInternetFile`.  Al contrario, creare un oggetto di una delle relative classi derivate chiamando [CGopherConnection::OpenFile](../Topic/CGopherConnection::OpenFile.md) o [CHttpConnection::OpenRequest](../Topic/CHttpConnection::OpenRequest.md).  È inoltre possibile creare un oggetto `CInternetFile` chiamando [CFtpConnection::OpenFile](../Topic/CFtpConnection::OpenFile.md).  
  
 Le funzioni membro **Apri**, `LockRange`, `UnlockRange`e `Duplicate``CInternetFile` non vengono implementate per `CInternetFile`.  Se queste funzioni vengono chiamate in `CInternetFile` oggetto, si otterranno [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 Per ulteriori informazioni sul funzionamento `CInternetFile` con le altre classi Internet MFC, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 [CStdioFile](../../mfc/reference/cstdiofile-class.md)  
  
 `CInternetFile`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CStdioFile Class](../../mfc/reference/cstdiofile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)