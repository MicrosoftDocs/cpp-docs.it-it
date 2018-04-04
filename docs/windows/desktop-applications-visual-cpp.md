---
title: Applicazioni desktop (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
ms.assetid: a020b534-293c-44e2-aa48-516c43ddeb8f
caps.latest.revision: 17
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 61f52dead8ca7ecad52b1cef4f1d87ffc5830386
ms.sourcegitcommit: 78e5e5cdbafd29e2a6ccf68d4cce215136952907
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/03/2018
---
# <a name="desktop-applications-visual-c"></a>Applicazioni desktop (Visual C++)
Oggetto *applicazione desktop* in C++ è un'applicazione nativa che è possibile accedere al set completo di API Windows e viene eseguito in una finestra o nella console di sistema. Applicazioni desktop c++ è possono eseguire in Windows XP e Windows 10 (anche se è non è più ufficialmente supportata di Windows XP e sono presenti molte API di Windows che sono stati introdotti da allora).   Un'applicazione desktop è diverso da un'app di Windows della piattaforma UWP (Universal), che può essere eseguita nei PC che eseguono Windows 10, nonché su XBox, Windows Phone, Surface Hub e altri dispositivi. Per ulteriori informazioni sui desktop Visual Studio. Le applicazioni UWP, vedere [scegliere la tecnologia](https://msdn.microsoft.com/en-us/library/windows/desktop/dn614993\(v=vs.85\).aspx).  
  
 **Terminologia**  
  
-   Oggetto *Win32* applicazione è un'applicazione desktop c++ che consentono di utilizzare nativo di Windows [le API di Windows C e/o APIs COM](https://msdn.microsoft.com/en-us/library/windows/desktop/ff818516\(v=vs.85\).aspx) CRT e le API della libreria Standard e le librerie di terze parti 3rd. Un'applicazione Win32 che viene eseguito in una finestra richiede allo sviluppatore di funziona in modo esplicito con i messaggi di Windows all'interno di una funzione di stored procedure di Windows. Nonostante il nome, un'applicazione Win32 può essere compilata come una (x86) 32 bit o 64 bit (x64) binario. Nell'IDE di Visual Studio, i termini x86 e Win32 sono sinonimi.  
  
-   Il [modello COM (Component Object)](https://msdn.microsoft.com/en-us/library/windows/desktop/ms694363\(v=vs.85\).aspx) è una specifica che consente ai programmi scritti in linguaggi diversi per comunicare tra loro. Molte finestre componenti vengono implementati come oggetti COM e seguono le regole COM standard per la creazione di oggetti, la distruzione di individuazione e l'oggetto di interfaccia.  Utilizzo di oggetti COM dalle applicazioni desktop C++ è relativamente semplice, ma la scrittura di un oggetto COM è più avanzata. Il [Active Template Library (ATL)](../atl/atl-com-desktop-components.md) fornisce funzioni di supporto che semplificano lo sviluppo COM e macro.  
  
-   Un'applicazione MFC è un'applicazione desktop di Windows che utilizzano il [Microsoft Foundation Classes](../mfc/mfc-desktop-applications.md) per creare l'interfaccia utente. Un'applicazione MFC è inoltre possibile utilizzare componenti COM, nonché CRT e le API della libreria Standard. MFC fornisce un semplice wrapper basato sugli oggetti C++ tramite le API di Windows e il ciclo di messaggi di finestra. MFC è la scelta predefinita per le applicazioni, soprattutto le applicazioni di tipo enterprise, che includono molti controlli dell'interfaccia utente dei controlli utente personalizzati. MFC fornisce classi helper utili per la gestione delle finestre, serializzazione, la modifica del testo, stampa e gli elementi dell'interfaccia utente moderna, ad esempio la barra multifunzione. Per essere efficace con MFC è necessario avere familiarità con Win32.  
  
-   C + + CLI applicazione o un componente utilizza le estensioni per la sintassi di C++ (come consentiti dalla specifica C++) per consentire l'interazione tra .NET e il codice C++ nativo.  C + + CLI applicazione può disporre di parti che eseguire in modo nativo e parti che eseguono .NET Framework con accesso alla libreria di classi Base .NET. C + + CLI è l'opzione preferita quando si dispone di codice C++ nativo che richiede l'utilizzo con il codice scritto in c# o Visual Basic. Si è destinato principalmente all'utilizzo nella DLL .NET anziché nel codice dell'interfaccia utente. Per ulteriori informazioni, vedere [programmazione .NET con C + + CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).  
  
 Qualsiasi applicazione desktop c++ è possibile utilizzare le classi di Runtime C (CRT) e la libreria Standard e funzioni, oggetti COM e le funzioni pubbliche di Windows, collettivamente come Windows API. Per un'introduzione alle applicazioni desktop di Windows in C++, vedere [Informazioni sulla programmazione per Windows in C++](http://go.microsoft.com/fwlink/p/?LinkId=262281).  
  
## <a name="in-this-section"></a>Contenuto della sezione  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[Applicazioni console](../windows/console-applications-in-visual-cpp.md)|Contiene informazioni sulle applicazioni console. Un'applicazione console Win32 (o Win64) non ha una finestra specifica e non può attivare un ciclo di messaggi. Viene eseguita nella finestra della console e l'input e l'output vengono gestiti tramite la riga di comando.|  
|[Applicazioni Desktop di Windows](../windows/windows-desktop-applications-cpp.md)|Come creare applicazioni desktop che eseguono Windows anziché la console.|  
|[Risorse per la creazione di un gioco con DirectX (C++)](../windows/resources-for-creating-a-game-using-directx.md)|Collegamenti al contenuto per la creazione di giochi in C++.|  
|[Procedura dettagliata: Creazione e utilizzo di una libreria statica](../windows/walkthrough-creating-and-using-a-static-library-cpp.md)|Come creare un file binario con estensione LIB.|  
|[Procedura: Usare Windows 10 SDK in un'applicazione di Windows Desktop](../windows/how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contiene i passaggi per configurare il progetto da compilare mediante Windows 10 SDK.|  
  
## <a name="related-articles"></a>Articoli correlati  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[Sviluppo per Windows](http://go.microsoft.com/fwlink/p/?LinkId=262282)|Contiene informazioni sull'API Windows e COM. Alcune API Windows e DLL di terze parti vengono implementate come oggetti COM.|  
|[Hilo: Sviluppo di applicazioni per Windows 7 in C++](http://go.microsoft.com/fwlink/p/?LinkId=262284)|Descrive come creare un'applicazione desktop di Windows rich-client, che usa librerie di animazioni Windows e Direct2D per creare un'interfaccia utente basata su sequenze.  Questa esercitazione non è stata aggiornata poiché Windows 7 ma ancora fornisce un'introduzione approfondita per la programmazione Win32.|  
|[Visual C++](../visual-cpp-in-visual-studio.md)|Descrive le funzionalità principali di Visual C++ in Visual Studio e i collegamenti al resto della documentazione di Visual C++.|  
  
## <a name="see-also"></a>Vedere anche  
 [Visual C++](../visual-cpp-in-visual-studio.md)
