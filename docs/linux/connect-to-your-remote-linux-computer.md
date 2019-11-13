---
title: Connettersi al sistema Linux di destinazione in Visual Studio
description: Come connettersi a un computer Linux remoto o a un sottosistema Windows per Linux dall'interno di un C++ progetto di Visual Studio.
ms.date: 11/09/2019
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
ms.openlocfilehash: 6f7116ab5dc6c77f88d0787beac32d1c1e0a4716
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966579"
---
# <a name="connect-to-your-target-linux-system-in-visual-studio"></a>Connettersi al sistema Linux di destinazione in Visual Studio

::: moniker range="vs-2015"

Il supporto per Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

È possibile configurare un progetto Linux destinato a un computer remoto o al sottosistema Windows per Linux (WSL). Per i computer remoti, e per WSL in Visual Studio 2017, è necessario configurare una connessione remota.

## <a name="connect-to-a-remote-linux-computer"></a>Connettersi a un computer Linux remoto

Quando si compila C++ un progetto Linux per un sistema Linux remoto (macchina virtuale o computer fisico), il codice sorgente Linux viene copiato nel computer Linux remoto. Viene quindi compilato in base alle impostazioni di Visual Studio.

Per configurare la connessione remota:

1. Compilare il progetto per la prima volta. In alternativa, è possibile creare una nuova voce manualmente. Selezionare **strumenti > opzioni**, aprire il nodo **multipiattaforma > Gestione connessione** , quindi scegliere il pulsante **Aggiungi** .

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

   È possibile usare una password o un file di chiave e una passphrase per l'autenticazione. Per molti scenari di sviluppo, l'autenticazione della password è sufficiente. Se si preferisce usare un file di chiavi pubblica/privata, è possibile crearne uno nuovo oppure [usarne uno esistente](https://security.stackexchange.com/questions/10203/reusing-private-public-keys). Sono attualmente supportate solo le chiavi RSA e DSA.

   È possibile creare un file di chiavi RSA privato seguendo questa procedura:

   1. Nel computer Windows creare la coppia di chiavi ssh con `ssh-keygen -t rsa`. Il comando crea una chiave pubblica e una chiave privata. Per impostazione predefinita, inserisce le chiavi in `C:\Users\%USERNAME%\.ssh`, usando i nomi `id_rsa.pub` e `id_rsa`.

   1. Da Windows, copiare la chiave pubblica nel computer Linux: `scp -p C:\Users\%USERNAME%\.ssh\id_rsa.pub user@hostname`.

   1. Nel sistema Linux aggiungere la chiave all'elenco delle chiavi autorizzate e assicurarsi che il file abbia le autorizzazioni corrette: `cat ~/id_rsa.pub >> ~/.ssh/authorized_keys; chmod 600 ~/.ssh/authorized_keys`

1. Scegliere il pulsante **Connetti** per tentare una connessione al computer remoto.

   Se la connessione ha esito positivo, Visual Studio inizierà a configurare IntelliSense per usare le intestazioni remote. Per altre informazioni, vedere [IntelliSense per le intestazioni nei sistemi remoti](configure-a-linux-project.md#remote_intellisense).

   Se la connessione non riesce, le caselle delle voci che devono essere modificate sono evidenziate in rosso.

   ![Errore Gestione connessioni](media/settings_connectionmanagererror.png)

   Se si usano i file di chiave per l'autenticazione, verificare che il server SSH del computer di destinazione sia in esecuzione e configurato correttamente.

   ::: moniker-end

   ::: moniker range="vs-2019"

   Passare a **Strumenti > Opzioni > Multipiattaforma > Registrazione** per abilitare la registrazione per la risoluzione dei problemi di connessione:

   ![Registrazione remota](media/remote-logging-vs2019.png)

   I log includono le connessioni, tutti i comandi inviati al computer remoto (testo, codice di uscita e tempo di esecuzione) e tutto l'output da Visual Studio alla shell. La registrazione funziona per qualsiasi progetto CMake multipiattaforma o per un progetto Linux basato su MSBuild in Visual Studio.

   È possibile configurare l'output in modo che venga indirizzato a un file o al riquadro **Registrazione multipiattaforma** nella finestra di output. Per i progetti Linux basati su MSBuild, i comandi MSBuild inviati al computer remoto non vengono indirizzati al **finestra di output** perché vengono emessi out-of-process. Vengono invece registrati in un file con prefisso "msbuild_".

## <a name="tcp-port-forwarding"></a>Porting porta TCP

Il supporto Linux di Visual Studio presenta una dipendenza dall'invio della porta TCP. **Rsync** e **gdbserver** saranno interessati se l'invio della porta TCP è disabilitato nel sistema remoto. 

rsync viene usato dai progetti Linux basati su MSBuild e dai progetti CMake per [copiare le intestazioni dal sistema remoto a Windows per l'uso da parte di IntelliSense](configure-a-linux-project.md#remote_intellisense). Quando non è possibile abilitare l'invio della porta TCP, disabilitare il download automatico delle intestazioni remote. Per disabilitarlo, utilizzare **strumenti > opzioni > multipiattaforma > gestione connessione > gestione IntelliSense per le intestazioni remote**. Se nel sistema remoto non è abilitato l'invio della porta TCP, questo errore viene visualizzato quando viene avviato il download delle intestazioni remote per IntelliSense:

![Errore intestazioni](media/port-forwarding-headers-error.png)

Rsync viene usato anche dal supporto CMake di Visual Studio per copiare i file di origine nel sistema remoto. Se non è possibile abilitare l'invio porta TCP, è possibile usare SFTP come metodo per le origini di copia remote. SFTP è spesso più lento rispetto a rsync, ma non ha una dipendenza dall'invio della porta TCP. È possibile gestire il metodo di origini di copia remote con la proprietà **remoteCopySourcesMethod** nell' [Editor delle impostazioni CMake](../build/cmakesettings-reference.md#additional-settings-for-cmake-linux-projects). Se l'invio della porta TCP è disabilitato nel sistema remoto, verrà visualizzato un errore nella finestra di output di CMake la prima volta che richiama rsync.

![Errore rsync](media/port-forwarding-copy-error.png)

Gdbserver può essere usato per eseguire il debug su dispositivi incorporati. Se non è possibile abilitare l'invio della porta TCP, è necessario usare gdb per tutti gli scenari di debug remoto. Per impostazione predefinita, GDB viene usato per il debug di progetti in un sistema remoto.

::: moniker-end

## <a name="connect-to-wsl"></a>Connettersi a WSL

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
