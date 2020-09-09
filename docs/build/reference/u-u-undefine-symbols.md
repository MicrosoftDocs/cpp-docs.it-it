---
title: /U, /u (Annulla la definizione dei simboli)
description: Utilizzare le opzioni/U e/u del compilatore Microsoft C/C++ per annullare la definizione dei simboli del preprocessore.
ms.date: 09/03/2020
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
ms.openlocfilehash: 78effabba2fa72e5ab7f2dfc6ef91f22383b063f
ms.sourcegitcommit: 0df2b7ab4e81284c5248e4584767591dcc1950c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/09/2020
ms.locfileid: "89609194"
---
# <a name="u-u-undefine-symbols"></a>/U, /u (Annulla la definizione dei simboli)

L' **`/U`** opzione del compilatore consente di annullare la definizione del simbolo del preprocessore specificato. L' **`/u`** opzione del compilatore consente di annullare la definizione dei simboli specifici di Microsoft definiti dal compilatore.

## <a name="syntax"></a>Sintassi

> **`/U`**\[ ]*simbolo*\
> **`/u`**

## <a name="arguments"></a>Argomenti

*simbolo*<br/>
Simbolo del preprocessore da dedefinire.

## <a name="remarks"></a>Commenti

Nessuna delle **`/U`** Opzioni e **`/u`** può annullare la definizione di un simbolo creato tramite la **`#define`** direttiva.

L' **`/U`** opzione può annullare la definizione di un simbolo definito in precedenza utilizzando l' **`/D`** opzione.

Per impostazione predefinita, il compilatore può definire un numero elevato di simboli specifici di Microsoft. Di seguito sono riportate alcune comuni:

| Simbolo | Function |
|--|--|
| `_CHAR_UNSIGNED` | Il tipo char predefinito è senza segno. Definito quando [`/J`](j-default-char-type-is-unsigned.md) si specifica l'opzione. |
| `_CPPRTTI` | Definita per il codice compilato con l' [`/GR`](gr-enable-run-time-type-information.md) opzione. |
| `_CPPUNWIND` | Definita per il codice compilato con l' [`/EHsc`](eh-exception-handling-model.md) opzione. |
| `_DLL` | Definito quando [`/MD`](md-mt-ld-use-run-time-library.md) si specifica l'opzione. |
| `_M_IX86` | Per impostazione predefinita, è definito in 600 per le destinazioni x86. |
| `_MSC_VER` | Definito come valore intero univoco per ogni versione del compilatore. Per altre informazioni, vedere [macro predefinite](../../preprocessor/predefined-macros.md). |
| `_WIN32` | Definito per le applicazioni WIN32. Sempre definita. |
| `_MT` | Definito quando [`/MD`](md-mt-ld-use-run-time-library.md) [`/MT`](md-mt-ld-use-run-time-library.md) viene specificata l'opzione o. |

Per un elenco completo delle macro predefinite specifiche di Microsoft, vedere [macro predefinite](../../preprocessor/predefined-macros.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà avanzate della finestra di **dialogo proprietà di configurazione**  >  **C/C++**  >  **Advanced** .

1. Modificare le proprietà **Definisci definizioni preprocessore** o annullare la **definizione di tutte le definizioni del preprocessore** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[**`/J`** (Il tipo char predefinito è senza segno)](j-default-char-type-is-unsigned.md)<br/>
[**`/GR`** (Abilita informazioni sui tipi in fase di esecuzione)](gr-enable-run-time-type-information.md)<br/>
[**`/EH`** (Modello di gestione delle eccezioni)](eh-exception-handling-model.md)<br/>
[**`/MD`**, **`/MT`** , **`/LD`** (Utilizzare la libreria di Runtime)](md-mt-ld-use-run-time-library.md)
