---
description: 'Altre informazioni su: concatenazione di valori letterali stringa'
title: Concatenazione di valori letterali stringa
ms.date: 11/04/2016
helpviewer_keywords:
- concatenating strings
- strings [C++], concatenating
ms.assetid: 51486b1f-4b1e-4061-9add-1aa38c6cdb3c
ms.openlocfilehash: 3486857cb0d218ea80c00252de02d9f29d58f2c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137293"
---
# <a name="string-literal-concatenation"></a>Concatenazione di valori letterali stringa

Per creare valori letterali stringa che accettano più righe, è possibile concatenare le due stringhe. A questo scopo, digitare una barra rovesciata, quindi premere il tasto INVIO. La barra rovesciata indica al compilatore di ignorare il successivo carattere di nuova riga. Ad esempio, il valore letterale stringa

```
"Long strings can be bro\
ken into two or more pieces."
```

è identico alla stringa

```
"Long strings can be broken into two or more pieces."
```

La concatenazione di stringhe può essere utilizzata in tutte le situazioni in cui in precedenza era stata utilizzata una barra rovesciata seguita da un carattere di nuova riga per immettere stringhe più lunghe di una riga.

Per forzare una nuova riga in un valore letterale stringa, immettere la sequenza di escape di nuova riga (**\n**) nel punto della stringa in cui si vuole interrompere la riga, come mostrato di seguito:

```
"Enter a number between 1 and 100\nOr press Return"
```

Poiché le stringhe possono iniziare in qualsiasi colonna del codice sorgente e le stringhe lunghe possono continuare in qualsiasi colonna di una riga successiva, è possibile posizionare le stringhe in modo da migliorare la leggibilità del codice sorgente. In entrambi i casi, la relativa rappresentazione sullo schermo quando l'output non è interessato. Ad esempio:

```
printf_s ( "This is the first half of the string, "
           "this is the second half ") ;
```

Se ogni parte della stringa è racchiusa tra virgolette doppie, le parti vengono concatenate e vengono restituite come un'unica stringa. Questa concatenazione si verifica a seconda della sequenza di eventi durante la compilazione specificata dalle [fasi di conversione](../preprocessor/phases-of-translation.md).

```
"This is the first half of the string, this is the second half"
```

Un puntatore di stringa, inizializzato come due valori letterali stringa distinti, separati da un solo spazio, viene archiviato come un'unica stringa. I puntatori sono illustrati in [Dichiarazioni di puntatori](../c-language/pointer-declarations.md). Una volta eseguito il corretto riferimento, come nel seguente esempio, il risultato è identico all'esempio precedente:

```
char *string = "This is the first half of the string, "
               "this is the second half";

printf_s( "%s" , string ) ;
```

Nella fase 6 della conversione, le sequenze di caratteri multibyte specificate da una sequenza di valori letterali stringa o di valori letterali stringa con caratteri wide adiacenti, vengono concatenate in una sola sequenza di caratteri multibyte. Pertanto, non progettare programmi per consentire la modifica dei valori letterali stringa durante l'esecuzione. Lo standard ANSI C specifica che il risultato della modifica di una stringa non è definito.

## <a name="see-also"></a>Vedi anche

[Valori letterali stringa C](../c-language/c-string-literals.md)
