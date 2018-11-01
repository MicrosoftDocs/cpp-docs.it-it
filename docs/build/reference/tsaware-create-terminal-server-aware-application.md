---
title: /TSAWARE (Crea un'applicazione con supporto Terminal Server)
ms.date: 11/04/2016
f1_keywords:
- /tsaware
- VC.Project.VCLinkerTool.TerminalServerAware
helpviewer_keywords:
- Terminal Server
- /TSAWARE linker option
- Terminal Server, Terminal Server-aware applications
- -TSAWARE linker option
- TSAWARE linker option
ms.assetid: fe1c1846-de5b-4839-b562-93fbfe36cd29
ms.openlocfilehash: 4b6cebfd30c6572c2ea7d9a0e59625ac8fd66de1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50566595"
---
# <a name="tsaware-create-terminal-server-aware-application"></a>/TSAWARE (Crea un'applicazione con supporto Terminal Server)

```
/TSAWARE[:NO]
```

## <a name="remarks"></a>Note

L'opzione /TSAWARE imposta un flag nel campo DllCharacteristics di IMAGE_OPTIONAL_HEADER nell'intestazione facoltativa dell'immagine del programma. Quando questo flag viene impostato, Terminal Server non apporta determinate modifiche all'applicazione.

Quando un'applicazione non è compatibile con Terminal Server (noto anche come un'applicazione legacy), vengono apportate alcune modifiche all'applicazione legacy in modo che funzioni correttamente in un ambiente multiutente. Ad esempio, Terminal Server creerà una cartella virtuale di Windows, in modo che ogni utente riceva una cartella di Windows anziché ottenere la directory del sistema Windows. Ciò offre agli utenti l'accesso per i propri file INI. Inoltre, Terminal Server apportate alcune modifiche al Registro di sistema per un'applicazione legacy. Queste modifiche rallentano il caricamento dell'applicazione legacy in Terminal Server.

Se un'applicazione è supporto Terminal Server, è necessario né si basano sui file con estensione INI né scrivere la **HKEY_CURRENT_USER** Registro di sistema durante l'installazione.

Se si usa /TSAWARE e l'applicazione usa ancora i file con estensione INI, i file verranno condivisi da tutti gli utenti del sistema. Se è accettabile, è comunque possibile collegare l'applicazione con /TSAWARE; in caso contrario, è necessario usare /TSAWARE: No.

L'opzione /TSAWARE è abilitato per impostazione predefinita per Windows e applicazioni console. Visualizzare [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) e [/VERSION](../../build/reference/version-version-information.md) per informazioni.

/ TSAWARE non è valida per i driver, VxDs o DLL.

Se un'applicazione è stata collegata a /TSAWARE, DUMPBIN [/HEADERS](../../build/reference/headers.md) verranno visualizzate le informazioni in tal senso.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **sistema** pagina delle proprietà.

1. Modificare il **Terminal Server** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TerminalServerAware%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
[L'archiviazione delle informazioni specifiche dell'utente](/windows/desktop/TermServ/storing-user-specific-information)<br/>
[Applicazioni legacy in un ambiente Servizi Terminal](https://msdn.microsoft.com/library/aa382957.aspx)