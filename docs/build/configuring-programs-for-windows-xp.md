---
title: Configurazione di programmi per Windows XP
description: Come installare e usare i set di strumenti C++ di Windows XP in Visual Studio.
ms.date: 03/16/2020
ms.assetid: 1e4487b3-d815-4123-878b-5718b22f0fd5
ms.openlocfilehash: 92364d7fd25ac617baacc125b279fb0ee9c92f62
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440475"
---
# <a name="configuring-programs-for-windows-xp"></a>Configurazione di programmi per Windows XP

Visual Studio supporta più set di strumenti della piattaforma. Ciò significa che è possibile fare riferimento a sistemi operativi e librerie di runtime non supportati dal set di strumenti predefinito. Se ad esempio si cambia il set di strumenti della piattaforma, è possibile usare il compilatore C++ di Visual Studio 2017 per creare app destinate a Windows XP e Windows Server 2003. È anche possibile usare set di strumenti della piattaforma meno recenti per mantenere il codice legacy compatibile con il codice binario sfruttando comunque le funzionalità più recenti dell'IDE di Visual Studio.

::: moniker range="vs-2019"

Il set di strumenti V142 fornito in Visual Studio 2019 non include il supporto per la creazione di codice per Windows XP. Il supporto per lo sviluppo di Windows XP con il set di strumenti di Visual Studio 2017 v141_xp è disponibile come opzione del singolo componente nel Programma di installazione di Visual Studio.

::: moniker-end

## <a name="install-the-windows-xp-platform-toolset"></a>Installare il set di strumenti della piattaforma di Windows XP

::: moniker range="<=vs-2017"

Per ottenere i componenti e il set di strumenti della piattaforma Visual Studio 2017 per Windows XP e Windows Server 2003, eseguire il Programma di installazione di Visual Studio. Quando si installa inizialmente Visual Studio o quando si modifica un'installazione esistente, assicurarsi che sia selezionato il carico **di lavoro sviluppo di applicazioni desktop con C++** . Nell'elenco dei componenti facoltativi di questo carico di lavoro selezionare **Supporto Windows XP per C++** e quindi scegliere **Installa** o **Modifica**.

::: moniker-end

::: moniker range="vs-2019"

Per ottenere i componenti e il set di strumenti della piattaforma v141_xp destinati a Windows XP e Windows Server 2003, eseguire il Programma di installazione di Visual Studio. Quando si installa inizialmente Visual Studio o quando si modifica un'installazione esistente, assicurarsi che sia selezionato il carico **di lavoro sviluppo di applicazioni desktop con C++** . Nella scheda **singoli componenti** , in **compilatori, strumenti di compilazione e Runtime**, scegliere **supporto C++ per Windows XP per gli strumenti \[di Visual Studio 2017 (V141) deprecato]**, quindi scegliere **Installa** o **Modifica**.

::: moniker-end

## <a name="windows-xp-targeting-experience"></a>Esperienza destinata a Windows XP

Il set di strumenti della piattaforma Windows XP incluso in Visual Studio è una versione di Windows 7 SDK, ma usa il compilatore C++ di Visual Studio 2017. Configura inoltre le proprietà del progetto in base ai valori predefiniti appropriati, ad esempio specificando un linker compatibile per supportare una versione precedente. Solo le app desktop di Windows create con un set di strumenti della piattaforma Windows XP possono essere eseguite in Windows XP e Windows Server 2003. Queste app possono essere eseguite anche in sistemi operativi Windows più recenti.

### <a name="to-target-windows-xp"></a>Per usare Windows XP

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.

1. Nella finestra di dialogo **pagine delle proprietà** per il progetto selezionare **Proprietà** > di configurazione**generale**. Impostare la proprietà set di **strumenti della piattaforma** sul set di strumenti di Windows XP preferito. Ad esempio, scegliere **Visual Studio 2017 - Windows XP (v141_xp)** per creare codice per Windows XP e Windows Server 2003 usando il compilatore Microsoft C++ in Visual Studio 2017.

### <a name="c-runtime-support"></a>Supporto di C++ runtime

Insieme al set di strumenti della piattaforma Windows XP, diverse librerie includono il supporto di runtime per Windows XP e Windows Server 2003. Queste librerie sono: la libreria di runtime C (CRT), la libreria standard C++, Active Template Library (ATL), la libreria di runtime di concorrenza (ConCRT), la libreria PPL (Parallel Patterns Library), la libreria Microsoft Foundation Class (MFC) e la libreria C++ AMP (C++ Accelerated Massive). Per questi sistemi operativi, le versioni minime supportate sono: Windows XP Service Pack 3 (SP3) per x86, Windows XP Service Pack 2 (SP2) per x64 e Windows Server 2003 Service Pack 2 (SP2) sia per x86 che per x64.

Queste librerie sono supportate dai set di strumenti della piattaforma installati da Visual Studio, a seconda della destinazione:

|Libreria|Set di strumenti della piattaforma predefinito per il supporto delle app desktop Windows|Set di strumenti della piattaforma predefinito per il supporto delle app dello Store|Set di strumenti della piattaforma di Windows XP per il supporto di Windows XP, Windows Server 2003|
|---|---|---|---|
|CRT|X|X|X|
|Libreria standard C++|X|X|X|
|ATL|X|X|X|
|ConCRT/PPL|X|X|X|
|MFC|X||X|
|C++ AMP|X|X||

> [!NOTE]
> Le app scritte in C++/CLI per .NET Framework 4 vengono eseguite in Windows XP e Windows Server 2003.

### <a name="differences-between-the-toolsets"></a>Differenze tra i set di strumenti

A causa delle differenze nel supporto della piattaforma e della libreria, l'esperienza di sviluppo per le app che usano un set di strumenti della piattaforma Windows XP non è completa come per le app che usano il set di strumenti predefinito della piattaforma Visual Studio.

- **Funzionalità del linguaggio C++**

   Nelle app che usano il set di strumenti della piattaforma v110\_xp sono supportate solo le funzionalità del linguaggio C++ implementate in Visual Studio 2012. Nelle app che usano il set di strumenti della piattaforma v120\_xp sono supportate solo le funzionalità del linguaggio C++ implementate in Visual Studio 2013. Nelle app che usano il set di strumenti della piattaforma v140\_xp sono supportate solo le funzionalità del linguaggio C++ implementate in Visual Studio 2015. Nelle app che usano il set di strumenti della piattaforma V141\_XP sono supportate solo le funzionalità del linguaggio C++ implementate in Visual Studio 2017. Visual Studio usa il compilatore corrispondente quando esegue le compilazioni con set di strumenti della piattaforma precedenti. Usare il set di strumenti della piattaforma di Windows XP più recente per sfruttare le funzionalità aggiuntive del linguaggio C++ implementate in tale versione del compilatore.

- **Debug remoto**

   Remote Tools per Visual Studio non supporta il debug remoto in Windows XP o Windows Server 2003. Per eseguire il debug di un'app in locale o in remoto in Windows XP o Windows Server 2003, usare un debugger di una versione precedente di Visual Studio. Il debug di un'app in Windows Vista è simile a quello di una destinazione di runtime del set di strumenti della piattaforma, ma non di una destinazione di debug remoto.

- **Analisi statica**

   I set di strumenti della piattaforma di Windows XP non supportano l'analisi statica, perché le annotazioni SAL per Windows 7 SDK e le librerie di runtime non sono compatibili. È comunque possibile eseguire l'analisi statica in un'app che supporta Windows XP o Windows Server 2003. Passare temporaneamente alla soluzione come destinazione del set di strumenti della piattaforma predefinito per l'analisi e quindi tornare al set di strumenti della piattaforma Windows XP per compilare l'app.

- **Debug della grafica DirectX**

   Poiché il debugger della grafica non supporta l'API Direct3D 9, non può essere usato per eseguire il debug di app che usano Direct3D in Windows XP o Windows Server 2003. Tuttavia, se l'app implementa un Renderer alternativo basato su API Direct3D 10 o Direct3D 11, è possibile usare il debugger della grafica per diagnosticare i problemi.

- **Compilazione HLSL**

   Il set di strumenti di Windows XP non compila i file del codice sorgente HLSL per impostazione predefinita. Per compilare i file HLSL, scaricare e installare DirectX SDK di giugno 2010, quindi impostare le directory VC del progetto per includerlo. Per altre informazioni, vedere la sezione "DirectX SDK Does Not Register Include/Library Paths with Visual Studio 2010" (DirectX SDK non registra i percorsi di inclusione e della libreria con Visual Studio 2010) della [pagina di download di DirectX SDK giugno 2010](https://www.microsoft.com/download/details.aspx?displaylang=en&id=6812).
