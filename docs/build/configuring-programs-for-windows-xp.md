---
title: Configurazione di programmi per Windows XP
ms.date: 05/16/2019
ms.assetid: 1e4487b3-d815-4123-878b-5718b22f0fd5
ms.openlocfilehash: 55753737b4868f33487ed980eaf37a8801f59638
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66450698"
---
# <a name="configuring-programs-for-windows-xp"></a>Configurazione di programmi per Windows XP

Poiché Visual Studio supporta più set di strumenti della piattaforma, è possibile considerare sistemi operativi e librerie di runtime non supportati dal set di strumenti predefinito. Ad esempio, cambiando set di strumenti della piattaforma è possibile usare i miglioramenti dei linguaggi C++11, C++14 e C++17 supportati dal compilatore MSVC in Visual Studio per creare app destinate a Windows XP e Windows Server 2003. È anche possibile usare set di strumenti della piattaforma meno recenti per mantenere il codice legacy compatibile con il codice binario sfruttando comunque le funzionalità più recenti dell'IDE di Visual Studio.

Visual Studio 2019 e versioni successive non include il supporto per la creazione di codice per Windows XP con il set di strumenti v142. Il supporto per lo sviluppo di Windows XP con il set di strumenti v141 incluso in Visual Studio 2017 è disponibile come componente facoltativo del programma di installazione di Visual Studio.

## <a name="install-the-windows-xp-platform-toolset"></a>Installare il set di strumenti della piattaforma di Windows XP

Per ottenere i componenti e il set di strumenti della piattaforma per Windows XP e Windows Server 2003 in Visual Studio 2017, eseguire il programma di installazione di Visual Studio. Quando si installa Visual Studio per la prima volta o si sceglie **Modifica** per modificare un'installazione esistente, assicurarsi che sia selezionato il carico di lavoro **Sviluppo di applicazioni desktop con C++** . Nell'elenco dei componenti facoltativi di questo carico di lavoro selezionare **Supporto Windows XP per C++** e quindi scegliere **Installa** o **Modifica**.

## <a name="windows-xp-targeting-experience"></a>Esperienza destinata a Windows XP

Il set di strumenti della piattaforma di Windows XP incluso in Visual Studio è una versione di Windows 7 SDK, ma usa il compilatore C++ corrente. Configura inoltre le proprietà del progetto in base ai valori predefiniti appropriati, ad esempio specificando un linker compatibile per supportare una versione precedente. Solo le app desktop Windows create usando il set di strumenti della piattaforma di Windows XP vengono eseguite in Windows XP e Windows Server 2003, ma queste app possono essere eseguite anche in sistemi operativi Windows più recenti.

#### <a name="to-target-windows-xp"></a>Per usare Windows XP

1. In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.

1. Nella finestra di dialogo **Pagine delle proprietà** del progetto impostare in **Proprietà di configurazione** > **Generale** la proprietà **Set strumenti della piattaforma** sul set di strumenti di Windows XP desiderato. Ad esempio, scegliere **Visual Studio 2017 - Windows XP (v141_xp)** per creare codice per Windows XP e Windows Server 2003 usando il compilatore Microsoft C++ in Visual Studio 2017.

### <a name="c-runtime-support"></a>Supporto di C++ runtime

Oltre al set di strumenti della piattaforma di Windows XP, la libreria di runtime C (CRT), la libreria standard C++, la libreria ATL (Active Template Library), la libreria runtime di concorrenza (ConCRT), la libreria PPL (Parallel Patterns Library), la libreria Microsoft Foundation Class (MFC) e la libreria C++ AMP (C++ Accelerated Massive Parallelism) includono anche il supporto del runtime per Windows XP e Windows Server 2003. Per questi sistemi operativi, le versioni minime supportate sono Windows XP Service Pack 3 (SP3) per x86, Windows XP Service Pack 2 (SP2) per x64 e Windows Server 2003 Service Pack 2 (SP2) per x86 e x64.

Queste librerie sono supportate dai set di strumenti della piattaforma installati da Visual Studio, a seconda della destinazione:

|Libreria|Set di strumenti della piattaforma predefinito per il supporto delle app desktop Windows|Set di strumenti della piattaforma predefinito per il supporto delle app dello Store|Set di strumenti della piattaforma di Windows XP per il supporto di Windows XP, Windows Server 2003|
|---|---|---|---|
|CRT|x|x|x|
|Libreria standard C++|x|x|x|
|ATL|x|x|x|
|ConCRT/PPL|x|x|x|
|MFC|x||x|
|C++ AMP|x|x||

> [!NOTE]
> Le app scritte in C++/CLI per .NET Framework 4 vengono eseguite in Windows XP e Windows Server 2003.

### <a name="differences-between-the-toolsets"></a>Differenze tra i set di strumenti

A causa delle differenze nel supporto di piattaforme e librerie, l'esperienza di sviluppo per le app che usano un set di strumenti della piattaforma per Windows XP non è completa come per le app che usano il set di strumenti della piattaforma predefinito per Visual Studio.

- **Funzionalità del linguaggio C++**

   Nelle app che usano il set di strumenti della piattaforma v110\_xp sono supportate solo le funzionalità del linguaggio C++ implementate in Visual Studio 2012. Nelle app che usano il set di strumenti della piattaforma v120\_xp sono supportate solo le funzionalità del linguaggio C++ implementate in Visual Studio 2013. Nelle app che usano il set di strumenti della piattaforma v140\_xp sono supportate solo le funzionalità del linguaggio C++ implementate in Visual Studio 2015. Visual Studio usa il compilatore corrispondente quando esegue le compilazioni con set di strumenti della piattaforma precedenti. Usare il set di strumenti della piattaforma di Windows XP più recente per sfruttare le funzionalità aggiuntive del linguaggio C++ implementate in tale versione del compilatore.

- **Debug remoto**

   Remote Tools per Visual Studio non supporta il debug remoto in Windows XP o Windows Server 2003. Per eseguire il debug di un'app in esecuzione in Windows XP o Windows Server 2003, è possibile usare un debugger di una versione precedente di Visual Studio per eseguirne il debug in locale o remoto. Ciò è simile all'esecuzione del debug di un'app in Windows Vista, che supporta il runtime del set di strumenti della piattaforma, ma non il debug remoto.

- **Analisi statica**

   I set di strumenti della piattaforma di Windows XP non supportano l'analisi statica, perché le annotazioni SAL per Windows 7 SDK e le librerie di runtime non sono compatibili. Quando si vuole eseguire l'analisi statica su un'app che supporta Windows XP o Windows Server 2003, è possibile passare temporaneamente al set di strumenti della piattaforma predefinito per eseguire l'analisi e quindi tornare al set di strumenti della piattaforma di Windows XP per compilare l'app.

- **Debug della grafica DirectX**

   Poiché lo strumento Debugger grafica non supporta l'API Direct3D 9, non può essere usato per eseguire il debug delle app che usano Direct3D in Windows XP o Windows Server 2003. Tuttavia, se l'app implementa un renderer alternativo che usa le API Direct3D 10 o Direct3D 11 API, il debugger grafica può essere usato per diagnosticare i problemi mediante tali API.

- **Compilazione HLSL**

   Per impostazione predefinita, il set di strumenti di Windows XP non compila i file di codice sorgente HLSL. Per compilare i file HLSL, scaricare e installare DirectX SDK di giugno 2010, quindi impostare le directory VC del progetto per includerlo. Per altre informazioni, vedere la sezione "DirectX SDK Does Not Register Include/Library Paths with Visual Studio 2010" (DirectX SDK non registra i percorsi di inclusione e della libreria con Visual Studio 2010) della [pagina di download di DirectX SDK giugno 2010](https://www.microsoft.com/download/details.aspx?displaylang=en&id=6812).
