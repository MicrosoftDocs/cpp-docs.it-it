---
title: "/TSAWARE (Crea un&#39;applicazione con supporto Terminal Server) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/tsaware"
  - "VC.Project.VCLinkerTool.TerminalServerAware"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/TSAWARE (opzione del linker)"
  - "Terminal Server"
  - "Terminal Server, applicazioni con supporto Terminal Server"
  - "TSAWARE (opzione del linker)"
  - "-TSAWARE (opzione del linker)"
ms.assetid: fe1c1846-de5b-4839-b562-93fbfe36cd29
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /TSAWARE (Crea un&#39;applicazione con supporto Terminal Server)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/TSAWARE[:NO]  
```  
  
## Note  
 L'opzione \/TSAWARE imposta un flag nel campo DllCharacteristics di IMAGE\_OPTIONAL\_HEADER nell'intestazione facoltativa dell'immagine del programma.  Quando questo flag è impostato, Terminal Server non effettuerà determinate modifiche all'applicazione.  
  
 Le applicazioni che non dispongono del supporto Terminal Server sono in genere applicazioni legacy. A tali applicazioni Terminal Server apporta alcune modifiche che ne garantiscono il corretto funzionamento in ambienti multiutente.  Viene ad esempio creata una cartella Windows virtuale, in modo che ogni utente disponga di una cartella Windows anziché della directory Windows di sistema.  In tal modo gli utenti avranno la possibilità di accedere ai rispettivi file INI.  Nel caso di un'applicazione legacy vengono inoltre apportate alcune modifiche al Registro di sistema,  le quali hanno l'effetto di rallentare il caricamento dell'applicazione legacy su Terminal Server.  
  
 Se un'applicazione dispone del supporto Terminal Server, è importante che in essa, durante l'installazione, non vengano né utilizzati i file INI né scritto nel Registro di sistema **HKEY\_CURRENT\_USER**.  
  
 Se si utilizza \/TSAWARE e nell'applicazione vengono ancora utilizzati file INI, tali file verranno condivisi da tutti gli utenti del sistema.  Se questa situazione è accettabile, sarà comunque possibile collegare l'applicazione a \/TSAWARE. In caso contrario sarà necessario utilizzare \/TSAWARE:NO.  
  
 L'opzione \/TSAWARE viene attivata per impostazione predefinita per Windows 2000 e versioni successive, per applicazioni Windows e console.  Per informazioni, vedere [\/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) e [\/VERSION](../../build/reference/version-version-information.md).  
  
 \/TSAWARE non è valida per driver, VxD o DLL.  
  
 Se un'applicazione è stata collegata a \/TSAWARE, DUMPBIN [\/HEADERS](../../build/reference/headers.md) visualizzerà informazioni relative a tale operazione.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Sistema**.  
  
4.  Modificare la proprietà **Terminal Server**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TerminalServerAware%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [Storing User\-Specific Information](http://msdn.microsoft.com/library/aa383452)   
 [Legacy Applications in a Terminal Services Environment](https://msdn.microsoft.com/en-us/library/aa382957.aspx)