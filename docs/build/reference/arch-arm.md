---
title: "/arch (ARM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 4f1406ff-f174-487c-a126-8ab06cf447c1
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# /arch (ARM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica l'architettura per la generazione di codice in ARM.  Vedere anche [\/arch \(x86\)](../../build/reference/arch-x86.md) e [\/arch \(x64\)](../../build/reference/arch-x64.md).  
  
## Sintassi  
  
```  
/arch:[ARMv7VE|VFPv4]  
```  
  
## Argomenti  
 **\/arch:ARMv7VE**  
 Abilita l'utilizzo di istruzioni delle estensioni di virtualizzazione di ARMv7VE.  
  
 **\/arch:VFPv4**  
 Consente l'utilizzo di istruzioni ARM VFPv4.  Se questa opzione non è specificata, VFPv3 è l'impostazione predefinita.  
  
## Note  
 La macro `_M_ARM_FP` \(solo per ARM\) indica, se presente, quale opzione del compilatore **\/arch** è stata usata.  Per altre informazioni, vedere [Macro predefinite](../../preprocessor/predefined-macros.md).  
  
 Quando si usa [\/clr](../../build/reference/clr-common-language-runtime-compilation.md) per eseguire la compilazione, **\/arch** non determina alcun effetto sulla generazione del codice per le funzioni gestite.  **\/arch** interessa solo la generazione del codice per le funzioni native.  
  
### Impostare l'opzione del compilatore \/arch:ARMv7VE o \/arch:VFPv4 in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per altre informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Nella casella **Opzioni aggiuntive** aggiungere `/arch:ARMv7VE` o `/arch:VFPv4`.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.  
  
## Vedere anche  
 [\/arch \(Architettura minima della CPU\)](../../build/reference/arch-minimum-cpu-architecture.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)