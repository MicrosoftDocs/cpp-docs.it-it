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
ms.openlocfilehash: 9579d4bb8768b0227453af401d6fdc8a8bd482b4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376006"
---
# <a name="idle-loop-processing"></a>Elaborazione di cicli inattivi

Molte applicazioni eseguono un'elaborazione lunga "in background". A volte le considerazioni sulle prestazioni impongono l'utilizzo del multithreading per tale lavoro. I thread comportano un sovraccarico di sviluppo aggiuntivo, pertanto non sono consigliabili per attività semplici come il lavoro in fase di inattività che MFC esegue nella funzione [OnIdle.](../mfc/reference/cwinthread-class.md#onidle) Questo articolo è incentrato sull'elaborazione inattiva. Per ulteriori informazioni sul multithreading, vedere Argomenti relativi al [multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Alcuni tipi di elaborazione in background vengono eseguiti in modo appropriato durante gli intervalli che l'utente non interagisce in altro modo con l'applicazione. In un'applicazione sviluppata per il sistema operativo Microsoft Windows, un'applicazione può eseguire l'elaborazione in tempo di inattività suddividendo un processo lungo in molti piccoli frammenti. Dopo l'elaborazione di ogni frammento, l'applicazione cede il controllo di esecuzione a Windows usando un ciclo [PeekMessage.After](/windows/win32/api/winuser/nf-winuser-peekmessagew) processing each fragment, the application ceds execution control to Windows using a PeekMessage loop.

In questo articolo vengono illustrati due modi per eseguire l'elaborazione inattiva nell'applicazione:This article explains two ways to do idle processing in your application:

- Utilizzo di **PeekMessage** nel ciclo di messaggi principale di MFC.

- Incorporamento di un altro ciclo **PeekMessage** in un'altra posizione nell'applicazione.

## <a name="peekmessage-in-the-mfc-message-loop"></a><a name="_core_peekmessage_in_the_mfc_message_loop"></a>PeekMessage nel ciclo di messaggi MFC

In un'applicazione sviluppata con MFC, `CWinThread` il ciclo di messaggi principale nella classe contiene un ciclo di messaggi che chiama l'API [Win32 PeekMessage.](/windows/win32/api/winuser/nf-winuser-peekmessagew) Questo ciclo chiama `OnIdle` anche `CWinThread` la funzione membro tra i messaggi. Un'applicazione può elaborare i messaggi in `OnIdle` questo tempo di inattività eseguendo l'override della funzione.

> [!NOTE]
> `Run`, `OnIdle`, e alcune altre funzioni `CWinThread` membro sono `CWinApp`ora membri della classe anziché della classe . L'oggetto `CWinApp` è derivato da `CWinThread`.

Per ulteriori informazioni sull'esecuzione dell'elaborazione inattiva, vedere [OnIdle](../mfc/reference/cwinthread-class.md#onidle) in *Reference mfc*.

## <a name="peekmessage-elsewhere-in-your-application"></a><a name="_core_peekmessage_elsewhere_in_your_application"></a>PeekMessage altrove nell'applicazione

Un altro metodo per eseguire l'elaborazione inattiva in un'applicazione prevede l'incorporamento di un ciclo di messaggi in una delle funzioni. Questo ciclo di messaggi è molto simile al ciclo di messaggi principale di MFC, disponibile in [CWinThread::Run](../mfc/reference/cwinthread-class.md#run). Ciò significa che un ciclo di questo tipo in un'applicazione sviluppata con MFC deve eseguire molte delle stesse funzioni del ciclo di messaggi principale. Nel frammento di codice seguente viene illustrata la scrittura di un ciclo di messaggi compatibile con MFC:The following code fragment demonstrates writing a message loop that is compatible with MFC:

[!code-cpp[NVC_MFCDocView#8](../mfc/codesnippet/cpp/idle-loop-processing_1.cpp)]

Questo codice, incorporato in una funzione, esegue cicli finché è necessario eseguire un'elaborazione inattiva. All'interno di tale ciclo, `PeekMessage`un ciclo annidato chiama ripetutamente . Finché tale chiamata restituisce un valore `CWinThread::PumpMessage` diverso da zero, il ciclo chiama per eseguire la normale conversione e invio dei messaggi. Anche `PumpMessage` se non è documentato, è possibile esaminarne il codice sorgente nel file ThrdCore.Cpp nella directory .atlmfc.

Al termine del ciclo interno, il ciclo esterno esegue `OnIdle`l'elaborazione inattiva con una o più chiamate a . La prima chiamata è per scopi di MFC. È possibile effettuare `OnIdle` chiamate aggiuntive per eseguire il proprio lavoro in background.

Per ulteriori informazioni sull'esecuzione dell'elaborazione inattiva, vedere [OnIdle](../mfc/reference/cwinthread-class.md#onidle) in Riferimenti alla libreria MFC.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
