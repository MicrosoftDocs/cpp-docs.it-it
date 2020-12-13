---
description: 'Altre informazioni su: installare e configurare gli strumenti per la compilazione con iOS'
title: Installare e configurare strumenti per la compilazione con iOS
ms.date: 10/17/2019
ms.assetid: d0c311c9-9eb9-42c5-ba07-25604362cd28
ms.openlocfilehash: e6d91dc679d86085c1886cab0d330a4fafb3c617
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339462"
---
# <a name="install-and-configure-tools-to-build-using-ios"></a>Installare e configurare strumenti per la compilazione con iOS

È possibile usare Visual Studio con gli strumenti per **lo sviluppo di app per dispositivi mobili multipiattaforma con C++** per modificare, eseguire il debug e distribuire codice iOS al simulatore iOS o a un dispositivo iOS. Tuttavia, a causa delle restrizioni di licenza, il codice deve essere compilato ed eseguito in modalità remota su un Mac. Per compilare ed eseguire le app iOS usando Visual Studio, è necessario installare e configurare l'agente remoto [vcremote](https://www.npmjs.com/package/vcremote), sul Mac. L'agente remoto gestisce le richieste di compilazione da parte di Visual Studio ed esegue l'app su un dispositivo iOS connesso a Mac o nel simulatore iOS su Mac.

> [!NOTE]
> Per informazioni sull'uso di servizi di Mac ospitati nel cloud anziché su Mac, vedere [Configurare Visual Studio per connettersi al Mac ospitato su cloud](/visualstudio/cross-platform/tools-for-cordova/tips-workarounds/host-a-mac-in-the-cloud?view=toolsforcordova-2017&preserve-view=true#configure-visual-studio-to-connect-to-your-cloud-hosted-mac). Le istruzioni riguardano la compilazione con Visual Studio Tools per Apache Cordova. Per usare le istruzioni per la compilazione con C++, sostituire con `vcremote` `remotebuild` .

Dopo aver installato gli strumenti per la compilazione con iOS, fare riferimento a questo articolo per i modi per configurare e aggiornare rapidamente l'agente remoto per lo sviluppo di iOS in Visual Studio e sul Mac.

## <a name="prerequisites"></a>Prerequisiti

Per installare e usare l'agente remoto per sviluppare il codice per iOS, è necessario prima di tutto avere questi prerequisiti:

- Un computer Mac che esegue macOS Mojave 10.14 o versione successiva

- Un [ID Apple](https://appleid.apple.com/)

- Un account attivo del [programma per sviluppatori di Apple](https://developer.apple.com/programs/)

   È possibile ottenere un account gratuito che consente il trasferimento in locale delle app in un dispositivo iOS solo a scopo di test, ma non per la distribuzione.

- [Xcode](https://developer.apple.com/xcode/downloads/) 10.2.1 o versione successiva

   Xcode può essere scaricato dall'App Store.

- Strumenti da riga di comando Xcode

   Per installare gli strumenti da riga di comando Xcode, aprire l'app Terminal nel Mac e immettere il comando seguente:

   `xcode-select --install`

- Un account ID Apple configurato in Xcode come identità di firma per firmare le app

   Per visualizzare o impostare l'identità di firma in Xcode, aprire il menu **Xcode** e scegliere **Preferences**. Selezionare **Accounts** e scegliere il proprio ID Apple, quindi scegliere il pulsante **View Details** . Per istruzioni dettagliate, vedere [Add your Apple ID account](https://help.apple.com/xcode/mac/current/#/devaf282080a) (Aggiungere l'account ID Apple).

   Per informazioni dettagliate sui requisiti per la firma, vedere [What is app signing](https://help.apple.com/xcode/mac/current/#/dev3a05256b8) (Che cos'è la firma delle app).

- Se si usa un dispositivo iOS per lo sviluppo, un profilo di provisioning configurato in Xcode per il dispositivo

   Xcode fornisce funzionalità di firma automatica, dal momento i certificati di firma vengono creati automaticamente in base alle esigenze. Per informazioni dettagliate sulla firma automatica in Xcode, vedere [Automatic signing](https://help.apple.com/xcode/mac/current/#/dev80cc24546) (Firma automatica).

   Se si vuole eseguire la firma manuale, è necessario creare un profilo di provisioning per l'app. Per informazioni dettagliate sulla creazione di profili di provisioning, vedere [Create a development provisioning profile](https://help.apple.com/developer-account/#/devf2eb157f8) (Creare un profilo di provisioning di sviluppo).

- [Node.js](https://nodejs.org/) versione 12.14.1 e NPM versione 6.13.4

   Installare la versione 12.14.1 di Node.js nel Mac. Se si installa il pacchetto di Node.js, dovrebbe essere presente la versione NPM 6.13.4. Altre versioni di Node.js e NPM potrebbero non supportare alcuni moduli utilizzati nell'agente remoto `vcremote` , operazione che può causare un `vcremote` errore di installazione. Si consiglia di installare Node.js usando una gestione pacchetti, ad esempio [Gestione versioni del nodo](https://nodejs.org/en/download/package-manager/#nvm). Evitare di usare il comando `sudo` per installare Node.js, perché alcuni moduli possono non essere installati quando si usa `sudo` .

## <a name="install-the-remote-agent-for-ios"></a><a name="Install"></a> Installare l'agente remoto per iOS

Quando si installa il carico di lavoro sviluppo di applicazioni per dispositivi mobili con C++, Visual Studio è in grado di comunicare con [vcremote](https://www.npmjs.com/package/vcremote), un agente remoto in esecuzione nel Mac per trasferire file, compilare ed eseguire l'app iOS e inviare comandi di debug.

Prima di installare l'agente remoto, verificare di aver soddisfatto i [prerequisiti](#prerequisites) e di aver completato i passaggi di installazione in [installare lo sviluppo di app per dispositivi mobili multipiattaforma con C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md#install-the-tools).

### <a name="to-download-and-install-the-remote-agent"></a><a name="DownloadInstall"></a> Per scaricare e installare l'agente remoto

- Dall'app Terminal nel Mac, verificare che la versione del Node.js attualmente in uso sia la versione richiesta 12.14.1. Per verificare la versione, eseguire il comando:

  `node -v`
  
  Se non è la versione corretta, potrebbe essere necessario seguire le istruzioni di installazione Node.js nei prerequisiti. Quindi, riavviare Node.js.

- Dopo aver verificato che il Node.js richiesto è in uso, eseguire questo comando per installare vcremote in tale versione Node.js:

   `npm install -g --unsafe-perm vcremote`

   L'opzione di installazione globale (**-g**) è consigliata, ma non obbligatoria. Se non si usa l'opzione di installazione globale, vcremote viene installato nel percorso attivo corrente nell'app Terminal.

   Durante l'installazione, `vcremote` viene installato e la modalità di sviluppo viene attivata sul Mac. Vengono anche installati [Homebrew](https://brew.sh/) e due pacchetti NPM, `vcremote-lib` e `vcremote-utils` . Al termine dell'installazione, è possibile ignorare eventuali avvisi relativi a dipendenze facoltative ignorate.

   > [!NOTE]
   > Per installare Homebrew, è necessario l'accesso a sudo (amministratore). Se è necessario eseguire `vcremote` l'installazione senza sudo, è possibile installare homebrew manualmente in un percorso usr/local e aggiungere la relativa cartella bin al percorso. Per altre informazioni, vedere la [documentazione di Homebrew](https://github.com/Homebrew/homebrew/wiki/Installation). Per abilitare manualmente la modalità sviluppatore, immettere questo comando nell'app Terminal: `DevToolsSecurity -enable`

Se il computer è stato aggiornato a una nuova versione di Visual Studio, è necessario aggiornare anche la versione corrente dell'agente remoto. Per aggiornare l'agente remoto, ripetere i passaggi per scaricare e installare l'agente remoto.

## <a name="start-the-remote-agent"></a><a name="Start"></a> Avviare l'agente remoto

Per compilare ed eseguire il codice iOS l'agente remoto deve essere in esecuzione per Visual Studio. Visual Studio deve essere associato all'agente remoto prima che possa comunicare. Per impostazione predefinita, l'agente remoto viene eseguito in modalità di connessione protetta, che richiede un PIN per l'associazione con Visual Studio.

### <a name="to-start-the-remote-agent"></a><a name="RemoteAgentStartServer"></a> Per avviare l'agente remoto

- Dall'app Terminal nel Mac, immettere:

   `vcremote`

   Questo comando avvia l'agente remoto con una directory di compilazione predefinita di `~/vcremote` . Per le opzioni di configurazione aggiuntive, vedere [Configure the remote agent on the Mac](#ConfigureMac).

La prima volta che si avvia l'agente e ogni volta che si crea un nuovo certificato client, vengono fornite le informazioni necessarie per configurare l'agente in Visual Studio, inclusi il nome host, la porta e il PIN.

![Uso di vcremote per la generazione di un PIN sicuro](../cross-platform/media/cppmdd-vcremote-generateclientcert.png "Uso di vcremote per la generazione di un PIN sicuro")

Per configurare l'agente remoto in Visual Studio usando il nome host, effettuare il ping del Mac da Windows con il nome host per verificare che sia raggiungibile. In caso contrario, potrebbe essere necessario usare l'indirizzo IP.

Il PIN generato può essere usato una sola volta ed è valido per un periodo limitato. Se non si associa Visual Studio all'agente remoto prima della scadenza dell'intervallo, sarà necessario generare un nuovo PIN. Per altre informazioni, vedere [Generate a new security PIN](#GeneratePIN).

È possibile usare l'agente remoto in modalità non protetta. In modalità non protetta, l'agente remoto può essere associato a Visual Studio senza un PIN.

#### <a name="to-disable-secured-connection-mode"></a>Per disabilitare la modalità di connessione protetta

- Per disabilitare la modalità di connessione protetta in `vcremote` , immettere questo comando nell'app Terminal nel Mac:

   `vcremote --secure false`

#### <a name="to-enable-secured-connection-mode"></a>Per abilitare la modalità di connessione protetta

- Per abilitare la modalità di connessione protetta, immettere questo comando:

   `vcremote --secure true`

Dopo aver avviato l'agente remoto, è possibile usarlo da Visual Studio fino a quando non lo si arresta.

#### <a name="to-stop-the-remote-agent"></a>Per arrestare l'agente remoto

- Nella finestra del terminale `vcremote` viene eseguito in, immettere il **controllo** + **C**.

## <a name="configure-the-remote-agent-in-visual-studio"></a><a name="ConfigureVS"></a> Configurare l'agente remoto in Visual Studio

Per connettere l'agente remoto da Visual Studio, è necessario specificare la configurazione remota nelle opzioni di Visual Studio.

### <a name="to-configure-the-remote-agent-from-visual-studio"></a>Per configurare l'agente remoto da Visual Studio

1. Se l'agente remoto non è già in esecuzione nel Mac, seguire la procedura indicata in [Avviare l'agente remoto](#Start). È necessario che il Mac sia in esecuzione `vcremote` affinché Visual Studio sia in grado di associare, connettere e compilare il progetto in modo corretto.

1. Nel Mac, ottenere il nome host o l'indirizzo IP del Mac.

   È possibile ottenere l'indirizzo IP usando il comando **ifconfig** in una finestra Terminal. Usare l'indirizzo inet elencato all'interno dell'interfaccia di rete attiva.

1. Nella barra dei menu di Visual Studio scegliere **Strumenti**, **Opzioni**.

1. Nella finestra di dialogo **Opzioni** espandere **Multipiattaforma**, **C++**, **iOS**.

1. Nei campi **Nome host** , e **Porta** immettere i valori specificati dall'agente remoto quando è stato avviato. Il nome host può essere il nome DNS o l'indirizzo IP del Mac. Il numero di porta predefinito è 3030.

   > [!NOTE]
   > Se non è possibile effettuare il ping del Mac con il nome host, potrebbe essere necessario usare l'indirizzo IP.

1. Se si usa l'agente remoto nella modalità di connessione protetta predefinita, selezionare la casella di controllo **Proteggi** , quindi immettere il valore PIN specificato dall'agente in remoto nel campo **Pin** . Se si usa l'agente remoto in modalità di connessione non protetta, deselezionare la casella di controllo **Proteggi** e lasciare il campo **Pin** .

1. Scegliere **Associa** per abilitare l'associazione.

   ![Configurazione della connessione vcremote per compilazioni iOS](../cross-platform/media/cppmdd-options-ios.png "Configurazione della connessione vcremote per compilazioni iOS")

   L'associazione viene mantenuta finché non si modifica il nome host o la porta. Se si modifica il nome host o la porta nella finestra di dialogo **Opzioni** , per annullare la modifica, scegliere il pulsante **Ripristina** per ripristinare l'associazione precedente.

   Se l'associazione non riesce, verificare che l'agente remoto sia in esecuzione eseguendo i passaggi in [Start the remote agent](#Start). Se è trascorsa un'eccessiva quantità di tempo dalla generazione del PIN dell'agente remoto, seguire i passaggi in [Generate a new security PIN](#GeneratePIN) sul Mac e riprovare. Se si usa il nome host del Mac, provare a usare l'indirizzo IP del campo **Nome host** .

1. Aggiornare il nome della cartella nel campo **Radice remota** per specificare la cartella usata dall'agente remoto nella directory home (*~*) su Mac. Per impostazione predefinita, l'agente remoto usa `/Users/<username>/vcremote` come radice remota.

1. Scegliere **OK** per salvare le impostazioni di connessione di associazione remota.

Visual Studio usa le stesse informazioni per connettersi all'agente remoto su Mac ad ogni uso. Non è necessario associare nuovamente Visual Studio all'agente remoto a meno che non si generi un nuovo certificato di sicurezza su Mac oppure il relativo nome host o l'indirizzo IP subiscano delle modifiche.

## <a name="generate-a-new-security-pin"></a><a name="GeneratePIN"></a> Generate a new security PIN

Quando si avvia l'agente remoto per la prima volta, il PIN generato è valido per un intervallo di tempo limitato (per impostazione predefinita, 10 minuti). Se non si associa Visual Studio all'agente remoto prima della scadenza dell'intervallo, sarà necessario generare un nuovo PIN.

### <a name="to-generate-a-new-pin"></a>Per generare un nuovo PIN

1. Arrestare l'agente oppure aprire una seconda finestra dell'app Terminal nel Mac e usarla per immettere il comando.

1. Immettere questo comando nell’app Terminal:

   `vcremote generateClientCert`

   L'agente remoto genera un nuovo PIN temporaneo. Per associare Visual Studio usando il nuovo PIN, ripetere i passaggi in [Configurare l'agente remoto in Visual Studio](#ConfigureVS).

## <a name="generate-a-new-server-certificate"></a><a name="GenerateCert"></a> Generare un nuovo certificato del server

Per motivi di sicurezza, i certificati del server che associano Visual Studio all'agente remoto sono collegati all'indirizzo IP o al nome host del Mac. Se questi valori vengono modificati, sarà necessario generare un nuovo certificato del server e quindi riconfigurare Visual Studio con i nuovi valori.

### <a name="to-generate-a-new-server-certificate"></a>Per generare un nuovo certificato del server

1. Arrestare l' `vcremote` agente.

1. Immettere questo comando nell’app Terminal:

   `vcremote resetServerCert`

1. Quando viene richiesta la conferma, immettere `Y`.

1. Immettere questo comando nell’app Terminal:

   `vcremote generateClientCert`

   Questo comando genera un nuovo PIN temporaneo.

1. Per associare Visual Studio usando il nuovo PIN, ripetere i passaggi in [Configurare l'agente remoto in Visual Studio](#ConfigureVS).

## <a name="configure-the-remote-agent-on-the-mac"></a><a name="ConfigureMac"></a> Configure the remote agent on the Mac

È possibile configurare l'agente remoto usando diverse opzioni della riga di comando. Ad esempio, è possibile specificare la porta per l'ascolto delle richieste di compilazione e specificare il numero massimo di build da gestire nel file system. Per impostazione predefinita, il limite è di 10 build. L'agente remoto rimuove le build eccedenti il numero massimo all'arresto.

### <a name="to-configure-the-remote-agent"></a>Per configurare l'agente remoto

- Per vedere un elenco completo dei comandi dell'agente remoto, nell'app Terminal immettere:

   `vcremote --help`

- Per disabilitare la modalità protetta e abilitare connessioni semplici basate su HTTP, immettere:

   `vcremote --secure false`

   Se si usa questa opzione, deselezionare la casella di controllo **Proteggi** e lasciare vuoto il campo **Pin** quando si configura l'agente in Visual Studio.

- Per specificare un percorso per i file dell'agente remoto, immettere:

   `vcremote --serverDir directory_path`

   dove *directory_path* è il percorso nel Mac in cui inserire file di log, build e certificati del server. Per impostazione predefinita, questo percorso è `/Users/<username>/vcremote` . In questa posizione, le build vengono organizzate per numero.

- Per usare un processo in background per acquisire `stdout` e `stderr` in un file denominato server.log, immettere:

   `vcremote > server.log 2>&1 &`

   Il file server.log può essere d'aiuto nella risoluzione dei problemi di compilazione.

- Per eseguire l'agente usando un file di configurazione al posto dei parametri della riga di comando, immettere:

   `vcremote --config config_file_path`

   dove *config_file_path* è il percorso di un file di configurazione in formato JSON. Le opzioni di avvio e i relativi valori non devono includere trattini.

## <a name="troubleshoot-the-remote-agent"></a>Risolvere i problemi dell'agente remoto

### <a name="debugging-on-an-ios-device"></a>Debug in un dispositivo iOS

Se il debug in un dispositivo iOS non funziona, possono essere presenti problemi con lo strumento [ideviceinstaller](https://github.com/libimobiledevice/ideviceinstaller), che viene usato per comunicare con un dispositivo iOS. Questo strumento viene in genere installato da homebrew durante l'installazione di `vcremote` . Come soluzione alternativa, seguire la procedura seguente.

Aprire l'app Terminal e l'aggiornamento `ideviceinstaller` e le relative dipendenze eseguendo i comandi seguenti nell'ordine indicato:

1. Verificare che Homebrew sia aggiornato

   `brew update`

1. Disinstalla `libimobiledevice` e `usbmuxd`

   `brew uninstall --ignore-dependencies libimobiledevice`

   `brew uninstall --ignore-dependencies usbmuxd`

1. Installare la versione più recente di `libimobiledevice` e `usbmuxd`

   `brew install --HEAD usbmuxd`

   `brew unlink usbmuxd`

   `brew link usbmuxd`

   `brew install --HEAD libimobiledevice`

1. Disinstalla e reinstalla `ideviceinstaller`

   `brew uninstall ideviceinstaller`

   `brew install ideviceinstaller`

Verificare che sia in `ideviceinstaller` grado di comunicare con il dispositivo tentando di elencare le app installate nel dispositivo:

`ideviceinstaller -l`

Se gli `ideviceinstaller` errori non sono in grado di accedere alla cartella `/var/db/lockdown` , modificare il privilegio nella cartella con:

`sudo chmod 777 /var/db/lockdown`

Quindi verificare di nuovo se è `ideviceinstaller` in grado di comunicare con il dispositivo.

## <a name="see-also"></a>Vedi anche

- [Installare lo sviluppo di app per dispositivi mobili multipiattaforma con C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md)
