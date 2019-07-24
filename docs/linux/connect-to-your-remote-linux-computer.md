---
title: Connettersi al sistema Linux di destinazione in Visual Studio
description: Come connettersi a un computer Linux remoto o a WSL dall'interno di un progetto di Visual Studio C++.
ms.date: 06/19/2019
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
ms.openlocfilehash: cd107f096e4395f93775ee80b889cc0efd627166
ms.sourcegitcommit: 610751254a01cba6ad15fb1e1764ecb2e71f66bf
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 07/18/2019
ms.locfileid: "68313424"
---
# <a name="connect-to-your-target-linux-system-in-visual-studio"></a>Connettersi al sistema Linux di destinazione in Visual Studio

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

È possibile configurare un progetto Linux destinato a un computer remoto o al sottosistema Windows per Linux (WSL). Per i computer remoti, e per WSL in Visual Studio 2017, è necessario configurare una connessione remota. 

## <a name="connect-to-a-remote-linux-computer"></a>Connettersi a un computer Linux remoto

Durante la compilazione di un progetto Linux C++ per un sistema Linux remoto (macchina virtuale o computer fisico), il codice sorgente Linux viene copiato nel computer Linux remoto, quindi compilato in base alle impostazioni di Visual Studio.

Per configurare la connessione remota:

1. Compilare il progetto per la prima volta oppure creare manualmente una nuova voce selezionando **Strumenti > Opzioni** e quindi aprire il nodo **Multipiattaforma > Gestione connessioni** e fare clic sul pulsante **Aggiungi**.

   ![Gestione connessioni](media/settings_connectionmanager.png)

   In entrambi gli scenari viene visualizzata la finestra **Connect to Remote System** (Connetti al sistema remoto).

   ![Connect to Remote System (Connetti al sistema remoto)](media/connect.png)

1. Immettere le informazioni seguenti:

   | Voce | DESCRIZIONE
   | ----- | ---
   | **Nome host**           | Nome o indirizzo IP del dispositivo di destinazione
   | **Porta**                | Porta sui cui è in esecuzione il servizio SSH, solitamente 22
   | **Nome utente**           | Utente da autenticare
   | **Tipo di autenticazione** | Sono supportate sia le password che le chiavi private
   | **Password**            | Password per il nome utente immesso
   | **File di chiave privata**    | File di chiave privata creato per la connessione SSH
   | **Passphrase**          | Passphrase usata con la chiave privata selezionata in precedenza

   Per l'autenticazione è possibile usare una password o un file di chiavi e una passphrase. Per molti scenari di sviluppo, l'autenticazione della password è sufficiente. Se si preferisce usare un file di chiavi pubblica/privata, è possibile crearne uno nuovo oppure [usarne uno esistente](https://security.stackexchange.com/questions/10203/reusing-private-public-keys). Sono attualmente supportate solo le chiavi RSA e DSA. 
   
   È possibile creare un file di chiavi RSA privato seguendo questa procedura:

    1. Nel computer Windows creare la coppia di chiavi ssh con `ssh-keygen -t rsa`. Verranno create una chiave pubblica e una chiave privata. Per impostazione predefinita, le chiavi vengono posizionate in `C:\Users\%USERNAME%\.ssh` con i nomi `id_rsa.pub` e `id_rsa`.

    1. Da Windows, copiare la chiave pubblica nel computer Linux: `scp -p C:\Users\%USERNAME%\.ssh\id_rsa.pub user@hostname`.

    1. Nel sistema Linux aggiungere la chiave all'elenco delle chiavi autorizzate e assicurarsi che il file abbia le autorizzazioni corrette: `cat ~/id_rsa.pub >> ~/.ssh/authorized_keys; chmod 600 ~/.ssh/authorized_keys`

1. Fare clic sul pulsante **Connetti** per tentare una connessione al computer remoto. 

   Se la connessione ha esito positivo, Visual Studio inizierà a configurare IntelliSense per usare le intestazioni remote. Per altre informazioni, vedere [IntelliSense per le intestazioni nei sistemi remoti](configure-a-linux-project.md#remote_intellisense).

   Se la connessione non riesce, le caselle delle voci che devono essere modificate sono evidenziate in rosso.

   ![Errore Gestione connessioni](media/settings_connectionmanagererror.png)

   Se si usano i file di chiavi per l'autenticazione, verificare che il server SSH del computer di destinazione sia in esecuzione e configurato correttamente.

   ::: moniker-end

   ::: moniker range="vs-2019"

   Passare a **Strumenti > Opzioni > Multipiattaforma > Registrazione** per abilitare la registrazione per la risoluzione dei problemi di connessione:

   ![Registrazione remota](media/remote-logging-vs2019.png)

   I log includono le connessioni, tutti i comandi inviati al computer remoto (testo, codice di uscita e tempo di esecuzione) e tutto l'output da Visual Studio alla shell. La registrazione funziona per qualsiasi progetto CMake multipiattaforma o per un progetto Linux basato su MSBuild in Visual Studio.

   È possibile configurare l'output in modo che venga indirizzato a un file o al riquadro **Registrazione multipiattaforma** nella finestra di output. Per i progetti Linux basati su MSBuild, i comandi inviati al computer remoto da MSBuild non vengono indirizzati alla **finestra di output** perché sono out-of-process. Vengono invece registrati in un file con il prefisso "msbuild_".

   ::: moniker-end

## <a name="connect-to-wsl"></a>Connettersi a WSL

::: moniker range="vs-2017"

In Visual Studio 2017 è possibile connettersi al sottosistema Windows per Linux (WSL) usando la stessa procedura valida per la connessione a un computer Linux remoto, come descritto in precedenza in questo articolo. Usare **localhost** per **Nome host**.

::: moniker-end

::: moniker range="vs-2019"

In Visual Studio 2019 versione 16.1 è stato aggiunto il supporto nativo per l'utilizzo di C++ con il [sottosistema Windows per Linux (WSL)](https://docs.microsoft.com/windows/wsl/about).  Ciò significa che non è più necessario aggiungere una connessione remota o configurare SSH per compilare ed eseguire il debug nell'installazione WSL locale. Informazioni dettagliate su [come installare WSL](https://docs.microsoft.com/windows/wsl/install-win10) sono disponibili qui.

Per configurare l'installazione di WSL in modo che funzioni con Visual Studio, è necessario aver installato gli strumenti seguenti: GCC, GDB, make, rsync e zip. È possibile installarli in distribuzioni che usano APT con questo comando: 

```bash
sudo apt install g++ gdb make rsync zip
```

Per configurare il progetto per WSL, vedere [Configurare un progetto Linux](configure-a-linux-project.md) oppure [Configurare un progetto CMake per Linux](cmake-linux-project.md) a seconda del tipo di progetto disponibile. Per seguire le istruzioni dettagliate per la creazione di una applicazione console semplice con WSL, vedere il post di blog introduttivo [C++ with Visual Studio 2019 and the Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/) (C++ con Visual Studio 2019 e il sottosistema Windows per Linux (WSL)).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Configurare un progetto Linux](configure-a-linux-project.md)<br />
[Configurare un progetto CMake per Linux](cmake-linux-project.md)<br />
[Distribuire, eseguire ed eseguire il debug del progetto Linux](deploy-run-and-debug-your-linux-project.md)<br />




