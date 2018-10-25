---
title: Applicazioni desktop (Visual C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a020b534-293c-44e2-aa48-516c43ddeb8f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2d8c5188cccceb0c09de95c43a72a645ded0e6a9
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50077519"
---
# <a name="desktop-applications-visual-c"></a>Applicazioni desktop (Visual C++)

Oggetto *applicazione desktop* in C++ è un'applicazione nativa che può accedere al set completo di API Windows e viene eseguito in una finestra o nella console di sistema. Applicazioni desktop in C++ è possono eseguire in Windows XP a Windows 10 (anche se è non è più ufficialmente supportata di Windows XP e sono disponibili molte API di Windows che sono state introdotte da allora).

Un'applicazione desktop è diverso da un'app Universal Windows Platform (UWP), che può essere eseguito nei PC che eseguono Windows 10, nonché su XBox, Windows Phone, Surface Hub e altri dispositivi. Per altre informazioni su Visual Studio desktop. Le applicazioni UWP, vedere [Scegli la tua tecnologia](https://msdn.microsoft.com/library/windows/desktop/dn614993).

### <a name="desktop-bridge"></a>Desktop Bridge

In Windows 10 è possibile creare un pacchetto di applicazione desktop esistente o un oggetto COM come un'app UWP e aggiungere le funzionalità di piattaforma UWP, ad esempio tocco o chiamare le API dal set di API Windows moderno. È anche possibile aggiungere un'app UWP a una soluzione desktop in Visual Studio e pacchetto uno a altro in un singolo pacchetto e usare le API di Windows per comunicare tra loro.

In Visual Studio 2017 versione 15.4 e versioni successive, è possibile creare un progetto di pacchetto di applicazione Windows per semplificare notevolmente il lavoro di creazione del pacchetto dell'applicazione desktop esistente. Si applicano alcune restrizioni rispetto al quale registro chiama o Usa le API dell'applicazione desktop, ma in molti casi è possibile creare percorsi di codice alternativo per ottenere funzionalità simili durante l'esecuzione in un pacchetto dell'app. Per altre informazioni, vedere [Desktop Bridge](/windows-uwp/porting/desktop-to-uwp-root).

### <a name="terminology"></a>Terminologia

- Oggetto *Win32* dell'applicazione è un'applicazione desktop in C++ consentono di utilizzare nativo di Windows [le API C di Windows e/o COM APIs](https://msdn.microsoft.com/library/windows/desktop/ff818516) CRT e le API della libreria Standard e librerie di terze parti 3rd. Un'applicazione Win32 che viene eseguito in una finestra richiede allo sviluppatore di utilizzare in modo esplicito i messaggi di Windows all'interno di una funzione routine di Windows. Nonostante il nome, un'applicazione Win32 può essere compilata come una (x86) 32 bit o 64 bit (x64) binario. Nell'IDE di Visual Studio, i termini x86 e Win32 sono sinonimi.

- Il [modello COM (Component Object)](/windows/desktop/com/the-component-object-model) è una specifica che consente ai programmi scritti in linguaggi diversi per comunicare tra loro. Windows molti componenti vengono implementati come oggetti COM e seguire le regole COM standard per la creazione di oggetti, la distruzione di individuazione e l'oggetto di interfaccia.  Uso di oggetti COM da applicazioni desktop C++ è relativamente semplice, ma si scrive il proprio oggetto COM è più avanzata. Il [libreria ATL (Active Template)](../atl/atl-com-desktop-components.md) fornisce le macro e funzioni di supporto che semplificano lo sviluppo COM.

- Un'applicazione MFC è un'applicazione desktop di Windows che usano il [Microsoft Foundation Classes](../mfc/mfc-desktop-applications.md) per creare l'interfaccia utente. Un'applicazione MFC anche possibile usare i componenti COM e CRT e le API della libreria Standard. MFC fornisce un semplice wrapper basato sugli oggetti C++ nel ciclo di messaggi di finestra e API di Windows. MFC è la scelta predefinita per le applicazioni, soprattutto applicazioni aziendali-type, che includono molti dei controlli dell'interfaccia utente o comandi utente personalizzati. MFC fornisce classi helper utili per la gestione delle finestre, la serializzazione, modifica del testo, la stampa e gli elementi dell'interfaccia utente moderna, ad esempio la barra multifunzione. Per essere efficace con MFC è consigliabile avere familiarità con Win32.

- C + + / applicazione della riga di comando o il componente utilizza le estensioni per la sintassi di C++ (come consentiti dalla specifica di C++) per consentire l'interazione tra .NET e codice nativo C + +.  C + + / applicazione dell'interfaccia della riga può avere parti che eseguono in modo nativo e le parti che eseguono .NET Framework con accesso alla libreria di classi Base .NET. C + + CLI è l'opzione preferita quando si dispone di codice C++ nativo che è necessario usare il codice scritto in c# o Visual Basic. Si tratta principalmente per l'uso nelle DLL di .NET, invece che nel codice dell'interfaccia utente. Per altre informazioni, vedere [programmazione .NET con c++ /CLI CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

Qualsiasi applicazione desktop in C++ possa usare le classi di Runtime C (CRT) e della libreria Standard e funzioni, oggetti COM e le funzioni di Windows pubbliche, definite collettivamente come Windows API. Per un'introduzione alle applicazioni desktop di Windows in C++, vedere [Informazioni sulla programmazione per Windows in C++](http://go.microsoft.com/fwlink/p/?LinkId=262281).

## <a name="in-this-section"></a>Contenuto della sezione

|Titolo|Descrizione|
|-----------|-----------------|
|[Applicazioni console](../windows/console-applications-in-visual-cpp.md)|Contiene informazioni sulle applicazioni console. Un'applicazione console Win32 (o Win64) non ha una finestra specifica e non può attivare un ciclo di messaggi. Viene eseguita nella finestra della console e l'input e l'output vengono gestiti tramite la riga di comando.|
|[Applicazioni Desktop di Windows](../windows/windows-desktop-applications-cpp.md)|Come creare applicazioni desktop che eseguono Windows anziché la console.|
|[Risorse per la creazione di un gioco con DirectX (C++)](../windows/resources-for-creating-a-game-using-directx.md)|Collegamenti al contenuto per la creazione di giochi in C++.|
|[Procedura dettagliata: Creazione e uso di una libreria statica](../windows/walkthrough-creating-and-using-a-static-library-cpp.md)|Come creare un file binario con estensione LIB.|
|[Procedura: Usare Windows 10 SDK in un'applicazione di Windows Desktop](../windows/how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contiene i passaggi per configurare il progetto da compilare mediante Windows 10 SDK.|

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Sviluppo per Windows](http://go.microsoft.com/fwlink/p/?LinkId=262282)|Contiene informazioni sull'API Windows e COM. Alcune API Windows e DLL di terze parti vengono implementate come oggetti COM.|
|[Hilo: Sviluppo di applicazioni per Windows 7 in C++](http://go.microsoft.com/fwlink/p/?LinkId=262284)|Descrive come creare un'applicazione desktop di Windows rich-client, che usa librerie di animazioni Windows e Direct2D per creare un'interfaccia utente basata su sequenze.  Questa esercitazione non è stata aggiornata da Windows 7, ma fornisce comunque un'introduzione completa per la programmazione Win32.|
|[Visual C++](../visual-cpp-in-visual-studio.md)|Descrive le funzionalità principali di Visual C++ in Visual Studio e i collegamenti al resto della documentazione di Visual C++.|

## <a name="see-also"></a>Vedere anche

[Visual C++](../visual-cpp-in-visual-studio.md)