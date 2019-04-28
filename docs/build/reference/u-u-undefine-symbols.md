---
title: /U, /u (Annulla la definizione dei simboli)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.UndefinePreprocessorDefinitions
- VC.Project.VCCLWCECompilerTool.UndefinePreprocessorDefinitions
- VC.Project.VCCLCompilerTool.UndefineAllPreprocessorDefinitions
- /u
- VC.Project.VCCLWCECompilerTool.UndefineAllPreprocessorDefinitions
helpviewer_keywords:
- -U compiler option [C++]
- Undefine Symbols compiler option
- /U compiler option [C++]
- U compiler option [C++]
ms.assetid: 7bc0474f-6d1f-419b-807d-0d8816763b2a
ms.openlocfilehash: bfc03ebd5c900bf8bf81b4a50eed02111baf85ee
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317003"
---
# <a name="u-u-undefine-symbols"></a>/U, /u (Annulla la definizione dei simboli)

Il **/U** opzione del compilatore non definisce il simbolo del preprocessore specificato. Il **/u** opzione del compilatore rimuove la definizione dei simboli Microsoft specifici definiti dal compilatore.

## <a name="syntax"></a>Sintassi

```
/U[ ]symbol
/u
```

## <a name="arguments"></a>Argomenti

*symbol*<br/>
Il simbolo del preprocessore per rimuovere la definizione.

## <a name="remarks"></a>Note

Né il **/U** o **/u** opzione può annullare la definizione di un simbolo creato tramite il **#define** direttiva.

Il **/U** opzione può annullare la definizione di un simbolo definito in precedenza tramite il **/D** opzione.

Per impostazione predefinita, il compilatore definisce i simboli seguenti specifiche di Microsoft.

|Simbolo|Funzione|
|------------|--------------|
|_CHAR_UNSIGNED|Tipo char predefinito è senza segno. Definita se la [/J](j-default-char-type-is-unsigned.md) opzione specificata.|
|_CPPRTTI|Definita per il codice compilato con il [/GR](gr-enable-run-time-type-information.md) opzione.|
|_CPPUNWIND|Definita per il codice compilato con il [/EHsc](eh-exception-handling-model.md) opzione.|
|_DLL|Definita se la [/MD](md-mt-ld-use-run-time-library.md) opzione specificata.|
|_M_IX86|Per impostazione predefinita, definito a 600 x86 a destinazioni.|
|_MSC_VER|Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).|
|_WIN32|Definita per le applicazioni WIN32. Sempre definita.|
|_MT|Definita se la [/MD o /MT](md-mt-ld-use-run-time-library.md) opzione specificata.|

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **annullare la definizione di definizioni preprocessore** oppure **annullare la definizione di tutte le definizioni del preprocessore** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/J (il tipo char predefinito è senza segno)](j-default-char-type-is-unsigned.md)<br/>
[/GR (abilita informazioni sui tipi in fase di esecuzione)](gr-enable-run-time-type-information.md)<br/>
[/EH (modello di gestione delle eccezioni)](eh-exception-handling-model.md)<br/>
[/MD, /MT, /LD (uso della libreria di runtime)](md-mt-ld-use-run-time-library.md)
