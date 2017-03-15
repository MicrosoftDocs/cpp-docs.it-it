---
title: "Passaggi in un&#39;applicazione client Internet tipica | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni Internet, applicazioni client"
  - "Internet (applicazioni client), tabella generale"
  - "WinInet (classi), programmazione"
ms.assetid: 7aba135c-7c15-4e2f-8c34-bbaf792c89a6
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Passaggi in un&#39;applicazione client Internet tipica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella tabella seguente vengono mostrati i passaggi che è possibile eseguire in un'applicazione client tipica internet.  
  
|L'obiettivo|Azioni che si intraprendono|Effetti|  
|-----------------|---------------------------------|-------------|  
|Avvia una sessione Internet.|Creare un oggetto di [CInternetSession](../mfc/reference/cinternetsession-class.md).|Inizializza WinInet e si connette al server.|  
|Impostare un'opzione query internet \(limite di timeout o numero di tentativi, ad esempio\).|Utilizzo [CInternetSession::SetOption](../Topic/CInternetSession::SetOption.md).|Restituisce FALSE se l'operazione ha esito negativo.|  
|Stabilire una funzione di callback per monitorare lo stato della sessione.|Utilizzo [CInternetSession::EnableStatusCallback](../Topic/CInternetSession::EnableStatusCallback.md).|Stabilisce un callback a [CInternetSession::OnStatusCallback](../Topic/CInternetSession::OnStatusCallback.md).  Eseguire l'override `OnStatusCallback` per creare una routine di callback.|  
|Connessione a un server Internet, a un server Intranet, o in un file locale.|Utilizzo [CInternetSession::OpenURL](../Topic/CInternetSession::OpenURL.md).|L'analisi dell'URL e apre una connessione al server specificato.  Restituisce [CStdioFile](../mfc/reference/cstdiofile-class.md) se si passa a `OpenURL` un nome file locale\).  Si tratta dell'oggetto a cui si accede ai dati recuperati dal server o dal file.|  
|Leggere dal file.|Utilizzo [CInternetFile::Read](../Topic/CInternetFile::Read.md).|Legge il numero di byte utilizzando un buffer fornito.|  
|Gestire le eccezioni.|Utilizzare la classe di [CInternetException](../mfc/reference/cinternetexception-class.md).|Gestisce tutti i tipi di eccezioni comuni internet.|  
|Termina la sessione Internet.|Disponga dell'oggetto di [CInternetSession](../mfc/reference/cinternetsession-class.md).|Viene effettuata la pulizia automatica handle di file e le connessioni aperte.|  
  
## Vedere anche  
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)