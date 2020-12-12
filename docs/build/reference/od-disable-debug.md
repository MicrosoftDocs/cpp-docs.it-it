---
description: Altre informazioni su:/od (Disabilita (debug))
title: /Od (Disabilita (Debug))
ms.date: 11/04/2016
f1_keywords:
- /od
helpviewer_keywords:
- no optimizations
- fast compiling
- /Od compiler option [C++]
- disable optimizations
- Od compiler option [C++]
- -Od compiler option [C++]
- disable (debug) compiler option [C++]
ms.assetid: b1ac31b7-e086-4eeb-be5e-488f7513f5f5
ms.openlocfilehash: 9d425244a1790a9bb74e1c92db88f32bb0372ab2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214305"
---
# <a name="od-disable-debug"></a>/Od (Disabilita (Debug))

Disattiva tutte le ottimizzazioni nel programma e velocizza la compilazione.

## <a name="syntax"></a>Sintassi

```
/Od
```

## <a name="remarks"></a>Osservazioni

Questa opzione corrisponde all'impostazione predefinita. Poiché **/od** Elimina lo spostamento del codice, semplifica il processo di debug. Per ulteriori informazioni sulle opzioni del compilatore per il debug, vedere [/Z7,/Zi,/Zi (formato informazioni di debug)](z7-zi-zi-debug-information-format.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **ottimizzazione** .

1. Modificare la proprietà di **ottimizzazione** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/o (Ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Z7,/Zi,/ZI (formato informazioni di debug)](z7-zi-zi-debug-information-format.md)
