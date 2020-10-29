---
title: Informazioni di riferimento su ConnectionManager
description: Come gestire le connessioni SSH remote da uno strumento da riga di comando.
ms.date: 10/7/2020
f1_keywords:
- ConnectionManager
helpviewer_keywords:
- ConnectionManager program
ms.openlocfilehash: 065a2cf6d6a2fe7d7e418299255c5bbf1f2bf753
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921620"
---
# <a name="connectionmanager-reference"></a>Informazioni di riferimento su ConnectionManager

::: moniker range="<=msvc-150"

ConnectionManager.exe è disponibile in Visual Studio 2019 versione 16,5 e successive.

::: moniker-end

::: moniker range="msvc-160"

ConnectionManager.exe è un'utilità da riga di comando per gestire le connessioni di sviluppo remoto all'esterno di Visual Studio. È utile per attività come il provisioning di un nuovo computer di sviluppo. In alternativa, usarlo per configurare Visual Studio per l'integrazione continua. È possibile usarlo in una finestra Prompt dei comandi per gli sviluppatori. Per ulteriori informazioni sulla Prompt dei comandi per gli sviluppatori, vedere [usare il set di strumenti di Microsoft C++ dalla riga di comando](../build/building-on-the-command-line.md).

ConnectionManager.exe è disponibile in Visual Studio 2019 versione 16,5 e successive. Fa parte del carico di lavoro **sviluppo Linux con C++** nell'programma di installazione di Visual Studio. Viene inoltre installato automaticamente quando si sceglie il componente **gestione connessione** nel programma di installazione. Viene installato in *% VCIDEInstallDir% \\ Linux \\ bin \\ ConnectionManagerExe \\ConnectionManager.exe* .

La funzionalità di ConnectionManager.exe è disponibile anche in Visual Studio. Per gestire le connessioni di sviluppo remote nell'IDE, sulla barra dei menu scegliere **strumenti**  >  **Opzioni** per aprire la finestra di dialogo Opzioni. Nella finestra di dialogo Opzioni selezionare **Cross Platform**  >  **gestione connessione** multipiattaforma.

## <a name="syntax"></a>Sintassi

> **`ConnectionManager.exe`***comando* \[ *argomenti* ] \[ *Opzioni* ]

### <a name="commands-and-arguments"></a>Comandi e argomenti

- **`add`***\@ host utente* \[ **`--port`** *porta* ] \[ **`--password`** *password* password \[ ] **`--privatekey`** *privatekey_file* ]

  Autentica e aggiunge una nuova connessione. Per impostazione predefinita, usa la porta 22 e l'autenticazione della password. (Verrà richiesto di immettere una password). Utilizzare sia **-`-password`** che **`--privatekey`** per specificare una password per una chiave privata.

- **`remove`**\[ *connection_id* \| *porta \@ host utente* \[ **`--port`** *port* ]]

  Rimuove una connessione. Se non viene specificato alcun argomento, viene richiesto di specificare la connessione da rimuovere.
  
- **`modify`**\[ *impostazione predefinita* \| *connection_id* \| *porta \@ host utente* \[ **`--port`** *port* ]] \[ **`--property`** *chiave = valore* ]

  Definisce o modifica una proprietà in una connessione. \
  Se il *valore* è vuoto, la *chiave* della proprietà viene eliminata. \
  Se l'autenticazione ha esito negativo, non verrà apportata alcuna modifica. \
  Se non viene specificata alcuna connessione (per *impostazione predefinita* , sopra), viene usata la connessione remota predefinita dell'utente.

- **`remove-all`**

  Rimuove tutte le connessioni archiviate.
  
- **`clean`**

  Elimina la cache di intestazione per le connessioni che non esistono più. 

- **`list`** \[**`--properties`** ]

  Visualizza le informazioni, gli ID e le proprietà di tutte le connessioni archiviate. 

- **`help`**

  Visualizza una schermata della guida.

- **`version`**

  Visualizza le informazioni sulla versione.

### <a name="options"></a>Opzioni

- **`-q`** , **`--quiet`**

  Impedisce l'output a `stdout` o `stderr` .

- **`--no-prompt`**

  Esito negativo anziché prompt, quando appropriato.

- **`--no-verify`**

  Aggiungere o modificare una connessione senza autenticazione.

- **`--file`***nome file*

  Leggere le informazioni di connessione dal *nome file* specificato.

- **`--no-telemetry`**

  Disabilitare l'invio di dati di utilizzo a Microsoft. I dati di utilizzo vengono raccolti e restituiti a Microsoft a meno che non **`--no-telemetry`** venga passato il flag.  

- **`-n`** , **`--dry-run`**

  Esegue un'esecuzione a secco del comando.
 
- **`--p`**

  Uguale a **`--password`** .

- **`-i`**

  Uguale a **`--privatekey`** .

## <a name="examples"></a>Esempi

Questo comando aggiunge una connessione per un utente denominato "User" in localhost. La connessione utilizza un file di chiave per l'autenticazione, disponibile in *% USERPROFILE% \. ssh \ id_rsa* .

```cmd
ConnectionManager.exe add user@127.0.0.1 --privatekey "%USERPROFILE%\.ssh\id_rsa"
```

Tramite questo comando viene rimossa la connessione con ID 1975957870 dall'elenco di connessioni.

```cmd
ConnectionManager.exe remove 1975957870
```

Questo comando sostituisce la scelta della Shell per la connessione con ID connessione 21212121. Le shell supportate sono: **`sh, csh, bash, tcsh, ksh, zsh, dash`** . Se la shell trovata nel sistema Linux non è supportata, viene eseguito il fallback per usare in modo esplicito **`sh`** per tutti i comandi.

```cmd
ConnectionManager.exe modify 21212121 --property shell=csh
```

## <a name="see-also"></a>Vedere anche

[Connettersi al sistema Linux di destinazione in Visual Studio](connect-to-your-remote-linux-computer.md)

::: moniker-end