---
title: "CFtpConnection Class | Microsoft Docs"
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
  - "CFtpConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFtpConnection class"
  - "FTP (File Transfer Protocol), connessioni"
  - "Internet connections, FTP"
  - "Internet services, FTP"
ms.assetid: 5e3a0501-8893-49cf-a3d5-0628d8d6b936
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFtpConnection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce la connessione FTP in un server Internet e consente la modifica diretta delle directory e file nel server.  
  
## Sintassi  
  
```  
class CFtpConnection : public CInternetConnection  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFtpConnection::CFtpConnection](../Topic/CFtpConnection::CFtpConnection.md)|Costruisce un oggetto `CFtpConnection`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFtpConnection::Command](../Topic/CFtpConnection::Command.md)|Invia un comando direttamente a un server FTP.|  
|[CFtpConnection::CreateDirectory](../Topic/CFtpConnection::CreateDirectory.md)|Crea una directory nel server.|  
|[CFtpConnection::GetCurrentDirectory](../Topic/CFtpConnection::GetCurrentDirectory.md)|Ottiene la directory corrente di questa connessione.|  
|[CFtpConnection::GetCurrentDirectoryAsURL](../Topic/CFtpConnection::GetCurrentDirectoryAsURL.md)|Ottiene la directory corrente di questa connessione come URL.|  
|[CFtpConnection::GetFile](../Topic/CFtpConnection::GetFile.md)|Ottiene un file dal server collegato|  
|[CFtpConnection::OpenFile](../Topic/CFtpConnection::OpenFile.md)|Aprire il file sul server collegato.|  
|[CFtpConnection::PutFile](../Topic/CFtpConnection::PutFile.md)|Inserisce un file sul server.|  
|[CFtpConnection::Remove](../Topic/CFtpConnection::Remove.md)|Rimuove un file dal server.|  
|[CFtpConnection::RemoveDirectory](../Topic/CFtpConnection::RemoveDirectory.md)|Rimuove la directory specificata dal server.|  
|[CFtpConnection::Rename](../Topic/CFtpConnection::Rename.md)|Rinomina un file sul server.|  
|[CFtpConnection::SetCurrentDirectory](../Topic/CFtpConnection::SetCurrentDirectory.md)|Imposta la directory corrente FTP.|  
  
## Note  
 FTP è uno dei tre servizi Internet riconosciuti dalle classi MFC WinInet.  
  
 Per comunicare con un server web FTP, è innanzitutto necessario creare un'istanza [CInternetSession](../../mfc/reference/cinternetsession-class.md)e un oggetto `CFtpConnection`.  Non creare mai direttamente un oggetto `CFtpConnection` ; piuttosto, chiamata [CInternetSession::GetFtpConnection](../Topic/CInternetSession::GetFtpConnection.md), che crea l'oggetto `CFtpConnection` e restituisce un puntatore a.  
  
 Per ulteriori informazioni sul funzionamento `CFtpConnection` con le altre classi Internet MFC, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  Per ulteriori informazioni sulla comunicazione con gli altri due servizi di supporto, HTTP e il gopher, vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md).  
  
## Esempio  
 Vedere l'esempio nei cenni preliminari sulle classi [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)  
  
 `CFtpConnection`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [CInternetSession Class](../../mfc/reference/cinternetsession-class.md)