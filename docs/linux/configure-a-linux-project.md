---
title: Configurare un progetto C++ MSBuild per Linux in Visual Studio
ms.date: 08/06/2020
description: Configurare un progetto Linux basato su MSBuild in Visual Studio in modo da poterlo compilare.
ms.assetid: 4d7c6adf-54b9-4b23-bd23-5de0c825b768
ms.openlocfilehash: 4e99645eea89682b4beac5452da01755ea555ec4
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90685956"
---
# <a name="configure-a-linux-msbuild-c-project-in-visual-studio"></a>Configurare un progetto C++ MSBuild per Linux in Visual Studio

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

Questo argomento descrive come configurare un progetto Linux basato su MSBuild come descritto in [creare un progetto Linux MSBuild C++ in Visual Studio](create-a-new-linux-project.md). Per i progetti CMake Linux, vedere [configurare un progetto CMake per Linux](cmake-linux-project.md).

È possibile configurare un progetto Linux in modo che abbia come destinazione una macchina Linux fisica, una macchina virtuale o il [sottosistema Windows per Linux](/windows/wsl/about) (WSL).

::: moniker range="vs-2019"

**Visual Studio 2019 versione 16,1**:

- Quando la destinazione è WSL, è possibile evitare le operazioni di copia necessarie per la compilazione e IntelliSense quando le destinazioni sono i sistemi Linux remoti.

- È possibile specificare destinazioni Linux separate per la compilazione e il debug.

::: moniker-end

## <a name="general-settings"></a>Impostazioni generali

Per visualizzare le opzioni di configurazione, selezionare il menu **> Proprietà progetto** oppure fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e scegliere **proprietà** dal menu di scelta rapida. Vengono visualizzate le impostazioni **Generale**.

![Configurazione generale](media/settings_general.png)

Per impostazione predefinita, viene generato un file eseguibile con estensione out. Per compilare una libreria statica o dinamica, o per usare un makefile esistente, usare l'impostazione **Tipo di configurazione**.

Per altre informazioni sulle impostazioni nelle pagine delle proprietà, vedere [Informazioni di riferimento sulla pagina delle proprietà di un progetto Linux](prop-pages-linux.md).

## <a name="remote-settings"></a>Impostazioni remote

Per modificare le impostazioni relative al computer Linux remoto, configurare le impostazioni remote visualizzate in [generale](prop-pages/general-linux.md).

- Per specificare un computer Linux di destinazione remoto, usare la voce **Computer di compilazione remota**. In questo modo sarà possibile selezionare una delle connessioni create in precedenza. Per creare una nuova voce, vedere [Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md).

   ![Computer di generazione](media/remote-build-machine-vs2019.png)

   ::: moniker range="vs-2019"

   **Visual Studio 2019 versione 16,1**: per fare riferimento al sottosistema Windows per Linux, fare clic sulla freccia verso il basso per il **set di strumenti della piattaforma** e scegliere **WSL_1_0**. Le altre opzioni remote scompariranno e al loro posto verrà visualizzato il percorso alla shell WSL predefinita:

   ![Computer di generazione WSL](media/wsl-remote-vs2019.png)

   Se si hanno installazioni WSL side-by-side, è possibile specificare un percorso diverso. Per altre informazioni sulla gestione di più distribuzioni, vedere [Gestire e configurare il sottosistema Windows per Linux](/windows/wsl/wsl-config#set-a-default-distribution).

   È possibile specificare una destinazione diversa per il debug nella pagina **Proprietà di configurazione** > **Debug**.

   ::: moniker-end

- La **directory radice di compilazione remota** determina il percorso radice in cui viene compilato il progetto nel computer Linux remoto. Se non vengono apportate modifiche, per impostazione predefinita sarà **~/projects**.

- La **directory del progetto di compilazione remota** è quella in cui verrà compilato il progetto specifico nel computer Linux remoto. Per impostazione predefinita, sarà **$(directoryradiceremota)/$(nomeprogetto)**, che si espanderà in una directory denominata come il progetto corrente, nella directory radice impostata in precedenza.

> [!NOTE]
> Per modificare compilatori C e C++ predefiniti o il linker e l'archiver usati per compilare il progetto, usare le voci corrispondenti nella sezione **C/C++ > Generale** e nella sezione **Linker > General**. È possibile ad esempio specificare una versione specifica di GCC o Clang. Per altre informazioni, vedere [Proprietà C/C++ (Linux C++)](prop-pages/c-cpp-linux.md) e [Proprietà del linker (Linux C++)](prop-pages/linker-linux.md).

## <a name="copy-sources-remote-systems-only"></a>Copiare le origini (solo sistemi remoti)

::: moniker range="vs-2019"

Questa sezione non si applica quando la destinazione è WSL.

::: moniker-end

Durante la compilazione in sistemi remoti, i file di origine del computer di sviluppo vengono copiati nel computer Linux dove vengono poi compilati. Per impostazione predefinita, tutti i file di origine del progetto di Visual Studio vengono copiati nel percorso impostato sopra. Tuttavia,è anche possibile aggiungere file di origine aggiuntivi all'elenco oppure disabilitare totalmente la copia di file di origine. Quest'ultima è l'impostazione predefinita per i progetti makefile.

- **Origini da copiare** determina quali file di origine vengono copiati nel computer remoto. Per impostazione predefinita, il valore predefinito di ** \@ (SourcesToCopyRemotely)** è tutti i file del codice sorgente nel progetto, ma non tutti i file di asset o risorse, ad esempio le immagini.

- L'opzione **Copia origini** può essere attivata e disattivata per attivare e disattivare la copia dei file di origine nel computer remoto.

- **Ulteriori origini da copiare** consentono di aggiungere ulteriori file di origine, che verranno copiati nel sistema remoto. È possibile specificare un elenco delimitato da punti e virgola, oppure usare la sintassi **:=** per specificare un nome locale e remoto da usare:

`C:\Projects\ConsoleApplication1\MyFile.cpp:=~/projects/ConsoleApplication1/ADifferentName.cpp;C:\Projects\ConsoleApplication1\MyFile2.cpp:=~/projects/ConsoleApplication1/ADifferentName2.cpp;`

## <a name="build-events"></a>Eventi di compilazione

Poiché tutta la compilazione avviene in un computer remoto (o WSL), sono stati aggiunti diversi eventi alla sezione Eventi di compilazione in Proprietà del progetto. Si tratta di **Evento pre-compilazione remota**, **Evento di pre-collegamento remoto** ed **Evento di post-compilazione remota** che verranno eseguiti nel computer remoto prima o dopo i singoli passaggi del processo.

![Eventi di compilazione](media/settings_buildevents.png)

## <a name="intellisense-for-headers-on-remote-systems"></a><a name="remote_intellisense"></a> IntelliSense per le intestazioni nei sistemi remoti

Quando si aggiunge una nuova connessione in **Gestione connessione**, Visual Studio rileva automaticamente le directory di inclusione per il compilatore nel sistema remoto. Visual Studio quindi comprime e copia i file in una directory nel computer Windows locale. Successivamente, ogni volta che si usa la connessione in un progetto Visual Studio o CMake, le intestazioni in tali directory vengono usate per gestire IntelliSense.

> [!NOTE]
> In Visual Studio 2019 versione 16,5 e successive la copia dell'intestazione remota è stata ottimizzata. Le intestazioni vengono ora copiate su richiesta quando si apre un progetto Linux o si configura CMake per una destinazione Linux. La copia viene eseguita in background per ogni progetto, in base ai compilatori specificati del progetto. Per altre informazioni, vedere [miglioramenti all'accuratezza e alle prestazioni di IntelliSense per Linux](https://devblogs.microsoft.com/cppblog/improvements-to-accuracy-and-performance-of-linux-intellisense/).

Questa funzionalità dipende dal computer Linux in cui è installato il file ZIP. Per installare lo ZIP usare questo comando apt-get:

```cmd
sudo apt install zip
```

Per gestire la cache di intestazione, passare a **Strumenti > Opzioni, Multipiattaforma > Gestione connessione > Gestione intestazioni remote per IntelliSense**. Per aggiornare la cache di intestazione dopo aver apportato le modifiche nel computer Linux, selezionare la connessione remota e quindi selezionare **Aggiorna**. Selezionare **Elimina** per rimuovere le intestazioni senza eliminare la connessione stessa. Selezionare **Esplora** per aprire la directory locale in **Esplora file**. Considerare questa cartella come di sola lettura. Per scaricare le intestazioni per una connessione esistente creata prima di Visual Studio 2017 versione 15.3, selezionare la connessione e quindi **Scarica**.

::: moniker range="vs-2017"

![Screenshot che mostra la finestra di dialogo Opzioni con la gestione connessione multipiattaforma > > le intestazioni remote gestione IntelliSense selezionata.](media/remote-header-intellisense.png)

::: moniker-end

::: moniker range="vs-2019"

![Screenshot che mostra la finestra di dialogo Opzioni con la gestione connessione > multipiattaforma selezionata.](media/connection-manager-vs2019.png)

È possibile abilitare la registrazione per la risoluzione dei problemi:

![Registrazione remota](media/remote-logging-vs2019.png)

::: moniker-end

## <a name="linux-target-locale"></a><a name="locale"></a> Impostazioni locali di destinazione per Linux

Le impostazioni della lingua di Visual Studio non vengono propagate a destinazioni Linux perché Visual Studio non gestisce o configura i pacchetti installati. I messaggi visualizzati nella finestra di **output** , ad esempio gli errori di compilazione, vengono visualizzati usando la lingua e le impostazioni locali della destinazione Linux. È necessario configurare le destinazioni di Linux per le impostazioni locali desiderate.

## <a name="see-also"></a>Vedere anche

[Impostare il compilatore e le proprietà di compilazione](../build/working-with-project-properties.md)<br/>
[Proprietà generali di C++ (Linux C++)](prop-pages/general-linux.md)<br/>
[Directory di VC++ (Linux C++)](prop-pages/directories-linux.md)<br/>
[Proprietà di un progetto Copia origini (Linux C++)](prop-pages/copy-sources-project.md)<br/>
[Proprietà di un evento di compilazione (Linux C++)](prop-pages/build-events-linux.md)
