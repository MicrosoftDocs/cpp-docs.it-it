---
title: "CInternetConnection Class | Microsoft Docs"
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
  - "CInternetConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "asynchronous connections"
  - "CInternetConnection class"
  - "Internet connections"
ms.assetid: 62a5d1c3-8471-4e36-a064-48831829b2a7
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CInternetConnection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce la connessione a un server Internet.  
  
## Sintassi  
  
```  
class CInternetConnection : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetConnection::CInternetConnection](../Topic/CInternetConnection::CInternetConnection.md)|Costruisce un oggetto `CInternetConnection`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetConnection::GetContext](../Topic/CInternetConnection::GetContext.md)|Ottiene l'id del contesto per tale oggetto connessione.|  
|[CInternetConnection::GetServerName](../Topic/CInternetConnection::GetServerName.md)|Ottiene il nome del server associato alla connessione.|  
|[CInternetConnection::GetSession](../Topic/CInternetConnection::GetSession.md)|Ottiene un puntatore all'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) associato alla connessione.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetConnection::operator HINTERNET](../Topic/CInternetConnection::operator%20HINTERNET.md)|Handle a una sessione Internet.|  
  
## Note  
 È la classe base per le classi [CFtpConnection](../../mfc/reference/cftpconnection-class.md), [CHttpConnection](../../mfc/reference/chttpconnection-class.md)e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md)MFC.  Ciascuna di queste classi fornisce funzionalità aggiuntive per la comunicazione con FTP, HTTP, o il server gopher rispettivo.  
  
 Per comunicare direttamente con un server Internet, è necessario disporre di un oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) e un oggetto `CInternetConnection`.  
  
 Per ulteriori informazioni su come le classi di WinInet funzionano, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CInternetConnection`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)