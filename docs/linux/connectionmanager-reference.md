---
title: Informazioni di riferimento su ConnectionManager
ms.date: 01/17/2020
f1_keywords:
- ConnectionManager
helpviewer_keywords:
- ConnectionManager program
ms.openlocfilehash: 1c6236cedba88714e9918dd2c096b5e78d2f08ce
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "77258033"
---
# <a name="connectionmanager-reference"></a>Informazioni di riferimento su ConnectionManager

::: moniker range="<=vs-2017"

ConnectionManager.exe è disponibile in Visual Studio 2019 versione 16.5 e successive.

::: moniker-end

::: moniker range="vs-2019"

ConnectionManager.exe è un'utilità della riga di comando per gestire le connessioni di sviluppo remoto all'esterno di Visual Studio. È utile per attività come il provisioning di una nuova macchina di sviluppo. In alternativa, utilizzarlo per configurare Visual Studio per l'integrazione continua.È possibile utilizzarlo in una finestra del prompt dei comandi per gli sviluppatori. Per ulteriori informazioni sul prompt dei comandi per gli sviluppatori, vedere Utilizzo del set di strumenti [Di Microsoft C](../build/building-on-the-command-line.md)

ConnectionManager.exe è disponibile in Visual Studio 2019 versione 16.5 e successive. Fa parte dello **sviluppo di Linux con** il carico di lavoro di C , nel programma di installazione di Visual Studio. Viene installato anche automaticamente quando si sceglie il componente **Connection Manager** nel programma di installazione. Viene installato in *\\%VCIDEInstallDir%\\\\Linux bin\\ConnectionManagerExe ConnectionManager.exe*.

La funzionalità di ConnectionManager.exe è disponibile anche in Visual Studio.The functionality of ConnectionManager.exe is also available in Visual Studio. Per gestire le connessioni di sviluppo remoto nell'IDE, nella barra dei menu, scegliere**Opzioni** **degli strumenti** > per aprire la finestra di dialogo Opzioni. Nella finestra di dialogo Opzioni selezionare**Gestione connessione** **multipiattaforma.** > 

## <a name="syntax"></a>Sintassi

> **ConnectionManager.exe** *argomenti* \[ *del comando* \[] *opzioni*]

### <a name="commands-and-arguments"></a>Comandi e argomenti

- **aggiungere** *\@l'host* \[utente \[ **--porta** \[ *porta*] **--password** *password*] **--privatekey** *privatekey_file*]

  Esegue l'autenticazione e aggiunge una nuova connessione. Per impostazione predefinita, utilizza la porta 22 e l'autenticazione tramite password. Verrà richiesto di immettere una password. Utilizzare sia **--password** che **--privatekey** per specificare una password per una chiave privata.

- **rimuovere** \[ *connection_idhost* \| \[ *utente\@* **--port** *port*]]

  Rimuove una connessione. Se non viene specificato alcun argomento, viene richiesto di specificare la connessione da rimuovere.

- **rimuovere tutti**

  Rimuove tutte le connessioni archiviate.

- **Elenco**

  Visualizza le informazioni e gli ID di tutte le connessioni memorizzate.

- **Guida**

  Visualizza una schermata di aiuto.

- **version**

  Visualizza le informazioni sulla versione.

### <a name="options"></a>Opzioni

- **-q**, **--quiet**

  Impedisce `stdout` l'output a o `stderr`.

- **--no-prompt (nessuna richiesta)**

  Non riuscire invece di prompt, quando appropriato.

- **--no-verify**

  Aggiungere o modificare una connessione senza autenticazione.

- **--nome** *file*

  Leggere le informazioni di connessione dal *nome file*fornito .

- **--no-telemetria**

  Disabilitare l'invio di dati di utilizzo a Microsoft.Disable sending usage data back to Microsoft. I dati di utilizzo vengono raccolti e inviati a Microsoft, a meno che non venga passato il flag **--no-telemetry.**  

- **-n**, **--secco-run**

  Fa una corsa a secco del comando.

- **-p**

  Uguale a **--password**.

- **-i**

  Uguale a **--privatekey**.

## <a name="examples"></a>Esempi

Questo comando aggiunge una connessione per un utente denominato "user" su localhost. La connessione utilizza un file di chiave per l'autenticazione, disponibile in *%USERPROFILE%\.ssh-id_rsa*.

```cmd
ConnectionManager.exe add user@127.0.0.1 --privatekey "%USERPROFILE%\.ssh\id_rsa"
```

Questo comando rimuove la connessione con ID 1975957870 dall'elenco delle connessioni.

```cmd
ConnectionManager.exe remove 1975957870
```

## <a name="see-also"></a>Vedere anche

[Connettersi al sistema Linux di destinazione in Visual Studio](connect-to-your-remote-linux-computer.md)

::: moniker-end
