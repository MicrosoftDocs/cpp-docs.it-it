---
title: /Qimprecise_fwaits (rimuovere comandi fwait all'interno dei blocchi try)
ms.date: 11/04/2016
f1_keywords:
- /Qimprecise_fwaits
helpviewer_keywords:
- -Qimprecise_fwaits compiler option (C++)
- /Qimprecise_fwaits compiler option (C++)
ms.assetid: b1501f21-7e08-4fea-95e8-176ec03a635b
ms.openlocfilehash: eb01d39ccbbdac60d629f95b9eb821ca0f2f5731
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662397"
---
# <a name="qimprecisefwaits-remove-fwaits-inside-try-blocks"></a>/Qimprecise_fwaits (rimuovere comandi fwait all'interno dei blocchi try)

Rimuove il `fwait` comandi all'interno `try` blocca quando si usa la [/fp: tranne](../../build/reference/fp-specify-floating-point-behavior.md) opzione del compilatore.

## <a name="syntax"></a>Sintassi

```
/Qimprecise_fwaits
```

## <a name="remarks"></a>Note

Questa opzione non ha alcun effetto se **/fp: tranne** inoltre non è specificato. Se si specifica la **/fp: tranne** opzione, il compilatore inserirà un `fwait` comando intorno a ogni riga di codice in un `try` blocco. In questo modo, il compilatore può identificare la riga di codice che genera un'eccezione specifica. **/Qimprecise_fwaits** rimuove interni `fwait` istruzioni, lasciando solo il tutto il `try` blocco. Ciò migliora le prestazioni, ma il compilatore solo sarà in grado di indicare la `try` blocco genera un'eccezione, non la riga.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)