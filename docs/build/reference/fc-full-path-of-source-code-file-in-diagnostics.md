---
title: -FC (percorso completo del File di codice sorgente nella diagnostica) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.UseFullPaths
- /FC
dev_langs:
- C++
helpviewer_keywords:
- /FC compiler option [C++]
- -FC compiler option [C++]
ms.assetid: 1f11414e-cb42-421b-be68-9d369aab036b
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3bddc92d8c013fd3b4e2425b7f85b084651cdafe
ms.sourcegitcommit: 770f6c4a57200aaa9e8ac6e08a3631a4b4bdca05
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/16/2018
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

Senza **/FC**, il testo di diagnostica è simile al testo di questa diagnostica:

- compiler_option_FC.cpp(5): errore C2143: errore di sintassi: manca ';' prima di '}'

Con **/FC**, il testo di diagnostica è simile al testo di questa diagnostica:

- c:\test\compiler_option_fc.cpp(5): errore C2143: errore di sintassi: manca ';' prima di '}'

 **/FC** è necessario anche se si desidera visualizzare il percorso completo di un nome file quando si utilizza il &#95; &#95;FILE&#95; &#95; (macro). Vedere [macro predefinite](../../preprocessor/predefined-macros.md) per ulteriori informazioni su &#95; &#95;FILE&#95;&#95;.

Il **/FC** implicito opzione **/ZI**. Per ulteriori informazioni su **/ZI**, vedere [/Z7, /Zi, /ZI (formato informazioni di Debug)](../../build/reference/z7-zi-zi-debug-information-format.md).

**/FC** genera percorsi completi in lettere minuscole.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **avanzate** pagina delle proprietà.

1. Modificare il **Usa percorsi completi** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UseFullPaths%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
