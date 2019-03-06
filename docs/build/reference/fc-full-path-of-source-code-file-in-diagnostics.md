---
title: /FC (Percorso completo del file di codice sorgente nella diagnostica)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.UseFullPaths
- /FC
helpviewer_keywords:
- /FC compiler option [C++]
- -FC compiler option [C++]
ms.assetid: 1f11414e-cb42-421b-be68-9d369aab036b
ms.openlocfilehash: 96809f09efd068b80f04a70d4356c1ceaf5f113c
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57422481"
---
# <a name="fc-full-path-of-source-code-file-in-diagnostics"></a>/FC (Percorso completo del file di codice sorgente nella diagnostica)

Indica al compilatore di visualizzare il percorso completo del file del codice sorgente passati al compilatore nella diagnostica.

## <a name="syntax"></a>Sintassi

> /FC

## <a name="remarks"></a>Note

Si consideri l'esempio di codice seguente:

```cpp
// compiler_option_FC.cpp
int main( ) {
   int i   // C2143
}
```

Senza **/FC**, avrebbe un aspetto simile al testo diagnostica il testo di diagnostica:

- compiler_option_FC.cpp(5): errore C2143: errore di sintassi: manca ';' prima di '}'

Con **/FC**, avrebbe un aspetto simile al testo diagnostica il testo di diagnostica:

- c:\test\compiler_option_fc.cpp(5): errore C2143: errore di sintassi: manca ';' prima di '}'

**/FC** serve anche se si desidera visualizzare il percorso completo di un nome file quando si usa la &#95; &#95;FILE&#95; &#95; (macro). Visualizzare [Predefined Macros](../../preprocessor/predefined-macros.md) per altre informazioni su &#95; &#95;FILE&#95;&#95;.

Il **/FC** opzione è implicita **/ZI**. Per altre informazioni sulle **/ZI**, vedere [/Z7, /Zi, /ZI (formato informazioni di Debug)](../../build/reference/z7-zi-zi-debug-information-format.md).

**/FC** genera percorsi completi in caratteri minuscoli.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **avanzate** pagina delle proprietà.

1. Modificare il **Usa percorsi completi** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UseFullPaths%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
