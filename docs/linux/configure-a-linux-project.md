---
title: Configurare un progetto Linux | Microsoft Docs
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-linux
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 4d7c6adf-54b9-4b23-bd23-5de0c825b768
author: BrianPeek
ms.author: brpeek
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 9a3239120ccdbc533c5063c50a523ad84774f81c
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---

# <a name="configure-a-linux-project"></a>Configurare un progetto Linux

## <a name="general-settings"></a>Impostazioni generali
Con Visual Studio è possibile configurare un'ampia gamma di opzioni per un progetto Linux.  Per visualizzare queste opzioni, selezionare il menu **Progetto > Proprietà** o fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e selezionare **Proprietà** dal menu di scelta rapida:

![Impostazioni di configurazione generali](media/settings_general.png)

Per impostazione predefinita, lo strumento genera un file eseguibile con estensione out.  Per compilare una libreria statica o dinamica, o per usare un makefile esistente, usare **Tipo configurazione**.

## <a name="remote-settings"></a>Impostazioni remote
Per modificare le impostazioni relative al computer Linux remoto, selezionare **Impostazioni remote**:

![Impostazioni remote](media/settings_remote.png)

* Per modificare il computer Linux di destinazione, usare **Computer di destinazione**.  In questo modo sarà possibile selezionare una delle connessioni create in precedenza.  Per creare una nuova voce, vedere [Connessione al computer Linux remoto](connect-to-your-remote-linux-computer.md).

* La **Directory radice remota** determina il percorso radice in cui viene compilato il progetto nel computer Linux remoto.  Se non vengono apportate modifiche, per impostazione predefinita sarà **~/projects**.

* La **Directory del progetto remota** è quella in cui verrà compilato il progetto specifico nel computer Linux remoto.  Per impostazione predefinita, sarà **$(directoryradiceremota)/$(nomeprogetto)**, che si espanderà in una directory denominata come il progetto corrente, nella directory radice impostata in precedenza.

* Infine, per modificare compilatori C e C++ predefiniti, o il Linker e l'Archiver usati per compilare il progetto, usare le voci corrispondenti nella sezione **Impostazioni predefinite strumenti**.  Ad esempio, è possibile scegliere di usare una versione specifica di GCC o persino il compiler Clang.

## <a name="vc-directories"></a>Directory di VC++
Per impostazione predefinita, Visual Studio non comprende alcun file di inclusione a livello di sistema da computer Linux.  Ad esempio, gli elementi della directory **/usr/include** non sono presenti in Visual Studio.  Per il supporto completo di [IntelliSense](/visualstudio/ide/using-intellisense), sarà necessario copiare i file in un percorso nel computer di sviluppo e configurare Visual Studio in modo che scelga tale percorso.  È possibile, ad esempio, usare SCP (Secure Copy) per copiare i file.  In Windows 10 è possibile usare [Bash in Windows](https://msdn.microsoft.com/commandline/wsl/about) per eseguire SCP.  Per le versioni precedenti di Windows, è possibile usare ad esempio [PSCP (PuTTY Secure Copy)](http://www.chiark.greenend.org.uk/~sgtatham/putty/download.html).

È possibile copiare i file usando un comando simile al seguente:

`scp -r linux_username@remote_host:/usr/include .`

Naturalmente, sostituire i valori di **linux_username** e **remote_host** riportati sopra in modo che siano appropriati all'ambiente.

Una volta copiati i file, usare **Directory di VC++** nelle proprietà del progetto per indicare a Visual Studio dove trovare i file di inclusione aggiuntivi che sono stati appena copiati.

![Directory di VC++](media/settings_directories.png)

## <a name="copy-sources"></a>Copia origini
Durante la compilazione, i file origine del computer di sviluppo vengono copiati nel computer Linux dove vengono poi compilati.  Per impostazione predefinita, tutti i file di origine del progetto di Visual Studio vengono copiati nel percorso impostato sopra.  Tuttavia,è anche possibile aggiungere file di origine aggiuntivi all'elenco oppure disabilitare totalmente la copia di file di origine. Quest'ultima è l'impostazione predefinita per i progetti makefile.

* **Origini da copiare** determina quali file di origine vengono copiati nel computer remoto.  Per impostazione predefinita, **@(SourcesToCopyRemotely)** corrisponde a tutti i file di codice sorgente nel progetto, ma non include i file di asset o risorsa, ad esempio le immagini.

* L'opzione **Copia origini** può essere attivata e disattivata per attivare e disattivare la copia dei file di origine nel computer remoto.

* **Altre origini da copiare** consente di aggiungere file di origine che verranno copiati nel sistema remoto.  È possibile specificare un elenco delimitato da punti e virgola, oppure usare la sintassi **:=** per specificare un nome locale e remoto da usare:

  `C:\Projects\ConsoleApplication1\MyFile.cpp:=~/projects/ConsoleApplication1/ADifferentName.cpp;C:\Projects\ConsoleApplication1\MyFile2.cpp:=~/projects/ConsoleApplication1/ADifferentName2.cpp;`

## <a name="build-events"></a>Eventi di compilazione
Poiché tutta la compilazione avviene in un computer remoto, sono stati aggiunti diversi eventi alla sezione Eventi di compilazione in Proprietà del progetto.  Si tratta di **Evento pre-compilazione remota**, **Evento di pre-collegamento remoto**, e **Evento di post-compilazione remota** che verranno eseguiti nel computer remoto prima o dopo i singoli passaggi del processo.

![Eventi di compilazione](media/settings_buildevents.png)

## <a name="see-also"></a>Vedere anche
[Working with Project Properties](../ide/working-with-project-properties.md) (Utilizzo di Proprietà del progetto)
