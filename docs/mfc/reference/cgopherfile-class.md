---
title: "CGopherFile Class | Microsoft Docs"
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
  - "CGopherFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CGopherFile (classe)"
  - "gopher protocol files"
  - "Internet, gopher"
ms.assetid: 3ca9898f-8cdb-4495-bbde-46d40100feda
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CGopherFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità per individuare e leggere i file in un server gopher.  
  
> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i membri sono deprecate in quanto non funzionano nella piattaforma Windows XP, ma continueranno a lavorare su piattaforme precedenti.  
  
## Sintassi  
  
```  
class CGopherFile : public CInternetFile  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherFile::CGopherFile](../Topic/CGopherFile::CGopherFile.md)|Costruisce un oggetto `CGopherFile`.|  
  
## Note  
 Il servizio di gopher non consente agli utenti scrivere i dati in un file di gopher perché funzioni di questo servizio principalmente come interfaccia organizzata a menu per trovare le informazioni.  Le funzioni membro **Write**, `WriteString`e `Flush``CGopherFile` non vengono implementate per `CGopherFile`.  Chiamare queste funzioni in `CGopherFile` oggetto, restituisce [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 Per ulteriori informazioni sul funzionamento `CGopherFile` con le altre classi Internet MFC, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 [CStdioFile](../../mfc/reference/cstdiofile-class.md)  
  
 [CInternetFile](../../mfc/reference/cinternetfile-class.md)  
  
 `CGopherFile`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [CGopherLocator Class](../../mfc/reference/cgopherlocator-class.md)   
 [CGopherFileFind Class](../../mfc/reference/cgopherfilefind-class.md)   
 [CGopherConnection Class](../../mfc/reference/cgopherconnection-class.md)