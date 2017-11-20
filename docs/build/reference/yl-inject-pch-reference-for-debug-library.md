---
title: -Yl (inserisce il riferimento PCH per la libreria di Debug) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /yi
dev_langs: C++
helpviewer_keywords:
- -Yl compiler option [C++]
- Yl compiler option [C++]
- /Yl compiler option [C++]
ms.assetid: 8e4a396a-6790-4a9f-8387-df015a3220e7
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 271681849d78eb8a6a4032bcbafbcc81b96c9f9b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="yl-inject-pch-reference-for-debug-library"></a>/Yl (Inserisce il riferimento PCH per la libreria di debug)
Utilizzato se la creazione di una libreria di debug che utilizza le intestazioni precompilate e la compilazione non riesce.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Ylsymbol  
```  
  
```  
/Yl-  
```  
  
## <a name="arguments"></a>Argomenti  
 `symbol`  
 Un simbolo arbitrario da archiviare nel modulo di oggetto.  
  
 \-  
 Un segno meno (-) che disabilita in modo esplicito il **/Yl** l'opzione del compilatore.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, il compilatore utilizza il **/Yl** opzione (senza specificare un *simbolo*). Il **/Yl** opzione consente al debugger di ottenere informazioni complete sui tipi. **/Yl-** disabilita il comportamento predefinito.  
  
 Quando si esegue la compilazione di un modulo con **/Yc** e **/Yl**`symbol`, il compilatore crea un simbolo simile a _ @@_PchSym\_@00@... @`symbol`, dove i puntini di sospensione (...) rappresenta una stringa di caratteri generate dal linker e lo archivia nel modulo di oggetto. Qualsiasi file di origine che si compila con questa intestazione precompilata fa riferimento al simbolo specificato, che indica al linker di includere il modulo di oggetto e le relative informazioni di debug della libreria.  
  
 Con questa opzione, è possibile generare LNK1211. Quando si specifica il [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) e [/Z7, /Zi, /ZI (formato informazioni di Debug)](../../build/reference/z7-zi-zi-debug-information-format.md) opzioni, il compilatore crea un file di intestazione precompilata che contiene le informazioni di debug. Quando si archiviano le intestazioni precompilate in una raccolta, utilizza la libreria da compilare un modulo di oggetto e il codice sorgente non fa riferimento a una delle funzioni definite nel file di intestazione precompilata, può verificarsi un errore.  
  
 Per risolvere il problema, specificare **/Yl**`symbol`, dove `symbol` è il nome di un simbolo arbitrario nella libreria, quando si crea un file di intestazione precompilata non contiene alcuna definizione di funzione. Questa opzione indica al compilatore di archiviare le informazioni di debug nel file di intestazione precompilata.  
  
 Per ulteriori informazioni sulle intestazioni precompilate, vedere:  
  
-   [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)