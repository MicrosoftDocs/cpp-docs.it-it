---
title: -Yu (utilizza il File di intestazione precompilata) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /yu
dev_langs: C++
helpviewer_keywords:
- Yu compiler option [C++]
- /Yu compiler option [C++]
- -Yu compiler option [C++]
- PCH files, use existing
- .pch files, use existing
- precompiled header files, use existing
ms.assetid: 24f1bd0e-b624-4296-a17e-d4b53e374e1f
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c83f159882b9ed6fcfe5557c150413303c401dda
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="yu-use-precompiled-header-file"></a>/Yu (Utilizza il file di intestazione precompilata)
Indica al compilatore di usare un file di intestazione precompilata (PCH) esistente nella compilazione corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Yu[filename]  
```  
  
## <a name="arguments"></a>Argomenti  
 *filename*  
 Il nome del file di intestazione è incluso nel file di origine mediante un **#include** direttiva del preprocessore.  
  
## <a name="remarks"></a>Note  
 Il nome del file di inclusione deve essere lo stesso per entrambi i **/Yc** opzione che crea l'intestazione precompilata e le successive **/Yu** opzione che indica l'utilizzo dell'intestazione precompilata.  
  
 Per **/Yc**, `filename` specifica il punto in cui precompilazione arresta; precompilato tutto il codice anche se `filename` e i nomi di intestazione precompilata risultante utilizzando il nome base del file di inclusione e l'estensione PCH.  
  
 Il file PCH deve essere stato creato utilizzando **/Yc**.  
  
 Il compilatore considera tutto il codice che precede il file con estensione h come precompilato. Salta a appena prima di **#include** direttiva associata al file con estensione h, utilizza il codice contenuto nel file pch e quindi compila tutto il codice dopo `filename`.  
  
 Nella riga di comando, è consentito alcuno spazio tra **/Yu** e `filename`.  
  
 Quando si specifica il **/Yu** opzione senza un nome di file, il programma di origine deve includere un [#pragma hdrstop](../../preprocessor/hdrstop.md) che specifica il nome del file di intestazione precompilata, il file pch. In questo caso, il compilatore utilizza l'intestazione precompilata (specifica file PCH) denominato da [/Fp (nome. File PCH)](../../build/reference/fp-name-dot-pch-file.md). Il compilatore passa alla posizione del pragma, Ripristina lo stato compilato da file di intestazione precompilata specificato dal pragma e quindi compila solo il codice che segue il pragma. Se **#pragma hdrstop** non specifica un nome di file, il compilatore cerca un file con un nome derivato dal nome di base del file di origine con un'estensione pch. È inoltre possibile utilizzare il **/Fp** opzione per specificare un file pch diverso.  
  
 Se si specifica il **/Yu** opzione senza un nome di file e non è possibile specificare un **hdrstop** pragma, viene generato un messaggio di errore e la compilazione ha esito negativo.  
  
 Se il **/Yc** `filename` e **/Yu** `filename` opzioni si trovano nella stessa riga di comando e lo stesso nome di file, sia quelli di riferimento **/Yc** `filename` accetta precedenza, precompilazione fino a tutto il codice incluso il file denominato. Questa funzionalità semplifica la scrittura di makefile.  
  
 Poiché i file PCH contengono informazioni sull'ambiente del computer, nonché informazioni sull'indirizzo di memoria sul programma, utilizzare solo un file pch nel computer in cui è stato creato.  
  
 Per ulteriori informazioni sulle intestazioni precompilate, vedere:  
  
-   [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Specificare [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) su un file con estensione cpp nel progetto.  
  
2.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
3.  Fare clic sulla cartella **C/C++** .  
  
4.  Fare clic su di **intestazioni precompilate** pagina delle proprietà.  
  
5.  Modificare il **Crea/Usa PCH tramite File** proprietà o **Crea/Usa intestazione precompilata** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.  
  
## <a name="examples"></a>Esempi  
 Se il codice seguente:  
  
```  
#include <afxwin.h>   // Include header for class library  
#include "resource.h" // Include resource definitions  
#include "myapp.h"    // Include information specific to this app  
...  
```  
  
 viene compilato con la riga di comando `CL /YuMYAPP.H PROG.CPP`, il compilatore non elabora le tre inclusione istruzioni ma utilizza codice precompilato da MyApp, con un risparmio di tempo nella pre-elaborazione di tutte e tre i file (e tutti i file potrebbero includere).  
  
 È possibile utilizzare il [/Fp (nome. File PCH)](../../build/reference/fp-name-dot-pch-file.md) con il **/Yu** opzione per specificare il nome del file pch, se il nome è diverso dal file argomento del nome di **/Yc** o il nome del file di origine, come in base il seguenti:  
  
```  
CL /YuMYAPP.H /FpMYPCH.pch PROG.CPP  
```  
  
 Questo comando specifica un file di intestazione precompilata denominato MYPCH. Il compilatore utilizza il relativo contenuto per ripristinare lo stato di tutti i file di intestazione fino a e MyApp precompilato. Il compilatore compila quindi il codice che di MyApp **includono** istruzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)