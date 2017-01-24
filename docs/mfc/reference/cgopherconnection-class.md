---
title: "CGopherConnection Class | Microsoft Docs"
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
  - "CGopherConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CGopherConnection class"
  - "connessione a server"
  - "connessione a server, gopher servers"
  - "gopher (protocollo)"
  - "gopher server"
  - "Internet connections, gopher"
  - "Internet server, gopher"
  - "protocolli, gopher"
  - "server, connessione"
  - "servizi, gopher"
ms.assetid: b5b96aea-ac99-430e-bd84-d1372b43f78f
caps.latest.revision: 21
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CGopherConnection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce la connessione a un server Internet di gopher.  
  
> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i membri sono deprecate in quanto non funzionano nella piattaforma Windows XP, ma continueranno a lavorare su piattaforme precedenti.  
  
## Sintassi  
  
```  
class CGopherConnection : public CInternetConnection  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherConnection::CGopherConnection](../Topic/CGopherConnection::CGopherConnection.md)|Costruisce un oggetto `CGopherConnection`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherConnection::CreateLocator](../Topic/CGopherConnection::CreateLocator.md)|Crea un oggetto [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) per trovare i file in un server gopher.|  
|[CGopherConnection::GetAttribute](../Topic/CGopherConnection::GetAttribute.md)|Recupera le informazioni sull'oggetto di gopher.|  
|[CGopherConnection::OpenFile](../Topic/CGopherConnection::OpenFile.md)|Apre un file di gopher.|  
  
## Note  
 Il servizio di gopher è uno dei servizi Internet riconosciuti dalle classi MFC WinInet.  
  
 La classe `CGopherConnection` contiene un costruttore e tre funzioni membro aggiuntive che gestiscono il servizio di gopher: [OpenFile](../Topic/CGopherConnection::OpenFile.md), [CreateLocator](../Topic/CGopherConnection::CreateLocator.md)e [GetAttribute](../Topic/CGopherConnection::GetAttribute.md).  
  
 Per comunicare con un server Internet di gopher, è innanzitutto necessario creare un'istanza [CInternetSession](../../mfc/reference/cinternetsession-class.md)e quindi chiamare [CInternetSession::GetGopherConnection](../Topic/CInternetSession::GetGopherConnection.md), che crea l'oggetto `CGopherConnection` e restituisce un puntatore a.  Non creare mai direttamente un oggetto `CGopherConnection`.  
  
 Per ulteriori informazioni sul funzionamento `CGopherConnection` con le altre classi Internet MFC, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  Per ulteriori informazioni sull'utilizzo degli altri due servizi Internet di supporto, FTP e HTTP vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CFtpConnection](../../mfc/reference/cftpconnection-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)  
  
 `CGopherConnection`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFtpConnection Class](../../mfc/reference/cftpconnection-class.md)   
 [CHttpConnection Class](../../mfc/reference/chttpconnection-class.md)   
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [CGopherLocator Class](../../mfc/reference/cgopherlocator-class.md)   
 [CGopherFile Class](../../mfc/reference/cgopherfile-class.md)   
 [CInternetSession Class](../../mfc/reference/cinternetsession-class.md)