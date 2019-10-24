---
title: Applicazioni desktop (Visual C++)
ms.date: 07/28/2019
ms.assetid: a020b534-293c-44e2-aa48-516c43ddeb8f
ms.topic: overview
ms.openlocfilehash: 98909097cf791d55f5971a89643839e07b0c60d1
ms.sourcegitcommit: ea9d78dbb93bf3f8841dde93dbc12bd66f6f32ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/22/2019
ms.locfileid: "72778510"
---
# <a name="desktop-applications-visual-c"></a>Applicazioni desktop (Visual C++)

Un' *applicazione desktop* in C++ è un'applicazione nativa che può accedere al set completo di API Windows e viene eseguita in una finestra o nella console di sistema. Le applicazioni desktop C++ in possono essere eseguite su Windows XP tramite Windows 10 (Sebbene Windows XP non sia più supportato ufficialmente e ci siano numerose API Windows introdotte da quel momento).

Un'applicazione desktop è diversa da un'app piattaforma UWP (Universal Windows Platform) (UWP), che può essere eseguita in PC che eseguono Windows 10 e anche su XBox, Windows Phone, Surface Hub e altri dispositivi. Per ulteriori informazioni sulle applicazioni desktop e UWP, vedere [scegliere la tecnologia](/windows/win32/choose-your-technology).

## <a name="desktop-bridge"></a>Bridge desktop

In Windows 10 è possibile creare un pacchetto dell'applicazione desktop o dell'oggetto COM esistente come app UWP e aggiungere le funzionalità di UWP, ad esempio il tocco, o chiamare le API dal set di API Windows moderno. È anche possibile aggiungere un'app UWP a una soluzione desktop in Visual Studio e assemblarli insieme in un unico pacchetto e usare le API di Windows per comunicare tra di essi.

In Visual Studio 2017 versione 15,4 e successive è possibile creare un progetto di pacchetto di applicazioni Windows per semplificare notevolmente il lavoro di creazione del pacchetto dell'applicazione desktop esistente. Si applicano alcune restrizioni rispetto alle chiamate al registro di sistema o alle API usate dall'applicazione desktop, ma in molti casi è possibile creare percorsi di codice alternativi per ottenere funzionalità simili durante l'esecuzione in un pacchetto dell'app. Per altre informazioni, vedere [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## <a name="terminology"></a>Terminologia

- Un'applicazione *Win32* è un'applicazione desktop di Windows C++ in che può utilizzare API di [Windows C native e/o API com](/windows/win32/apiindex/windows-api-list) CRT e API della libreria standard e librerie di terze parti. Un'applicazione Win32 eseguita in una finestra richiede che lo sviluppatore funzioni in modo esplicito con i messaggi di Windows all'interno di una funzione di routine di Windows. Nonostante il nome, un'applicazione Win32 può essere compilata come un file binario a 32 bit (x86) o a 64 bit (x64). Nell'IDE di Visual Studio i termini x86 e Win32 sono sinonimi.

- Il [Component Object Model (com)](/windows/win32/com/the-component-object-model) è una specifica che consente ai programmi scritti in linguaggi diversi di comunicare tra loro. Molti componenti di Windows sono implementati come oggetti COM e seguono regole COM standard per la creazione di oggetti, l'individuazione di interfacce e la distruzione di oggetti.  L'uso di oggetti C++ com da applicazioni desktop è relativamente semplice, ma la scrittura di un oggetto com è più avanzata. Il [Active Template Library (ATL)](../atl/atl-com-desktop-components.md) fornisce le macro e le funzioni di supporto che semplificano lo sviluppo com.

- Un'applicazione MFC è un'applicazione desktop di Windows che usa la [Microsoft Foundation Classes](../mfc/mfc-desktop-applications.md) per creare l'interfaccia utente. Un'applicazione MFC può anche usare i componenti COM, nonché le API CRT e della libreria standard. MFC fornisce un wrapper C++ orientato agli oggetti sottile sul ciclo di messaggi della finestra e sulle API di Windows. MFC è la scelta predefinita per le applicazioni, in particolare quelle di tipo Enterprise, che includono molti controlli dell'interfaccia utente o controlli utente personalizzati. MFC fornisce classi helper utili per la gestione delle finestre, la serializzazione, la manipolazione del testo, la stampa e gli elementi moderni dell'interfaccia utente, ad esempio la barra multifunzione. Per essere efficace con MFC, è necessario conoscere Win32.

- Un' C++applicazione o un componente/CLI usa le C++ estensioni per la sintassi (come C++ consentito dallo standard) per consentire l'interazione tra il codice .NET e il codice c++ nativo.  Un' C++applicazione/CLI può includere parti che vengono eseguite in modo nativo e parti che vengono eseguite nel .NET Framework con accesso alla libreria di classi di base .NET. C++/CLI è l'opzione consigliata quando si dispone C++ di codice nativo che deve funzionare con il codice C# scritto in o Visual Basic. È destinata all'uso in dll .NET anziché nel codice dell'interfaccia utente. Per altre informazioni, vedere [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

Qualsiasi applicazione desktop in C++ può usare le classi e le funzioni di runtime C (CRT) e della libreria standard, gli oggetti com e le funzioni di Windows pubbliche, che collettivamente sono note come API Windows. Per un'introduzione alle applicazioni desktop di Windows C++in, vedere [iniziare a usare Win32 C++e ](/windows/win32/LearnWin32/learn-to-program-for-windows).

## <a name="in-this-section"></a>In questa sezione

|Titolo|Descrizione|
|-----------|-----------------|
|[Applicazioni console di Windows in C++](console-applications-in-visual-cpp.md)|Contiene informazioni sulle applicazioni console. Un'applicazione console Win32 (o Win64) non ha una finestra specifica e non può attivare un ciclo di messaggi. Viene eseguita nella finestra della console e l'input e l'output vengono gestiti tramite la riga di comando.|
|[Procedura dettagliata: creazione di applicazioni desktop di Windows (C++)](walkthrough-creating-windows-desktop-applications-cpp.md)|Creare una semplice applicazione desktop di Windows.|
|[Creazione di un'applicazione desktop di Windows vuota](creating-an-empty-windows-desktop-application.md)|Creazione di un progetto desktop di Windows privo di file predefiniti.|
|[Aggiunta di file a un'applicazione Win32 vuota](adding-files-to-an-empty-win32-applications.md)|Come aggiungere file a un progetto vuoto.|
|[Uso di file di risorse](working-with-resource-files.md)|Come aggiungere immagini, icone, tabelle di stringhe e altre risorse a un'applicazione desktop.|
|[Risorse per la creazione di un gioco conC++DirectX ()](resources-for-creating-a-game-using-directx.md)|Collegamenti al contenuto per la creazione di C++giochi in.|
|[Procedura dettagliata: creazione e utilizzo di una libreria statica](walkthrough-creating-and-using-a-static-library-cpp.md)|Come creare un file binario con estensione LIB.|
|[Procedura: Usare Windows 10 SDK in un'applicazione di Windows Desktop](how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contiene i passaggi per configurare il progetto da compilare mediante Windows 10 SDK.|

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Sviluppo in Windows](/windows/win32/index)|Contiene informazioni sull'API Windows e COM. Alcune API Windows e DLL di terze parti vengono implementate come oggetti COM.|
|[Hilo: Sviluppo di applicazioni per Windows 7 in C++](https://msdn.microsoft.com/library/windows/desktop/ff708696.aspx)|Descrive come creare un'applicazione desktop di Windows rich-client, che usa librerie di animazioni Windows e Direct2D per creare un'interfaccia utente basata su sequenze.  Questa esercitazione non è stata aggiornata a partire da Windows 7, ma offre comunque un'introduzione completa alla programmazione Win32.|
|[Panoramica della programmazione Windows in C++](overview-of-windows-programming-in-cpp.md)|Vengono descritte le funzionalità principali della programmazione Desktop C++di Windows in.|

## <a name="see-also"></a>Vedere anche

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
