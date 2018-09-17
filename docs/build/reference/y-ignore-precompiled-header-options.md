---
title: -Y-(ignora le opzioni di intestazione precompilata) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /y-
dev_langs:
- C++
helpviewer_keywords:
- Y- compiler option [C++]
- -Y- compiler option [C++]
- /Y- compiler option [C++]
ms.assetid: cfaecb36-58db-46b8-b04d-cca6072b1b7a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d99408490874f989a5063aef29d0b0e020f2e08a
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45719654"
---
# <a name="y--ignore-precompiled-header-options"></a>/Y- (Ignora le opzioni dell'intestazione precompilata)

Tutte le altre cause `/Y` compilatore opzioni deve essere ignorata (e non è possibile stesso essere sottoposto a override).

## <a name="syntax"></a>Sintassi

```
/Y-
```

## <a name="remarks"></a>Note

Per altre informazioni sulle intestazioni precompilate, vedere:

- [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)

- [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)

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