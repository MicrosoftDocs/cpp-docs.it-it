---
title: Configurare lo sviluppo Linux remoto sicuro conforme con FIPS
description: Come configurare una connessione crittografica compatibile con FIPS tra Visual Studio e un computer Linux per lo sviluppo remoto.
ms.date: 01/17/2020
ms.openlocfilehash: 9a0e87f4ddf69bf489b52d4f83934d3279f2d085
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "76520893"
---
# <a name="set-up-fips-compliant-secure-remote-linux-development"></a>Configurare lo sviluppo Linux remoto sicuro conforme con FIPS

::: moniker range="<=vs-2017"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive. Lo sviluppo Secure Remote Linux conforme a FIPS è disponibile in Visual Studio 2019 versione 16.5 e successive.

::: moniker-end

::: moniker range="vs-2019"

Federal Information Processing Standard (FIPS) Publication 140-2 è uno standard del governo degli Stati Uniti per i moduli crittografici. Le implementazioni dello standard sono convalidate dal NIST. Windows ha [convalidato il supporto per i moduli di crittografia compatibili con FIPS.](/windows/security/threat-protection/fips-140-validation) In Visual Studio 2019 versione 16.5 e successive, è possibile usare una connessione crittografica sicura e compatibile con FIPS al sistema Linux per lo sviluppo remoto.

Ecco come configurare una connessione sicura e compatibile con FIPS tra Visual Studio e il sistema Linux remoto. Questa guida è applicabile quando si compilano progetti Linux CMake o MSBuild in Visual Studio.This guide is applicable when you build CMake or MSBuild Linux projects in Visual Studio. Questo articolo è la versione compatibile con FIPS delle istruzioni di connessione in [Connect to your remote Linux computer](connect-to-your-remote-linux-computer.md).

## <a name="prepare-a-fips-compliant-connection"></a>Preparare una connessione compatibile con FIPS

È necessaria una certa preparazione per utilizzare una connessione ssh crittograficamente sicura e conforme a FIPS tra Visual Studio e il sistema Linux remoto. Per la conformità FIPS-140-2, Visual Studio supporta solo chiavi RSA.

Gli esempi in questo articolo usano Ubuntu 18.04 LTS con il server OpenSSH versione 7.6. Tuttavia, le istruzioni dovrebbero essere le stesse per qualsiasi distro utilizzando una versione moderatamente recente di OpenSSH.

### <a name="to-set-up-the-ssh-server-on-the-remote-system"></a>Per configurare il server SSH sul sistema remoto

1. Nel sistema Linux, installare e avviare il server OpenSSH:

   ```bash
   sudo apt install openssh-server
   sudo service ssh start
   ```

1. Se si desidera che il server ssh venga avviato automaticamente all'avvio del sistema, abilitarlo utilizzando systemctl:

   ```bash
   sudo systemctl enable ssh
   ```

1. Aprire */etc/ssh/sshd_config* come radice. Modificare (o aggiungere, se non esistono) le seguenti righe:

   ```config
   Ciphers aes256-cbc,aes192-cbc,aes128-cbc,3des-cbc
   HostKeyAlgorithms ssh-rsa
   KexAlgorithms diffie-hellman-group-exchange-sha256,diffie-hellman-group-exchange-sha1,diffie-hellman-group14-sha1
   MACs hmac-sha2-256,hmac-sha1
   ```

   > [!NOTE]
   > ssh-rsa è l'unico algoritmo di chiave host compatibile FIPS supportato da VS. Anche gli\*algoritmi aes -ctr sono FIPS compatibili, ma l'implementazione in Visual Studio non è approvata. Gli algoritmi di\* scambio delle chiavi ecdh- sono FIPS compatibili, ma Visual Studio non li supporta.

   Non sei limitato a queste opzioni. È possibile configurare ssh per l'utilizzo di crittografia aggiuntive, algoritmi a chiave host e così via. Alcune altre opzioni di sicurezza pertinenti `PermitRootLogin` `PasswordAuthentication`che `PermitEmptyPasswords`si consiglia di prendere in considerazione sono , , e . Per ulteriori informazioni, vedere la pagina man per sshd_config o l'articolo [Configurazione del server SSH](https://www.ssh.com/ssh/sshd_config).

1. Dopo aver salvato e chiuso sshd_config, riavviare il server ssh per applicare la nuova configurazione:

   ```bash
   sudo service ssh restart
   ```

Successivamente, verrà creata una coppia di chiavi RSA nel computer Windows. Quindi si copierà la chiave pubblica nel sistema Linux remoto per l'utilizzo da parte di ssh.

### <a name="to-create-and-use-an-rsa-key-file"></a>Per creare e utilizzare un file di chiave RSA

1. Nel computer Windows, generare una coppia di chiavi RSA pubblica/privata utilizzando questo comando:

   ```cmd
   ssh-keygen -t rsa -b 4096
   ```

   Il comando crea una chiave pubblica e una chiave privata. Per impostazione predefinita, le chiavi vengono salvate in *\\%USERPROFILE%\\.ssh id_rsa* e *%USERPROFILE%\\.ssh\\id_rsa.pub*. (In Powershell, `$env:USERPROFILE` utilizzare al `%USERPROFILE%`posto della macro cmd ) Se si modifica il nome della chiave, utilizzare il nome modificato nei passaggi seguenti.  Si consiglia di utilizzare una passphrase per una maggiore sicurezza.

1. Da Windows, copiare la chiave pubblica nel computer Linux:

   ```cmd
   scp %USERPROFILE%\.ssh\id_rsa.pub user@hostname:
   ```

1. Nel sistema Linux, aggiungere la chiave all'elenco delle chiavi autorizzate e verificare che il file disponga delle autorizzazioni corrette:

   ```bash
   cat ~/id_rsa.pub >> ~/.ssh/authorized_keys
   chmod 600 ~/.ssh/authorized_keys
   ```

1. Ora, è possibile verificare se la nuova chiave funziona in ssh. Usalo per accedere da Windows:

    ```cmd
    ssh -i %USERPROFILE%\.ssh\id_rsa user@hostname
    ```

Ssh è stato configurato correttamente, creato e distribuito chiavi di crittografia e testato la connessione. A questo punto è possibile configurare la connessione di Visual Studio.Now you are ready to set up the Visual Studio connection.

## <a name="connect-to-the-remote-system-in-visual-studio"></a>Connettersi al sistema remoto in Visual StudioConnect to the remote system in Visual Studio

1. In Visual Studio scegliere Strumenti > Opzioni sulla barra dei menu per aprire la finestra di dialogo Opzioni.In Visual Studio, choose **Tools > Options** on the menu bar to open the **Options** dialog. Selezionare **quindi Multipiattaforma > Connection Manager** per aprire la finestra di dialogo Gestione connessione.

   Se non è stata configurata una connessione in Visual Studio prima, quando si compila il progetto per la prima volta, Visual Studio apre automaticamente la finestra di dialogo Gestione connessione.

1. Nella finestra di dialogo Gestione connessione scegliere il pulsante **Aggiungi** per aggiungere una nuova connessione.

   ![Gestione connessione](media/settings_connectionmanager.png)

   Viene visualizzata la finestra **Connetti al sistema remoto.**

   ![Connect to Remote System (Connetti al sistema remoto)](media/connect.png)

1. Nella finestra di dialogo **Connetti al sistema remoto,** immettere i dettagli di connessione del computer remoto.

   | Voce | Descrizione
   | ----- | ---
   | **Nome host**           | Nome o indirizzo IP del dispositivo di destinazione
   | **Porta**                | Porta sui cui è in esecuzione il servizio SSH, solitamente 22
   | **Nome utente**           | Utente da autenticare
   | **Tipo di autenticazione** | Scegliere la chiave privata per una connessione compatibile con FIPS
   | **File di chiave privata**    | File di chiave privata creato per la connessione SSH
   | **Passphrase**          | Passphrase usata con la chiave privata selezionata in precedenza

   Modificare il tipo di autenticazione in **Chiave privata**. Immettere il percorso della chiave privata nel campo **File di chiave privata.** È possibile utilizzare il pulsante **Sfoglia** per passare al file di chiave privata. Immettere quindi la passphrase utilizzata per crittografare il file di chiave privata nel campo **Passphrase.**

1. Scegliere il pulsante **Connetti** per tentare una connessione al computer remoto.

   Se la connessione ha esito positivo, Visual Studio configura IntelliSense per utilizzare le intestazioni remote. Per altre informazioni, vedere [IntelliSense per le intestazioni nei sistemi remoti](configure-a-linux-project.md#remote_intellisense).

   Se la connessione non riesce, le caselle delle voci che devono essere modificate sono evidenziate in rosso.

   ![Errore Gestione connessioni](media/settings_connectionmanagererror.png)

   Per ulteriori informazioni sulla risoluzione dei problemi di connessione, vedere [Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md).

## <a name="command-line-utility-for-the-connection-manager"></a>Utilità della riga di comando per Connection Manager  

**Visual Studio 2019 versione 16.5 o successiva:** ConnectionManager.exe è un'utilità della riga di comando per gestire le connessioni di sviluppo remoto all'esterno di Visual StudioVisual Studio. È utile per attività come il provisioning di una nuova macchina di sviluppo. In alternativa, è possibile utilizzarlo per configurare Visual Studio per l'integrazione continua. Per esempi e un riferimento completo al comando ConnectionManager, vedere Informazioni di riferimento su [ConnectionManager](connectionmanager-reference.md).  

## <a name="optional-enable-or-disable-fips-mode"></a>Facoltativo: abilitare o disabilitare la modalità FIPSOptional: Enable or disable FIPS mode

È possibile abilitare la modalità FIPS a livello globale in Windows.

1. Per attivare la modalità FIPS, premere **Windows e R** per aprire la finestra di dialogo Esegui, quindi eseguire gpedit.msc.

1. Espandere **Criterio computer locale > Configurazione computer > Impostazioni di Protezione di Windows > Criteri di protezione > e** selezionare Opzioni di **protezione**.

1. In **Criteri**selezionare **Crittografia di sistema: utilizza algoritmi FIPS compatibili per crittografia, hash e firma**, quindi premere **INVIO** per aprire la relativa finestra di dialogo.

1. Nella scheda **Impostazioni protezione locale** selezionare **Abilitato** o **Disabilitato**, quindi scegliere **OK** per salvare le modifiche.

> [!WARNING]
> L'abilitazione della modalità FIPS può causare l'interruzione o l'arresto imprevisto di alcune applicazioni. Per ulteriori informazioni, vedere il post di blog [Why We're Not Recommending "FIPS mode" Anymore](https://techcommunity.microsoft.com/t5/microsoft-security-baselines/why-we-8217-re-not-recommending-8220-fips-mode-8221-anymore/ba-p/701037).

## <a name="additional-resources"></a>Risorse aggiuntive

[Documentazione Microsoft sulla convalida FIPS 140](/windows/security/threat-protection/fips-140-validation)

[FIPS 140-2: Requisiti](https://csrc.nist.gov/publications/detail/fips/140/2/final) di sicurezza per i moduli di crittografia (dal NIST)

Programma di [convalida dell'algoritmo di crittografia: note](https://csrc.nist.gov/projects/cryptographic-algorithm-validation-program/Validation-Notes) di convalida (dal NIST)Cryptographic Algorithm Validation Program: Validation Notes (from NIST)

Post di blog Microsoft sul [motivo per cui non stiamo raccomandando "modalità FIPS" Non più](https://techcommunity.microsoft.com/t5/microsoft-security-baselines/why-we-8217-re-not-recommending-8220-fips-mode-8221-anymore/ba-p/701037)

[Configurazione del server SSH](https://www.ssh.com/ssh/sshd_config)

## <a name="see-also"></a>Vedere anche

[Configurare un progetto LinuxConfigure a Linux project](configure-a-linux-project.md)\
[Configurare un progetto Linux CMake](cmake-linux-project.md)\
[Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md)\
[Distribuire, eseguire ed eseguire il debug del progetto LinuxDeploy, run, and debug your Linux project](deploy-run-and-debug-your-linux-project.md)\
[Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md)

::: moniker-end
