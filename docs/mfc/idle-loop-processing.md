---
title: Elaborazione di cicli inattivi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC, background processing
- PeekMessage method [MFC], elsewhere than message loop
- PeekMessage method [MFC]
- MFC, messages
- messages [MFC], loops
- OnIdle method [MFC]
- processing [MFC], background
- idle loop processing [MFC]
- idle processing [MFC]
- threading [MFC], alternatives to multithreading
- processing, during idle loop
- processing [MFC]
- background processing [MFC]
ms.assetid: 5c7c46c1-6107-4304-895f-480983bb1e44
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 20be85f7089f2a53b067d7287780159de51a8c86
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929556"
---
# <a name="idle-loop-processing"></a>Elaborazione di cicli inattivi
Molte applicazioni eseguono lunghe elaborazioni "in"background. Considerazioni sulle prestazioni talvolta necessario utilizzare il multithreading per tale lavoro. Thread comportano un overhead di sviluppo aggiuntivo, in modo che non sono consigliati per attività semplici come il tempo di inattività lavoro MFC avviene nella [OnIdle](../mfc/reference/cwinthread-class.md#onidle) (funzione). Questo articolo è incentrato sull'elaborazione inattivo. Per ulteriori informazioni sul multithreading, vedere [argomenti relativi al Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
 Alcuni tipi di elaborazione in background vengono eseguiti in modo appropriato durante gli intervalli che l'utente non interagisce con l'applicazione. In un'applicazione sviluppata per il sistema operativo Microsoft Windows, un'applicazione può eseguire l'elaborazione di tempo di inattività suddividendo un processo lungo in numero di frammenti di piccole dimensioni. Dopo l'elaborazione di ogni frammento, l'applicazione restituisce il controllo di esecuzione per Windows usando un [PeekMessage](http://msdn.microsoft.com/library/windows/desktop/ms644943) ciclo.  
  
 In questo articolo vengono illustrati due modi per periodi di inattività l'elaborazione dell'applicazione:  
  
-   Utilizzo **PeekMessage** nel ciclo di messaggi principale di MFC.  
  
-   Incorporamento di un'altra **PeekMessage** ciclo altrove nell'applicazione.  
  
##  <a name="_core_peekmessage_in_the_mfc_message_loop"></a> PeekMessage nel ciclo di messaggi MFC  
 In un'applicazione sviluppata con MFC, il messaggio principale ciclo nella `CWinThread` classe contiene un ciclo di messaggi che chiama il [PeekMessage](http://msdn.microsoft.com/library/windows/desktop/ms644943) API Win32. Questo ciclo anche chiamate la `OnIdle` funzione membro di `CWinThread` tra i messaggi. Un'applicazione può elaborare messaggi in questo periodo di inattività eseguendo l'override di `OnIdle` (funzione).  
  
> [!NOTE]
>  `Run`, `OnIdle`, e alcune altre funzioni membro sono ora membri della classe `CWinThread` anziché della classe `CWinApp`. L'oggetto `CWinApp` è derivato da `CWinThread`.  
  
 Per ulteriori informazioni sull'elaborazione inattivo l'esecuzione, vedere [OnIdle](../mfc/reference/cwinthread-class.md#onidle) nel *riferimenti alla libreria MFC*.  
  
##  <a name="_core_peekmessage_elsewhere_in_your_application"></a> PeekMessage in un' posizione nell'applicazione  
 Un altro metodo per l'esecuzione di inattività in un'applicazione di elaborazione prevede l'incorporamento di un ciclo di messaggi in una delle funzioni. Questo ciclo di messaggi è molto simile al ciclo di messaggi principale di MFC, incluso [CWinThread:: Run](../mfc/reference/cwinthread-class.md#run). Ciò significa che tale ciclo, in un'applicazione sviluppata con MFC deve eseguire molte delle stesse funzioni come il ciclo di messaggi principale. Frammento di codice seguente illustra come scrivere un ciclo di messaggi che è compatibile con MFC:  
  
 [!code-cpp[NVC_MFCDocView#8](../mfc/codesnippet/cpp/idle-loop-processing_1.cpp)]  
  
 Questo codice, incorporato in una funzione, esegue il ciclo fino a quando è inattivo elaborazione da eseguire. All'interno di tale ciclo, un ciclo nidificato chiama ripetutamente `PeekMessage`. Fino a quando la chiamata restituisce un valore diverso da zero, il ciclo chiama `CWinThread::PumpMessage` per eseguire la conversione dei messaggi normali e dell'invio. Anche se `PumpMessage` è documentato, è possibile esaminare il codice sorgente nel file ThrdCore nella directory \atlmfc\src\mfc. dell'installazione di Visual C++.  
  
 Una volta termina il ciclo interno, il ciclo esterno esegue l'elaborazione inattivo con uno o più chiamate a `OnIdle`. La prima chiamata è per scopi di MFC. È possibile eseguire ulteriori chiamate a `OnIdle` per svolgere la propria attività in background.  
  
 Per ulteriori informazioni sull'elaborazione inattivo l'esecuzione, vedere [OnIdle](../mfc/reference/cwinthread-class.md#onidle) in riferimenti alla libreria MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)

