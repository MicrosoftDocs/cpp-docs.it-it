---
title: /validate/charset (Convalida per i caratteri compatibili)
ms.date: 02/06/2019
f1_keywords:
- /validate-charset
- validate-charset
helpviewer_keywords:
- /validate-charset compiler option
ms.assetid: 50360fd0-4d32-4a4f-95d0-53d38c12ad4c
ms.openlocfilehash: 2390aa98b9416eb538f529c8c370c888cccf4734
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498164"
---
# <a name="validate-charset-validate-for-compatible-characters"></a>/validate/charset (Convalida per i caratteri compatibili)

Verifica che il testo del file di origine contenga solo caratteri rappresentabili come UTF-8.

## <a name="syntax"></a>Sintassi

```
/validate-charset[-]
```

## <a name="remarks"></a>Note

È possibile utilizzare l'opzione **/Validate-charset** per verificare che il codice sorgente contenga solo caratteri che possono essere rappresentati sia nel set di caratteri di origine che nel set di caratteri di esecuzione. Questo controllo viene abilitato automaticamente quando si specificano le opzioni del compilatore **/source-charset**, **/Execution-charset**o **/UTF-8** . È possibile disabilitare in modo esplicito questo controllo specificando l'opzione **/Validate-charset-** .

Per impostazione predefinita, Visual Studio rileva un indicatore per l'ordine dei byte per determinare se il file di origine si trova in un formato Unicode codificato, ad esempio UTF-16 o UTF-8. Se non viene trovato alcun indicatore dell'ordine dei byte, si presuppone che il file di origine sia codificato utilizzando la tabella codici utente corrente, a meno che non sia stata specificata una tabella codici utilizzando **/UTF-8** o l'opzione **/source-charset** . Visual Studio consente di salvare il C++ codice sorgente usando una qualsiasi delle diverse codifiche di caratteri. Per informazioni sui set di caratteri di origine ed esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione della lingua. Per un elenco degli identificatori della tabella codici e dei nomi dei set di caratteri supportati, vedere identificatori della [tabella codici](/windows/win32/Intl/code-page-identifiers).

Visual Studio usa UTF-8 come codifica dei caratteri interni durante la conversione tra il set di caratteri di origine e il set di caratteri di esecuzione. Se un carattere nel file di origine non può essere rappresentato nel set di caratteri di esecuzione, la conversione UTF-8 sostituisce il carattere '?' di un punto interrogativo. L'opzione **/Validate-charset** fa sì che la compilazione segnali un avviso in caso di errore.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere la cartella **proprietà di configurazione**, **CC++/** , riga di **comando** .

1. In **Opzioni aggiuntive**aggiungere l'opzione **/Validate-charset** e specificare la codifica preferita.

1. Scegliere **OK** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Execution-CharSet (imposta il set di caratteri di esecuzione)](execution-charset-set-execution-character-set.md)<br/>
[/source/charset (imposta il set di caratteri di origine)](source-charset-set-source-character-set.md)<br/>
[/utf/8 (imposta i set di caratteri eseguibili e di origine su UTF/8)](utf-8-set-source-and-executable-character-sets-to-utf-8.md)
