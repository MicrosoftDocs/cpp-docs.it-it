---
description: Altre informazioni su:/ZS (solo controllo della sintassi)
title: /Zs (Solo controllo della sintassi)
ms.date: 11/04/2016
f1_keywords:
- /zs
helpviewer_keywords:
- -Zs compiler option [C++]
- Syntax Check Only compiler option
- Zs compiler option
- /Zs compiler option [C++]
ms.assetid: b4b41e6a-3f41-4d09-9cb6-fde5aa2cfecf
ms.openlocfilehash: a4f5e2227104003a637db1d921fd959ea0a11ad7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224296"
---
# <a name="zs-syntax-check-only"></a>/Zs (Solo controllo della sintassi)

Indica al compilatore di verificare solo la sintassi dei file di origine nella riga di comando.

## <a name="syntax"></a>Sintassi

```
/Zs
```

## <a name="remarks"></a>Osservazioni

Quando si usa questa opzione, non viene creato alcun file di output e i messaggi di errore vengono scritti nell'output standard.

L'opzione **/ZS** fornisce un modo rapido per individuare e correggere gli errori di sintassi prima di compilare e collegare un file di origine.

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
