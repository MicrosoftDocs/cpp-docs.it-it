---
title: Test delle applicazioni Internet
ms.date: 11/04/2016
helpviewer_keywords:
- Web applications [MFC], testing
- debugging Web applications [MFC], testing applications
- testing [MFC], Internet applications
- debugging [MFC], Web applications
- Internet debugging and testing
ms.assetid: ac4c74e3-d4ad-4e19-8f6c-e270de067f01
ms.openlocfilehash: e582fd006a49e672fb21c86b054b8d35f489698f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57290941"
---
# <a name="testing-internet-applications"></a>Test delle applicazioni Internet

Esistono alcune problematiche di test specifiche su Internet, in particolare per le applicazioni in esecuzione in un server Web. Il test iniziale verrà probabilmente eseguito usando un client a utente singolo, la connessione a un server di prova. Ciò sarà utile per il debug del codice.

È anche possibile testare condizioni reali: con più client connessi tramite connessioni ad alta velocità, nonché linee seriali bassa velocità, incluse le connessioni di modem. Può essere difficile da simulare le condizioni reali, ma vale sicuramente la pena possibili scenari di tempo la progettazione di spesa e la successiva esecuzione. Se possibile, è anche possibile usare gli strumenti per test di stress e capacità di eseguire operazioni. Alcune classi di errori, ad esempio bug di temporizzazione, sono difficili da trovare e riprodurre.

Una delle sfide della programmazione Internet è la sua visibilità. Numero di accessi al sito potrebbero rallentare il server. Consigliabile che il server per ridurre le prestazioni gradualmente. Opportuno evitare tutto ciò che potrebbe essere distruttiva per i computer dell'utente se l'applicazione ha esito negativo (ad esempio, il danneggiamento dei dati durante la scrittura nel Registro di sistema o durante la scrittura dei cookie sul client).

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)
