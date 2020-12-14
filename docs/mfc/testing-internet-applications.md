---
description: 'Altre informazioni su: test di applicazioni Internet'
title: Test delle applicazioni Internet
ms.date: 11/04/2016
helpviewer_keywords:
- Web applications [MFC], testing
- debugging Web applications [MFC], testing applications
- testing [MFC], Internet applications
- debugging [MFC], Web applications
- Internet debugging and testing
ms.assetid: ac4c74e3-d4ad-4e19-8f6c-e270de067f01
ms.openlocfilehash: ed3dd9819524e156af47da4070c517e3761380ca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216262"
---
# <a name="testing-internet-applications"></a>Test delle applicazioni Internet

Sono presenti alcune problemi di test univoci su Internet, in particolare per le applicazioni in esecuzione su un server Web. È probabile che il test iniziale venga eseguito utilizzando un client utente singolo che si connette a un server di prova. Questa operazione sarà utile per il debug del codice.

Sarà inoltre necessario eseguire il test in condizioni reali: con più client connessi su connessioni ad alta velocità e linee seriali a bassa velocità, incluse le connessioni modem. Può essere difficile simulare le condizioni reali, ma è senz'altro opportuno dedicare tempo alla progettazione di possibili scenari ed eseguirli. Se possibile, sarà anche possibile usare gli strumenti per eseguire test di capacità e stress. Alcune classi di bug, ad esempio i bug temporali, sono difficili da trovare e riprodurre.

Una delle principali problemi della programmazione Internet è la sua visibilità. Molti accessi al sito possono rallentare il server. Si desidera che il server risulti degradato normalmente. Si desidera impedire qualsiasi elemento che potrebbe essere distruttivo per il computer di un utente in caso di errore dell'applicazione (ad esempio, il danneggiamento dei dati durante la scrittura nel registro di sistema o durante la scrittura di cookie sul client).

## <a name="see-also"></a>Vedi anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni fondamentali sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)
