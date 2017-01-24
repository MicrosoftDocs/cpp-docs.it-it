---
title: "Elaborazione di cicli inattivi | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "elaborazione in background"
  - "elaborazione di cicli inattivi"
  - "elaborazione durante l'inattiva"
  - "messaggi, cicli"
  - "MFC, elaborazione in background"
  - "MFC, messaggi"
  - "OnIdle (metodo)"
  - "PeekMessage (metodo)"
  - "PeekMessage (metodo), ciclo di messaggio elsewhere than"
  - "elaborazione"
  - "elaborazione, sfondo"
  - "elaborazione, durante il ciclo inattivo"
  - "threading [MFC], alternative al multithreading"
ms.assetid: 5c7c46c1-6107-4304-895f-480983bb1e44
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elaborazione di cicli inattivi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Molte applicazioni eseguono la lunga elaborazione "background". Talvolta le considerazioni sulle prestazioni prevedono del multithreading per tale lavoro.  I thread includono un ulteriore sovraccarico di sviluppo, pertanto non sono consigliati per semplici attività come il lavoro di tempo di inattività a MFC nella funzione di [OnIdle](../Topic/CWinThread::OnIdle.md).  In questo articolo su elaborazione inattiva.  Per ulteriori informazioni sul multithreading, vedere [Argomenti relativi al multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
 Alcuni tipi di elaborazione in background in modo appropriato sono eseguiti durante gli intervalli che l'utente non interagisce in caso contrario con l'applicazione.  In un'applicazione sviluppata del sistema operativo Microsoft Windows, un'applicazione può eseguire elaborazioni di tempo di inattività suddividendo un lungo processo in molti piccoli frammenti.  Dopo l'elaborazione ogni frammento, il controllo dell'esecuzione di valori di un'applicazione alle finestre utilizzando un ciclo di [PeekMessage](http://msdn.microsoft.com/library/windows/desktop/ms644943).  
  
 Questo articolo vengono illustrati due modi per eseguire l'elaborazione inattiva nell'applicazione:  
  
-   Utilizzando **PeekMessage** il ciclo di messaggi principale di MFC.  
  
-   Incorporando un altro ciclo di **PeekMessage** altrove nell'applicazione.  
  
##  <a name="_core_peekmessage_in_the_mfc_message_loop"></a> PeekMessage il ciclo di messaggi MFC  
 In un'applicazione compilata con MFC, il ciclo di messaggi principale nella classe di `CWinThread` contiene un ciclo di messaggi che chiama [PeekMessage](http://msdn.microsoft.com/library/windows/desktop/ms644943) API Win32.  Questo ciclo inoltre chiama la funzione membro di `OnIdle` di `CWinThread` tra i messaggi.  Un'applicazione può elaborare i messaggi in questo periodo di inattività eseguire l'override di una funzione di `OnIdle`.  
  
> [!NOTE]
>  **Esegui**, `OnIdle` e certe altre funzioni membro ora sono membri di classe `CWinThread` anziché classe `CWinApp`.  `CWinApp` è derivata da `CWinThread`.  
  
 Per ulteriori informazioni su come eseguire l'elaborazione inattiva, vedere [OnIdle](../Topic/CWinThread::OnIdle.md) nel *Riferimento MFC*.  
  
##  <a name="_core_peekmessage_elsewhere_in_your_application"></a> PeekMessage altrove nell'applicazione  
 Un altro metodo per eseguire l'elaborazione inattiva in un'applicazione include incorporare un ciclo di messaggi in una delle funzioni.  Questo ciclo di messaggi è molto simile al ciclo di messaggi principale di MFC, situato in [CWinThread::Run](../Topic/CWinThread::Run.md).  Ciò significa che tale ciclo in un'applicazione compilata con MFC deve eseguire molte delle stesse funzioni del ciclo di messaggi principale.  Nel codice riportato di seguito viene illustrata la scrittura di cicli di messaggi compatibile con MFC:  
  
 [!code-cpp[NVC_MFCDocView#8](../mfc/codesnippet/CPP/idle-loop-processing_1.cpp)]  
  
 Questo codice, incorporato in una funzione, viene eseguito un ciclo finché esiste alcuna elaborazione inattiva da eseguire.  All'interno del ciclo, un ciclo annidato chiama ripetutamente **PeekMessage**.  A condizione che tale i risultati della chiamata restituisce un valore diverso da zero, il ciclo chiama `CWinThread::PumpMessage` per eseguire la conversione e inviare normali del messaggio.  Sebbene sia `PumpMessage` non documentato, è possibile esaminare il codice sorgente nel file di ThrdCore.Cpp directory \\atlmfc\\src\\mfc di installazione di Visual C\+\+.  
  
 Il ciclo interno termina una volta, il ciclo esterno esegue l'elaborazione inattiva con uno o più chiamate a `OnIdle`.  La prima chiamata a scopo di MFC.  È possibile apportare ulteriori chiamate a `OnIdle` per eseguire il proprio lavoro in background.  
  
 Per ulteriori informazioni su come eseguire l'elaborazione inattiva, vedere [OnIdle](../Topic/CWinThread::OnIdle.md) in riferimenti alla libreria MFC.  
  
## Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)