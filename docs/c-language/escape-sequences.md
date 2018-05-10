---
title: Sequenze di escape | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
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
- "formfeed \f escape sequence"
- "\v escape sequence"
- control character escape sequences
- " symbol in escape sequences"
- octal escape sequence
- escape characters
- "newline character \n escape sequence"
- nongraphic control characters
- question mark, literal
- "\nescape sequence"
- "vertical tab \v escape sequence"
- "\a escape sequence"
- '? symbol'
- '? symbol, escape sequence character'
- "	 escape sequence"
- backspace escape sequence
ms.assetid: 5aef377f-a76c-4d5c-aa04-8308758ad6a8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7cd58f7418e2e6a2ca7592c345c5d71729cf8324
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="escape-sequences"></a>Sequenze di escape
Le sequenze di caratteri sono costituite da una barra rovesciata (**\\**) seguita da una lettera o da una combinazione di cifre denominate "caratteri di escape". Per rappresentare un carattere di nuova riga, una virgoletta singola o altri caratteri specifici in una costante carattere, è necessario utilizzare sequenze di escape. Una sequenza di escape verrà considerata come un singolo carattere ed è quindi valida come costante carattere.  
  
 Le sequenze di escape in genere sono utilizzate per specificare azioni come il ritorno a capo e le tabulazioni su terminali e stampanti. Tali sequenze vengono usate per offrire le rappresentazioni letterali dei caratteri non stampabili e dei caratteri che in genere hanno significati speciali, ad esempio le virgolette doppie (**"**). La tabella seguente elenca le sequenze di escape ANSI e gli elementi che rappresentano.  
  
 Si noti che il punto interrogativo preceduto da una barra rovesciata (**\\?**) specifica un punto interrogativo letterale nei casi in cui la sequenza di caratteri venga interpretata erroneamente come un trigramma. Per altre informazioni, vedere [Trigrammi](../c-language/trigraphs.md).  
  
### <a name="escape-sequences"></a>Sequenze di escape  
  
|Sequenza di escape|Rappresenta|  
|---------------------|----------------|  
|**\a**|Segnale acustico (avviso)|  
|**\b**|Backspace|  
|**\f**|Modulo continuo|  
|**\n**|Nuova riga|  
|**\r**|Ritorno a capo|  
|**\t**|Tabulazione orizzontale|  
|**\v**|Tabulazione verticale|  
|**\\'**|Virgoletta singola|  
|**\\"**|Virgolette doppie|  
|**\\\\**|Barra rovesciata|  
|**\\?**|Punto interrogativo letterale|  
|**\\** *ooo*|Carattere ASCII in notazione ottale|  
|**\x** *hh*|Carattere ASCII in notazione esadecimale|  
|**\x** *hhhh*|Carattere unicode in notazione esadecimale se la sequenza di escape viene utilizzata in una costante a caratteri estesi o in una stringa letterale Unicode.<br /><br /> Ad esempio, `WCHAR f = L'\x4e00'` o `WCHAR b[] = L"The Chinese character for one is \x4e00"`.|  
  
 **Sezione specifica Microsoft**  
  
 Se una barra rovesciata è preceduta da un carattere non presente nella tabella, il compilatore gestisce il carattere indefinito come carattere esteso. Ad esempio, `\c` viene considerato come `c`.  
  
 **Fine sezione specifica Microsoft**  
  
 Le sequenze di escape consentono di inviare i caratteri di controllo non grafici su un dispositivo di visualizzazione. Ad esempio, il carattere ESC (**\033**) viene spesso usato come primo carattere di un comando di controllo per un terminale o una stampante. Alcune sequenze di escape sono specifiche del dispositivo. La tabulazione verticale e il carattere di avanzamento carta (**\v** e **\f**) non influiscono ad esempio sull'output dello schermo, ma consentono di eseguire operazioni di stampa appropriate.  
  
 È anche possibile usare la barra rovesciata (**\\**) come carattere di continuazione. Quando un carattere di nuova riga (equivalente alla pressione del tasto INVIO) è immediatamente successivo alla barra rovesciata, il compilatore ignora la barra rovesciata e il carattere di nuova riga e tratta la riga successiva come parte della riga precedente. Questo diviene particolarmente utile per le definizioni di preprocessore con più di una singola riga. Ad esempio:  
  
```  
#define assert(exp) \  
( (exp) ? (void) 0:_assert( #exp, __FILE__, __LINE__ ) )  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti carattere C](../c-language/c-character-constants.md)