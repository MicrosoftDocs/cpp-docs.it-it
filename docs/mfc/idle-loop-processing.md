---
title: Elaborazione di cicli inattivi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: baabba60ffaf886b7a34acfbff5b923a4495fa1b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="idle-loop-processing"></a>Elaborazione di cicli inattivi
Molte applicazioni eseguono lunghe elaborazioni "in"background. Talvolta, considerazioni sulle prestazioni è necessario utilizzare il multithreading per tale lavoro. Thread comportano un overhead di sviluppo aggiuntivo, in modo che non sono consigliati per attività semplici come il tempo di inattività lavoro MFC avviene nella [OnIdle](../mfc/reference/cwinthread-class.md#onidle) (funzione). In questo articolo è incentrato sull'elaborazione di inattività. Per ulteriori informazioni sul multithreading, vedere [argomenti relativi al Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
 Alcuni tipi di elaborazione in background vengono effettuati correttamente durante gli intervalli che l'utente non interagisce con l'applicazione. In un'applicazione sviluppata per il sistema operativo Microsoft Windows, un'applicazione può eseguire l'elaborazione di tempo di inattività suddividendo un processo lungo in numero di frammenti di piccole dimensioni. Dopo l'elaborazione di ogni frammento, l'applicazione restituisce il controllo di esecuzione per Windows usando un [PeekMessage](http://msdn.microsoft.com/library/windows/desktop/ms644943) ciclo.  
  
 In questo articolo vengono illustrati due modi per periodi di inattività l'elaborazione dell'applicazione:  
  
-   Utilizzando **PeekMessage** nel ciclo di messaggi principale di MFC.  
  
-   Incorporamento di un'altra **PeekMessage** ciclo altrove nell'applicazione.  
  
##  <a name="_core_peekmessage_in_the_mfc_message_loop"></a>PeekMessage nel ciclo di messaggi MFC  
 In un'applicazione sviluppata con MFC, il messaggio principale ciclo nella `CWinThread` classe contiene un ciclo di messaggi che chiama il [PeekMessage](http://msdn.microsoft.com/library/windows/desktop/ms644943) API Win32. Questo ciclo anche le chiamate di `OnIdle` funzione membro di `CWinThread` tra i messaggi. Un'applicazione può elaborare i messaggi in questo periodo di inattività eseguendo l'override di `OnIdle` (funzione).  
  
> [!NOTE]
>  **Eseguire**, `OnIdle`, e alcune altre funzioni membro sono ora membri della classe `CWinThread` anziché della classe `CWinApp`. L'oggetto `CWinApp` è derivato da `CWinThread`.  
  
 Per ulteriori informazioni sulle prestazioni di elaborazione inattiva, vedere [OnIdle](../mfc/reference/cwinthread-class.md#onidle) nel *riferimenti alla libreria MFC*.  
  
##  <a name="_core_peekmessage_elsewhere_in_your_application"></a>PeekMessage altrove nell'applicazione  
 Un altro metodo per l'esecuzione di inattività in un'applicazione di elaborazione prevede l'incorporamento di un ciclo di messaggi in una delle funzioni. Questo ciclo di messaggi è molto simile al ciclo di messaggi principale di MFC, trovato [CWinThread:: Run](../mfc/reference/cwinthread-class.md#run). Ciò significa che tale ciclo, in un'applicazione sviluppata con MFC deve eseguire molte delle stesse funzioni come il ciclo di messaggi principale. Frammento di codice seguente illustra come scrivere un ciclo di messaggi che è compatibile con MFC:  
  
 [!code-cpp[NVC_MFCDocView#8](../mfc/codesnippet/cpp/idle-loop-processing_1.cpp)]  
  
 Questo codice, incorporato in una funzione, cicli, purché vi sia inattivo elaborazione da eseguire. All'interno del ciclo, un ciclo nidificato chiama ripetutamente **PeekMessage**. Fino a quando la chiamata restituisce un valore diverso da zero, il ciclo chiama `CWinThread::PumpMessage` per eseguire la conversione dei messaggi normale e dell'invio. Anche se `PumpMessage` è documentato, è possibile esaminare il codice sorgente nel file ThrdCore nella directory \atlmfc\src\mfc. dell'installazione di Visual C++.  
  
 Una volta termina il ciclo interno, il ciclo esterno esegue l'elaborazione inattivo con uno o più chiamate a `OnIdle`. La prima chiamata è per scopi MFC. È possibile eseguire ulteriori chiamate a `OnIdle` per eseguire operazioni in background.  
  
 Per ulteriori informazioni sulle prestazioni di elaborazione inattiva, vedere [OnIdle](../mfc/reference/cwinthread-class.md#onidle) in riferimenti alla libreria MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)

