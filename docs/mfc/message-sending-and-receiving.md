---
title: L'invio e ricezione di messaggi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows messages [MFC], handling in MFC
- control-notification messages [MFC]
- messages [MFC], receiving
- messages [MFC], MFC
- MFC, messages
- messages [MFC], sending
ms.assetid: 9ce189cb-b259-4c3b-b6f2-9cfbed18b98b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 55f450085c446503ebf86960dbee1b0d930691c2
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36932004"
---
# <a name="message-sending-and-receiving"></a>Invio e ricezione di messaggi
Prendere in considerazione la parte di Invia del processo e modalità di risposta del framework.  
  
 La maggior parte dei messaggi deriva dall'interazione dell'utente con il programma. I comandi vengono generati da clic del mouse nelle voci di menu o pulsanti della barra degli strumenti o da sequenze di tasti di scelta rapida. L'utente genera inoltre messaggi di Windows, ad esempio, lo spostamento o si ridimensiona una finestra. Quando si verificano eventi, ad esempio l'avvio del programma o la chiusura, come windows di ottenere o perde lo stato attivo e così via, vengono inviati altri messaggi di Windows. I messaggi di notifica del controllo vengono generati da clic del mouse o altre interazioni utente con un controllo, ad esempio un controllo pulsante o casella di riepilogo in una finestra di dialogo.  
  
 Il `Run` funzione membro di classe `CWinApp` recupera i messaggi e li invia alla finestra appropriata. La maggior parte dei messaggi di comando vengono inviati alla finestra cornice principale dell'applicazione. Il `WindowProc` predefiniti da classe libreria Ottiene i messaggi e li instrada in modo diverso, a seconda della categoria del messaggio ricevuto.  
  
 Si consideri ora la parte ricevente del processo.  
  
 Il destinatario iniziale di un messaggio deve essere un oggetto window. I messaggi di Windows sono in genere gestiti direttamente da tale oggetto finestra. I messaggi di comando, in genere originari finestra cornice principale dell'applicazione, vengono instradati alla catena di destinazione comando descritto nella [comandi (Routing)](../mfc/command-routing.md).  
  
 Ogni oggetto in grado di ricevere messaggi o comandi ha il proprio messaggio eseguire il mapping che abbina un messaggio o un comando con il nome del gestore.  
  
 Quando un oggetto destinazione comando riceve un messaggio o un comando, viene cercato propria mappa messaggi per trovare una corrispondenza. Se viene rilevato un gestore per il messaggio, chiama il gestore. Per ulteriori informazioni su come vengono cercate le mappe messaggi, vedere [modo in cui il Framework ricerche mappe messaggi](../mfc/how-the-framework-searches-message-maps.md). Vedere la figura [comandi nel Framework](../mfc/user-interface-objects-and-command-ids.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

