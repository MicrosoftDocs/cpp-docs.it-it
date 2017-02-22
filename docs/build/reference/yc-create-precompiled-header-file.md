---
title: "/Yc (Crea il file di intestazione precompilato) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.UsePrecompiledHeader"
  - "/yc"
  - "VC.Project.VCCLWCECompilerTool.PrecompiledHeaderThrough"
  - "VC.Project.VCCLWCECompilerTool.UsePrecompiledHeader"
  - "VC.Project.VCCLCompilerTool.PrecompiledHeaderThrough"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".pch (file), creazione"
  - "/Yc (opzione del compilatore) [C++]"
  - "PCH (file), creazione"
  - "file di intestazione precompilata, creazione"
  - "Yc (opzione del compilatore) [C++]"
  - "-Yc (opzione del compilatore) [C++]"
ms.assetid: 47c2e555-b4f5-46e6-906e-ab5cf21f0678
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# /Yc (Crea il file di intestazione precompilato)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica al compilatore di creare un file di intestazione precompilata con estensione pch che rappresenta lo stato della compilazione in un determinato punto.  
  
## Sintassi  
  
```  
/Yc[filename]  
```  
  
## Argomenti  
 `filename`  
 Specifica un file di intestazione \(estensione h\).  Quando si utilizza questo argomento, viene compilato tutto il codice fino al file di intestazione incluso.  
  
## Note  
 Quando si specifica **\/Yc** senza un argomento, viene compilato tutto il codice fino alla fine del file di origine di base oppure fino al punto del file di base in cui si verifica un pragma [hdrstop](../../preprocessor/hdrstop.md).  Il file pch risultante ha lo stesso nome del file di origine di base, a meno che non si specifichi un nome file diverso utilizzando il pragma **hdrstop** o l'opzione **\/Fp**.  
  
 Il codice precompilato viene salvato in un file con un nome creato dal nome di base del file specificato con l'opzione **\/Yc** ed estensione pch.  Per specificare un nome per un file di intestazione precompilata, è inoltre possibile utilizzare l'opzione [\/Fp \(Specifica file pch\)](../../build/reference/fp-name-dot-pch-file.md).  
  
 Se si utilizza **\/Yc**`filename`, verrà compilato tutto il codice fino al file specificato incluso, per un utilizzo successivo con l'opzione **\/Yu**.  
  
 Se le opzioni **\/Yc**`filename` e [\/Yu \(Utilizza il file di intestazione precompilato\)](../../build/reference/yu-use-precompiled-header-file.md)`filename` sono specificate nella stessa riga di comando ed entrambe fanno riferimento o implicano lo stesso nome file, **\/Yc**`filename` avrà la precedenza.  Questa funzionalità semplifica la scrittura di makefile.  
  
 Per ulteriori informazioni sulle intestazioni precompilate, vedere:  
  
-   [\/Y \(Intestazioni precompilate\)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creazione di file di intestazione precompilati](../../build/reference/creating-precompiled-header-files.md)  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Selezionare un file cpp.  Il file cpp deve includere il file con estensione h contenente le informazioni sull'intestazione precompilata.  Le impostazioni di **\/Yc** del progetto possono essere sottoposte a override a livello di file.  
  
2.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
3.  Fare clic sulla cartella **C\/C\+\+**.  
  
4.  Fare clic sulla pagina delle proprietà **Intestazioni precompilate**.  
  
5.  Modificare la proprietà **Crea\/Usa PCH tramite file** o la proprietà **Crea\/Usa intestazione precompilata**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.  
  
## Esempio  
 Esaminare il codice seguente:  
  
```  
#include <afxwin.h>   // Include header for class library  
#include "resource.h" // Include resource definitions  
#include "myapp.h"    // Include information specific to this app  
...  
```  
  
 Quando il codice viene compilato con il comando `CL /YcMYAPP.H PROG.CPP`, il compilatore salva tutta la pre\-elaborazione relativa a AFXWIN.h, RESOURCE.h e MYAPP.h in un file di intestazione precompilata denominato MYAPP.pch.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)