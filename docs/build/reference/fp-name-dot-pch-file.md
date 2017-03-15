---
title: "/Fp (Specifica file pch) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.PrecompiledHeaderFile"
  - "/fp"
  - "VC.Project.VCCLWCECompilerTool.PrecompiledHeaderFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".pch (file), denominazione"
  - "/Fp (opzione del compilatore) [C++]"
  - "Fp (opzione del compilatore) [C++]"
  - "-Fp (opzione del compilatore) [C++]"
  - "nomi [C++], PCH"
  - "denominazione di file di intestazione precompilati"
  - "PCH (file), denominazione"
  - "file di intestazione precompilata, denominazione"
ms.assetid: 0fcd9cbd-e09f-44d3-9715-b41efb5d0be2
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Fp (Specifica file pch)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un nome di percorso per un'intestazione precompilata da utilizzare al posto di quello predefinito.  
  
## Sintassi  
  
```  
/Fppathname  
```  
  
## Note  
 Utilizzare questa opzione con [\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md) o [\/Yu \(Utilizza il file di intestazione precompilato\)](../../build/reference/yu-use-precompiled-header-file.md) per specificare un nome di percorso per un'intestazione precompilata in sostituzione di quello predefinito.  È anche possibile utilizzare **\/Fp** con **\/Yc** per specificare l'uso di un file di intestazione precompilata diverso dall'argomento di **\/Yc** `filename` e dal nome di base del file di origine.  
  
 Se non si specifica un'estensione come parte del nome del percorso, verrà utilizzata l'estensione PCH.  Se si specifica una directory senza un nome file, il nome file predefinito sarà VC`x`0.pch, dove `x` indica la versione principale di Visual C\+\+ in uso.  
  
 È inoltre possibile utilizzare l'opzione **\/Fp** con **\/Yu**.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Intestazioni precompilate**.  
  
4.  Modificare la proprietà **File di intestazione precompilato**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderFile%2A>.  
  
## Esempio  
 Se si desidera creare un file di intestazione precompilato per una versione di debug del programma e si esegue la compilazione dei file di intestazione e del codice sorgente, è possibile specificare un comando quale:  
  
```  
CL /DDEBUG /Zi /Yc /FpDPROG.PCH PROG.CPP  
```  
  
## Esempio  
 Il comando seguente specifica l'utilizzo di un file di intestazione precompilato denominato MYPCH.pch.  Si presuppone che il codice sorgente nel file PROG.cpp sia stato precompilato tramite MYAPP.h e che il codice precompilato risieda nel file MYPCH.pch.  Utilizza il contenuto di MYPCH.pch e compila la parte restante di PROG.cpp per creare un file con estensione obj.  L'output di questo esempio è un file denominato PROG.exe.  
  
```  
CL /YuMYAPP.H /FpMYPCH.PCH PROG.CPP  
```  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)