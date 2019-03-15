---
title: /D (definizioni preprocessore)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCNMakeTool.PreprocessorDefinitions
- VC.Project.VCCLCompilerTool.PreprocessorDefinitions
- /d
helpviewer_keywords:
- preprocessor definition symbols
- constants, defining
- macros, compiling
- /D compiler option [C++]
- -D compiler option [C++]
- D compiler option [C++]
ms.assetid: b53fdda7-8da1-474f-8811-ba7cdcc66dba
ms.openlocfilehash: 18bbdb980c63b3c04b432602afb2402c5e2c42e7
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57812083"
---
# <a name="d-preprocessor-definitions"></a>/D (definizioni preprocessore)

Definisce un simbolo di pre-elaborazione per un file di origine.

## <a name="syntax"></a>Sintassi

```
/Dname[= | # [{string | number}] ]
```

## <a name="remarks"></a>Note

È possibile utilizzare questo simbolo con `#if` o `#ifdef` per compilare codice sorgente in modo condizionale. La definizione del simbolo rimane attiva finché non viene rieseguita nel codice o non viene annullata attraverso la direttiva `#undef`.

**/D** ha lo stesso effetto il `#define` direttiva all'inizio del file del codice sorgente, tranne il fatto che **/D** rimuove le virgolette nella riga di comando e `#define` li conserva.

Per impostazione predefinita, il valore associato a un simbolo è 1. Ad esempio, **/D** `name` equivale a **/D**`name`**= 1**. Nell'esempio alla fine di questo articolo, la definizione di **TEST** risulta essere `1`.

La compilazione con **/D** `name` **=** , non hanno alcun valore associato al simbolo. Sebbene possa comunque essere utilizzato per la compilazione condizionale di codice, il simbolo non restituisce alcun valore. Nell'esempio, se esegue la compilazione usando **/DTEST =**, si verifica un errore. Questo comportamento è analogo all'utilizzo di `#define` con o senza un valore.

Questo comando definisce il simbolo DEBUG in TEST.c:

**TEST SENZA /DDEBUG CL. C**

Questo comando rimuove tutte le occorrenze della parola chiave `__far` in TEST.c:

**CL /D__far=  TEST.C**

Il **CL** variabile di ambiente non può essere impostata su una stringa che contiene il segno di uguale. Per usare **/D** combinazione con la **CL** ambiente variabile, è necessario specificare il simbolo cancelletto anziché il segno di uguale:

```
SET CL=/DTEST#0
```

Quando si definisce un simbolo di pre-elaborazione al prompt dei comandi, considerare le regole di analisi del compilatore e quelle della shell. Ad esempio, per definire un simbolo di pre-elaborazione segno di percentuale (%) nel programma, specificare il segno di percentuale di due caratteri (%) al prompt dei comandi: Se si specifica solo uno, viene generato un errore di analisi.

```
CL /DTEST=%% TEST.C
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Nel riquadro sinistro, selezionare **le proprietà di configurazione**, **C/C++**, **preprocessore**.

1. Nel riquadro di destra, nella colonna a destra della **definizioni preprocessore** proprietà, aprire il menu di scelta rapida e scegliere **modificare**.

1. Nel **definizioni preprocessore** nella finestra di dialogo Aggiungi (uno per riga), modificare o eliminare una o più definizioni. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PreprocessorDefinitions%2A>.

## <a name="example"></a>Esempio

```
// cpp_D_compiler_option.cpp
// compile with: /DTEST
#include <stdio.h>

int main( )
{
    #ifdef TEST
        printf_s("TEST defined %d\n", TEST);
    #else
        printf_s("TEST not defined\n");
    #endif
}
```

```Output
TEST defined 1
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/U, /u (annulla la definizione dei simboli)](u-u-undefine-symbols.md)<br/>
[Direttiva #undef (C/C++)](../../preprocessor/hash-undef-directive-c-cpp.md)<br/>
[Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)
