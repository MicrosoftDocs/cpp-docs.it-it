---
title: Test delle applicazioni Internet | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Web applications [MFC], testing
- debugging Web applications [MFC], testing applications
- testing [MFC], Internet applications
- debugging [MFC], Web applications
- Internet debugging and testing
ms.assetid: ac4c74e3-d4ad-4e19-8f6c-e270de067f01
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 61ffc5b11783806555b210b8561cbe6cdd2878ef
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="testing-internet-applications"></a>Test delle applicazioni Internet
Esistono alcune sfide test su Internet, soprattutto per le applicazioni in esecuzione in un server Web. Il test iniziale verrà probabilmente eseguito utilizzando un client di utente singolo, la connessione a un server di prova. Ciò è utile per il debug del codice.  
  
 È inoltre consigliabile eseguire test in condizioni reali: con più client connessi tramite connessioni ad alta velocità, nonché linee seriali a bassa velocità, incluse le connessioni di modem. Può essere difficile simulare condizioni reali, ma è sicuramente utile spesa possibili scenari di progettazione di tempo e la successiva esecuzione. Se possibile, è anche possibile usare gli strumenti per test di stress e delle capacità di eseguire. Alcune classi di errori, ad esempio bug di temporizzazione, sono difficili da trovare e riprodurre.  
  
 Uno dei problemi di programmazione Internet è la visibilità. Numero di accessi al sito potrebbero rallentare il server. Si desidera che i server ridotti gradualmente. Si desidera impedire tutto ciò che potrebbe essere dannosi per computer il se l'applicazione ha esito negativo (ad esempio, il danneggiamento dei dati durante la scrittura nel Registro di sistema o durante la scrittura dei cookie sul client).  
  
## <a name="see-also"></a>Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

