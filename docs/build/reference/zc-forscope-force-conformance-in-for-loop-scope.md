---
description: "Altre informazioni su:/Zc: forScope (Imponi conformità nell'ambito di un ciclo for)"
title: /Zc:forScope (Imponi conformità nell'ambito di un ciclo For)
ms.date: 03/06/2018
f1_keywords:
- VC.Project.VCCLCompilerTool.ForceConformanceInForLoopScope
- VC.Project.VCCLWCECompilerTool.ForceConformanceInForLoopScope
- /zc:forScope
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- Conformance compiler options
- Zc compiler options [C++]
ms.assetid: 3031f02d-3b14-4ad0-869e-22b0110c3aed
ms.openlocfilehash: 7124bba6608facfea546974cfa40ef9556ff713a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114663"
---
# <a name="zcforscope-force-conformance-in-for-loop-scope"></a>/Zc:forScope (Imponi conformità nell'ambito di un ciclo For)

Permette di implementare il comportamento C++ standard per cicli [for](../../cpp/for-statement-cpp.md) con estensioni Microsoft ([/Ze](za-ze-disable-language-extensions.md)).

## <a name="syntax"></a>Sintassi

> **/Zc: forScope**[ **-** ]

## <a name="remarks"></a>Commenti

Il comportamento standard consiste nel consentire all' **`for`** inizializzatore di un ciclo di uscire dall'ambito dopo il **`for`** ciclo. In **/Zc: forScope-** and [/ze](za-ze-disable-language-extensions.md)l' **`for`** inizializzatore del ciclo rimane nell'ambito fino al termine dell'ambito locale.

L'opzione **/Zc: forScope** è abilitata per impostazione predefinita. **/Zc: forScope** non è influenzato quando viene specificata l'opzione [/permissive-](permissive-standards-conformance.md) .

L'opzione **/Zc:forScope-** è deprecata e verrà rimossa in una futura versione. L'uso di **/Zc:forScope-** genera l'avviso di deprecazione D9035.

Il codice seguente viene compilato in **/Ze** ma non in **/Za**:

```cpp
// zc_forScope.cpp
// compile by using: cl /Zc:forScope- /Za zc_forScope.cpp
// C2065, D9035 expected
int main() {
    // Compile by using cl /Zc:forScope- zc_forScope.cpp
    // to compile this non-standard code as-is.
    // Uncomment the following line to resolve C2065 for /Za.
    // int i;
    for (int i = 0; i < 1; i++)
        ;
    i = 20;   // i has already gone out of scope under /Za
}
```

Se si usa **/Zc:forScope-**, viene visualizzato l'avviso C4288 (disattivato per impostazione predefinita) se una variabile si trova all'interno dell'ambito a causa di una dichiarazione effettuata in un ambito precedente. Per illustrare questo comportamento, rimuovere i caratteri `//` dal codice di esempio per dichiarare `int i`.

È possibile modificare il comportamento di runtime di **/Zc:forScope** con il pragma [conform](../../preprocessor/conform.md) .

Se si usa **/Zc:forScope-** in un progetto con un file PCH esistente, viene generato un avviso, **/Zc:forScope-** viene ignorato e la compilazione continua con i file PCH esistenti. Se si vuole che venga generato un nuovo file PCH, usare [/YC (crea il file di intestazione precompilata)](yc-create-precompiled-header-file.md).

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà del  >  **linguaggio C/C++**  >   .

1. Modificare la proprietà **Imponi conformità nell'ambito di un ciclo For** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForceConformanceInForLoopScope%2A>.

## <a name="see-also"></a>Vedi anche

[/Zc (Conformità)](zc-conformance.md)<br/>
[/Za,/ze (Disabilita estensioni linguaggio)](za-ze-disable-language-extensions.md)<br/>
