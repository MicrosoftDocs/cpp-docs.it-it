---
title: -Yc (Crea File di intestazione precompilata) | Microsoft Docs
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
ms.openlocfilehash: c5288e748956a405073697ddd7331a73b95d8650
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45714246"
---
# <a name="yc-create-precompiled-header-file"></a>/Yc (Crea il file di intestazione precompilata)

Indica al compilatore di creare un file di intestazione precompilata (PCH) che rappresenta lo stato della compilazione in un determinato punto.

## <a name="syntax"></a>Sintassi

> __/Yc__
>  __/Yc__*nomefile*

## <a name="arguments"></a>Argomenti

*filename*<br/>
Specifica un file di intestazione (h). Quando viene usato in questo argomento, il compilatore compila tutto il codice fino a e includendo il file con estensione h.

## <a name="remarks"></a>Note

Quando **/Yc** viene specificata senza un argomento, il compilatore compila tutto il codice fino alla fine del file di origine di base o al punto nel file di base in cui un [hdrstop](../../preprocessor/hdrstop.md) direttiva si verifica. Il file con estensione pch risultante ha lo stesso nome di base del file di origine di base solo se si specifica un nome di file diverso usando il **hdrstop** pragma o il **/Fp** opzione.

Il codice precompilato viene salvato in un file con un nome creato dal nome di base del file specificato con il **/Yc** opzione ed estensione pch. È anche possibile usare il [/Fp (nome. File PCH)](../../build/reference/fp-name-dot-pch-file.md) opzione per specificare un nome per il file di intestazione precompilata.

Se si usa __/Yc__*filename*, il compilatore compila tutto il codice fino alla versione nel file specificato per un utilizzo successivo con il [/Yu (Usa intestazione File precompilata)](../../build/reference/yu-use-precompiled-header-file.md) opzione.

Se le opzioni __/Yc__*filename* e __/Yu__*filename* si verificano nella stessa riga di comando ed entrambe fanno riferimento a o implicano, lo stesso nome di file, __/Yc__*filename* ha la precedenza. Questa funzionalità semplifica la scrittura di makefile.

Per altre informazioni sulle intestazioni precompilate, vedere:

- [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)

- [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Selezionare un file con estensione cpp. Il file con estensione cpp necessario #include il file con estensione h che contiene le informazioni di intestazione precompilata. Il progetto **/Yc** impostazione può essere sottoposto a override a livello di file.

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Aprire il **le proprietà di configurazione**, **C/C++**, **intestazioni precompilate** pagina delle proprietà.

1. Modificare il **intestazione precompilata** proprietà.

1. Per impostare il nome del file, modificare il **File di intestazione precompilata** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.

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

Quando questo codice viene compilato con il comando `CL /YcMYAPP.H PROG.CPP`, il compilatore Salva tutti la pre-elaborazione per AFXWIN. h, e denominato MyApp. MyApp. h in un file di intestazione precompilata.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)