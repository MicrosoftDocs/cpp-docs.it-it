---
title: Riferimento a ConnectionManager
ms.date: 01/17/2020
f1_keywords:
- ConnectionManager
helpviewer_keywords:
- ConnectionManager program
ms.openlocfilehash: 2b01bfbcd81984e7ddf32cd5ab0485fff17b3d2b
ms.sourcegitcommit: a930a9b47bd95599265d6ba83bb87e46ae748949
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2020
ms.locfileid: "76520900"
---
# <a name="connectionmanager-reference"></a>Riferimento a ConnectionManager

::: moniker range="<=vs-2017"

ConnectionManager. exe è disponibile in Visual Studio 2019 versione 16,5 e successive.

::: moniker-end

::: moniker range="vs-2019"

ConnectionManager. exe è un'utilità da riga di comando per gestire le connessioni di sviluppo remoto all'esterno di Visual Studio. È utile per attività come il provisioning di un nuovo computer di sviluppo. In alternativa, usarlo per configurare Visual Studio per l'integrazione continua. È possibile usarlo in una finestra Prompt dei comandi per gli sviluppatori. Per altre informazioni sulla Prompt dei comandi per gli sviluppatori, vedere [usare il set di C++ strumenti Microsoft dalla riga di comando](..\build\building-on-the-command-line.md).

ConnectionManager. exe è disponibile in Visual Studio 2019 versione 16,5 e successive. Fa parte dello **sviluppo Linux con C++**  carico di lavoro nella programma di installazione di Visual Studio. Viene inoltre installato automaticamente quando si sceglie il componente **gestione connessione** nel programma di installazione. Viene installato in *% VCIDEInstallDir%\\Linux\\bin\\ConnectionManagerExe\\ConnectionManager. exe*.

La funzionalità di ConnectionManager. exe è disponibile anche in Visual Studio. Per gestire le connessioni di sviluppo remote nell'IDE, sulla barra dei menu scegliere **strumenti** > **Opzioni** per aprire la finestra di dialogo Opzioni. Nella finestra di dialogo Opzioni selezionare **multipiattaforma** > **gestione connessione**.

## <a name="syntax"></a>Sintassi

> *Argomenti*\[*comando* di **ConnectionManager. exe** ] \[*Opzioni*]

### <a name="commands-and-arguments"></a>Comandi e argomenti

- **Aggiungi** *utente\@host* \[ **--** *porta*porta] \[ **--** *password*password] \[ **--PrivateKey** *privatekey_file*]

  Autentica e aggiunge una nuova connessione. Per impostazione predefinita, usa la porta 22 e l'autenticazione della password. (Verrà richiesto di immettere una password). Usare sia **--password** che **--PrivateKey** per specificare una password per una chiave privata.

- **remove** \[*connection_id* \| *utente\@host* \[ **--** *porta*porta]]

  Rimuove una connessione. Se non viene specificato alcun argomento, viene richiesto di specificare la connessione da rimuovere.

- **Rimuovi tutto**

  Rimuove tutte le connessioni archiviate.

- **list**

  Visualizza le informazioni e gli ID di tutte le connessioni archiviate.

- **help**

  Visualizza una schermata della guida.

- **version**

  Visualizza le informazioni sulla versione.

### <a name="options"></a>Options

- **-q**, **--quiet**

  Impedisce l'output per `stdout` o `stderr`.

- **--Nessuna richiesta**

  Esito negativo anziché prompt, quando appropriato.

- **--No-Verify**

  Aggiungere o modificare una connessione senza autenticazione.

- **--file** *nomefile*

  Leggere le informazioni di connessione dal *nome file*specificato.

- **--No-telemetria**

  Disabilitare l'invio di dati di utilizzo a Microsoft. I dati di utilizzo vengono raccolti e restituiti a Microsoft a meno che non venga passato il flag **--No-telemetria** .  

- **-n**, **--esecuzione a secco**

  Esegue un'esecuzione a secco del comando.

- **-p**

  Uguale a **--password**.

- **-i**

  Uguale a **--PrivateKey**.

## <a name="examples"></a>Esempi

Questo comando aggiunge una connessione per un utente denominato "User" in localhost. La connessione usa un file di chiave per l'autenticazione, disponibile in *% USERPROFILE%\.SSH \ id_rsa*.

```cmd
ConnectionManager.exe add user@127.0.0.1 --privatekey "%USERPROFILE%\.ssh\id_rsa"
```

Tramite questo comando viene rimossa la connessione con ID 1975957870 dall'elenco di connessioni.

```cmd
ConnectionManager.exe remove 1975957870
```

## <a name="see-also"></a>Vedere anche

[Connettersi al sistema Linux di destinazione in Visual Studio](connect-to-your-remote-linux-computer.md)

::: moniker-end
