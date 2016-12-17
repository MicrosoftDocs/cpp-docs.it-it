---
title: "CHttpConnection Class | Microsoft Docs"
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
  - "CHttpConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHttpConnection class"
  - "connessione a server"
  - "connessione a server, HTTP (server)"
  - "connessioni [C++], HTTP"
  - "HTTP (connessioni)"
  - "HTTP (server), connessione"
  - "Internet connections, HTTP"
  - "Internet protocols"
  - "Internet protocols, HTTP"
  - "Internet server, HTTP"
  - "protocolli, HTTP"
  - "server, connessione"
ms.assetid: a402b662-c445-4988-800d-c8278551babe
caps.latest.revision: 24
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CHttpConnection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce la connessione a un server HTTP.  
  
## Sintassi  
  
```  
class CHttpConnection : public CInternetConnection  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHttpConnection::CHttpConnection](../Topic/CHttpConnection::CHttpConnection.md)|Crea un oggetto `CHttpConnection`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHttpConnection::OpenRequest](../Topic/CHttpConnection::OpenRequest.md)|Apre una richiesta HTTP.|  
  
## Note  
 HTTP è uno dei protocolli del server Internet implementati dalle classi MFC WinInet.  
  
 La classe `CHttpConnection` contiene un costruttore e una funzione membro, [OpenRequest](../Topic/CHttpConnection::OpenRequest.md), che gestisce le connessioni a un server con un protocollo HTTP.  
  
 Per comunicare con un server HTTP, è innanzitutto necessario creare un'istanza [CInternetSession](../../mfc/reference/cinternetsession-class.md)e un oggetto [CHttpConnection](#_mfc_chttpconnection).  Non creare mai direttamente un oggetto `CHttpConnection` ; piuttosto, chiamata [CInternetSession::GetHttpConnection](../Topic/CInternetSession::GetHttpConnection.md), che crea l'oggetto `CHttpConnection` e restituisce un puntatore a.  
  
 Per ulteriori informazioni sul funzionamento `CHttpConnection` con le altre classi Internet MFC, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  Per ulteriori informazioni sulla connessione al server utilizzando gli altri due protocolli di supporto Internet, il gopher e FTP, vedere le classi [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) e [CFtpConnection](../../mfc/reference/cftpconnection-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)  
  
 `CHttpConnection`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [CHttpFile Class](../../mfc/reference/chttpfile-class.md)