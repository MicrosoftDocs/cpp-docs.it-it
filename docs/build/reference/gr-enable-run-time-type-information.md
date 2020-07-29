---
title: /GR (Attiva informazioni sui tipi in fase di esecuzione)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.RuntimeTypeInfo
- VC.Project.VCCLCompilerTool.RuntimeTypeInfo
helpviewer_keywords:
- -Gr compiler option [C++]
- Gr compiler option [C++]
- RTTI compiler option
- /Gr compiler option [C++]
- enable run-time type information compiler option [C++]
ms.assetid: d1f9f850-dcec-49fd-96ef-e72d01148906
ms.openlocfilehash: 974a2b38c793b21abc9f17f5b7ca5c9f5e3305f5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215231"
---
# <a name="gr-enable-run-time-type-information"></a>/GR (Attiva informazioni sui tipi in fase di esecuzione)

Aggiunge codice per controllare i tipi di oggetto in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```
/GR[-]
```

## <a name="remarks"></a>Osservazioni

Quando **/gr** è on, il compilatore definisce la `_CPPRTTI` macro del preprocessore. Per impostazione predefinita, **/gr** è on. **/Gr-** Disabilita le informazioni sul tipo in fase di esecuzione.

Usare **/gr** se il compilatore non può risolvere in modo statico un tipo di oggetto nel codice. Quando il codice usa [dynamic_cast Operator](../../cpp/dynamic-cast-operator.md) o [typeid](../../cpp/typeid-operator.md), in genere è necessaria l'opzione **/gr** . Tuttavia, **/gr** aumenta le dimensioni delle sezioni. rdata dell'immagine. Se il codice non usa **`dynamic_cast`** o **`typeid`** , **/gr-** potrebbe produrre un'immagine più piccola.

Per ulteriori informazioni sul controllo dei tipi in fase di esecuzione, vedere [informazioni sui tipi](../../cpp/run-time-type-information.md) in fase di esecuzione in *riferimenti al linguaggio C++*.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **lingua** .

1. Modificare la proprietà **Abilita informazioni sul tipo in fase di esecuzione** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.RuntimeTypeInfo%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
