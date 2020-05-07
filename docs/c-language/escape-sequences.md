---
title: Sequenza di escape
ms.date: 11/04/2016
helpviewer_keywords:
- "\r escape sequence"
- double backslash
- horizontal-tab 	 escape sequence
- (') single quotation mark
- "bell character \a escape sequence"
- escape sequences
- hexadecimal escape sequence
- carriage returns
- tab 	 escape sequence
- "\f escape sequence"
- quotation marks, single
- "form feed \f escape sequence"
- "\v escape sequence"
- control character escape sequences
- " symbol in escape sequences"
- octal escape sequence
- escape characters
- "newline character \n escape sequence"
- nongraphic control characters
- question mark, literal
- "\n escape sequence"
- "vertical tab \v escape sequence"
- "\a escape sequence"
- '? symbol'
- '? symbol, escape sequence character'
- "	 escape sequence"
- backspace escape sequence
ms.assetid: 5aef377f-a76c-4d5c-aa04-8308758ad6a8
ms.openlocfilehash: 5de0b5f1a73fcfb6ea0325bea3247ebe4c85d411
ms.sourcegitcommit: 878a164fe6d550ca81ab87d8425c8d3cd52fe384
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/22/2019
ms.locfileid: "68375831"
---
# <a name="escape-sequences"></a>Sequenza di escape

Le combinazioni di caratteri costituite da una**\\**barra rovesciata () seguita da una lettera o da una combinazione di cifre sono denominate "sequenze di escape". Per rappresentare un carattere di nuova riga, una virgoletta singola o altri caratteri specifici in una costante carattere, è necessario utilizzare sequenze di escape. Una sequenza di escape verrà considerata come un singolo carattere ed è quindi valida come costante carattere.

Le sequenze di escape in genere sono utilizzate per specificare azioni come il ritorno a capo e le tabulazioni su terminali e stampanti. Tali sequenze vengono usate per offrire le rappresentazioni letterali dei caratteri non stampabili e dei caratteri che in genere hanno significati speciali, ad esempio le virgolette doppie (**"**). La tabella seguente elenca le sequenze di escape ANSI e gli elementi che rappresentano.

Si noti che il punto interrogativo preceduto da una barra rovesciata (**\\?**) specifica un punto interrogativo letterale nei casi in cui la sequenza di caratteri venga interpretata erroneamente come un trigramma. Per altre informazioni, vedere [Trigrammi](../c-language/trigraphs.md).

### <a name="escape-sequences"></a>Sequenza di escape

|Sequenza di escape|Rappresenta|
|---------------------|----------------|
|**\a**|Segnale acustico (avviso)|
|**\b**|Backspace|
|**\f**|Avanzamento carta|
|**\n**|Nuova riga|
|**\r**|Ritorno a capo|
|**\t**|Tabulazione orizzontale|
|**\v**|Tabulazione verticale|
|**\\'**|Virgoletta singola|
|**\\"**|Virgolette doppie|
|**\\\\**|Barra rovesciata|
|**\\?**|Punto interrogativo letterale|
|**\\***OOO*|Carattere ASCII in notazione ottale|
|**\x** *hh*|Carattere ASCII in notazione esadecimale|
|**\x** *HHHH*|Carattere unicode in notazione esadecimale se la sequenza di escape viene utilizzata in una costante a caratteri estesi o in una stringa letterale Unicode.<br /><br /> Ad esempio, `WCHAR f = L'\x4e00'` o `WCHAR b[] = L"The Chinese character for one is \x4e00"`.|

**Specifico di Microsoft**

Se una barra rovesciata è preceduta da un carattere non presente nella tabella, il compilatore gestisce il carattere indefinito come carattere esteso. Ad esempio, `\c` viene considerato come `c`.

**TERMINA specifica Microsoft**

Le sequenze di escape consentono di inviare i caratteri di controllo non grafici su un dispositivo di visualizzazione. Ad esempio, il carattere ESC (**\033**) viene spesso usato come primo carattere di un comando di controllo per un terminale o una stampante. Alcune sequenze di escape sono specifiche del dispositivo. Ad esempio, le sequenza di escape della tabulazione verticale e di avanzamento carta (**\v** e **\f**) non influiscono sull'output dello schermo, ma consentono di eseguire operazioni di stampa appropriate.

È anche possibile usare la barra rovesciata (**\\**) come carattere di continuazione. Quando un carattere di nuova riga (equivalente alla pressione del tasto INVIO) è immediatamente successivo alla barra rovesciata, il compilatore ignora la barra rovesciata e il carattere di nuova riga e tratta la riga successiva come parte della riga precedente. Questo diviene particolarmente utile per le definizioni di preprocessore con più di una singola riga. Ad esempio:

```
#define assert(exp) \
( (exp) ? (void) 0:_assert( #exp, __FILE__, __LINE__ ) )
```

## <a name="see-also"></a>Vedere anche

[Costanti carattere C](../c-language/c-character-constants.md)
