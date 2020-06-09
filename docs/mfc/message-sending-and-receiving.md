---
title: Invio e ricezione di messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- Windows messages [MFC], handling in MFC
- control-notification messages [MFC]
- messages [MFC], receiving
- messages [MFC], MFC
- MFC, messages
- messages [MFC], sending
ms.assetid: 9ce189cb-b259-4c3b-b6f2-9cfbed18b98b
ms.openlocfilehash: 4da2fce68c1b6fd3827bc8b5d2a40dea5e5f117c
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626167"
---
# <a name="message-sending-and-receiving"></a>Invio e ricezione di messaggi

Si consideri la parte di invio del processo e il modo in cui il Framework risponde.

La maggior parte dei messaggi risulta dall'interazione dell'utente con il programma. I comandi vengono generati dai clic del mouse nelle voci di menu o nei pulsanti della barra degli strumenti o dalle sequenze di tasti di scelta rapida. L'utente genera anche messaggi di Windows, ad esempio, spostando o ridimensionando una finestra. Quando si verificano eventi quali l'avvio o la terminazione di un programma, vengono inviati altri messaggi di Windows, in quanto Windows Ottiene o perde lo stato attivo e così via. I messaggi di notifica di controllo vengono generati tramite clic del mouse o altre interazioni utente con un controllo, ad esempio un pulsante o un controllo casella di riepilogo in una finestra di dialogo.

La `Run` funzione membro della classe `CWinApp` Recupera i messaggi e li invia alla finestra appropriata. La maggior parte dei messaggi di comando viene inviata alla finestra cornice principale dell'applicazione. L'oggetto `WindowProc` predefinito dalla libreria di classi ottiene i messaggi e li instrada in modo diverso, a seconda della categoria di messaggi ricevuti.

Si consideri ora la parte ricevente del processo.

Il ricevitore iniziale di un messaggio deve essere un oggetto finestra. I messaggi di Windows vengono in genere gestiti direttamente da tale oggetto finestra. I messaggi di comando, in genere originati nella finestra cornice principale dell'applicazione, vengono indirizzati alla catena di destinazione comando descritta in [routing dei comandi](command-routing.md).

Ogni oggetto in grado di ricevere messaggi o comandi ha una propria mappa messaggi che associa un messaggio o un comando con il nome del relativo gestore.

Quando un oggetto di destinazione comando riceve un messaggio o un comando, Cerca una corrispondenza nella mappa messaggi. Se trova un gestore per il messaggio, viene chiamato il gestore. Per ulteriori informazioni sul modo in cui viene eseguita la ricerca delle mappe messaggi, vedere [come il Framework cerca le mappe messaggi](how-the-framework-searches-message-maps.md). Fare di nuovo riferimento ai [comandi di figure nel Framework](user-interface-objects-and-command-ids.md).

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](how-the-framework-calls-a-handler.md)
