---
title: /UTF-8 (imposta il set di caratteri di origine UTF-8ed eseguibile su)
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
ms.openlocfilehash: c98a30b0ec4b36b8bd87fb0956d9382751975cfd
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168865"
---
# <a name="utf-8-set-source-and-executable-character-sets-to-opno-locutf-8"></a>`/utf-8`(Imposta i set di caratteri di origine UTF-8e eseguibile su)

Specifica il set di caratteri di origine e il set di caratteri UTF-8di esecuzione come.

## <a name="syntax"></a>Sintassi

> **`/utf-8`**

## <a name="remarks"></a>Osservazioni

È possibile utilizzare l' **`/utf-8`** opzione per specificare i set di caratteri di origine ed esecuzione codificati tramite UTF-8. Equivale a specificare **`/source-charset:utf-8 /execution-charset:utf-8`** nella riga di comando. Ognuna di queste opzioni Abilita anche l' **`/validate-charset`** opzione per impostazione predefinita. Per un elenco degli identificatori della tabella codici e dei nomi dei set di caratteri supportati, vedere [identificatori della tabella codici](/windows/win32/Intl/code-page-identifiers).

Per impostazione predefinita, Visual Studio rileva un indicatore per l'ordine dei byte per determinare se il file di origine si trova in un formato Unicode codificato UTF-16 , UTF-8ad esempio o. Se non viene trovato alcun indicatore dell'ordine dei byte, si presuppone che il file di origine sia codificato utilizzando la tabella codici utente corrente, a meno che non sia stata specificata **`/utf-8`** una tabella **`/source-charset`** codici utilizzando o l'opzione. Visual Studio consente di salvare il codice sorgente C++ usando una qualsiasi delle diverse codifiche di caratteri. Per informazioni sui set di caratteri di origine ed esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione della lingua.

## <a name="set-the-option-in-visual-studio-or-programmatically"></a>Impostare l'opzione in Visual Studio o a livello di codice

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** > proprietà della**riga di comando** di**c/C++** > .

1. In **Opzioni aggiuntive**aggiungere l' **`/utf-8`** opzione per specificare la codifica preferita.

1. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Execution-CharSet (imposta il set di caratteri di esecuzione)](execution-charset-set-execution-character-set.md)<br/>
[/source/charset (imposta il set di caratteri di origine)](source-charset-set-source-character-set.md)<br/>
[/validate/charset (convalida per i caratteri compatibili)](validate-charset-validate-for-compatible-characters.md)
