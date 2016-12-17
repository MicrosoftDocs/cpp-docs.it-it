---
title: "/ASSEMBLYDEBUG (Aggiunge DebuggableAttribute) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.AssemblyDebug"
  - "/ASSEMBLYDEBUG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ASSEMBLYDEBUG (opzione del linker)"
  - "ASSEMBLYDEBUG (opzione del linker)"
  - "-ASSEMBLYDEBUG (opzione del linker)"
ms.assetid: 94443af3-470c-41d7-83a0-7434563d7982
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /ASSEMBLYDEBUG (Aggiunge DebuggableAttribute)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/ASSEMBLYDEBUG[:DISABLE]  
```  
  
 \/ASSEMBLYDEBUG crea l'attributo **DebuggableAttribute** con registrazione delle informazioni di debug e disabilita le ottimizzazioni JIT.  Si ottiene lo stesso risultato specificando il seguente attributo nell'origine:  
  
```  
[assembly:Debuggable(true, true)];   // same as /ASSEMBLYDEBUG  
```  
  
 \/ASSEMBLYDEBUG:DISABLE crea l'attributo **DebuggableAttribute**, ma disabilita la registrazione delle informazioni di debug e attiva le ottimizzazioni JIT.  Si ottiene lo stesso risultato specificando il seguente attributo nell'origine:  
  
```  
[assembly:Debuggable(false, false)];   // same as /ASSEMBLYDEBUG:DISABLE  
```  
  
 Per impostazione predefinita, l'attributo **DebuggableAttribute** non viene generato.  
  
 È anche possibile aggiungere DebuggableAttribute direttamente a un assembly nel codice sorgente.  Di seguito è riportato un esempio:  
  
```  
[assembly:Debuggable(true, true)];   // same as /ASSEMBLYDEBUG  
```  
  
## Note  
 In Visual C\+\+ .NET 2003 e versioni successive è necessario specificare esplicitamente che un'immagine gestita può essere sottoposta a debug.  Non è sufficiente utilizzare solo [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
 Di seguito sono elencate altre opzioni del linker che hanno effetto sulla generazione dell'assembly.  
  
-   [\/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [\/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)  
  
-   [\/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [\/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [\/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
-   [\/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [\/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Debug**.  
  
4.  Modificare la proprietà **Assembly Debuggable**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AssemblyDebug%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)