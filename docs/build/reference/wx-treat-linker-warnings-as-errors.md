---
title: /WX (Considera gli avvisi del linker come errori)
ms.date: 11/04/2016
f1_keywords:
- /WX
helpviewer_keywords:
- /WX linker option
- -WX linker option
- WX linker option
ms.assetid: e4ba97c7-93f7-43ae-a4bb-d866790926c9
ms.openlocfilehash: b4b29ed364d39c5f105dded703b8530c08db35e6
ms.sourcegitcommit: faa42c8a051e746d99dcebe70fd4bbaf3b023ace
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2019
ms.locfileid: "57822093"
---
# <a name="wx-treat-linker-warnings-as-errors"></a>/WX (Considera gli avvisi del linker come errori)

```
/WX[:NO]
```

## <a name="remarks"></a>Note

/WX fa in modo che nessun file di output da generare se il linker genera un avviso.

È simile alla **/WX** per consentire al compilatore (vedere [/w, /W0, / W1, / W2, / w3, / W4, / W1, / W2, / w3, / W4, /Wall, /wd, / we, /wo, /Wv, /WX (livello avviso)](compiler-option-warning-level.md) per altre informazioni). Tuttavia, specificando **/WX** per la compilazione non è detto che **/WX** anche sarà attivo per la fase di collegamento, è necessario specificare esplicitamente **/WX** per ogni strumento.

Per impostazione predefinita **/WX** non è attiva. Per considerare gli avvisi del linker come errori, specificare **/WX**. **/WX:No** equivale a non specificare **/WX**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nel **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
