---
description: Altre informazioni su:/GZ (abilitazione dello stack frame Run-Time controllo degli errori)
title: /GZ (Attiva controllo errori in fase di esecuzione dello stack frame)
ms.date: 11/04/2016
f1_keywords:
- /gz
helpviewer_keywords:
- -GZ compiler option [C++]
- release-build errors
- /GZ compiler option [C++]
- GZ compiler option [C++]
- debug builds, catch release-build errors
ms.assetid: b3efeeff-d5e3-4057-91c9-f6fc73d0270c
ms.openlocfilehash: 0b0936037c265bf57413c458ffc0a831184cb074
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191693"
---
# <a name="gz-enable-stack-frame-run-time-error-checking"></a>/GZ (Attiva controllo errori in fase di esecuzione dello stack frame)

Esegue le stesse operazioni dell'opzione [/RTC (verifiche degli errori di run-time)](rtc-run-time-error-checks.md) . Deprecato.

## <a name="syntax"></a>Sintassi

```
/GZ
```

## <a name="remarks"></a>Osservazioni

**/GZ** viene usato solo in una compilazione non ottimizzata ([/od (Disable (debug)](od-disable-debug.md))).

**/GZ** è deprecato a partire da Visual Studio 2005; usare invece [/RTC (controlli degli errori di run-time)](rtc-run-time-error-checks.md) . Per un elenco delle opzioni del compilatore deprecate, vedere Opzioni del compilatore **deprecate e rimosse** nelle [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
