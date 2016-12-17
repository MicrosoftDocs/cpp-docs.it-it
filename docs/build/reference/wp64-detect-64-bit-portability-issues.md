---
title: "/Wp64 (Rileva errori di portabilit&#224; a 64 bit) | Microsoft Docs"
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
  - "VC.Project.VCCLWCECompilerTool.Detect64BitPortabilityProblems"
  - "VC.Project.VCCLCompilerTool.Detect64BitPortabilityProblems"
  - "/wp64"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Wp64 (opzione del compilatore) [C++]"
  - "compilatore a 64 bit [C++], rilevamento di problemi di portabilità"
  - "Wp64 (opzione del compilatore) [C++]"
  - "-Wp64 (opzione del compilatore) [C++]"
ms.assetid: 331ae5aa-e627-4d03-8f63-dd2c2d76dadd
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Wp64 (Rileva errori di portabilit&#224; a 64 bit)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa opzione del compilatore è obsoleta. Nelle versioni di Visual Studio precedenti a Visual Studio 2013, rileva i problemi di portabilità a 64 bit nei tipi contrassegnati anche con la parola chiave [\_\_w64](../../cpp/w64.md).  
  
## Sintassi  
  
```  
/Wp64  
```  
  
## Note  
 Per impostazione predefinita, nelle versioni di Visual Studio precedenti a Visual Studio 2013, l'opzione del compilatore **\/Wp64** è disattivata nel compilatore Visual C\+\+ a 32 bit e attivata nel compilatore Visual C\+\+ a 64 bit.  
  
> [!IMPORTANT]
>  L'opzione del compilatore [\/Wp64](../../build/reference/wp64-detect-64-bit-portability-issues.md) e la parola chiave [\_\_w64](../../cpp/w64.md) sono deprecate in Visual Studio 2010 e Visual Studio 2012 e non sono supportare a partire da Visual Studio 2013. Se si converte un progetto che usa questa opzione, non verrà eseguita la migrazione dell'opzione durante la conversione. Per usare questa opzione in Visual Studio 2010 o Visual Studio 2012, è necessario digitare l'opzione del compilatore in **Altre opzioni** nella sezione **Riga di comando** delle proprietà del progetto. Se si usa l'opzione del compilatore **\/Wp64** nella riga di comando, il compilatore visualizza l'avviso della riga di comando D9002. Invece di usare questa opzione e questa parola chiave per rilevare i problemi della portabilità a 64 bit, usare un compilatore di Visual C\+\+ che ha come destinazione una piattaforma a 64 bit e specificare l'opzione [\/W4](../../build/reference/compiler-option-warning-level.md). Per altre informazioni, vedere [Configurazione di programmi per processori a 64 bit](../../build/configuring-programs-for-64-bit-visual-cpp.md).  
  
 Le variabili dei tipi seguenti vengono testate su un sistema operativo a 32 bit come se fossero usate in un sistema operativo a 64 bit:  
  
-   int  
  
-   long  
  
-   puntatore  
  
 Se si compila regolarmente l'applicazione con un compilatore a 64 bit, è possibile disabilitare semplicemente **\/Wp64** nelle compilazioni a 32 bit perché il compilatore a 64 bit rileverà tutti i problemi. Per altre informazioni su come usare un sistema operativo Windows a 64 bit, vedere [Configurazione di programmi per processori a 64 bit](../../build/configuring-programs-for-64-bit-visual-cpp.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  
  
     Per altre informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la casella **Opzioni aggiuntive** per includere **\/Wp64**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Detect64BitPortabilityProblems%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Configurazione di programmi per processori a 64 bit](../../build/configuring-programs-for-64-bit-visual-cpp.md)