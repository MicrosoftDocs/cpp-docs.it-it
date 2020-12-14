---
description: Altre informazioni su:/YC (crea il file di intestazione precompilata)
title: /Yc (Crea il file di intestazione precompilato)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.UsePrecompiledHeader
- /yc
- VC.Project.VCCLWCECompilerTool.PrecompiledHeaderThrough
- VC.Project.VCCLWCECompilerTool.UsePrecompiledHeader
- VC.Project.VCCLCompilerTool.PrecompiledHeaderThrough
helpviewer_keywords:
- precompiled header files, creating
- PCH files, creating
- .pch files, creating
- -Yc compiler option [C++]
- /Yc compiler option [C++]
- Yc compiler option [C++]
ms.assetid: 47c2e555-b4f5-46e6-906e-ab5cf21f0678
ms.openlocfilehash: eba045c3148d0caceee3ca6f9d5352ea61726757
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243649"
---
# <a name="yc-create-precompiled-header-file"></a>/Yc (Crea il file di intestazione precompilato)

Indica al compilatore di creare un file di intestazione precompilata (PCH) che rappresenta lo stato della compilazione in un determinato punto.

## <a name="syntax"></a>Sintassi

> __/YC__\
> *Nome file* /YC

## <a name="arguments"></a>Argomenti

*filename*<br/>
Specifica un file di intestazione (. h). Quando si usa questo argomento, il compilatore compila tutto il codice fino al file con estensione h.

## <a name="remarks"></a>Commenti

Quando **/YC** viene specificato senza un argomento, il compilatore compila tutto il codice fino alla fine del file di origine di base o fino al punto nel file di base in cui si verifica una direttiva [hdrstop](../../preprocessor/hdrstop.md) . Il file con estensione PCH risultante ha lo stesso nome di base del file di origine di base, a meno che non si specifichi un nome file diverso usando il pragma **hdrstop** o l'opzione **/FP** .

Il codice precompilato viene salvato in un file con un nome creato dal nome di base del file specificato con l'opzione **/YC** e un'estensione PCH. È anche possibile usare [/FP (Name. File PCH)](fp-name-dot-pch-file.md) opzione per specificare un nome per il file di intestazione precompilata.

Se si usa __/YC__*filename*, il compilatore compila tutto il codice fino a includere il file specificato per l'uso successivo con l'opzione [/Yu (USA il file di intestazione precompilata)](yu-use-precompiled-header-file.md) .

Se le opzioni __/YC__*filename* e __/Yu__*filename* sono presenti nella stessa riga di comando e in entrambi i riferimenti, o implicano lo stesso nome file, __/YC__*filename* ha la precedenza. Questa funzionalità semplifica la scrittura di makefile.

Per ulteriori informazioni sulle intestazioni precompilate, vedere:

- [/Y (intestazioni precompilate)](y-precompiled-headers.md)

- [File di intestazione precompilata](../creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Selezionare un file con estensione cpp. Il file con estensione cpp deve #include il file con estensione h che contiene informazioni sull'intestazione precompilata. L'impostazione **/YC** del progetto può essere sottoposta a override a livello di file.

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Aprire la pagina delle proprietà **proprietà di configurazione**, **C/C++**, **intestazioni precompilate** .

1. Modificare la proprietà dell' **intestazione precompilata** .

1. Per impostare il nome del file, modificare la proprietà del **file di intestazione precompilata** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Controllare <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.

## <a name="example"></a>Esempio

Osservare il codice seguente:

```cpp
// prog.cpp
// compile with: cl /c /Ycmyapp.h prog.cpp
#include <afxwin.h>   // Include header for class library
#include "resource.h" // Include resource definitions
#include "myapp.h"    // Include information specific to this app
// ...
```

Quando questo codice viene compilato con il comando `CL /YcMYAPP.H PROG.CPP` , il compilatore salva tutta la pre-elaborazione per AFXWIN. h, Resource. h e MyApp. h in un file di intestazione precompilato denominato MyApp. pch.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[File di intestazione precompilata](../creating-precompiled-header-files.md)
