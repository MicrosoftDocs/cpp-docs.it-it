---
title: "CHttpFile Class | Microsoft Docs"
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
  - "CHttpFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHttpFile class"
  - "HTTP (file)"
  - "HTTP requests, requesting and reading files"
ms.assetid: 399e7c68-bbce-4374-8c55-206e9c7baac6
caps.latest.revision: 23
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CHttpFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità per ordinare e leggere i file su un server HTTP.  
  
## Sintassi  
  
```  
class CHttpFile : public CInternetFile  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHttpFile::CHttpFile](../Topic/CHttpFile::CHttpFile.md)|Crea un oggetto `CHttpFile`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHttpFile::AddRequestHeaders](../Topic/CHttpFile::AddRequestHeaders.md)|Aggiunge le intestazioni di richiesta inviata a un server HTTP.|  
|[CHttpFile::EndRequest](../Topic/CHttpFile::EndRequest.md)|Termina una richiesta inviata a un server HTTP con la funzione membro [SendRequestEx](../Topic/CHttpFile::SendRequestEx.md).|  
|[CHttpFile::GetFileURL](../Topic/CHttpFile::GetFileURL.md)|Ottiene l'url del file specificato.|  
|[CHttpFile::GetObject](../Topic/CHttpFile::GetObject.md)|Ottiene l'oggetto di destinazione del verbo in una richiesta a un server HTTP.|  
|[CHttpFile::GetVerb](../Topic/CHttpFile::GetVerb.md)|Ottiene il verbo utilizzato in una richiesta a un server HTTP.|  
|[CHttpFile::QueryInfo](../Topic/CHttpFile::QueryInfo.md)|Restituisce la risposta o intestazioni di richiesta dal server HTTP.|  
|[CHttpFile::QueryInfoStatusCode](../Topic/CHttpFile::QueryInfoStatusCode.md)|Recupera il codice di stato associato a una richiesta HTTP e lo inserisce nel parametro specificato `dwStatusCode`.|  
|[CHttpFile::SendRequest](../Topic/CHttpFile::SendRequest.md)|Invia una richiesta a un server HTTP.|  
|[CHttpFile::SendRequestEx](../Topic/CHttpFile::SendRequestEx.md)|Invia una richiesta a un server HTTP utilizzando i metodi [WriteString](../Topic/CInternetFile::WriteString.md) o [Scrivere](../Topic/CInternetFile::Write.md)`CInternetFile`.|  
  
## Note  
 Se la sessione Internet legge i dati da un server HTTP, è necessario creare un'istanza `CHttpFile`.  
  
 Per ulteriori informazioni sul funzionamento `CHttpFile` con le altre classi Internet MFC, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 [CStdioFile](../../mfc/reference/cstdiofile-class.md)  
  
 [CInternetFile](../../mfc/reference/cinternetfile-class.md)  
  
 `CHttpFile`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile Class](../../mfc/reference/cgopherfile-class.md)   
 [CHttpConnection Class](../../mfc/reference/chttpconnection-class.md)