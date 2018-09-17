---
title: -GR (Attiva informazioni sui tipi di Run-Time) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /gr
- VC.Project.VCCLWCECompilerTool.RuntimeTypeInfo
- VC.Project.VCCLCompilerTool.RuntimeTypeInfo
dev_langs:
- C++
helpviewer_keywords:
- -Gr compiler option [C++]
- Gr compiler option [C++]
- RTTI compiler option
- /Gr compiler option [C++]
- enable run-time type information compiler option [C++]
ms.assetid: d1f9f850-dcec-49fd-96ef-e72d01148906
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 24ef844c716d64e609440d41bf55db20308c02f1
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712244"
---
# <a name="gr-enable-run-time-type-information"></a>/GR (Attiva informazioni sui tipi in fase di esecuzione)

Aggiunge il codice per controllare i tipi di oggetto in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```
/GR[-]
```

## <a name="remarks"></a>Note

Quando **/GR** è on, il compilatore definisce il `_CPPRTTI` macro del preprocessore. Per impostazione predefinita **/GR** si trova in. **/Gr-.** disabilita le informazioni sul tipo in fase di esecuzione.

Uso **/GR** se il compilatore in modo statico non è possibile risolvere un tipo di oggetto nel codice. In genere è necessaria la **/GR** opzione quando il codice Usa [dynamic_cast Operator](../../cpp/dynamic-cast-operator.md) oppure [typeid](../../cpp/typeid-operator.md). Tuttavia **/GR** aumenta le dimensioni delle sezioni rdata dell'immagine. Se il codice non usa **dynamic_cast** oppure **typeid**, **/GR-.** potrebbero produrre un'immagine più piccola.

Per altre informazioni sul controllo dei tipi in fase di esecuzione, vedere [Run-Time Type Information](../../cpp/run-time-type-information.md) nel *riferimenti al linguaggio C++*.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **linguaggio** pagina delle proprietà.

1. Modificare il **Attiva informazioni sui tipi di Run-Time** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.RuntimeTypeInfo%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)