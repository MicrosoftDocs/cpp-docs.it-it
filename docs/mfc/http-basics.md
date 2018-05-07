---
title: Nozioni fondamentali su HTTP | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- HTTP [MFC], return codes
- return codes [MFC]
- HTTP requests [MFC], return codes
ms.assetid: 5b7421bf-42c8-4f3a-8566-8ff5957f58cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 56a2692edd9d41f80023e44f4ca8172cba8f9d00
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="http-basics"></a>Nozioni fondamentali su HTTP
Quando si scrive un'applicazione internet, è spesso esaminare e aggiungere le informazioni nell'intestazione HTTP. Codici restituiti indicano l'esito positivo o negativo dell'evento richiesto. Nella tabella seguente sono elencati i codici restituiti più comuni.  
  
|Codice restituito|Significato|  
|-----------------|-------------|  
|200|URL individuato, segue trasmissione|  
|400|Richiesta incomprensibile|  
|404|Impossibile trovare l'URL di richiesta|  
|405|Server non supporta il metodo richiesto|  
|500|Errore sconosciuto del server|  
|503|Servizio non disponibile|  
  
 Le risposte HTTP sono raggruppate, come illustrato nella tabella seguente.  
  
|Gruppo|Significato|  
|-----------|-------------|  
|200-299|Riuscito|  
|300-399|Informazioni|  
|400-499|Errore di richiesta|  
|500-599|Errore del server|  
  
 Il protocollo HTTP (Hypertext Transfer) è un protocollo a livello di applicazione per sistemi informativi ipermediali. Per ulteriori informazioni sul protocollo HTTP e la modalità di comunicazione di browser e server, vedere la specifica del protocollo HTTP (Hypertext Transfer):  
  
 [http://www.w3.org/pub/WWW/Protocols/](http://www.w3.org/pub/www/protocols/)  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

