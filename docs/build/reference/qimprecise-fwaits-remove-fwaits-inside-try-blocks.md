---
title: /Qimprecise_fwaits (rimuovere comandi fwait all'interno dei blocchi try)
ms.date: 11/04/2016
f1_keywords:
- /Qimprecise_fwaits
helpviewer_keywords:
- -Qimprecise_fwaits compiler option (C++)
- /Qimprecise_fwaits compiler option (C++)
ms.assetid: b1501f21-7e08-4fea-95e8-176ec03a635b
ms.openlocfilehash: 424feda66f6925cb305256249101ea4013e3090f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232677"
---
# <a name="qimprecise_fwaits-remove-fwaits-inside-try-blocks"></a>/Qimprecise_fwaits (rimuovere comandi fwait all'interno dei blocchi try)

Rimuove i `fwait` comandi interni ai **`try`** blocchi quando si usa l'opzione del compilatore [/FP: except](fp-specify-floating-point-behavior.md) .

## <a name="syntax"></a>Sintassi

```
/Qimprecise_fwaits
```

## <a name="remarks"></a>Osservazioni

Questa opzione non ha alcun effetto se non viene specificato anche **/FP: except** . Se si specifica l'opzione **/FP: except** , il compilatore inserirà un `fwait` comando intorno a ogni riga di codice in un **`try`** blocco. In questo modo, il compilatore è in grado di identificare la riga di codice specifica che produce un'eccezione. **/Qimprecise_fwaits** rimuove le `fwait` istruzioni interne, lasciando solo le attese del **`try`** blocco. Ciò migliora le prestazioni, ma il compilatore potrà solo indicare quale **`try`** blocco causa un'eccezione e non la riga.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
