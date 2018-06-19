---
title: -Yc (Crea File di intestazione precompilata) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- devlang-cpp
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.UsePrecompiledHeader
- /yc
- VC.Project.VCCLWCECompilerTool.PrecompiledHeaderThrough
- VC.Project.VCCLWCECompilerTool.UsePrecompiledHeader
- VC.Project.VCCLCompilerTool.PrecompiledHeaderThrough
dev_langs:
- C++
helpviewer_keywords:
- precompiled header files, creating
- PCH files, creating
- .pch files, creating
- -Yc compiler option [C++]
- /Yc compiler option [C++]
- Yc compiler option [C++]
ms.assetid: 47c2e555-b4f5-46e6-906e-ab5cf21f0678
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7f26121c80378f4317d02f51582ad67033972765
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378662"
---
# <a name="yc-create-precompiled-header-file"></a>/Yc (Crea il file di intestazione precompilata)
Indica al compilatore di creare un file di intestazione precompilata (PCH) che rappresenta lo stato della compilazione in un determinato punto.  
  
## <a name="syntax"></a>Sintassi  
  
> __/Yc__
>  __/Yc__*filename*  
  
  
## <a name="arguments"></a>Argomenti  
*filename*  
 Specifica un file di intestazione (h). Quando questo argomento viene utilizzato, il compilatore compila tutto il codice, incluso il file con estensione h.  
  
## <a name="remarks"></a>Note  
 Quando **/Yc** viene specificata senza un argomento, il compilatore compila tutto il codice fino alla fine del file di origine di base o fino a quando il file di base in cui un [hdrstop](../../preprocessor/hdrstop.md) direttiva. Il file pch risultante ha lo stesso nome di base come file di origine di base, a meno che non si specifica un nome di file diverso utilizzando il **hdrstop** pragma o **/Fp** opzione.  
  
 Il codice precompilato viene salvato in un file con un nome creato dal nome di base del file specificato con il **/Yc** opzione ed estensione pch. È inoltre possibile utilizzare il [/Fp (nome. File PCH)](../../build/reference/fp-name-dot-pch-file.md) opzione per specificare un nome per il file di intestazione precompilata.  
  
 Se si utilizza __/Yc__*filename*, il compilatore compila tutto il codice, incluso il file specificato per un utilizzo successivo con la [/Yu (utilizza precompilata File di intestazione)](../../build/reference/yu-use-precompiled-header-file.md) opzione.  
  
 Se le opzioni __/Yc__*filename* e __/Yu__*filename* si verificano nella stessa riga di comando ed entrambe fanno riferimento o implicano, lo stesso nome di file, __/Yc__*filename* ha la precedenza. Questa funzionalità semplifica la scrittura di makefile.  
  
 Per ulteriori informazioni sulle intestazioni precompilate, vedere:  
  
-   [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Selezionare un file con estensione cpp. Il file con estensione cpp deve #include il file con estensione h che contiene le informazioni di intestazione precompilata. Il progetto **/Yc** impostazione può essere sottoposto a override a livello di file.  
  
2.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
3.  Aprire il **le proprietà di configurazione**, **C/C++**, **intestazioni precompilate** pagina delle proprietà.  
  
4.  Modificare il **intestazione precompilata** proprietà.  
  
5.  Per impostare il nome del file, modificare il **File di intestazione precompilata** proprietà.
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.  
  
## <a name="example"></a>Esempio  
 Esaminare il codice seguente:  
  
```cpp  
// prog.cpp
// compile with: cl /c /Ycmyapp.h prog.cpp
#include <afxwin.h>   // Include header for class library  
#include "resource.h" // Include resource definitions  
#include "myapp.h"    // Include information specific to this app  
// ...  
```  
  
Quando il codice viene compilato con il comando `CL /YcMYAPP.H PROG.CPP`, il compilatore Salva tutta la pre-elaborazione per AFXWIN. h, e MyApp nel file di intestazione precompilata denominato MyApp.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md) [creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)