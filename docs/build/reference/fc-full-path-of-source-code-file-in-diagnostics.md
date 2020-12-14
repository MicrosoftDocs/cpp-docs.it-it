---
description: Altre informazioni su:/FC (percorso completo del file di codice sorgente nella diagnostica)
title: /FC (Percorso completo del file di codice sorgente nella diagnostica)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.UseFullPaths
- /FC
helpviewer_keywords:
- /FC compiler option [C++]
- -FC compiler option [C++]
ms.assetid: 1f11414e-cb42-421b-be68-9d369aab036b
ms.openlocfilehash: 01d1148a32179a7c605a19dc7f2856b7697ae6fb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200676"
---
# <a name="fc-full-path-of-source-code-file-in-diagnostics"></a>/FC (Percorso completo del file di codice sorgente nella diagnostica)

Fa in modo che il compilatore visualizzi il percorso completo dei file di codice sorgente passati al compilatore nella diagnostica.

## <a name="syntax"></a>Sintassi

> /FC

## <a name="remarks"></a>Commenti

Si consideri l'esempio di codice seguente:

```cpp
// compiler_option_FC.cpp
int main( ) {
   int i   // C2143
}
```

Senza **/FC**, il testo di diagnostica sarà simile a questo testo di diagnostica:

- compiler_option_FC. cpp (5): errore C2143: errore di sintassi:';' mancante prima di '}'

Con **/FC**, il testo di diagnostica sarà simile a questo testo di diagnostica:

- c:\test\ compiler_option_fc. cpp (5): errore C2143: errore di sintassi:';' mancante prima di '}'

**/FC** è necessario anche se si vuole visualizzare il percorso completo di un nome file quando si usa il file &#95;&#95;&#95;&#95; macro. Per ulteriori informazioni su &#95;&#95;FILE&#95;&#95;, vedere [macro predefinite](../../preprocessor/predefined-macros.md) .

L'opzione **/FC** è implicita in **/Zi**. Per ulteriori informazioni su **/Zi**, vedere [/Z7,/Zi,/Zi (formato informazioni di debug)](z7-zi-zi-debug-information-format.md).

**/FC** restituisce percorsi completi in lettere minuscole.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà avanzate della finestra di **dialogo proprietà di configurazione**  >  **C/C++**  >   .

1. Modificare la proprietà **utilizza percorsi completi** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UseFullPaths%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
