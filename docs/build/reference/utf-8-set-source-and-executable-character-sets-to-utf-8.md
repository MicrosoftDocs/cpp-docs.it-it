---
title: /UTF-8 (imposta i set di caratteri eseguibili e di origine su UTF-8)
ms.date: 11/04/2016
f1_keywords:
- /utf-8
helpviewer_keywords:
- /utf-8 compiler option
ms.assetid: f0e1f3cb-6cae-46eb-9483-04ed13d9b504
ms.openlocfilehash: 1ff0f23ad0758642c73b1b35d6d4dd1be20899cb
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498172"
---
# <a name="utf-8-set-source-and-executable-character-sets-to-utf-8"></a>/UTF-8 (imposta i set di caratteri eseguibili e di origine su UTF-8)

Specifica il set di caratteri di origine e il set di caratteri di esecuzione come UTF-8.

## <a name="syntax"></a>Sintassi

```
/utf-8
```

## <a name="remarks"></a>Note

È possibile usare l'opzione **/UTF-8** per specificare sia i set di caratteri di origine che quelli di esecuzione codificati usando UTF-8. Equivale a specificare **/source-charset: UTF-8/Execution-charset: UTF-8** nella riga di comando. Ognuna di queste opzioni Abilita anche l'opzione **/Validate-charset** per impostazione predefinita. Per un elenco degli identificatori della tabella codici e dei nomi dei set di caratteri supportati, vedere identificatori della [tabella codici](/windows/win32/Intl/code-page-identifiers).

Per impostazione predefinita, Visual Studio rileva un indicatore per l'ordine dei byte per determinare se il file di origine si trova in un formato Unicode codificato, ad esempio UTF-16 o UTF-8. Se non viene trovato alcun indicatore dell'ordine dei byte, si presuppone che il file di origine sia codificato utilizzando la tabella codici utente corrente, a meno che non sia stata specificata una tabella codici utilizzando **/UTF-8** o l'opzione **/source-charset** . Visual Studio consente di salvare il C++ codice sorgente usando una qualsiasi delle diverse codifiche di caratteri. Per informazioni sui set di caratteri di origine ed esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione della lingua.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere la cartella **proprietà di configurazione**, **CC++/** , riga di **comando** .

1. In **Opzioni aggiuntive**aggiungere l'opzione **/UTF-8** per specificare la codifica preferita.

1. Scegliere **OK** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Execution-CharSet (imposta il set di caratteri di esecuzione)](execution-charset-set-execution-character-set.md)<br/>
[/source/charset (imposta il set di caratteri di origine)](source-charset-set-source-character-set.md)<br/>
[/validate/charset (convalida per i caratteri compatibili)](validate-charset-validate-for-compatible-characters.md)
