---
title: "Nozioni fondamentali su HTTP | Microsoft Docs"
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
  - "richieste HTTP, codici restituiti"
  - "HTTP, codici restituiti"
  - "codici restituiti"
ms.assetid: 5b7421bf-42c8-4f3a-8566-8ff5957f58cc
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Nozioni fondamentali su HTTP
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea un'applicazione Internet, spesso si esamina e aggiungere le informazioni presenti nell'intestazione HTTP.  I codici restituiti indicano l'esito positivo o negativo dell'evento richiesto.  Codici restituiti più comuni sono elencati nella tabella seguente.  
  
|Codice restituito|Significato|  
|-----------------------|-----------------|  
|200|L'url individuato, trasmissione segue|  
|400|Richiesta incomprensibile|  
|404|URL richiesto non trovato|  
|405|Il server non supporta il metodo richiesto|  
|500|Errore sconosciuto server|  
|503|Servizio non disponibile|  
  
 Le risposte HTTP vengono raggruppate come illustrato nella tabella seguente.  
  
|Gruppo|Significato|  
|------------|-----------------|  
|200–299|Riuscito|  
|300–399|Informazioni|  
|400–499|Errore di richiesta|  
|500–599|Errore server|  
  
 Il protocollo HTTP \(HTTP\) è un protocollo a livello di applicazione per i sistemi di informazioni di ipermedia.  Per ulteriori informazioni su HTTP e sui Web browser e server comunicano, vedere la specifica del protocollo HTTP \(HTTP\):  
  
 [http:\/\/www.w3.org\/pub\/WWW\/Protocols\/](http://www.w3.org/pub/WWW/Protocols/)  
  
## Vedere anche  
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)