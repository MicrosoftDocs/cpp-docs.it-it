---
title: Configurazione di programmi per Windows XP
ms.date: 02/02/2018
ms.assetid: 1e4487b3-d815-4123-878b-5718b22f0fd5
ms.openlocfilehash: 989a4e2c7e91c05498902bf1c5cb9d838ee47c3b
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57814293"
---
# <a name="configuring-programs-for-windows-xp"></a>Configurazione di programmi per Windows XP

Poiché Visual Studio supporta più set di strumenti della piattaforma, è possibile includere i sistemi operativi e librerie di runtime che non sono supportate dal set di strumenti predefinito. Passando il set di strumenti della piattaforma, ad esempio, è possibile utilizzare c++11, c++14 e miglioramenti di C + + 17 lingue supportati dal compilatore MSVC in Visual Studio per creare le app destinate a Windows XP e Windows Server 2003. È possibile anche usare set di strumenti della piattaforma meno recenti per mantenere il codice legacy compatibili con file binario e comunque sfruttare le funzionalità più recenti dell'IDE di Visual Studio.

## <a name="install-the-windows-xp-platform-toolset"></a>Installare il set di strumenti della piattaforma Windows XP

Per ottenere il set di strumenti della piattaforma e i componenti di destinazione Windows XP e Windows Server 2003 in Visual Studio 2017, eseguire l'installazione di Visual Studio. Quando si installa inizialmente Visual Studio o quando si sceglie **Modify** per modificare un'installazione esistente, assicurarsi che le **sviluppo Desktop con C++** viene selezionato il carico di lavoro. Nell'elenco dei componenti facoltativi per questo carico di lavoro, scegliere **supporto Windows XP per C++**, quindi scegliere **installare** oppure **Modify**.

## <a name="windows-xp-targeting-experience"></a>Esperienza destinata a Windows XP

Il set di strumenti della piattaforma Windows XP incluso in Visual Studio è una versione di Windows 7 SDK, ma usa il compilatore C++ corrente. Configura inoltre le proprietà del progetto per i valori predefiniti appropriati, ad esempio, la specifica di un linker compatibile per specificare come destinazione di livello inferiore. Solo Windows desktop le app create usando un set strumenti della piattaforma Windows XP eseguite in Windows XP e Windows Server 2003, ma queste App sono eseguibili anche su sistemi operativi Windows più recenti.

#### <a name="to-target-windows-xp"></a>Per usare Windows XP

1. In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.

1. Nel **pagine delle proprietà** finestra di dialogo per il progetto, sotto **le proprietà di configurazione** > **generali**, impostare il **setstrumentidellapiattaforma** proprietà per il set di strumenti desiderato di Windows XP. Ad esempio, scegliere **Visual Studio 2017 - Windows XP (v141_xp)** per creare codice per Windows XP e Windows Server 2003 tramite il compilatore Microsoft Visual C++ 2017.

### <a name="c-runtime-support"></a>Supporto di C++ runtime

Nonché il set di strumenti della piattaforma Windows XP, la libreria Runtime C (CRT), della libreria Standard C++, libreria ATL (Active Template), libreria di Runtime di concorrenza (ConCRT), libreria PPL (Parallel Patterns Library), (MFC (Microsoft Foundation Class Library) e C++ AMP (C++ Accelerated Massive programmazione) libreria includono il supporto di runtime per Windows XP e Windows Server 2003. Per questi sistemi operativi, le versioni minime supportate sono Windows XP Service Pack 3 (SP3) per x86, Windows XP Service Pack 2 (SP2) per x64 e Windows Server 2003 Service Pack 2 (SP2) per x86 e x64.

Queste librerie sono supportate dal set di strumenti della piattaforma installati da Visual Studio, a seconda della destinazione:

|Libreria|Set di strumenti della piattaforma predefinito per il supporto delle app desktop Windows|Piattaforma del set di strumenti targeting Store App predefinite|Set strumenti della piattaforma Windows XP come destinazione Windows XP, Windows Server 2003|
|---|---|---|---|
|CRT|X|x|x|
|Libreria standard C++|x|x|X|
|ATL|X|x|X|
|ConCRT/PPL|X|x|X|
|MFC|X||X|
|C++ AMP|X|x||

> [!NOTE]
> Le app scritte in C + + / CLI e destinazione di .NET Framework 4 vengono eseguiti in Windows XP e Windows Server 2003.

### <a name="differences-between-the-toolsets"></a>Differenze tra i set di strumenti

A causa delle differenze nel supporto di piattaforme e librerie, l'esperienza di sviluppo per le app che usano un set di strumenti della piattaforma Windows XP non è completa come per le app che usano set strumenti della piattaforma Visual Studio l'impostazione predefinita.

- **Funzionalità del linguaggio C++**

   Solo funzionalità del linguaggio C++ implementata in Visual Studio 2012 sono supportate nelle App che usano il v110\_xp set strumenti della piattaforma. Solo funzionalità del linguaggio C++ implementata in Visual Studio 2013 sono supportate nelle App che usano il v120\_xp set strumenti della piattaforma. Solo funzionalità del linguaggio C++ implementata in Visual Studio 2015 sono supportate nelle App che usano il v140\_xp set strumenti della piattaforma. Visual Studio Usa il compilatore corrispondente quando esegue le compilazioni usando il set di strumenti di piattaforma meno recenti. Usare il set di strumenti della piattaforma Windows XP più recente per sfruttare i vantaggi delle funzionalità del linguaggio C++ aggiuntive implementate in tale versione del compilatore.

- **Debug remoto**

   Remote Tools per Visual Studio non supporta il debug remoto in Windows XP o Windows Server 2003. Per eseguire il debug di un'app quando è in esecuzione in Windows XP o Windows Server 2003, è possibile utilizzare un debugger da una versione precedente di Visual Studio per eseguire il debug in locale o remoto. Ciò è simile all'esecuzione del debug di un'app in Windows Vista, che supporta il runtime del set di strumenti della piattaforma, ma non il debug remoto.

- **Analisi statica**

   I set di strumenti della piattaforma Windows XP non supportano l'analisi statica in quanto le annotazioni SAL per il SDK di Windows 7 e le librerie di runtime non sono compatibili. Quando si desidera eseguire l'analisi statica in un'app che supporta Windows XP o Windows Server 2003, è possibile passare temporaneamente la soluzione per il set di strumenti della piattaforma predefinito per eseguire l'analisi e quindi tornare a set strumenti della piattaforma di Windows XP per compilare l'app.

- **Debug della grafica DirectX**

   Poiché il Debugger della grafica non supporta l'API di Direct3D 9, non può essere utilizzato per eseguire il debug di App che usano Direct3D in Windows XP o Windows Server 2003. Tuttavia, se l'app implementa un renderer alternativo che usa le API Direct3D 10 o Direct3D 11 API, il debugger grafica può essere usato per diagnosticare i problemi mediante tali API.

- **Compilazione HLSL**

   Per impostazione predefinita, il set di strumenti di Windows XP non compila i file di codice sorgente HLSL. Per compilare i file HLSL, scaricare e installare DirectX SDK di giugno 2010, quindi impostare le directory VC del progetto per includerlo. Per altre informazioni, vedere la "DirectX SDK non registra i percorsi di inclusione e della libreria con Visual Studio 2010" sezione del [giugno 2010 pagina di download di DirectX SDK](http://www.microsoft.com/download/details.aspx?displaylang=en&id=6812).
