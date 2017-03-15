---
title: "/Yl (Inserisce il riferimento PCH per la libreria di debug) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/yi"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Yl (opzione del compilatore) [C++]"
  - "Yl (opzione del compilatore) [C++]"
  - "-Yl (opzione del compilatore) [C++]"
ms.assetid: 8e4a396a-6790-4a9f-8387-df015a3220e7
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# /Yl (Inserisce il riferimento PCH per la libreria di debug)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Viene utilizzato se si crea una libreria di debug che utilizza intestazioni precompilate e la compilazione non riesce.  
  
## Sintassi  
  
```  
/Ylsymbol  
```  
  
```  
/Yl-  
```  
  
## Argomenti  
 `symbol`  
 Un simbolo arbitrario da archiviare nel modulo di oggetto.  
  
 \-  
 Un segno meno \(\-\) che esplicitamente disattiva l'opzione del compilatore **\/Yl**.  
  
## Note  
 Per impostazione predefinita, il compilatore utilizza l'opzione **\/Yl** \(senza specificare *symbol*\).  L'opzione **\/Yl** consente al debugger di ottenere informazioni complete sui tipi.  **\/Yl\-** disabilita il comportamento predefinito.  
  
 Quando si compila un modulo con **\/Yc** e **\/Yl**`symbol`, viene creato un simbolo simile a \_\_@@\_PchSym\_@00@...@`symbol`, dove i puntini di sospensione \(...\) rappresentano una stringa di caratteri generata dal linker e lo archivia nel modulo di oggetto.  Qualsiasi file di origine compilato con questa intestazione precompilata fa riferimento al simbolo specificato, che fa in modo che il linker includa il modulo di oggetto e le relative informazioni di debug dalla libreria.  
  
 Se si utilizza questa opzione, è possibile che venga generato l'errore LNK1211.  Quando si specificano le opzioni [\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md) e [\/Z7, \/Zi, \/ZI \(Formato informazioni di debug\)](../../build/reference/z7-zi-zi-debug-information-format.md), viene creato un file di intestazione precompilato contenente informazioni di debug.  Potrebbe verificarsi un errore quando si archivia l'intestazione precompilata in una libreria, si utilizza la libreria per compilare un modulo di oggetto e il codice sorgente non fa riferimento ad alcuna delle funzioni definite dal file di intestazione precompilato.  
  
 Per risolvere il problema, specificare **\/Yl**`symbol`, dove `symbol` è il nome di un simbolo arbitrario nella libreria quando si crea un file di intestazione precompilato che non contiene alcuna definizione di funzione.  Questa opzione indica al compilatore di archiviare le informazioni di debug nel file di intestazione precompilato.  
  
 Per ulteriori informazioni sulle intestazioni precompilate, vedere:  
  
-   [\/Y \(Intestazioni precompilate\)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creazione di file di intestazione precompilati](../../build/reference/creating-precompiled-header-files.md)  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)