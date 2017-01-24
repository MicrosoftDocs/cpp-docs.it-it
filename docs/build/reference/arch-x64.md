---
title: "/arch (x64) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: ecda22bf-5bed-43f4-99fb-88aedd83d9d8
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /arch (x64)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica l'architettura per la generazione del codice su piattaforme x64.  Vedere anche [\/arch \(x86\)](../../build/reference/arch-x86.md) e [\/arch \(ARM\)](../../build/reference/arch-arm.md).  
  
## Sintassi  
  
```  
/arch:[AVX|AVX2]  
```  
  
## Argomenti  
 **\/arch:AVX**  
 Abilita l'uso di istruzioni Intel Advanced Vector Extensions.  
  
 **\/arch:AVX2**  
 Abilita l'uso di istruzioni Intel Advanced Vector Extensions 2.  
  
## Note  
 **\/arch** interessa solo la generazione del codice per le funzioni native.  Quando si usa [\/clr](../../build/reference/clr-common-language-runtime-compilation.md) per eseguire la compilazione, **\/arch** non determina alcun effetto sulla generazione del codice per le funzioni gestite.  
  
 Il simbolo del preprocessore `__AVX__` viene definito quando viene specificata l'opzione del compilatore **\/arch:AVX**.  Il simbolo del preprocessore `__AVX2__` viene definito quando viene specificata l'opzione del compilatore **\/arch:AVX2**.  Per altre informazioni, vedere [Macro predefinite](../../preprocessor/predefined-macros.md).  L'opzione del compilatore **\/arch:AVX2** è stata introdotta in Visual Studio 2013 Update 2, versione 12.0.34567.1.  
  
### Per impostare l'opzione del compilatore \/arch:AVX o \/arch:AVX2 in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per altre informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **Proprietà di configurazione**, **C\/C\+\+**.  
  
3.  Selezionare la pagina **Generazione codice**.  
  
4.  Nella casella di riepilogo a discesa **Abilita set di istruzioni avanzate** scegliere **Estensioni Advanced Vector Extension \(\/arch:AVX\)** o **Advanced Vector Extension 2 \(\/arch:AVX2\)**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.  
  
## Vedere anche  
 [\/arch \(Architettura minima della CPU\)](../../build/reference/arch-minimum-cpu-architecture.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)