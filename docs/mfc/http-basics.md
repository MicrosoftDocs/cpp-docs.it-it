---
title: Nozioni fondamentali su HTTP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- HTTP [MFC], return codes
- return codes [MFC]
- HTTP requests [MFC], return codes
ms.assetid: 5b7421bf-42c8-4f3a-8566-8ff5957f58cc
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 67921e0667267b99b3787d55fa7ff564aa543ae7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
 [http://www.w3.org/pub/www/Protocols/](http://www.w3.org/pub/www/protocols/)  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

