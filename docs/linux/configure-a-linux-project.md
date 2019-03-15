---
title: Configurare un progetto C++ Linux in Visual Studio
ms.date: 11/12/2018
ms.assetid: 4d7c6adf-54b9-4b23-bd23-5de0c825b768
ms.openlocfilehash: 0d0825a3aca8ca03759d7f7b42db90ce9700c10b
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57745191"
---
# <a name="configure-a-linux-project"></a>Configurare un progetto Linux

Questo argomento illustra come configurare un progetto Linux C++ basato su un modello di progetto Linux in Visual Studio. Per informazioni sui progetti Linux CMake in Visual Studio, vedere [Configurare un progetto CMake per Linux](cmake-linux-project.md).

## <a name="general-settings"></a>Impostazioni generali

Con Visual Studio è possibile configurare un'ampia gamma di opzioni per un progetto Linux.  Per visualizzare queste opzioni, selezionare il menu **Progetto > Proprietà** o fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e scegliere **Proprietà** dal menu di scelta rapida. Vengono visualizzate le impostazioni **Generale**.

![Impostazioni di configurazione generali](media/settings_general.png)

Per impostazione predefinita, lo strumento genera un file eseguibile con estensione out.  Per compilare una libreria statica o dinamica, o per usare un makefile esistente, usare **Tipo configurazione**.

Per altre informazioni sulle opzioni nelle pagine delle proprietà, vedere [Informazioni di riferimento sulla pagina delle proprietà di un progetto Linux](prop-pages-linux.md).

## <a name="remote-settings"></a>Impostazioni remote

Per modificare le impostazioni relative al computer Linux remoto, configurare le opzioni remote visualizzate nelle impostazioni [Generale](prop-pages/general-linux.md):

- Per modificare il computer Linux di destinazione, usare la voce **Computer di compilazione remota**.  In questo modo sarà possibile selezionare una delle connessioni create in precedenza.  Per creare una nuova voce, vedere [Connessione al computer Linux remoto](connect-to-your-remote-linux-computer.md).

- La **directory radice di compilazione remota** determina il percorso radice in cui viene compilato il progetto nel computer Linux remoto.  Se non vengono apportate modifiche, per impostazione predefinita sarà **~/projects**.

- La **directory del progetto di compilazione remota** è quella in cui verrà compilato il progetto specifico nel computer Linux remoto.  Per impostazione predefinita, sarà **$(directoryradiceremota)/$(nomeprogetto)**, che si espanderà in una directory denominata come il progetto corrente, nella directory radice impostata in precedenza.

> [!NOTE]
> Per modificare compilatori C e C++ predefiniti o il linker e l'archiver usati per compilare il progetto, usare le voci corrispondenti nella sezione **C/C++ > Generale** e nella sezione **Linker > General**.  Ad esempio, è possibile scegliere di usare una versione specifica di GCC o persino il compiler Clang. Per altre informazioni, vedere [Proprietà C/C++ (Linux C++)](prop-pages/c-cpp-linux.md) e [Proprietà del linker (Linux C++)](prop-pages/linker-linux.md).

## <a name="include-directories-and-intellisense-support"></a>Directory di inclusione e supporto IntelliSense

**Visual Studio 2017 versione 15.6 e precedenti:**<br/>
Per impostazione predefinita, Visual Studio non comprende alcun file di inclusione a livello di sistema da computer Linux.  Ad esempio, gli elementi della directory **/usr/include** non sono presenti in Visual Studio.
Per il supporto completo di [IntelliSense](/visualstudio/ide/using-intellisense), sarà necessario copiare i file in un percorso nel computer di sviluppo e configurare Visual Studio in modo che scelga tale percorso.  È possibile, ad esempio, usare SCP (Secure Copy) per copiare i file.  In Windows 10 è possibile usare [Bash in Windows](https://msdn.microsoft.com/commandline/wsl/about) per eseguire SCP.  Per le versioni precedenti di Windows, è possibile usare ad esempio [PSCP (PuTTY Secure Copy)](http://www.chiark.greenend.org.uk/~sgtatham/putty/download.html).

È possibile copiare i file usando un comando simile al seguente:

`scp -r linux_username@remote_host:/usr/include .`

Naturalmente, sostituire i valori di **linux_username** e **remote_host** riportati sopra in modo che siano appropriati all'ambiente.

Una volta copiati i file, usare **Directory di VC++** nelle proprietà del progetto per indicare a Visual Studio dove trovare i file di inclusione aggiuntivi che sono stati appena copiati.

![Directory di VC++](media/settings_directories.png)

**Visual Studio 2017 versione 15.7 e successive:**<br/>
Vedere [Gestire le intestazioni remote per IntelliSense](#remote_intellisense).

## <a name="copy-sources"></a>Copia origini

Durante la compilazione, i file origine del computer di sviluppo vengono copiati nel computer Linux dove vengono poi compilati.  Per impostazione predefinita, tutti i file di origine del progetto di Visual Studio vengono copiati nel percorso impostato sopra.  Tuttavia,è anche possibile aggiungere file di origine aggiuntivi all'elenco oppure disabilitare totalmente la copia di file di origine. Quest'ultima è l'impostazione predefinita per i progetti makefile.

- **Origini da copiare** determina quali file di origine vengono copiati nel computer remoto.  Per impostazione predefinita, **\@(SourcesToCopyRemotely)** corrisponde a tutti i file di codice sorgente nel progetto, ma non include i file di asset o risorsa, ad esempio le immagini.

- L'opzione **Copia origini** può essere attivata e disattivata per attivare e disattivare la copia dei file di origine nel computer remoto.

- **Altre origini da copiare** consente di aggiungere file di origine che verranno copiati nel sistema remoto.  È possibile specificare un elenco delimitato da punti e virgola, oppure usare la sintassi **:=** per specificare un nome locale e remoto da usare:

`C:\Projects\ConsoleApplication1\MyFile.cpp:=~/projects/ConsoleApplication1/ADifferentName.cpp;C:\Projects\ConsoleApplication1\MyFile2.cpp:=~/projects/ConsoleApplication1/ADifferentName2.cpp;`

## <a name="build-events"></a>Eventi di compilazione

Poiché tutta la compilazione avviene in un computer remoto, sono stati aggiunti diversi eventi alla sezione Eventi di compilazione in Proprietà del progetto.  Si tratta di **Evento pre-compilazione remota**, **Evento di pre-collegamento remoto** ed **Evento di post-compilazione remota** che verranno eseguiti nel computer remoto prima o dopo i singoli passaggi del processo.

![Eventi di compilazione](media/settings_buildevents.png)

## <a name="remote_intellisense"></a> IntelliSense per le intestazioni remote (Visual Studio 2017 15.7 e versioni successive)

Quando si aggiunge una nuova connessione in **Gestione connessione**, Visual Studio rileva automaticamente le directory di inclusione per il compilatore nel sistema remoto. Visual Studio quindi comprime e copia i file in una directory nel computer Windows locale. Successivamente, ogni volta che si usa la connessione in un progetto Visual Studio o CMake, le intestazioni in tali directory vengono usate per gestire IntelliSense.

Questa funzionalità dipende dal computer Linux in cui è installato il file ZIP. Per installare lo ZIP usare questo comando apt-get:

```cmd
apt install zip
```

Per gestire la cache di intestazione, passare a **Strumenti > Opzioni, Multipiattaforma > Gestione connessione > Gestione intestazioni remote per IntelliSense**. Per aggiornare la cache di intestazione dopo aver apportato le modifiche nel computer Linux, selezionare la connessione remota e quindi selezionare **Aggiorna**. Selezionare **Elimina** per rimuovere le intestazioni senza eliminare la connessione stessa. Selezionare **Esplora** per aprire la directory locale in **Esplora file**. Considerare questa cartella come di sola lettura. Per scaricare le intestazioni per una connessione esistente creata prima della versione 15.3, selezionare la connessione e quindi **Scarica**.

![IntelliSense per le intestazioni remote](media/remote-header-intellisense.png)

## <a name="see-also"></a>Vedere anche

[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)<br/>
[Proprietà generali di C++ (Linux C++)](prop-pages/general-linux.md)<br/>
[Directory di VC++ (Linux C++)](prop-pages/directories-linux.md)<br/>
[Proprietà di un progetto Copia origini (Linux C++)](prop-pages/copy-sources-project.md)<br/>
[Proprietà di un evento di compilazione (Linux C++)](prop-pages/build-events-linux.md)
