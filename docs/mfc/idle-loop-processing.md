---
title: Elaborazione di cicli inattivi
ms.date: 11/04/2016
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
ms.openlocfilehash: 1eff76e2e5fd98e63dccb9110882656f69da6539
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50604271"
---
# <a name="idle-loop-processing"></a>Elaborazione di cicli inattivi

Molte applicazioni eseguono lunghe operazioni di elaborazione "in"background. In alcuni casi le considerazioni sulle prestazioni è necessario utilizzare il multithreading per eseguire tali operazioni. Thread comportano un sovraccarico di sviluppo aggiuntivi, in modo che non sono consigliati per attività semplici come il lavoro di tempo di inattività di MFC nel [OnIdle](../mfc/reference/cwinthread-class.md#onidle) (funzione). Questo articolo illustra l'elaborazione inattiva. Per altre informazioni sull'uso del multithreading, vedere [argomenti relativi al Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Alcuni tipi di elaborazione in background vengono eseguiti in modo appropriato durante gli intervalli che l'utente non è in caso contrario, interagisce con l'applicazione. In un'applicazione sviluppata per il sistema operativo Microsoft Windows, un'applicazione può eseguire l'elaborazione di tempo di inattività suddividendo un processo lungo in numero di frammenti di piccole dimensioni. Dopo l'elaborazione di ogni frammento, l'applicazione restituisce il controllo di esecuzione per Windows utilizzando un [PeekMessage](https://msdn.microsoft.com/library/windows/desktop/ms644943) ciclo.

Questo articolo illustra due modi per eseguire l'elaborazione dell'applicazione di inattività:

- Usando **PeekMessage** nel ciclo di messaggi principale di MFC.

- Incorporamento di un'altra **PeekMessage** ciclo altrove nell'applicazione.

##  <a name="_core_peekmessage_in_the_mfc_message_loop"></a> PeekMessage nel ciclo di messaggi MFC

In un'applicazione sviluppata con MFC, ciclo di messaggi principale il `CWinThread` classe contiene un ciclo di messaggi che chiama il [PeekMessage](https://msdn.microsoft.com/library/windows/desktop/ms644943) API Win32. Questo ciclo anche le chiamate di `OnIdle` funzione membro di `CWinThread` tra i messaggi. Un'applicazione può elaborare i messaggi di questo tempo di inattività eseguendo l'override di `OnIdle` (funzione).

> [!NOTE]
>  `Run`, `OnIdle`, e alcune altre funzioni membro sono ora membri della classe `CWinThread` invece che della classe `CWinApp`. L'oggetto `CWinApp` è derivato da `CWinThread`.

Per altre informazioni sulle prestazioni l'elaborazione inattiva, vedere [OnIdle](../mfc/reference/cwinthread-class.md#onidle) nel *riferimento MFC*.

##  <a name="_core_peekmessage_elsewhere_in_your_application"></a> PeekMessage altrove nell'applicazione

Un altro metodo per l'esecuzione di elaborazione in un'applicazione inattiva implichi l'incorporamento di un ciclo di messaggi in una delle funzioni. È molto simile al ciclo di messaggi principale di MFC, disponibili in questo ciclo di messaggi [CWinThread:: Run](../mfc/reference/cwinthread-class.md#run). Ciò significa che questo ciclo in un'applicazione sviluppata con MFC deve eseguire molte delle stesse funzioni come il ciclo di messaggi principale. Il frammento di codice seguente illustra come scrivere un ciclo di messaggi che è compatibile con MFC:

[!code-cpp[NVC_MFCDocView#8](../mfc/codesnippet/cpp/idle-loop-processing_1.cpp)]

Questo codice, incorporato in una funzione di cicli, purché vi sia inattivo elaborazione da eseguire. All'interno del ciclo, viene chiamato più volte un ciclo annidato `PeekMessage`. Purché questa chiamata restituisce un valore diverso da zero, il ciclo chiama `CWinThread::PumpMessage` per eseguire la conversione dei messaggi normale e dell'invio. Sebbene `PumpMessage` è documentato, è possibile esaminare il codice sorgente nel file ThrdCore nella directory \atlmfc\src\mfc. dell'installazione di Visual C++.

Una volta termina il ciclo interno, il ciclo esterno esegue l'elaborazione inattiva con uno o più chiamate a `OnIdle`. La prima chiamata è per scopi di MFC. È possibile effettuare ulteriori chiamate a `OnIdle` per svolgere il proprio lavoro in background.

Per altre informazioni sulle prestazioni l'elaborazione inattiva, vedere [OnIdle](../mfc/reference/cwinthread-class.md#onidle) nel riferimento alla libreria MFC.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)

