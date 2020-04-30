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
ms.openlocfilehash: 0b3fa8bcfd973949e73fdf701db2adb6c58be687
ms.sourcegitcommit: 2f9ff2041d70c406df76c5053151192aad3937ea
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/29/2020
ms.locfileid: "82587377"
---
# <a name="tsaware-create-terminal-server-aware-application"></a>/TSAWARE (Crea un'applicazione con supporto Terminal Server)

```
/TSAWARE[:NO]
```

## <a name="remarks"></a>Osservazioni

L'opzione/TSAWARE imposta un flag nel campo IMAGE_OPTIONAL_HEADER DllCharacteristics nell'intestazione facoltativa dell'immagine del programma. Quando questo flag viene impostato, Terminal Server non apporta determinate modifiche all'applicazione.

Quando un'applicazione non è in grado di riconoscere Terminal Server (nota anche come applicazione legacy), Terminal Server apporta alcune modifiche all'applicazione legacy per renderla funzionante correttamente in un ambiente multiutente. Ad esempio, Terminal Server creerà una cartella di Windows virtuale, in modo che ogni utente ottenga una cartella di Windows invece di ottenere la directory di Windows del sistema. Questo consente agli utenti di accedere ai propri file INI. Inoltre, Terminal Server apporta alcune modifiche al registro di sistema per un'applicazione legacy. Queste modifiche rallentano il caricamento dell'applicazione legacy in Terminal Server.

Se un'applicazione è Terminal Server in grado di riconoscere, non deve basarsi sui file INI né scrivere nel registro di sistema **HKEY_CURRENT_USER** durante l'installazione.

Se si usa/TSAWARE e l'applicazione usa ancora file INI, i file verranno condivisi da tutti gli utenti del sistema. Se accettabile, è comunque possibile collegare l'applicazione a/TSAWARE; in caso contrario, è necessario usare/TSAWARE: NO.

L'opzione/TSAWARE è abilitata per impostazione predefinita per le applicazioni Windows e console. Per informazioni, vedere [/Subsystem](subsystem-specify-subsystem.md) e [/Version](version-version-information.md) .

/TSAWARE non è valido per i driver o le dll.

Se un'applicazione è stata collegata a/TSAWARE, DUMPBIN [/headers](headers.md) visualizzerà le informazioni relative a tale effetto.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **sistema** .

1. Modificare la proprietà **Terminal Server** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TerminalServerAware%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[Archiviazione di informazioni specifiche dell'utente](/windows/win32/TermServ/storing-user-specific-information)<br/>
[Applicazioni legacy in un ambiente Servizi terminal](https://msdn.microsoft.com/library/aa382957.aspx)
