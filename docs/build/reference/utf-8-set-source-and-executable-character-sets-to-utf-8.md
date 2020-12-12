---
description: 'Altre informazioni su: `/utf-8` (imposta i set di caratteri di origine e eseguibile su UTF-8 )'
title: /UTF-8 (imposta il set di caratteri di origine ed eseguibile su UTF-8 )
ms.date: 04/26/2020
f1_keywords:
- /utf-8
helpviewer_keywords:
- /utf-8 compiler option
ms.assetid: f0e1f3cb-6cae-46eb-9483-04ed13d9b504
no-loc:
- UTF
- UTF-8
- UTF-16
ms.openlocfilehash: f9d58315a55d0e390ec07a1907af0befda127c54
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176405"
---
# <a name="utf-8-set-source-and-executable-character-sets-to-no-locutf-8"></a>`/utf-8` (Imposta i set di caratteri di origine e eseguibile su UTF-8 )

Specifica il set di caratteri di origine e il set di caratteri di esecuzione come UTF-8 .

## <a name="syntax"></a>Sintassi

> **`/utf-8`**

## <a name="remarks"></a>Osservazioni

È possibile utilizzare l' **`/utf-8`** opzione per specificare i set di caratteri di origine ed esecuzione codificati tramite UTF-8 . Equivale a specificare **`/source-charset:utf-8 /execution-charset:utf-8`** nella riga di comando. Ognuna di queste opzioni Abilita anche l' **`/validate-charset`** opzione per impostazione predefinita. Per un elenco degli identificatori della tabella codici e dei nomi dei set di caratteri supportati, vedere [identificatori della tabella codici](/windows/win32/Intl/code-page-identifiers).

Per impostazione predefinita, Visual Studio rileva un indicatore per l'ordine dei byte per determinare se il file di origine si trova in un formato Unicode codificato, ad esempio UTF-16 o UTF-8 . Se non viene trovato alcun indicatore dell'ordine dei byte, si presuppone che il file di origine sia codificato utilizzando la tabella codici utente corrente, a meno che non sia stata specificata una tabella codici utilizzando **`/utf-8`** o l' **`/source-charset`** opzione. Visual Studio consente di salvare il codice sorgente C++ usando una qualsiasi delle diverse codifiche di caratteri. Per informazioni sui set di caratteri di origine ed esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione della lingua.

## <a name="set-the-option-in-visual-studio-or-programmatically"></a>Impostare l'opzione in Visual Studio o a livello di codice

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. In **Opzioni aggiuntive** aggiungere l' **`/utf-8`** opzione per specificare la codifica preferita.

1. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Execution-CharSet (imposta il set di caratteri di esecuzione)](execution-charset-set-execution-character-set.md)<br/>
[/source-charset (imposta il set di caratteri di origine)](source-charset-set-source-character-set.md)<br/>
[/validate/charset (Convalida per i caratteri compatibili)](validate-charset-validate-for-compatible-characters.md)
