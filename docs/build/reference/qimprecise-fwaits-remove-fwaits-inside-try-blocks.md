---
title: -Qimprecise_fwaits (Rimuove comandi fwait all'interno di blocchi Try) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Qimprecise_fwaits
dev_langs:
- C++
helpviewer_keywords:
- -Qimprecise_fwaits compiler option (C++)
- /Qimprecise_fwaits compiler option (C++)
ms.assetid: b1501f21-7e08-4fea-95e8-176ec03a635b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 98dc9416ecee69bca285ff54d6321144c4a3fd02
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45724425"
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

[Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)
[opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)