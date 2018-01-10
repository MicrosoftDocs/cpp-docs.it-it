---
title: Test delle applicazioni Internet | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Web applications [MFC], testing
- debugging Web applications [MFC], testing applications
- testing [MFC], Internet applications
- debugging [MFC], Web applications
- Internet debugging and testing
ms.assetid: ac4c74e3-d4ad-4e19-8f6c-e270de067f01
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0cc214eb98b8aa9e927fd471ba313e4cade426a2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="testing-internet-applications"></a>Test delle applicazioni Internet
Esistono alcune sfide test su Internet, soprattutto per le applicazioni in esecuzione in un server Web. Il test iniziale verrà probabilmente eseguito utilizzando un client di utente singolo, la connessione a un server di prova. Ciò è utile per il debug del codice.  
  
 È inoltre consigliabile eseguire test in condizioni reali: con più client connessi tramite connessioni ad alta velocità, nonché linee seriali a bassa velocità, incluse le connessioni di modem. Può essere difficile simulare condizioni reali, ma è sicuramente utile spesa possibili scenari di progettazione di tempo e la successiva esecuzione. Se possibile, è anche possibile usare gli strumenti per test di stress e delle capacità di eseguire. Alcune classi di errori, ad esempio bug di temporizzazione, sono difficili da trovare e riprodurre.  
  
 Uno dei problemi di programmazione Internet è la visibilità. Numero di accessi al sito potrebbero rallentare il server. Si desidera che i server ridotti gradualmente. Si desidera impedire tutto ciò che potrebbe essere dannosi per computer il se l'applicazione ha esito negativo (ad esempio, il danneggiamento dei dati durante la scrittura nel Registro di sistema o durante la scrittura dei cookie sul client).  
  
## <a name="see-also"></a>Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

