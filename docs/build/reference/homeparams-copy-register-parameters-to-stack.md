---
title: /homeparams (Copia i parametri del registro nello stack)
ms.date: 11/04/2016
f1_keywords:
- /homeparams
helpviewer_keywords:
- /homeparams compiler option [C++]
- -homeparams compiler option [C++]
ms.assetid: 51067de4-24f7-436b-b8d9-bc867a7d53aa
ms.openlocfilehash: 952a38d2ab1268ee3dc1fda0899a3ba047281b44
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50518456"
---
# <a name="homeparams-copy-register-parameters-to-stack"></a>/homeparams (Copia i parametri del registro nello stack)

Forza la scrittura di parametri passati nei registri nei rispettivi percorsi nello stack quando vengono immesse funzioni.

## <a name="syntax"></a>Sintassi

```
/homeparams
```

## <a name="remarks"></a>Note

Questa opzione del compilatore è solo per x64 compilatori (compilazione nativi e incrociata).

Quando i parametri vengono passati in x64 compilazione, le convenzioni di chiamata richiedono che per i parametri, anche per i parametri passati nei registri. Per altre informazioni, vedere [passaggio dei parametri](../../build/parameter-passing.md). Per impostazione predefinita in una build di rilascio, i parametri del registro non essere tuttavia scritto allo stack, allo spazio già fornito per i parametri. Questo rende difficile eseguire il debug di una build ottimizzata (rilascio) del programma.

Per una build di rilascio, usare **/homeparams** per garantire che è possibile eseguire il debug dell'applicazione. **/homeparams** non comporta prestazioni, perché è necessario un ciclo per caricare i parametri del registro nello stack.

In una build di debug, lo stack viene sempre popolato con i parametri passati nei registri.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)