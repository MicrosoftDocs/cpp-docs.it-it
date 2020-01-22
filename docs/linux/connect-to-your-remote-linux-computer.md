---
title: Connettersi al sistema Linux di destinazione in Visual Studio
description: Come connettersi a un computer Linux remoto o a un sottosistema Windows per Linux dall'interno di un C++ progetto di Visual Studio.
ms.date: 01/17/2020
ms.openlocfilehash: d0065b63d7a81d3ae3d68b26184c88aca77f601c
ms.sourcegitcommit: a930a9b47bd95599265d6ba83bb87e46ae748949
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2020
ms.locfileid: "76518218"
---
# <a name="connect-to-your-target-linux-system-in-visual-studio"></a>Connettersi al sistema Linux di destinazione in Visual Studio

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range="vs-2017"

È possibile configurare un progetto Linux destinato a un computer remoto o al sottosistema Windows per Linux (WSL). Per i computer remoti e per WSL, è necessario configurare una connessione remota in Visual Studio 2017.

::: moniker-end

::: moniker range="vs-2019"

È possibile configurare un progetto Linux destinato a un computer remoto o al sottosistema Windows per Linux (WSL). Per un computer remoto, è necessario configurare una connessione remota in Visual Studio. Per connettersi a WSL, passare alla sezione [connessione a WSL](#connect-to-wsl) .

::: moniker-end

::: moniker range=">=vs-2017"

Quando si usa una connessione remota, Visual Studio C++ compila i progetti Linux nel computer remoto. Non è importante se si tratta di un computer fisico, di una macchina virtuale nel cloud o di WSL.
Per compilare il progetto, Visual Studio copia il codice sorgente nel computer Linux remoto. Quindi, il codice viene compilato in base alle impostazioni di Visual Studio.

::: moniker-end

::: moniker range="vs-2019"

> [!NOTE]
> Visual Studio 2019 versione 16,5 e versioni successive supporta anche connessioni crittografiche compatibili con FIPS (Secure, Federal Information Processing Standard (FIPS) 140-2 a sistemi Linux per lo sviluppo remoto. Per utilizzare una connessione conforme a FIPS, attenersi alla procedura descritta in [configurare lo sviluppo di Linux remoto protetto con FIPS](set-up-fips-compliant-secure-remote-linux-development.md) .

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="set-up-the-ssh-server-on-the-remote-system"></a>Configurare il server SSH nel sistema remoto

Se ssh non è già configurato e in esecuzione nel sistema Linux, attenersi alla procedura seguente per installarlo. Gli esempi in questo articolo usano Ubuntu 18,04 LTS con OpenSSH server versione 7,6. Tuttavia, le istruzioni devono essere le stesse per qualsiasi distribuzione usando una versione moderatamente recente di OpenSSH.

1. Nel sistema Linux installare e avviare il server OpenSSH:

   ```bash
   sudo apt install openssh-server
   sudo service ssh start
   ```

1. Se si vuole che il server SSH venga avviato automaticamente all'avvio del sistema, abilitarlo usando systemctl:

   ```bash
   sudo systemctl enable ssh
   ```

## <a name="set-up-the-remote-connection"></a>Configurare la connessione remota

1. In Visual Studio scegliere **strumenti > opzioni** nella barra dei menu per aprire la finestra di dialogo **Opzioni** . Selezionare quindi **multipiattaforma > gestione connessione** per aprire la finestra di dialogo Gestione connessione.

   Se non è stata configurata una connessione in Visual Studio prima, quando si compila il progetto per la prima volta, Visual Studio apre la finestra di dialogo Gestione connessione.

1. Nella finestra di dialogo Gestione connessione scegliere il pulsante **Aggiungi** per aggiungere una nuova connessione.

   ![Gestione connessioni](media/settings_connectionmanager.png)

   In entrambi gli scenari viene visualizzata la finestra **Connetti al sistema remoto** .

   ![Connect to Remote System (Connetti al sistema remoto)](media/connect.png)

1. Immettere le informazioni seguenti:

   | Voce | Descrizione
   | ----- | ---
   | **Nome host**           | Nome o indirizzo IP del dispositivo di destinazione
   | **Porta**                | Porta sui cui è in esecuzione il servizio SSH, solitamente 22
   | **Nome utente**           | Utente da autenticare
   | **Tipo di autenticazione** | La password e la chiave privata sono entrambe supportate
   | **Password**            | Password per il nome utente immesso
   | **File di chiave privata**    | File di chiave privata creato per la connessione SSH
   | **Passphrase**          | Passphrase usata con la chiave privata selezionata in precedenza

   È possibile usare una password o un file di chiave e una passphrase per l'autenticazione. Per molti scenari di sviluppo, l'autenticazione della password è sufficiente, ma i file di chiave sono più sicuri. Se si dispone già di una coppia di chiavi, è possibile riutilizzarla. Attualmente Visual Studio supporta solo le chiavi RSA e DSA per le connessioni remote.

1. Scegliere il pulsante **Connetti** per tentare una connessione al computer remoto.

   Se la connessione ha esito positivo, Visual Studio configura IntelliSense per l'uso delle intestazioni remote. Per altre informazioni, vedere [IntelliSense per le intestazioni nei sistemi remoti](configure-a-linux-project.md#remote_intellisense).

   Se la connessione non riesce, le caselle delle voci che devono essere modificate sono evidenziate in rosso.

   ![Errore Gestione connessioni](media/settings_connectionmanagererror.png)

   Se si usano i file di chiave per l'autenticazione, verificare che il server SSH del computer di destinazione sia in esecuzione e configurato correttamente.

   ::: moniker-end

   ::: moniker range="vs-2019"

## <a name="logging-for-remote-connections"></a>Registrazione per le connessioni remote

   È possibile abilitare la registrazione per risolvere i problemi di connessione. Nella barra dei menu selezionare **strumenti > opzioni**. Nella finestra di dialogo **Opzioni** selezionare **multipiattaforma > registrazione**:

   ![Registrazione remota](media/remote-logging-vs2019.png)

   I log includono le connessioni, tutti i comandi inviati al computer remoto (testo, codice di uscita e tempo di esecuzione) e tutto l'output da Visual Studio alla shell. La registrazione funziona per qualsiasi progetto CMake multipiattaforma o per un progetto Linux basato su MSBuild in Visual Studio.

   È possibile configurare l'output per passare a un file o al riquadro **registrazione multipiattaforma** nella finestra output. Per i progetti Linux basati su MSBuild, i comandi MSBuild inviati al computer remoto non vengono indirizzati al **finestra di output** perché vengono emessi out-of-process. Vengono invece registrati in un file con prefisso "msbuild_".

## <a name="command-line-utility-for-the-connection-manager"></a>Utilità della riga di comando per la gestione connessione  

**Visual studio 2019 versione 16,5 o successiva**: ConnectionManager. exe è un'utilità da riga di comando per gestire le connessioni di sviluppo remoto all'esterno di Visual Studio. È utile per attività come il provisioning di un nuovo computer di sviluppo. In alternativa, è possibile usarlo per configurare Visual Studio per l'integrazione continua. Per esempi e un riferimento completo al comando ConnectionManager, vedere [ConnectionManager Reference](connectionmanager-reference.md).  

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="tcp-port-forwarding"></a>Porting porta TCP

Il supporto Linux di Visual Studio presenta una dipendenza dall'invio della porta TCP. **Rsync** e **gdbserver** sono interessati se l'invio della porta TCP è disabilitato nel sistema remoto. Se si è interessati da questa dipendenza, è possibile votare questo ticket di [Suggerimento](https://developercommunity.visualstudio.com/idea/840265/dont-rely-on-ssh-tcp-port-forwarding-for-c-remote.html) sulla community degli sviluppatori.

rsync viene usato dai progetti Linux basati su MSBuild e dai progetti CMake per [copiare le intestazioni dal sistema remoto a Windows per l'uso da parte di IntelliSense](configure-a-linux-project.md#remote_intellisense). Quando non è possibile abilitare l'invio della porta TCP, disabilitare il download automatico delle intestazioni remote. Per disabilitarlo, utilizzare **strumenti > opzioni > multipiattaforma > gestione connessione > gestione IntelliSense per le intestazioni remote**. Se nel sistema remoto non è abilitato l'invio della porta TCP, questo errore viene visualizzato quando viene avviato il download delle intestazioni remote per IntelliSense:

![Errore intestazioni](media/port-forwarding-headers-error.png)

rsync viene usato anche dal supporto CMake di Visual Studio per copiare i file di origine nel sistema remoto. Se non è possibile abilitare l'invio porta TCP, è possibile usare SFTP come metodo per le origini di copia remote. SFTP è spesso più lento rispetto a rsync, ma non ha una dipendenza dall'invio della porta TCP. È possibile gestire il metodo di origini di copia remote con la proprietà **remoteCopySourcesMethod** nell' [Editor delle impostazioni CMake](../build/cmakesettings-reference.md#additional-settings-for-cmake-linux-projects). Se l'invio della porta TCP è disabilitato nel sistema remoto, verrà visualizzato un errore nella finestra di output di CMake la prima volta che richiama rsync.

![Errore rsync](media/port-forwarding-copy-error.png)

gdbserver può essere usato per eseguire il debug su dispositivi incorporati. Se non è possibile abilitare l'invio della porta TCP, è necessario usare gdb per tutti gli scenari di debug remoto. per impostazione predefinita, GDB viene usato per il debug di progetti in un sistema remoto.

## <a name="connect-to-wsl"></a>Connettersi a WSL

::: moniker-end

::: moniker range="vs-2017"

In Visual Studio 2017 si usano gli stessi passaggi per connettersi a WSL quando si usa per un computer Linux remoto. Usare **localhost** per **Nome host**.

::: moniker-end

::: moniker range="vs-2019"

In Visual Studio 2019 versione 16.1 è stato aggiunto il supporto nativo per l'utilizzo di C++ con il [sottosistema Windows per Linux (WSL)](/windows/wsl/about). Ciò significa che è possibile compilare ed eseguire il debug direttamente nell'installazione WSL locale. Non è più necessario aggiungere una connessione remota o configurare SSH. Informazioni dettagliate su [come installare WSL](/windows/wsl/install-win10) sono disponibili qui.

Per configurare l'installazione di WSL in modo che funzioni con Visual Studio, è necessario che siano installati gli strumenti seguenti: gcc o Clang, GDB, make, rsync e zip. È possibile installarli in distribuzioni che usano APT usando questo comando, che installa anche il compilatore g + +:

```bash
sudo apt install g++ gdb make rsync zip
```

Per altre informazioni, vedere [scaricare, installare e configurare il carico di lavoro Linux](download-install-and-setup-the-linux-development-workload.md).

Per configurare un progetto MSBuild per WSL, vedere [configurare un progetto Linux](configure-a-linux-project.md). Per configurare un progetto CMake per WSL, vedere [configurare un progetto CMake per Linux](cmake-linux-project.md). Per seguire le istruzioni dettagliate per la creazione di una applicazione console semplice con WSL, vedere il post di blog introduttivo [C++ with Visual Studio 2019 and the Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/) (C++ con Visual Studio 2019 e il sottosistema Windows per Linux (WSL)).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Configurare un progetto Linux](configure-a-linux-project.md)\
[Configurare un progetto CMake per Linux](cmake-linux-project.md)\
[Distribuire, eseguire ed eseguire il debug del progetto Linux](deploy-run-and-debug-your-linux-project.md)\
[Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md)
