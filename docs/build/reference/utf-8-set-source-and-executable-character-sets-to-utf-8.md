---
title: -utf-8 (Imposta origine ed eseguibili set di caratteri UTF-8) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /utf-8
dev_langs:
- C++
helpviewer_keywords:
- /utf-8 compiler option
ms.assetid: f0e1f3cb-6cae-46eb-9483-04ed13d9b504
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 218ea7986e37ce9cfa98aeeb1da3c209bef73f8f
ms.sourcegitcommit: 92c568e9466ffd7346a4120c478c9bdea61c8756
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/24/2018
ms.locfileid: "47029684"
---
# <a name="utf-8-set-source-and-executable-character-sets-to-utf-8"></a>/UTF-8 (eseguibili e imposta origine set di caratteri UTF-8)

Specifica del set di caratteri e caratteri di esecuzione impostato come UTF-8.

## <a name="syntax"></a>Sintassi

```
/utf-8
```

## <a name="remarks"></a>Note

È possibile usare la **/utf-8** opzione per specificare set di caratteri di origine e di esecuzione, come la codifica UTF-8. Equivale a specificare **/Source -charset:utf-/execution 8-charset:utf-8** nella riga di comando. Una di queste opzioni anche Abilita il **/Validate/CharSet** opzione per impostazione predefinita. Per un elenco di identificatori di pagina di codice è supportata e i nomi dei set di caratteri, vedere [identificatori di pagina codice](/windows/desktop/Intl/code-page-identifiers).

Per impostazione predefinita, Visual Studio rileva un contrassegno di ordine dei byte per determinare se il file di origine è in un formato con codifica Unicode, ad esempio UTF-16 o UTF-8. Se viene individuato alcun indicatore ordine byte, si presuppone che il file di origine viene codificato utilizzando la tabella codici utente corrente, a meno che non è stato specificato una tabella codici usando **/utf-8** o nella **/source-charset** opzione. Visual Studio consente di salvare il codice sorgente C++, utilizzando una delle diverse codifiche di caratteri. Per informazioni sui set di caratteri di origine e di esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione del linguaggio.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Espandere la **le proprietà di configurazione**, **C/C++**, **riga di comando** cartella.

1. Nelle **opzioni avanzate**, aggiungere il **/utf-8** opzione e specificare la codifica preferita.

1. Scegli **OK** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[/Execution-CharSet (set esecuzione Set di caratteri)](../../build/reference/execution-charset-set-execution-character-set.md)<br/>
[/source/charset (imposta il set di caratteri di origine)](../../build/reference/source-charset-set-source-character-set.md)<br/>
[/validate/charset (convalida per i caratteri compatibili)](../../build/reference/validate-charset-validate-for-compatible-characters.md)