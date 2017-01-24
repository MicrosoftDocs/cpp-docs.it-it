---
title: "CUrl Class | Microsoft Docs"
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
  - "ATL.CUrl"
  - "CUrl"
  - "ATL::CUrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CUrl class"
ms.assetid: b3894d34-47b9-4961-9719-4197153793da
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CUrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un URL.  Consente di modificare ogni elemento dell'URL indipendentemente dagli altri se analizza una stringa esistente di URL o compilando una stringa da zero.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CUrl  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUrl::CUrl](../Topic/CUrl::CUrl.md)|Costruttore.|  
|[CUrl::~CUrl](../Topic/CUrl::~CUrl.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUrl::Canonicalize](../Topic/CUrl::Canonicalize.md)|Chiamare questo metodo per convertire la stringa URL in formato canonico.|  
|[CUrl::Clear](../Topic/CUrl::Clear.md)|Chiamare questo metodo per rimuovere tutti campo URL.|  
|[CUrl::CrackUrl](../Topic/CUrl::CrackUrl.md)|Chiamare questo metodo per decodificare e analizzare l'url.|  
|[CUrl::CreateUrl](../Topic/CUrl::CreateUrl.md)|Chiamare questo metodo per creare URL.|  
|[CUrl::GetExtraInfo](../Topic/CUrl::GetExtraInfo.md)|Chiamare questo metodo per ottenere informazioni aggiuntive quali?*testo* o \#text\) dall'URL.|  
|[CUrl::GetExtraInfoLength](../Topic/CUrl::GetExtraInfoLength.md)|Chiamare questo metodo per ottenere la lunghezza delle informazioni aggiuntive \(come?*testo* o \#text\) da recuperare dall'URL.|  
|[CUrl::GetHostName](../Topic/CUrl::GetHostName.md)|Chiamare questo metodo per ottenere il nome host dall'URL.|  
|[CUrl::GetHostNameLength](../Topic/CUrl::GetHostNameLength.md)|Chiamare questo metodo per ottenere la lunghezza del nome host.|  
|[CUrl::GetPassword](../Topic/CUrl::GetPassword.md)|Chiamare questo metodo per ottenere la password dall'URL.|  
|[CUrl::GetPasswordLength](../Topic/CUrl::GetPasswordLength.md)|Chiamare questo metodo per ottenere la lunghezza della password.|  
|[CUrl::GetPortNumber](../Topic/CUrl::GetPortNumber.md)|Chiamare questo metodo per ottenere il numero di porta in termini di ATL\_URL\_PORT.|  
|[CUrl::GetScheme](../Topic/CUrl::GetScheme.md)|Chiamare questo metodo per ottenere la combinazione di URL.|  
|[CUrl::GetSchemeName](../Topic/CUrl::GetSchemeName.md)|Chiamare questo metodo per ottenere il nome di schema URL.|  
|[CUrl::GetSchemeNameLength](../Topic/CUrl::GetSchemeNameLength.md)|Chiamare questo metodo per ottenere la lunghezza del nome di schema URL.|  
|[CUrl::GetUrlLength](../Topic/CUrl::GetUrlLength.md)|Chiamare questo metodo per ottenere la lunghezza di URL.|  
|[CUrl::GetUrlPath](../Topic/CUrl::GetUrlPath.md)|Chiamare questo metodo per ottenere il percorso URL.|  
|[CUrl::GetUrlPathLength](../Topic/CUrl::GetUrlPathLength.md)|Chiamare questo metodo per ottenere la lunghezza del percorso URL.|  
|[CUrl::GetUserName](../Topic/CUrl::GetUserName.md)|Chiamare questo metodo per recuperare il nome utente dall'URL.|  
|[CUrl::GetUserNameLength](../Topic/CUrl::GetUserNameLength.md)|Chiamare questo metodo per ottenere la lunghezza del nome utente.|  
|[CUrl::SetExtraInfo](../Topic/CUrl::SetExtraInfo.md)|Chiamare questo metodo per impostare le informazioni aggiuntive \(come?*testo* o \#text\) dell'URL.|  
|[CUrl::SetHostName](../Topic/CUrl::SetHostName.md)|Chiamare questo metodo per impostare il nome host.|  
|[CUrl::SetPassword](../Topic/CUrl::SetPassword.md)|Chiamare questo metodo per impostare la password.|  
|[CUrl::SetPortNumber](../Topic/CUrl::SetPortNumber.md)|Chiamare questo metodo per impostare il numero di porta in termini di ATL\_URL\_PORT.|  
|[CUrl::SetScheme](../Topic/CUrl::SetScheme.md)|Chiamare questo metodo per impostare la combinazione di URL.|  
|[CUrl::SetSchemeName](../Topic/CUrl::SetSchemeName.md)|Chiamare questo metodo per impostare il nome di schema URL.|  
|[CUrl::SetUrlPath](../Topic/CUrl::SetUrlPath.md)|Chiamare questo metodo per impostare il percorso URL.|  
|[CUrl::SetUserName](../Topic/CUrl::SetUserName.md)|Chiamare questo metodo per impostare il nome utente.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUrl::operator \=](../Topic/CUrl::operator%20=.md)|Assegna l'oggetto specificato `CUrl` all'oggetto corrente `CUrl`.|  
  
## Note  
 `CUrl` consente di modificare i campi di un URL, ad esempio il percorso o il numero di porta.  `CUrl` conosce l'url di formato seguente:  
  
 \<Scheme\>: \/\<UserName\>:\<Password\>@\<HostName\>:\<PortNumber\>\/\<UrlPath\>\<ExtraInfo\>  
  
 \(Alcuni campi sono facoltativi.\) Ad esempio, si consideri il seguente URL:  
  
 http:\/\/someone:secret@www.microsoft.com:80\/visualc\/stuff.htm\#contents  
  
 [CUrl::CrackUrl](../Topic/CUrl::CrackUrl.md) lo analizza come segue:  
  
-   Combinazione: "HTTP" o [ATL\_URL\_SCHEME\_HTTP](../Topic/ATL_URL_SCHEME.md)  
  
-   Nome utente: "uno"  
  
-   Password: "non"  
  
-   Hostname: "www.microsoft.com"  
  
-   PortNumber: 80  
  
-   UrlPath: "visualc\/stuff.htm"  
  
-   ExtraInfo: "\#contents"  
  
 Per modificare il campo di UrlPath ad esempio, si utilizzerebbe [GetUrlPath](../Topic/CUrl::GetUrlPath.md), [GetUrlPathLength](../Topic/CUrl::GetUrlPathLength.md)e [SetUrlPath](../Topic/CUrl::SetUrlPath.md).  Utilizzare [CreateUrl](../Topic/CUrl::CreateUrl.md) per creare la stringa completa di URL.  
  
## Requisiti  
 **Header:** atlutil.h  
  
## Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)