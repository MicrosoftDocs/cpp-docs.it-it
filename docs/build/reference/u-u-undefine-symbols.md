---
title: -U, -u (Annulla la definizione dei simboli) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.UndefinePreprocessorDefinitions
- VC.Project.VCCLWCECompilerTool.UndefinePreprocessorDefinitions
- VC.Project.VCCLCompilerTool.UndefineAllPreprocessorDefinitions
- /u
- VC.Project.VCCLWCECompilerTool.UndefineAllPreprocessorDefinitions
dev_langs:
- C++
helpviewer_keywords:
- -U compiler option [C++]
- Undefine Symbols compiler option
- /U compiler option [C++]
- U compiler option [C++]
ms.assetid: 7bc0474f-6d1f-419b-807d-0d8816763b2a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 34030a8ef91e5a25bdb1a13981925c5ddf1f05df
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45721552"
---
# <a name="u-u-undefine-symbols"></a>/U, /u (Annulla la definizione dei simboli)

Il **/U** opzione del compilatore non definisce il simbolo del preprocessore specificato. Il **/u** opzione del compilatore rimuove la definizione dei simboli Microsoft specifici definiti dal compilatore.

## <a name="syntax"></a>Sintassi

```
/U[ ]symbol
/u
```

## <a name="arguments"></a>Argomenti

*Simbolo*<br/>
Il simbolo del preprocessore per rimuovere la definizione.

## <a name="remarks"></a>Note

Né il **/U** o **/u** opzione può annullare la definizione di un simbolo creato tramite il **#define** direttiva.

Il **/U** opzione può annullare la definizione di un simbolo definito in precedenza tramite il **/D** opzione.

Per impostazione predefinita, il compilatore definisce i simboli seguenti specifiche di Microsoft.

|Simbolo|Funzione|
|------------|--------------|
|CHAR_UNSIGNED|Tipo char predefinito è senza segno. Definita se la [/J](../../build/reference/j-default-char-type-is-unsigned.md) opzione specificata.|
|CPPRTTI|Definita per il codice compilato con il [/GR](../../build/reference/gr-enable-run-time-type-information.md) opzione.|
|_CPPUNWIND|Definita per il codice compilato con il [/EHsc](../../build/reference/eh-exception-handling-model.md) opzione.|
|DLL|Definita se la [/MD](../../build/reference/md-mt-ld-use-run-time-library.md) opzione specificata.|
|_M_IX86|Per impostazione predefinita, definito a 600 x86 a destinazioni.|
|MSC_VER|Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).|
|_WIN32|Definita per le applicazioni WIN32. Sempre definita.|
|_MT|Definita se la [/MD o /MT](../../build/reference/md-mt-ld-use-run-time-library.md) opzione specificata.|

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **annullare la definizione di definizioni preprocessore** oppure **annullare la definizione di tutte le definizioni del preprocessore** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[/J (il tipo è unsigned char predefinito)](../../build/reference/j-default-char-type-is-unsigned.md)
[/GR (Abilita informazioni sui tipi in fase di esecuzione)](../../build/reference/gr-enable-run-time-type-information.md)
[/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md) 
 [/MD, /MT, /LD (utilizzo della libreria Run-Time)](../../build/reference/md-mt-ld-use-run-time-library.md)