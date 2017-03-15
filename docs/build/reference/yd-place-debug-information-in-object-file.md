---
title: "/Yd (Inserisce le informazioni di debug nel file oggetto) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/yd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Yd (opzione del compilatore) [C++]"
  - "debug [C++], file di informazioni di debug"
  - "Yd (opzione del compilatore) [C++]"
  - "-Yd (opzione del compilatore) [C++]"
ms.assetid: c5a699fe-65ce-461e-964c-7f5eb2a8320a
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# /Yd (Inserisce le informazioni di debug nel file oggetto)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Se utilizzata con le opzioni [\/Yc](../../build/reference/yc-create-precompiled-header-file.md) e [\/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), inserisce informazioni di debug complete in tutti i file oggetto creati da un file di intestazione precompilata \(pch\).  Deprecata.  
  
## Sintassi  
  
```  
/Yd  
```  
  
## Note  
 L'opzione **\/Yd** è deprecata; in [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] è ora incluso il supporto per la scrittura di più oggetti in un unico file con estensione .pdb. In caso contrario, utilizzare **\/Zi**.  Per ulteriori informazioni, vedere [Deprecated Compiler Options in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
 A meno che non sia necessario distribuire una libreria contenente le informazioni di debug, utilizzare l'opzione [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) anziché **\/Z7** e **\/Yd**.  
  
 L'archiviazione di informazioni di debug complete in ogni file obj è necessaria solo per distribuire librerie contenenti informazioni di debug.  Essa rallenta la compilazione e richiede una notevole quantità di spazio su disco.  Quando **\/Yc** e **\/Z7** vengono utilizzate senza **\/Yd**, il compilatore archivia le informazioni di debug comuni nel primo file obj creato dal file pch.  Il compilatore non inserisce queste informazioni nei file obj successivamente creati dal file pch. Inserisce invece riferimenti incrociati alle informazioni.  Indipendentemente dal numero di file obj che utilizzano il file pch, solo un file obj contiene le informazioni di debug più frequenti.  
  
 Sebbene questo comportamento predefinito determini tempi di compilazione più veloci e riduca le esigenze di spazio su disco, non è auspicabile se una piccola modifica richiede la ricompilazione del file obj contenente le informazioni di debug più frequenti.  In tal caso il compilatore deve ricompilare tutti i file obj contenenti riferimenti incrociati al file obj originale.  Inoltre, se un file pch comune viene utilizzato da diversi progetti, l'affidamento ai riferimenti incrociati su un singolo file obj risulta difficile.  
  
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
  
## Esempi  
 Si supponga di avere due file di base, F.cpp e G.cpp, ciascuno contenente queste istruzioni **\#include**:  
  
```  
#include "windows.h"  
#include "etc.h"  
```  
  
 Il comando che segue crea il file di intestazione precompilato ETC.pch e il file oggetto F.obj:  
  
```  
CL /YcETC.H /Z7 F.CPP  
```  
  
 Il file oggetto F.obj include informazioni sul tipo e sul simbolo per WINDOWS.h e ETC.h \(e qualsiasi altro file di intestazione incluso\).  È ora possibile utilizzare l'intestazione precompilata ETC.pch per compilare il file di origine G.cpp:  
  
```  
CL /YuETC.H /Z7 G.CPP  
```  
  
 Il file oggetto G.obj non include le informazioni di debug per l'intestazione precompilata ma fa semplicemente riferimento a quelle informazioni nel file F.obj.  È necessario eseguire il collegamento con il file F.obj.  
  
 Se l'intestazione precompilata non è stata compilata con **\/Z7**, è comunque possibile utilizzarla in compilazioni successive mediante **\/Z7**.  Tuttavia le informazioni di debug sono inserite nel file oggetto corrente e i simboli locali relativi a tipi e funzioni definiti nell'intestazione precompilata non sono disponibili per il debugger.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)