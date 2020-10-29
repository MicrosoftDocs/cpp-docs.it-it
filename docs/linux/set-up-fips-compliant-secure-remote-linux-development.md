---
title: Configurare lo sviluppo Linux remoto sicuro conforme con FIPS
description: Come configurare una connessione crittografica conforme a FIPS tra Visual Studio e un computer Linux per lo sviluppo remoto.
ms.date: 01/17/2020
ms.openlocfilehash: b7eb6bfd32d362415eda057bfa78afe80fb9e2f4
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924682"
---
# <a name="set-up-fips-compliant-secure-remote-linux-development"></a>Configurare lo sviluppo Linux remoto sicuro conforme con FIPS

::: moniker range="<=msvc-150"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive. Lo sviluppo di applicazioni Linux remote sicure conformi a FIPS è disponibile in Visual Studio 2019 versione 16,5 e successive.

::: moniker-end

::: moniker range="msvc-160"

La pubblicazione di Federal Information Processing Standard (FIPS) 140-2 è uno standard per il governo degli Stati Uniti per i moduli crittografici. Le implementazioni dello standard vengono convalidate da NIST. Windows ha [convalidato il supporto per i moduli crittografici conformi a FIPS](/windows/security/threat-protection/fips-140-validation). In Visual Studio 2019 versione 16,5 e successive è possibile usare una connessione crittografica sicura e conforme a FIPS al sistema Linux per lo sviluppo remoto.

Di seguito viene illustrato come configurare una connessione sicura e conforme a FIPS tra Visual Studio e il sistema Linux remoto. Questa guida è applicabile quando si compilano progetti CMake o Linux MSBuild in Visual Studio. Questo articolo è la versione conforme a FIPS delle istruzioni per la connessione in [connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md).

## <a name="prepare-a-fips-compliant-connection"></a>Preparare una connessione conforme a FIPS

Sono necessarie alcune operazioni di preparazione per l'uso di una connessione SSH protetta con crittografia FIPS tra Visual Studio e il sistema Linux remoto. Per la conformità FIPS-140-2, Visual Studio supporta solo le chiavi RSA.

Gli esempi in questo articolo usano Ubuntu 18,04 LTS con OpenSSH server versione 7,6. Tuttavia, le istruzioni devono essere le stesse per qualsiasi distribuzione usando una versione moderatamente recente di OpenSSH.

### <a name="to-set-up-the-ssh-server-on-the-remote-system"></a>Per configurare il server SSH nel sistema remoto

1. Nel sistema Linux installare e avviare il server OpenSSH:

   ```bash
   sudo apt install openssh-server
   sudo service ssh start
   ```

1. Se si vuole che il server SSH venga avviato automaticamente all'avvio del sistema, abilitarlo usando systemctl:

   ```bash
   sudo systemctl enable ssh
   ```

1. Aprire *nella/etc/ssh/sshd_config* come root. Modificare o aggiungere, se non esistono, le righe seguenti:

   ```config
   Ciphers aes256-cbc,aes192-cbc,aes128-cbc,3des-cbc
   HostKeyAlgorithms ssh-rsa
   KexAlgorithms diffie-hellman-group-exchange-sha256,diffie-hellman-group-exchange-sha1,diffie-hellman-group14-sha1
   MACs hmac-sha2-256,hmac-sha1
   ```

   > [!NOTE]
   > SSH-RSA è l'unico algoritmo a chiave host conforme a FIPS che supporta. Anche gli \* algoritmi AES-Ctr sono conformi a FIPS, ma l'implementazione in Visual Studio non è approvata. Gli algoritmi di \* scambio delle chiavi di ECDH sono conformi a FIPS, ma Visual Studio non li supporta.

   Non si è limitati a queste opzioni. È possibile configurare SSH per l'uso di crittografie aggiuntive, algoritmi di chiavi host e così via. Altre opzioni di sicurezza rilevanti che è opportuno considerare sono `PermitRootLogin` , `PasswordAuthentication` e `PermitEmptyPasswords` . Per ulteriori informazioni, vedere la pagina relativa all'sshd_config o all'articolo [configurazione del server SSH](https://www.ssh.com/ssh/sshd_config).

1. Dopo aver salvato e chiuso sshd_config, riavviare il server SSH per applicare la nuova configurazione:

   ```bash
   sudo service ssh restart
   ```

Successivamente, verrà creata una coppia di chiavi RSA nel computer Windows. Copiare quindi la chiave pubblica nel sistema Linux remoto per l'uso da parte di SSH.

### <a name="to-create-and-use-an-rsa-key-file"></a>Per creare e usare un file di chiave RSA

1. Nel computer Windows generare una coppia di chiavi pubblica/privata RSA usando questo comando:

   ```cmd
   ssh-keygen -t rsa -b 4096
   ```

   Il comando crea una chiave pubblica e una chiave privata. Per impostazione predefinita, le chiavi vengono salvate in *% USERPROFILE% \\ . ssh \\ id_rsa* e *% USERPROFILE% \\ . ssh \\ id_rsa. pub* . (In PowerShell usare `$env:USERPROFILE` anziché la macro cmd `%USERPROFILE%` ) se si modifica il nome della chiave, usare il nome modificato nei passaggi successivi.  Si consiglia di usare una passphrase per una maggiore sicurezza.

1. Da Windows copiare la chiave pubblica nel computer Linux:

   ```cmd
   scp %USERPROFILE%\.ssh\id_rsa.pub user@hostname:
   ```

1. Nel sistema Linux aggiungere la chiave all'elenco di chiavi autorizzate e verificare che il file disponga delle autorizzazioni corrette:

   ```bash
   cat ~/id_rsa.pub >> ~/.ssh/authorized_keys
   chmod 600 ~/.ssh/authorized_keys
   ```

1. A questo punto, è possibile verificare se la nuova chiave funziona in SSH. Usarlo per accedere da Windows:

    ```cmd
    ssh -i %USERPROFILE%\.ssh\id_rsa user@hostname
    ```

Sono state configurate correttamente SSH, sono state create e distribuite le chiavi di crittografia ed è stata verificata la connessione. A questo punto si è pronti per configurare la connessione di Visual Studio.

## <a name="connect-to-the-remote-system-in-visual-studio"></a>Connettersi al sistema remoto in Visual Studio

1. In Visual Studio scegliere **strumenti > opzioni** nella barra dei menu per aprire la finestra di dialogo **Opzioni** . Selezionare quindi **multipiattaforma > gestione connessione** per aprire la finestra di dialogo Gestione connessione.

   Se non è stata configurata una connessione in Visual Studio prima, quando si compila il progetto per la prima volta, Visual Studio apre la finestra di dialogo Gestione connessione.

1. Nella finestra di dialogo Gestione connessione scegliere il pulsante **Aggiungi** per aggiungere una nuova connessione.

   ![Gestione connessione](media/settings_connectionmanager.png)

   Viene visualizzata la finestra **Connetti al sistema remoto** .

   ![Connect to Remote System (Connetti al sistema remoto)](media/connect.png)

1. Nella finestra di dialogo **Connetti al sistema remoto** immettere i dettagli della connessione del computer remoto.

   | Voce | Descrizione
   | ----- | ---
   | **Host Name**           | Nome o indirizzo IP del dispositivo di destinazione
   | **Porta**                | Porta sui cui è in esecuzione il servizio SSH, solitamente 22
   | **Nome utente**           | Utente da autenticare
   | **Tipo di autenticazione** | Scegliere la chiave privata per una connessione conforme a FIPS
   | **File di chiave privata**    | File di chiave privata creato per la connessione SSH
   | **Passphrase**          | Passphrase usata con la chiave privata selezionata in precedenza

   Modificare il tipo di autenticazione in **chiave privata** . Immettere il percorso della chiave privata nel campo del **file di chiave privata** . È possibile usare il pulsante **Sfoglia** per passare al file della chiave privata. Quindi, immettere la passphrase usata per crittografare il file di chiave privata nel campo **passphrase** .

1. Scegliere il pulsante **Connetti** per tentare una connessione al computer remoto.

   Se la connessione ha esito positivo, Visual Studio configura IntelliSense per l'uso delle intestazioni remote. Per altre informazioni, vedere [IntelliSense per le intestazioni nei sistemi remoti](configure-a-linux-project.md#remote_intellisense).

   Se la connessione non riesce, le caselle delle voci che devono essere modificate sono evidenziate in rosso.

   ![Errore Gestione connessioni](media/settings_connectionmanagererror.png)

   Per ulteriori informazioni sulla risoluzione dei problemi relativi alla connessione, vedere [connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md).

## <a name="command-line-utility-for-the-connection-manager"></a>Utilità della riga di comando per la gestione connessione  

**Visual studio 2019 versione 16,5 o successiva** : ConnectionManager.exe è un'utilità da riga di comando per gestire le connessioni di sviluppo remoto all'esterno di Visual Studio. È utile per attività come il provisioning di un nuovo computer di sviluppo. In alternativa, è possibile usarlo per configurare Visual Studio per l'integrazione continua. Per esempi e un riferimento completo al comando ConnectionManager, vedere [ConnectionManager Reference](connectionmanager-reference.md).  

## <a name="optional-enable-or-disable-fips-mode"></a>Facoltativo: abilitare o disabilitare la modalità FIPS

È possibile abilitare la modalità FIPS a livello globale in Windows.

1. Per abilitare la modalità FIPS, premere **Windows + R** per aprire la finestra di dialogo Esegui, quindi eseguire gpedit. msc.

1. Espandere **criteri del computer locale > configurazione computer > impostazioni di Windows > impostazioni di sicurezza > criteri locali** e selezionare **Opzioni di sicurezza** .

1. In **criterio** selezionare **crittografia di sistema: usa algoritmi conformi a FIPS per crittografia, hash e firma** , quindi premere **invio** per aprire la relativa finestra di dialogo.

1. Nella scheda **impostazioni di sicurezza locali** selezionare **abilitato** o **disabilitato** , quindi scegliere **OK** per salvare le modifiche.

> [!WARNING]
> L'abilitazione della modalità FIPS può causare l'interruzione o il comportamento imprevisto di alcune applicazioni. Per altre informazioni, vedere il post di Blog sul motivo per cui [non è più consigliabile "modalità FIPS"](https://techcommunity.microsoft.com/t5/microsoft-security-baselines/why-we-8217-re-not-recommending-8220-fips-mode-8221-anymore/ba-p/701037).

## <a name="additional-resources"></a>Risorse aggiuntive

[Documentazione Microsoft sulla convalida FIPS 140](/windows/security/threat-protection/fips-140-validation)

[FIPS 140-2: requisiti di sicurezza per i moduli di crittografia](https://csrc.nist.gov/publications/detail/fips/140/2/final) (dal NIST)

[Programma di convalida degli algoritmi di crittografia: Note sulla convalida](https://csrc.nist.gov/projects/cryptographic-algorithm-validation-program/Validation-Notes) (dal NIST)

Post di Blog Microsoft sul motivo per cui [non è più consigliabile "modalità FIPS"](https://techcommunity.microsoft.com/t5/microsoft-security-baselines/why-we-8217-re-not-recommending-8220-fips-mode-8221-anymore/ba-p/701037)

[Configurazione del server SSH](https://www.ssh.com/ssh/sshd_config)

## <a name="see-also"></a>Vedere anche

[Configurare un progetto Linux](configure-a-linux-project.md)\
[Configurare un progetto CMake per Linux](cmake-linux-project.md)\
[Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md)\
[Distribuire, eseguire ed eseguire il debug del progetto Linux](deploy-run-and-debug-your-linux-project.md)\
[Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md)

::: moniker-end
