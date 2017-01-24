---
title: "Applicazioni desktop di Windows (Visual C++) | Microsoft Docs"
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
ms.assetid: a020b534-293c-44e2-aa48-516c43ddeb8f
caps.latest.revision: 17
caps.handback.revision: 12
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Applicazioni desktop di Windows (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare un'applicazione desktop di Windows quando si vuole creare un'applicazione desktop nativa con un'interfaccia utente basata su finestre ed eseguibile nelle versioni di Windows comprese tra Windows XP e Windows 10 sul desktop di Windows.  
  
 *Applicazione desktop di Windows* \(talvolta definita applicazione Win32 nella documentazione meno recente\) è il termine convenzionale per un'applicazione che usa cicli di messaggi per gestire i messaggi di Windows direttamente anziché usare un framework come Microsoft Foundation Class \(MFC\), Active Template Library \(ATL\) o .NET Framework. Un'applicazione desktop di Windows in C\+\+ può usare il runtime C \(CRT\) e classi e funzioni della libreria STL \(Standard Template Library\), oggetti COM e qualsiasi funzione pubblica di Windows definite collettivamente come Windows API. Per un'introduzione alle applicazioni desktop di Windows in C\+\+, vedere [Informazioni sulla programmazione per Windows in C\+\+](http://go.microsoft.com/fwlink/p/?LinkId=262281).  
  
 Un'applicazione desktop di Windows consente di creare un'applicazione desktop nativa per Windows. L'altro modo consiste nel creare un'applicazione MFC. MFC è la scelta predefinita per le applicazioni, specialmente per quelle di tipo enterprise, che includono molti comandi dell'interfaccia utente o comandi utente personalizzati. MFC fornisce classi helper utili per la serializzazione, l'elaborazione di testi, la stampa e moderni elementi dell'interfaccia utente come la barra multifunzione. Queste classi non sono disponibili in un'applicazione desktop di Windows.  
  
## Articoli correlati  
  
|Titolo|Descrizione|  
|------------|-----------------|  
|[Sviluppo per Windows](http://go.microsoft.com/fwlink/p/?LinkId=262282)|Contiene informazioni sull'API Windows e COM. Alcune API Windows e DLL di terze parti vengono implementate come oggetti COM.|  
|[Hilo: Sviluppo di applicazioni per Windows 7 in C\+\+](http://go.microsoft.com/fwlink/p/?LinkId=262284)|Descrive come creare un'applicazione desktop di Windows rich\-client, che usa librerie di animazioni Windows e Direct2D per creare un'interfaccia utente basata su sequenze.|  
|[Applicazioni console](../windows/console-applications-in-visual-cpp.md)|Contiene informazioni sulle applicazioni console. Un'applicazione console Win32 \(o Win64\) non ha una finestra specifica e non può attivare un ciclo di messaggi. Viene eseguita nella finestra della console e l'input e l'output vengono gestiti tramite la riga di comando.|  
|[Visual C\+\+](../top/visual-cpp-in-visual-studio-2015.md)|Descrive le funzionalità principali di Visual C\+\+ in Visual Studio e i collegamenti al resto della documentazione di Visual C\+\+.|  
|[Centro per sviluppatori Visual C\+\+](http://go.microsoft.com/fwlink/p/?LinkId=252885) nel sito Web MSDN|Sono disponibili esercitazioni, post del blog e articoli rilevanti per le applicazioni desktop di Windows.|  
|[Procedura: Usare Windows 10 SDK in un'applicazione di Windows Desktop](../windows/how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contiene i passaggi per configurare il progetto da compilare mediante Windows 10 SDK.|