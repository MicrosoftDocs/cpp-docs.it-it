---
description: Altre informazioni su:/D (definizioni preprocessore)
title: /D (definizioni preprocessore)
ms.date: 09/18/2019
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
ms.openlocfilehash: 6ae7dcd81e1821d4c3a8a2f6d5c1b711c0faa9f2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196828"
---
# <a name="d-preprocessor-definitions"></a>/D (definizioni preprocessore)

Definisce un simbolo di pre-elaborazione per un file di origine.

## <a name="syntax"></a>Sintassi

> **/D** \[ ]_nome_ \[ `=` \| `#` \[ {  \| *numero* stringa}]] \
> **/D** \[ ] `"` _nome_ \[ `=` \| `#` \[ {  \| *numero* stringa}]]`"`

## <a name="remarks"></a>Commenti

È possibile utilizzare questo simbolo con `#if` o `#ifdef` per compilare codice sorgente in modo condizionale. La definizione dei simboli rimane attiva fino a quando non viene ridefinita nel codice o non è definita nel codice da una `#undef` direttiva.

**/D** ha lo stesso effetto di una `#define` direttiva all'inizio di un file di codice sorgente. La differenza è che **/d** rimuove le virgolette dalla riga di comando e una `#define` direttiva le mantiene. È possibile avere spazi vuoti tra il **/d** e il simbolo. Non possono essere presenti spazi vuoti tra il simbolo e il segno di uguale oppure tra il segno di uguale e qualsiasi valore assegnato.

Per impostazione predefinita, il valore associato a un simbolo è 1. Ad esempio, `/D name` equivale a `/D name=1`. Nell'esempio alla fine di questo articolo, la definizione di `TEST` viene mostrata come stampa `1` .

Se si esegue la compilazione utilizzando, `/D name=` il *nome* del simbolo non dispone di alcun valore associato. Sebbene possa comunque essere utilizzato per la compilazione condizionale di codice, il simbolo non restituisce alcun valore. Nell'esempio, se si esegue la compilazione utilizzando `/DTEST=` , si verificherà un errore. Questo comportamento è analogo all'utilizzo di `#define` con o senza un valore.

L'opzione **/d** non supporta definizioni macro di tipo funzione. Per inserire definizioni che non possono essere definite nella riga di comando, prendere in considerazione l'opzione del compilatore [/Fi (nome file di inclusione forzata)](fi-name-forced-include-file.md) .

È possibile usare **/d** più volte nella riga di comando per definire altri simboli. Se lo stesso simbolo viene definito più di una volta, viene utilizzata l'ultima definizione.

Questo comando definisce il simbolo DEBUG in TEST.c:

```cmd
CL /DDEBUG TEST.C
```

Questo comando rimuove tutte le occorrenze della parola chiave `__far` in TEST.c:

```cmd
CL /D __far= TEST.C
```

La variabile di ambiente **CL** non può essere impostata su una stringa che contiene il segno di uguale. Per usare **/d** insieme alla variabile di ambiente **CL** , è necessario specificare il simbolo di cancelletto ( `#` ) invece del segno di uguale:

```cmd
SET CL=/DTEST#0
```

Quando si definisce un simbolo di pre-elaborazione al prompt dei comandi, considerare le regole di analisi del compilatore e quelle della shell. Ad esempio, per definire un simbolo di pre-elaborazione per il segno di percentuale ( `%` ) nel programma, specificare due caratteri per il segno di percentuale ( `%%` ) al prompt dei comandi. Se si specifica un solo oggetto, viene generato un errore di analisi.

```cmd
CL /DTEST=%% TEST.C
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Nel riquadro sinistro selezionare proprietà di **configurazione**, **C/C++**, **preprocessore**.

1. Nel riquadro destro, nella colonna di destra della proprietà **definizioni preprocessore** , aprire il menu a discesa e scegliere **modifica**.

1. Nella finestra di dialogo **definizioni preprocessore** aggiungere (uno per riga), modificare o eliminare una o più definizioni. Scegliere **OK** per salvare le modifiche.

   Non è necessario includere il prefisso dell'opzione '/D ' nelle definizioni specificate qui. Nella pagina delle proprietà le definizioni sono separate da punti e virgola ( `;` ).

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PreprocessorDefinitions%2A>.

## <a name="example"></a>Esempio

```cpp
// cpp_D_compiler_option.cpp
// compile with: cl /EHsc /DTEST cpp_D_compiler_option.cpp
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

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)\
[/FI (nome file di inclusione forzata)](fi-name-forced-include-file.md)\
[/U,/u (annullare la definizione dei simboli)](u-u-undefine-symbols.md)\
[Direttiva #undef (C/C++)](../../preprocessor/hash-undef-directive-c-cpp.md)\
[Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)
