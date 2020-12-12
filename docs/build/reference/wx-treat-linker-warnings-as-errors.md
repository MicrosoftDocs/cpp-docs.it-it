---
description: Altre informazioni su:/WX (considera gli avvisi del linker come errori)
title: /WX (Considera gli avvisi del linker come errori)
ms.date: 11/04/2016
f1_keywords:
- /WX
helpviewer_keywords:
- /WX linker option
- -WX linker option
- WX linker option
ms.assetid: e4ba97c7-93f7-43ae-a4bb-d866790926c9
ms.openlocfilehash: 965c48ff9c9f975350f3c1e54d8090823be8fd2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261034"
---
# <a name="wx-treat-linker-warnings-as-errors"></a>/WX (Considera gli avvisi del linker come errori)

```
/WX[:NO]
```

## <a name="remarks"></a>Commenti

/WX fa in modo che non venga generato alcun file di output se il linker genera un avviso.

Questa operazione è simile a **/WX** per il compilatore (vedere [/w,/W0,/W1,/W2,/W3,/W4,/W1,/W2,/W3,/W4,/Wall,/WD.,/we,/wo,/WV,/WX (livello di avviso)](compiler-option-warning-level.md) per ulteriori informazioni. Tuttavia, se si specifica **/WX** per la compilazione, non si presuppone che **/WX** sia attivo anche per la fase di collegamento. è necessario specificare in modo esplicito **/WX** per ogni strumento.

Per impostazione predefinita, **/WX** non è attivo. Per considerare gli avvisi del linker come errori, specificare **/WX**. **/WX: No** equivale a non specificare **/WX**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
