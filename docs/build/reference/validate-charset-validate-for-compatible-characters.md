---
title: /Validate/CharSet (convalida per i caratteri compatibili)
ms.date: 11/04/2016
f1_keywords:
- /validate-charset
- validate-charset
helpviewer_keywords:
- /validate-charset compiler option
ms.assetid: 50360fd0-4d32-4a4f-95d0-53d38c12ad4c
ms.openlocfilehash: 243d225f5acde0c6099050539687726ea082c898
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50590489"
---
# <a name="validate-charset-validate-for-compatible-characters"></a>/Validate/CharSet (convalida per i caratteri compatibili)

Verifica che il testo del file di origine contenga solo caratteri rappresentabili come UTF-8.

## <a name="syntax"></a>Sintassi

```
/validate-charset[-]
```

## <a name="remarks"></a>Note

È possibile usare la **/Validate/CharSet** opzione per convalidare che il codice sorgente contenga solo caratteri che possono essere rappresentati in entrambi i caratteri di origine di set e set di caratteri di esecuzione. Questo controllo viene abilitato automaticamente quando si specifica **/source-charset**, **/execution-charset**, o **/utf-8** opzioni del compilatore. In modo esplicito, è possibile disabilitare questo controllo specificando il **/Validate -charset -** opzione.

Per impostazione predefinita, Visual Studio rileva un contrassegno di ordine dei byte per determinare se il file di origine è in un formato con codifica Unicode, ad esempio UTF-16 o UTF-8. Se viene individuato alcun indicatore ordine byte, si presuppone che il file di origine viene codificato utilizzando la tabella codici utente corrente, a meno che non è stato specificato una tabella codici usando **/utf-8** o nella **/source-charset** opzione. Visual Studio consente di salvare il codice sorgente C++, utilizzando una delle diverse codifiche di caratteri. Per informazioni sui set di caratteri di origine e di esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione del linguaggio. Per un elenco di identificatori di pagina di codice è supportata e i nomi dei set di caratteri, vedere [identificatori di pagina codice](/windows/desktop/Intl/code-page-identifiers).

Visual Studio Usa UTF-8 per la codifica di caratteri interno durante la conversione tra il set di caratteri di origine e il set di caratteri di esecuzione. Se un carattere nel file di origine non può essere rappresentato nel set di caratteri di esecuzione, la conversione UTF-8 sostituisce con un punto interrogativo '?' caratteri. Il **/Validate/CharSet** opzione fa sì che la compilazione segnalare un avviso se questo errore si verifica.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Espandere la **le proprietà di configurazione**, **C/C++**, **riga di comando** cartella.

1. Nelle **opzioni avanzate**, aggiungere il **/Validate/CharSet** opzione e specificare la codifica preferita.

1. Scegli **OK** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[/Execution-CharSet (set esecuzione Set di caratteri)](../../build/reference/execution-charset-set-execution-character-set.md)<br/>
[/source/charset (imposta il set di caratteri di origine)](../../build/reference/source-charset-set-source-character-set.md)<br/>
[/utf/8 (imposta i set di caratteri eseguibili e di origine su UTF/8)](../../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)