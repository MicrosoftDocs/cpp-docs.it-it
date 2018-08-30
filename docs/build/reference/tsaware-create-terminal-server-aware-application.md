---
title: -TSAWARE (crea un'applicazione con supporto Terminal Server) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /tsaware
- VC.Project.VCLinkerTool.TerminalServerAware
dev_langs:
- C++
helpviewer_keywords:
- Terminal Server
- /TSAWARE linker option
- Terminal Server, Terminal Server-aware applications
- -TSAWARE linker option
- TSAWARE linker option
ms.assetid: fe1c1846-de5b-4839-b562-93fbfe36cd29
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9caf6c9a47a667b57220b6bf577080d3548e94e9
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43198550"
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
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Scegliere il **Linker** cartella.  
  
3.  Scegliere il **sistema** pagina delle proprietà.  
  
4.  Modificare il **Terminal Server** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TerminalServerAware%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [L'archiviazione delle informazioni specifiche dell'utente](/windows/desktop/TermServ/storing-user-specific-information)   
 [Applicazioni legacy in un ambiente Servizi Terminal](https://msdn.microsoft.com/library/aa382957.aspx)