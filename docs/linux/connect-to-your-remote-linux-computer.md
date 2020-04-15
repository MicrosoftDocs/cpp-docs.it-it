---
title: Connettersi al sistema Linux di destinazione in Visual Studio
description: Come connettersi a un computer Linux remoto o a un sottosistema Windows per Linux dall'interno di un progetto di Visual Studio.
ms.date: 01/17/2020
ms.openlocfilehash: 624dce6bb05e4f4a961628e0c6f455e11c14dff8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364357"
---
# <a name="connect-to-your-target-linux-system-in-visual-studio"></a>Connettersi al sistema Linux di destinazione in Visual Studio

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range="vs-2017"

È possibile configurare un progetto Linux destinato a un computer remoto o al sottosistema Windows per Linux (WSL). Sia per i computer remoti che per WSL, è necessario configurare una connessione remota in Visual Studio 2017.

::: moniker-end

::: moniker range="vs-2019"

È possibile configurare un progetto Linux destinato a un computer remoto o al sottosistema Windows per Linux (WSL). Per un computer remoto, è necessario configurare una connessione remota in Visual Studio.For a remote machine, you need to set up a remote connection in Visual Studio. Per connettersi a WSL, passare alla sezione [Connetti a WSL.](#connect-to-wsl)

::: moniker-end

::: moniker range=">=vs-2017"

Quando si utilizza una connessione remota, Visual Studio compila i progetti Linux di C, nel computer remoto. Non importa se si tratta di una macchina fisica, una macchina virtuale nel cloud o WSL.
Per compilare il progetto, Visual Studio copia il codice sorgente nel computer Linux remoto. Quindi, il codice viene compilato in base alle impostazioni di Visual Studio.Then, the code gets compiled based on Visual Studio settings.

::: moniker-end

::: moniker range="vs-2019"

> [!NOTE]
> Visual Studio 2019 versione 16.5 e successive supporta anche connessioni crittografiche sicure e compatibili con FIPS (Federal Information Processing Standard) 140-2 asistemi Linux per lo sviluppo remoto. Per utilizzare una connessione compatibile con FIPS, seguire invece la procedura descritta in Configurare lo sviluppo Linux remoto sicuro compatibile con [FIPS.](set-up-fips-compliant-secure-remote-linux-development.md)

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="set-up-the-ssh-server-on-the-remote-system"></a>Configurare il server SSH nel sistema remoto

Se ssh non è già configurato e in esecuzione sul sistema Linux, attenersi alla seguente procedura per installarlo. Gli esempi in questo articolo usano Ubuntu 18.04 LTS con il server OpenSSH versione 7.6. Tuttavia, le istruzioni dovrebbero essere le stesse per qualsiasi distro utilizzando una versione moderatamente recente di OpenSSH.

1. Nel sistema Linux, installare e avviare il server OpenSSH:

   ```bash
   sudo apt install openssh-server
   sudo service ssh start
   ```

1. Se si desidera che il server ssh venga avviato automaticamente all'avvio del sistema, abilitarlo utilizzando systemctl:

   ```bash
   sudo systemctl enable ssh
   ```

## <a name="set-up-the-remote-connection"></a>Configurare la connessione remota

1. In Visual Studio scegliere Strumenti > Opzioni sulla barra dei menu per aprire la finestra di dialogo Opzioni.In Visual Studio, choose **Tools > Options** on the menu bar to open the **Options** dialog. Selezionare **quindi Multipiattaforma > Connection Manager** per aprire la finestra di dialogo Gestione connessione.

   Se non è stata configurata una connessione in Visual Studio prima, quando si compila il progetto per la prima volta, Visual Studio apre automaticamente la finestra di dialogo Gestione connessione.

1. Nella finestra di dialogo Gestione connessione scegliere il pulsante **Aggiungi** per aggiungere una nuova connessione.

   ![Gestione connessione](media/settings_connectionmanager.png)

   In entrambi gli scenari, viene visualizzata la finestra **Connetti al sistema remoto.**

   ![Connect to Remote System (Connetti al sistema remoto)](media/connect.png)

1. Immettere le seguenti informazioni:

   | Voce | Descrizione
   | ----- | ---
   | **Nome host**           | Nome o indirizzo IP del dispositivo di destinazione
   | **Porta**                | Porta sui cui è in esecuzione il servizio SSH, solitamente 22
   | **Nome utente**           | Utente da autenticare
   | **Tipo di autenticazione** | Password e chiave privata sono entrambi supportati
   | **Password**            | Password per il nome utente immesso
   | **File di chiave privata**    | File di chiave privata creato per la connessione SSH
   | **Passphrase**          | Passphrase usata con la chiave privata selezionata in precedenza

   È possibile utilizzare una password o un file di chiave e una passphrase per l'autenticazione. Per molti scenari di sviluppo, l'autenticazione con password è sufficiente, ma i file chiave sono più sicuri. Se si dispone già di una coppia di chiavi, è possibile riutilizzarla. Attualmente Visual Studio supporta solo chiavi RSA e DSA per le connessioni remote.

1. Scegliere il pulsante **Connetti** per tentare una connessione al computer remoto.

   Se la connessione ha esito positivo, Visual Studio configura IntelliSense per utilizzare le intestazioni remote. Per altre informazioni, vedere [IntelliSense per le intestazioni nei sistemi remoti](configure-a-linux-project.md#remote_intellisense).

   Se la connessione non riesce, le caselle delle voci che devono essere modificate sono evidenziate in rosso.

   ![Errore Gestione connessioni](media/settings_connectionmanagererror.png)

   Se si utilizzano i file di chiave per l'autenticazione, assicurarsi che il server SSH del computer di destinazione sia in esecuzione e configurato correttamente.

   ::: moniker-end

   ::: moniker range="vs-2019"

## <a name="logging-for-remote-connections"></a>Registrazione per le connessioni remoteLogging for remote connections

   È possibile abilitare la registrazione per risolvere i problemi di connessione. Nella barra dei menu, selezionare **Strumenti > Opzioni**. Nella finestra di dialogo **Opzioni,** selezionare **Registrazione > multipiattaforma:**

   ![Registrazione remota](media/remote-logging-vs2019.png)

   I log includono le connessioni, tutti i comandi inviati al computer remoto (testo, codice di uscita e tempo di esecuzione) e tutto l'output da Visual Studio alla shell. La registrazione funziona per qualsiasi progetto CMake multipiattaforma o per un progetto Linux basato su MSBuild in Visual Studio.

   È possibile configurare l'output in modo che vada a un file o al riquadro **Registrazione multipiattaforma** nella finestra Output.You can configure the output to go to a file or to the Cross Platform Logging pane in the Output window. Per i progetti Linux basati su MSBuild, i comandi MSBuild inviati al computer remoto non vengono instradati alla finestra di **output** perché vengono emessi fuori processo. Al contrario, vengono registrati in un file, con un prefisso "msbuild_".

## <a name="command-line-utility-for-the-connection-manager"></a>Utilità della riga di comando per Connection Manager  

**Visual Studio 2019 versione 16.5 o successiva:** ConnectionManager.exe è un'utilità della riga di comando per gestire le connessioni di sviluppo remoto all'esterno di Visual StudioVisual Studio. È utile per attività come il provisioning di una nuova macchina di sviluppo. In alternativa, è possibile utilizzarlo per configurare Visual Studio per l'integrazione continua. Per esempi e un riferimento completo al comando ConnectionManager, vedere Informazioni di riferimento su [ConnectionManager](connectionmanager-reference.md).  

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="tcp-port-forwarding"></a>Inoltro delle porte TCP

Il supporto Linux di Visual Studio dipende dall'inoltro delle porte TCP. **Rsync** e **gdbserver** sono interessati se l'inoltro delle porte TCP è disabilitato nel sistema remoto. Se sei interessato da questa dipendenza, puoi attivare questo ticket di [suggerimento](https://developercommunity.visualstudio.com/idea/840265/dont-rely-on-ssh-tcp-port-forwarding-for-c-remote.html) nella community degli sviluppatori.

rsync viene utilizzato sia dai progetti Linux basati su MSBuild che dai progetti CMake per [copiare le intestazioni dal sistema remoto a Windows per l'utilizzo da parte](configure-a-linux-project.md#remote_intellisense)di IntelliSense . Quando non è possibile abilitare l'inoltro delle porte TCP, disabilitare il download automatico delle intestazioni remote. Per disabilitarlo, utilizzare **strumenti > Opzioni > Gestione connessione multipiattaforma > Connection Manager > Gestione IntelliSense intestazioni remote**. Se nel sistema remoto non è abilitato l'inoltro delle porte TCP, verrà visualizzato questo errore quando inizia il download delle intestazioni remote per IntelliSense:

![Errore di intestazioni](media/port-forwarding-headers-error.png)

rsync viene utilizzato anche dal supporto CMake di Visual Studio per copiare i file di origine nel sistema remoto. Se non è possibile abilitare l'inoltro delle porte TCP, è possibile utilizzare sftp come metodo di origine della copia remota. sftp è spesso più lento di rsync, ma non ha una dipendenza dall'inoltro delle porte TCP. È possibile gestire il metodo delle origini di copia remota con la proprietà **remoteCopySourcesMethod** [nell'Editor impostazioni CMake](../build/cmakesettings-reference.md#additional-settings-for-cmake-linux-projects). Se l'inoltro delle porte TCP è disabilitato nel sistema remoto, verrà visualizzato un errore nella finestra di output di CMake la prima volta che viene richiamato rsync.

![Errore Rsync](media/port-forwarding-copy-error.png)

gdbserver può essere utilizzato per il debug su dispositivi incorporati. Se non è possibile abilitare l'inoltro delle porte TCP, è necessario utilizzare gdb per tutti gli scenari di debug remoto. gdb viene utilizzato per impostazione predefinita durante il debug di progetti in un sistema remoto.

## <a name="connect-to-wsl"></a>Connettersi a WSL

::: moniker-end

::: moniker range="vs-2017"

In Visual Studio 2017, si usano gli stessi passaggi per connettersi a WSL come si utilizza per un computer Linux remoto. Usare **localhost** per **Nome host**.

::: moniker-end

::: moniker range="vs-2019"

In Visual Studio 2019 versione 16.1 è stato aggiunto il supporto nativo per l'utilizzo di C++ con il [sottosistema Windows per Linux (WSL)](/windows/wsl/about). Ciò significa che è possibile compilare ed eseguire direttamente il debug sull'installazione WSL locale. Non è più necessario aggiungere una connessione remota o configurare SSH. Informazioni dettagliate su [come installare WSL](/windows/wsl/install-win10) sono disponibili qui.

Per configurare l'installazione WSL per l'utilizzo con Visual Studio, sono necessari gli strumenti seguenti installati: gcc o clang, gdb, make, ninja-build (necessario solo per i progetti CMake che usano Visual Studio 2019 versione 16.6 o successiva), rsync e zip. È possibile installarli su distros che utilizzano apt utilizzando questo comando, che installa anche il compilatore g:

```bash
sudo apt install g++ gdb make ninja-build rsync zip
```

Per ulteriori informazioni, consultate [Scaricare, installare e configurare il carico](download-install-and-setup-the-linux-development-workload.md)di lavoro Linux.

Per configurare un progetto MSBuild per WSL, vedere [Configurare un progetto Linux.](configure-a-linux-project.md) Per configurare un progetto CMake per WSL, vedere [Configurare un progetto CMake Linux](cmake-linux-project.md). Per seguire le istruzioni dettagliate per la creazione di una applicazione console semplice con WSL, vedere il post di blog introduttivo [C++ with Visual Studio 2019 and the Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/) (C++ con Visual Studio 2019 e il sottosistema Windows per Linux (WSL)).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Configurare un progetto LinuxConfigure a Linux project](configure-a-linux-project.md)\
[Configurare un progetto Linux CMake](cmake-linux-project.md)\
[Distribuire, eseguire ed eseguire il debug del progetto LinuxDeploy, run, and debug your Linux project](deploy-run-and-debug-your-linux-project.md)\
[Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md)
