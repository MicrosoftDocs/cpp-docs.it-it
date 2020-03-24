---
title: C++Pagine delle proprietà di debug
ms.date: 07/24/2019
ms.topic: article
ms.assetid: 78115a6b-3799-4515-814e-8566b5bdc55d
f1_keywords:
- VC.Project.IVCLocalDebugPageObject.Command
- VC.Project.IVCLocalDebugPageObject.CommandArguments
- VC.Project.IVCLocalDebugPageObject.WorkingDirectory
- VC.Project.IVCLocalDebugPageObject.Attach
- VC.Project.IVCLocalDebugPageObject.DebuggerType
- VC.Project.IVCLocalDebugPageObject.Environment
- VC.Project.IVCLocalDebugPageObject.GPUDebuggerTargetType
- VC.Project.IVCLocalDebugPageObject.GPUBreakOnAllThreads
- VC.Project.IVCLocalDebugPageObject.EnvironmentMerge
- VC.Project.IVCLocalDebugPageObject.SQLDebugging
- VC.Project.IVCLocalDebugPageObject.AmpDefaultAccelerator
- VC.Project.IVCRemoteDebugPageObject.RemoteCommand
- VC.Project.IVCRemoteDebugPageObject.CommandArguments
- VC.Project.IVCRemoteDebugPageObject.WorkingDirectory
- VC.Project.IVCRemoteDebugPageObject.RemoteMachine
- VC.Project.IVCRemoteDebugPageObject.Remote
- VC.Project.IVCRemoteDebugPageObject.DebuggerType
- VC.Project.IVCRemoteDebugPageObject.Environment
- VC.Project.IVCRemoteDebugPageObject.GPUDebuggerTargetType
- VC.Project.IVCRemoteDebugPageObject.GPUBreakOnAllThreads
- VC.Project.IVCRemoteDebugPageObject.Attach
- VC.Project.IVCRemoteDebugPageObject.SQLDebugging
- VC.Project.IVCRemoteDebugPageObject.DeploymentDirectory
- VC.Project.IVCRemoteDebugPageObject.AdditionalFiles
- VC.Project.IVCRemoteDebugPageObject.Remote
- VC.Project.IVCRemoteDebugPageObject.AmpDefaultAccelerator
- VC.Project.VCDebugSettings.WebBrowser.WebBrowserDebuggerHttpUrl
- VC.Project.VCDebugSettings.WebBrowser.DebuggerType
- VC.Project.IVCWebSvcDebugPageObject.HttpUrl
- VC.Project.IVCWebSvcDebugPageObject.DebuggerType
- VC.Project.IVCWebSvcDebugPageObject.SQLDebugging
ms.openlocfilehash: c2190c4406e165cfec1915234b688c598f228777
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169708"
---
# <a name="c-debugging-property-pages"></a>C++Pagine delle proprietà di debug

Queste pagine delle proprietà si trovano in **progetto** > **Proprietà** > **proprietà di configurazione** > **debug**. Scegliere il tipo di debugger nel controllo a discesa. Per altre informazioni sul debug C++ del codice, vedere [esercitazione: informazioni sul C++ debug del codice con Visual Studio](/visualstudio/debugger/getting-started-with-the-debugger-cpp) e [debug del codice nativo](/visualstudio/debugger/debugging-native-code).

## <a name="local-windows-debugger-property-page"></a>Pagina delle proprietà del debugger Windows locale

### <a name="command"></a>Comando

Comando di debug da eseguire.

### <a name="command-arguments"></a>Argomenti del comando

Argomenti della riga di comando da passare all'applicazione.

### <a name="working-directory"></a>Directory di lavoro

Directory di lavoro dell'applicazione. Per impostazione predefinita, la directory che contiene il file di progetto.

### <a name="attach"></a>Collegamento

Specifica se il debugger deve tentare di connettersi a un processo esistente all'avvio del debug.

### <a name="debugger-type"></a>Tipo di debugger

Specifica il tipo di debugger da utilizzare. Se impostato su automatico, il tipo di debugger verrà selezionato in base al contenuto del file exe.

**Choices**

- **Solo nativo** -nativo
- **Solo gestito** : solo gestito
- Misto **misto**
- **Auto-auto**
- **Script-script**
- **Solo GPU (C++ amp** )-solo GPU (C++ amp)

### <a name="environment"></a>Environment

Specifica l'ambiente per il programma di cui eseguire il debug o le variabili da unire con l'ambiente esistente.

### <a name="debugging-accelerator-type"></a>Tipo di acceleratore di debug

Tipo di acceleratore di debug da usare per il debug del codice GPU. (Disponibile quando il debugger GPU è attivo).

### <a name="gpu-default-breakpoint-behavior"></a>Comportamento punto di interruzione predefinito GPU

Imposta la frequenza con cui il debugger GPU si interrompe.

**Choices**

- **Interrompi una volta per ogni curva di distorsione** una volta per distorsione
- **Interrompi per ogni thread (ad esempio, comportamento della CPU)** -Interrompi per ogni thread (ad esempio, comportamento della CPU)

### <a name="merge-environment"></a>Unisci ambiente

Unisce le variabili di ambiente specificate all'ambiente esistente.

### <a name="sql-debugging"></a>Debug SQL

Alleghi il debugger SQL.

### <a name="amp-default-accelerator"></a>Tasto di scelta rapida predefinito AMP

Esegue C++ l'override della selezione dell'acceleratore predefinito di amp. La proprietà non si applica quando si esegue il debug di codice gestito.

## <a name="remote-windows-debugger-property-page"></a>Pagina delle proprietà del debugger Windows remoto

Per altre informazioni sul debug remoto, vedere [debug remoto di un C++ progetto Visual Studio in Visual Studio](/visualstudio/debugger/remote-debugging-cpp).

### <a name="remote-command"></a>Comando remoto

Comando di debug da eseguire.

### <a name="remote-command-arguments"></a>Argomenti del comando remoto

Argomenti della riga di comando da passare all'applicazione.

### <a name="working-directory"></a>Directory di lavoro

Directory di lavoro dell'applicazione. Per impostazione predefinita, la directory che contiene il file di progetto.

### <a name="remote-server-name"></a>Nome server remoto

Specifica il nome di un server remoto.

### <a name="connection"></a>Connessione

Specifica il tipo di connessione.

**Choices**

- **Remoto con autenticazione di Windows** : remoto con [autenticazione di Windows](/windows-server/security/windows-authentication/windows-authentication-overview).
- **Remoto senza autenticazione** -remoto senza autenticazione.

### <a name="debugger-type"></a>Tipo di debugger

Specifica il tipo di debugger da utilizzare. Se impostato su automatico, il tipo di debugger verrà selezionato in base al contenuto del file exe.

**Choices**

- **Solo nativo** -nativo
- **Solo gestito** : solo gestito
- Misto **misto**
- **Auto-auto**
- **Script-script**
- **Solo GPU (C++ amp** )-solo GPU (C++ amp)

### <a name="environment"></a>Environment

Specifica l'ambiente per il programma di cui eseguire il debug o le variabili da unire con l'ambiente esistente.

### <a name="debugging-accelerator-type"></a>Tipo di acceleratore di debug

Tipo di acceleratore di debug da usare per il debug del codice GPU. (Disponibile quando il debugger GPU è attivo).

### <a name="gpu-default-breakpoint-behavior"></a>Comportamento punto di interruzione predefinito GPU

Imposta la frequenza con cui il debugger GPU si interrompe.

**Choices**

- **Interrompi una volta per ogni curva di distorsione** una volta per distorsione
- **Interrompi per ogni thread (ad esempio, comportamento della CPU)** -Interrompi per ogni thread (ad esempio, comportamento della CPU)

### <a name="attach"></a>Collegamento

Specifica se il debugger deve tentare di connettersi a un processo esistente all'avvio del debug.

### <a name="sql-debugging"></a>Debug SQL

Alleghi il debugger SQL.

### <a name="deployment-directory"></a>Directory di distribuzione

Quando si esegue il debug in un computer remoto, se si desidera che il contenuto dell'output del progetto (ad eccezione dei file PDB) venga copiato nel computer remoto, specificare il percorso.

### <a name="additional-files-to-deploy"></a>File aggiuntivi da distribuire

Quando si esegue il debug in un computer remoto, i file e le directory specificati qui (oltre all'output del progetto) vengono copiati nella directory di distribuzione, se ne è stata specificata una.

### <a name="deploy-visual-c-debug-runtime-libraries"></a>Distribuisci librerie di runtime di debug Visual C++

Specifica se distribuire le librerie di runtime di debug per la piattaforma attiva (Win32, x64 o ARM).

### <a name="amp-default-accelerator"></a>Tasto di scelta rapida predefinito AMP

Esegue C++ l'override della selezione dell'acceleratore predefinito di amp. La proprietà non si applica quando si esegue il debug di codice gestito.

## <a name="web-browser-debugger-property-page"></a>Pagina delle proprietà del debugger del Web browser

### <a name="http-url"></a>URL HTTP

Specifica l'URL per il progetto.

### <a name="debugger-type"></a>Tipo di debugger

Specifica il tipo di debugger da utilizzare. Se impostato su automatico, il tipo di debugger verrà selezionato in base al contenuto del file exe.

**Choices**

- **Solo nativo** -nativo
- **Solo gestito** : solo gestito
- Misto **misto**
- **Auto-auto**
- **Script-script**

## <a name="web-service-debugger-property-page"></a>Pagina delle proprietà del debugger servizio Web

### <a name="http-url"></a>URL HTTP

Specifica l'URL per il progetto.

### <a name="debugger-type"></a>Tipo di debugger

Specifica il tipo di debugger da utilizzare. Se impostato su automatico, il tipo di debugger verrà selezionato in base al contenuto del file exe.

**Choices**

- **Solo nativo** -nativo
- **Solo gestito** : solo gestito
- Misto **misto**
- **Auto-auto**
- **Script-script**

### <a name="sql-debugging"></a>Debug SQL

Alleghi il debugger SQL.
