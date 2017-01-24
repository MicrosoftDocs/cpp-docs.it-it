---
title: "CInternetSession Class | Microsoft Docs"
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
  - "CInternetSession"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CInternetSession class"
  - "Internet sessions"
ms.assetid: ef54feb4-9d0f-4e65-a45d-7a4cf6c40e51
caps.latest.revision: 25
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CInternetSession Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea e inizializza le singole o più sessioni Internet simultanee e, se necessario, vengono descritte la connessione a un server proxy.  
  
## Sintassi  
  
```  
class CInternetSession : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetSession::CInternetSession](../Topic/CInternetSession::CInternetSession.md)|Costruisce un oggetto `CInternetSession`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetSession::Close](../Topic/CInternetSession::Close.md)|Chiude la connessione Internet quando la sessione Internet viene interrotta.|  
|[CInternetSession::EnableStatusCallback](../Topic/CInternetSession::EnableStatusCallback.md)|Stabilisce una routine di callback dello stato.|  
|[CInternetSession::GetContext](../Topic/CInternetSession::GetContext.md)|Chiude la connessione Internet quando la sessione Internet viene interrotta.|  
|[CInternetSession::GetCookie](../Topic/CInternetSession::GetCookie.md)|Il cookie viene restituito per l'url specificato e tutto il relativo elemento padre URL.|  
|[CInternetSession::GetCookieLength](../Topic/CInternetSession::GetCookieLength.md)|Recupera la variabile che specifica la durata del cookie memorizzate nel buffer.|  
|[CInternetSession::GetFtpConnection](../Topic/CInternetSession::GetFtpConnection.md)|Apre una sessione FTP con un server.  Collega l'utente.|  
|[CInternetSession::GetGopherConnection](../Topic/CInternetSession::GetGopherConnection.md)|Apre un server gopher per un'applicazione che sta tentando di aprire una connessione.|  
|[CInternetSession::GetHttpConnection](../Topic/CInternetSession::GetHttpConnection.md)|Apre un server HTTP per un'applicazione che sta tentando di aprire una connessione.|  
|[CInternetSession::OnStatusCallback](../Topic/CInternetSession::OnStatusCallback.md)|Aggiorna lo stato di un'operazione quando il callback dello stato è abilitato.|  
|[CInternetSession::OpenURL](../Topic/CInternetSession::OpenURL.md)|Analizza e apre un URL.|  
|[CInternetSession::SetCookie](../Topic/CInternetSession::SetCookie.md)|Imposta un cookie per l'url specificato.|  
|[CInternetSession::SetOption](../Topic/CInternetSession::SetOption.md)|Imposta le opzioni della sessione Internet.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetSession::operator HINTERNET](../Topic/CInternetSession::operator%20HINTERNET.md)|Handle alla sessione corrente Internet.|  
  
## Note  
 Se la connessione Internet deve essere gestita per la durata di un'applicazione, è possibile creare un membro `CInternetSession` della classe [CWinApp](../../mfc/reference/cwinapp-class.md).  
  
 Una volta stabilita una connessione Internet, è possibile chiamare [OpenURL](../Topic/CInternetSession::OpenURL.md).  `CInternetSession` quindi analizza l'url automaticamente chiamando la funzione globale [AfxParseURL](../Topic/AfxParseURL.md).  Indipendentemente dal tipo di protocollo, `CInternetSession` interpreta l'url e lo gestisce automaticamente.  Può gestire richieste di file locali identificati con la risorsa "file:\/\/" URL.  `OpenURL` restituirà un puntatore a un oggetto [CStdioFile](../../mfc/reference/cstdiofile-class.md) se il nome passato è un file locale.  
  
 Se si apre un URL in un server Internet utilizzando `OpenURL`, è possibile leggere informazioni dal sito.  Se si desidera eseguire, ad esempio HTTP, FTP, o\) gopher le azioni servizio specifiche sui file trovano su un server, è necessario stabilire la connessione adeguata al server.  Per aprire un particolare tipo di connessione direttamente a un particolare servizio, utilizzare una delle seguenti funzioni membro:  
  
-   [GetGopherConnection](../Topic/CInternetSession::GetGopherConnection.md) per aprire una connessione a un servizio di gopher.  
  
-   [GetHttpConnection](../Topic/CInternetSession::GetHttpConnection.md) per aprire una connessione a un servizio HTTP.  
  
-   [GetFtpConnection](../Topic/CInternetSession::GetFtpConnection.md) per aprire una connessione a un servizio FTP.  
  
 [SetOption](../Topic/CInternetSession::SetOption.md) consente di impostare le opzioni query della sessione, come valori di timeout, numero di tentativi, e così via.  
  
 Le funzioni membro [SetCookie](../Topic/CInternetSession::SetCookie.md), [GetCookie](../Topic/CInternetSession::GetCookie.md)e [GetCookieLength](../Topic/CInternetSession::GetCookieLength.md) di`CInternetSession` consentono di gestire un database dei cookie Win32, tra cui i server e script mantengono le informazioni sullo stato della workstation client.  
  
 Per ulteriori informazioni sulle attività di base di programmazione per Internet, vedere l'articolo [Primi passaggi Internet: WinInet](../../mfc/wininet-basics.md).  Per informazioni generali sull'utilizzo delle classi MFC ATL, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
> [!NOTE]
>  `CInternetSession` genererà [AfxThrowNotSupportedException](../Topic/AfxThrowNotSupportedException.md) per i tipi di servizi non supportati.  Solo i tipi seguenti di servizio sono attualmente supportati: FTP, HTTP, gopher e file.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CInternetSession`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [CHttpConnection Class](../../mfc/reference/chttpconnection-class.md)   
 [CFtpConnection Class](../../mfc/reference/cftpconnection-class.md)   
 [CGopherConnection Class](../../mfc/reference/cgopherconnection-class.md)