---
title: -TSAWARE (Crea applicazione compatibile con il Server Terminal) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /tsaware
- VC.Project.VCLinkerTool.TerminalServerAware
dev_langs: C++
helpviewer_keywords:
- Terminal Server
- /TSAWARE linker option
- Terminal Server, Terminal Server-aware applications
- -TSAWARE linker option
- TSAWARE linker option
ms.assetid: fe1c1846-de5b-4839-b562-93fbfe36cd29
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4c6fb783f717f730945f8d34c8fe2a03f5e1f6d0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tsaware-create-terminal-server-aware-application"></a>/TSAWARE (Crea un'applicazione con supporto Terminal Server)
```  
/TSAWARE[:NO]  
```  
  
## <a name="remarks"></a>Note  
 L'opzione /TSAWARE imposta un flag nel campo DllCharacteristics di IMAGE_OPTIONAL_HEADER nell'intestazione facoltativa dell'immagine del programma. Quando questo flag viene impostato, Terminal Server non apporta determinate modifiche all'applicazione.  
  
 Quando un'applicazione non è compatibile con Terminal Server (anche noto come un'applicazione legacy), Terminal Server apporta alcune modifiche all'applicazione legacy per consentire il funzionamento corretto in un ambiente multiutente. Ad esempio, Terminal Server creerà una cartella virtuale di Windows, in modo che ogni utente disponga di una cartella di Windows anziché la directory del sistema Windows. Ciò consente agli utenti di accedere ai propri file INI. Inoltre, il Server Terminal apportate alcune modifiche al Registro di sistema per un'applicazione legacy. Queste modifiche rallentano il caricamento dell'applicazione legacy in Terminal Server.  
  
 Se un'applicazione è supporto Terminal Server, è necessario affidarsi file INI né scrivere il **HKEY_CURRENT_USER** Registro di sistema durante l'installazione.  
  
 Se si utilizza /TSAWARE e l'applicazione utilizza ancora file INI, i file verranno condivisi da tutti gli utenti del sistema. Se è accettabile, sarà comunque possibile collegare l'applicazione con /TSAWARE; in caso contrario, è necessario utilizzare /TSAWARE: No.  
  
 L'opzione /TSAWARE è abilitata per impostazione predefinita per Windows 2000 e versioni successive, per Windows e applicazioni console. Vedere [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) e [/VERSION](../../build/reference/version-version-information.md) per informazioni.  
  
 /TSAWARE non è valida per i driver, vxd o DLL.  
  
 Se un'applicazione è stata collegata a /TSAWARE, DUMPBIN [/HEADERS](../../build/reference/headers.md) visualizzerà informazioni su tale operazione.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **sistema** pagina delle proprietà.  
  
4.  Modificare il **Terminal Server** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TerminalServerAware%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [L'archiviazione delle informazioni specifiche dell'utente](http://msdn.microsoft.com/library/aa383452)   
 [Applicazioni legacy in un ambiente di servizi Terminal](https://msdn.microsoft.com/en-us/library/aa382957.aspx)