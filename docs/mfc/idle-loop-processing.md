---
description: 'Altre informazioni su: elaborazione di cicli inattivi'
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
ms.openlocfilehash: 8972a2bafe5c9d35af2a5f4452082a7ca82f28dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97290154"
---
# <a name="idle-loop-processing"></a>Elaborazione di cicli inattivi

Molte applicazioni eseguono una lunga elaborazione "in background". A volte le considerazioni sulle prestazioni stabiliscono l'uso del multithreading per tali operazioni. I thread comportano un sovraccarico di sviluppo aggiuntivo, quindi non sono consigliati per attività semplici come il lavoro in tempo di inattività di MFC nella funzione [OnIdle](reference/cwinthread-class.md#onidle) . Questo articolo è incentrato sull'elaborazione inattiva. Per altre informazioni sul multithreading, vedere [argomenti relativi al multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Alcuni tipi di elaborazione in background vengono eseguiti in modo appropriato durante gli intervalli che l'utente non è in grado di interagire con l'applicazione. In un'applicazione sviluppata per il sistema operativo Microsoft Windows, un'applicazione può eseguire l'elaborazione del tempo di inattività suddividendo un processo lungo in molti frammenti di piccole dimensioni. Dopo l'elaborazione di ogni frammento, l'applicazione cede il controllo di esecuzione a Windows usando un ciclo [PeekMessage](/windows/win32/api/winuser/nf-winuser-peekmessagew) .

Questo articolo illustra due modi per eseguire l'elaborazione inattiva nell'applicazione:

- Utilizzo di **PeekMessage** nel ciclo di messaggi principale di MFC.

- Incorporamento di un altro ciclo **PeekMessage** in un altro punto dell'applicazione.

## <a name="peekmessage-in-the-mfc-message-loop"></a><a name="_core_peekmessage_in_the_mfc_message_loop"></a> PeekMessage nel ciclo di messaggi MFC

In un'applicazione sviluppata con MFC, il ciclo di messaggi principale della `CWinThread` classe contiene un ciclo di messaggi che chiama l'API Win32 [PeekMessage](/windows/win32/api/winuser/nf-winuser-peekmessagew) . Questo ciclo chiama anche la `OnIdle` funzione membro di `CWinThread` tra i messaggi. Un'applicazione può elaborare i messaggi in questo tempo di inattività eseguendo l'override della `OnIdle` funzione.

> [!NOTE]
> `Run`, `OnIdle` e alcune altre funzioni membro sono ora membri della classe `CWinThread` anziché della classe `CWinApp` . L'oggetto `CWinApp` è derivato da `CWinThread`.

Per ulteriori informazioni sull'esecuzione dell'elaborazione inattiva, vedere [OnIdle](reference/cwinthread-class.md#onidle) nella Guida di *riferimento a MFC*.

## <a name="peekmessage-elsewhere-in-your-application"></a><a name="_core_peekmessage_elsewhere_in_your_application"></a> PeekMessage altrove nell'applicazione

Un altro metodo per eseguire l'elaborazione inattiva in un'applicazione consiste nell'incorporare un ciclo di messaggi in una delle funzioni. Questo ciclo di messaggi è molto simile al ciclo di messaggi principale di MFC, disponibile in [CWinThread:: Run](reference/cwinthread-class.md#run). Questo significa che un ciclo in un'applicazione sviluppata con MFC deve eseguire molte delle stesse funzioni del ciclo di messaggi principale. Nel frammento di codice seguente viene illustrata la scrittura di un ciclo di messaggi compatibile con MFC:

[!code-cpp[NVC_MFCDocView#8](codesnippet/cpp/idle-loop-processing_1.cpp)]

Questo codice, incorporato in una funzione, esegue il ciclo fino a quando l'elaborazione è inattiva. All'interno del ciclo, un ciclo annidato chiama ripetutamente `PeekMessage` . Fino a quando la chiamata restituisce un valore diverso da zero, il ciclo chiama `CWinThread::PumpMessage` per eseguire la normale conversione dei messaggi e l'invio. Sebbene `PumpMessage` non sia documentato, è possibile esaminarne il codice sorgente nel file ThrdCore. cpp nella directory \atlmfc\src\mfc. dell'installazione del Visual C++.

Al termine del ciclo interno, il ciclo esterno esegue l'elaborazione inattiva con una o più chiamate a `OnIdle` . La prima chiamata riguarda gli scopi di MFC. È possibile effettuare chiamate aggiuntive a `OnIdle` per eseguire il proprio lavoro in background.

Per ulteriori informazioni sull'esecuzione dell'elaborazione inattiva, vedere [OnIdle](reference/cwinthread-class.md#onidle) nei riferimenti alla libreria MFC.

## <a name="see-also"></a>Vedi anche

[Argomenti MFC generali](general-mfc-topics.md)
