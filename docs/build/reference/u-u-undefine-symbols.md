---
title: /U, /u (Annulla la definizione dei simboli)
ms.date: 06/08/2020
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
ms.openlocfilehash: 4d7a2b3d5df2b22dc53eb7b58bfb78cdb1824b26
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616658"
---
# <a name="u-u-undefine-symbols"></a>/U, /u (Annulla la definizione dei simboli)

L' **`/U`** opzione del compilatore consente di annullare la definizione del simbolo del preprocessore specificato. L' **`/u`** opzione del compilatore consente di annullare la definizione dei simboli specifici di Microsoft definiti dal compilatore.

## <a name="syntax"></a>Sintassi

> **`/U`**\[]*simbolo*\
> **`/u`**

## <a name="arguments"></a>Argomenti

*simbolo*<br/>
Simbolo del preprocessore da dedefinire.

## <a name="remarks"></a>Osservazioni

Nessuna delle **`/U`** Opzioni e **`/u`** può annullare la definizione di un simbolo creato tramite la **`#define`** direttiva.

L' **`/U`** opzione può annullare la definizione di un simbolo definito in precedenza utilizzando l' **`/D`** opzione.

Per impostazione predefinita, il compilatore può definire un numero elevato di simboli specifici di Microsoft. Di seguito sono riportate alcune comuni:

| Simbolo | Funzione |
|--|--|
| `_CHAR_UNSIGNED` | Il tipo char predefinito è senza segno. Definito quando [**`/J`**](j-default-char-type-is-unsigned.md) si specifica l'opzione. |
| `_CPPRTTI` | Definita per il codice compilato con l' [**`/GR`**](gr-enable-run-time-type-information.md) opzione. |
| `_CPPUNWIND` | Definita per il codice compilato con l' [**`/EHsc`**](eh-exception-handling-model.md) opzione. |
| `_DLL` | Definito quando [**`/MD`**](md-mt-ld-use-run-time-library.md) si specifica l'opzione. |
| `_M_IX86` | Per impostazione predefinita, è definito in 600 per le destinazioni x86. |
| `_MSC_VER` | Definito come valore intero univoco per ogni versione del compilatore. Per altre informazioni, vedere [macro predefinite](../../preprocessor/predefined-macros.md). |
| `_WIN32` | Definito per le applicazioni WIN32. Sempre definita. |
| `_MT` | Definito quando viene specificata l'opzione [ **`/MD`** o **`/MT`** ](md-mt-ld-use-run-time-library.md) . |

Per un elenco completo delle macro predefinite specifiche di Microsoft, vedere [macro predefinite](../../preprocessor/predefined-macros.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà avanzate della finestra di **dialogo proprietà di configurazione**  >  **C/C++**  >  **Advanced** .

1. Modificare le proprietà **Definisci definizioni preprocessore** o annullare la **definizione di tutte le definizioni del preprocessore** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[**`/J`**(Il tipo char predefinito è senza segno)](j-default-char-type-is-unsigned.md)<br/>
[**`/GR`**(Abilita informazioni sui tipi in fase di esecuzione)](gr-enable-run-time-type-information.md)<br/>
[**`/EH`**(Modello di gestione delle eccezioni)](eh-exception-handling-model.md)<br/>
[**`/MD`**, **`/MT`** , **`/LD`** (Utilizzare la libreria di Runtime)](md-mt-ld-use-run-time-library.md)
