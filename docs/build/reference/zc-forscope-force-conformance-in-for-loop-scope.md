---
title: '/Zc: forScope (Imponi conformità nel for Loop Scope) | Documenti Microsoft'
ms.custom: ''
ms.date: 03/06/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.ForceConformanceInForLoopScope
- VC.Project.VCCLWCECompilerTool.ForceConformanceInForLoopScope
- /zc:forScope
dev_langs:
- C++
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- Conformance compiler options
- Zc compiler options [C++]
ms.assetid: 3031f02d-3b14-4ad0-869e-22b0110c3aed
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b21c844cd29c7fb45e58f44fdf8eaae427b74235
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="zcforscope-force-conformance-in-for-loop-scope"></a>/Zc:forScope (Imponi conformità nell'ambito di un ciclo For)

Permette di implementare il comportamento C++ standard per cicli [for](../../cpp/for-statement-cpp.md) con estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).

## <a name="syntax"></a>Sintassi

> **/Zc:forScope**[**-**]

## <a name="remarks"></a>Note

Il comportamento standard permette all'inizializzatore del ciclo **for** di uscire dall'ambito dopo il ciclo **for** . In **/Zc:forScope-** e [/Ze](../../build/reference/za-ze-disable-language-extensions.md)l'inizializzatore del ciclo **for** rimane nell'ambito fino al termine dell'ambito locale.

Il **/Zc: forScope** opzione è attivata per impostazione predefinita. **/Zc: forScope** non è interessata quando le [/ permissiva-](permissive-standards-conformance.md) opzione specificata.

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

Se si usa **/Zc:forScope-** in un progetto con un file PCH esistente, viene generato un avviso, **/Zc:forScope-** viene ignorato e la compilazione continua con i file PCH esistenti. Se si desidera che venga generato un nuovo file pch, usare [/Yc (Crea precompilata File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md).

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **proprietà di configurazione** > **C/C++** > **Language** pagina delle proprietà.

1. Modificare la proprietà **Imponi conformità nell'ambito di un ciclo For** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForceConformanceInForLoopScope%2A>.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
[/Za, /Ze (disabilita le estensioni del linguaggio)](../../build/reference/za-ze-disable-language-extensions.md)<br/>
