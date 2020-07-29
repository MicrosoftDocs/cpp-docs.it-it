---
title: Specifica della larghezza per scanf
ms.date: 10/22/2019
helpviewer_keywords:
- scanf function, width specification
ms.assetid: 94b4e8fe-c4a2-4799-8b6c-a2cf28ffb09c
ms.openlocfilehash: 781e292140babd61fbcde77cefcb917736b17cc3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87188739"
---
# <a name="scanf-width-specification"></a>`scanf`specifica della larghezza

Le informazioni si applicano all’interpretazione di stringhe di formato nella famiglia di funzioni `scanf`, incluse le versioni protette, quali `scanf_s`. Queste funzioni presumono normalmente che il flusso di input sia suddiviso in una sequenza di token. I token sono separati da spazi vuoti (spazio, tabulazione o nuova riga) o per i tipi numerici, in base alla fine naturale di un tipo di dati numerico, come indicato dal primo carattere che non può essere convertito in testo numerico. Tuttavia, è possibile utilizzare la specifica della larghezza per fare in modo di interrompere l'analisi dell'input prima della fine naturale di un token.

La specifica della *larghezza* è costituita da caratteri compresi tra `%` e l'identificatore del campo di tipo, che può includere un numero intero positivo denominato campo *larghezza* e uno o più caratteri che indicano la dimensione del campo, che può anche essere considerato come modificatori del tipo di campo, ad esempio per indicare se il tipo Integer è **`short`** o **`long`** . Tali caratteri vengono definiti prefisso di dimensione.

## <a name="the-width-field"></a>Il campo della larghezza

Il campo *Width* è un intero decimale positivo che controlla il numero massimo di caratteri da leggere per il campo. Il numero massimo di caratteri di *larghezza* viene convertito e archiviato nell'oggetto corrispondente `argument` . È possibile leggere un numero minore di caratteri di *larghezza* se uno spazio vuoto o un carattere che non può essere convertito in base al formato specificato si verifica prima che venga raggiunta la *larghezza* .

La specifica della larghezza è separata e distinta dall'argomento relativo alle dimensioni del buffer richiesto dalle versioni sicure di queste funzioni (ad esempio,, `scanf_s` `wscanf_s` e così via). Nell'esempio seguente, la specifica della larghezza è pari a 20, il che significa che fino a un massimo di 20 caratteri devono essere letti dal flusso di input. La lunghezza del buffer è 21, che include spazio per i 20 caratteri possibili e il terminatore null:

```C
char str[21];
scanf_s("%20s", str, 21);
```

Se non si usa il campo *Width* , `scanf_s` tenta di leggere l'intero token nella stringa. Se la dimensione specificata non è sufficientemente grande da mantenere l'intero token, non viene scritto alcun elemento nella stringa di destinazione. Se viene specificato il campo *Width* , i primi caratteri di *larghezza* nel token vengono scritti nella stringa di destinazione, insieme al carattere di terminazione null.

## <a name="the-size-prefix"></a>Prefisso di dimensione

I prefissi facoltativi **h**, **HH**, **l**, **ll**, **I64**e **l** indicano le dimensioni del `argument` (lungo o breve, carattere a byte singolo o carattere wide, a seconda del carattere di tipo che modificano). Questi caratteri di specifica del formato vengono utilizzati con i caratteri di tipo nelle funzioni `scanf` o `wscanf` per specificare l'interpretazione degli argomenti, come illustrato nella tabella seguente. Il prefisso di tipo **I64** è un'estensione Microsoft e non è compatibile con C standard. I caratteri di tipo e i relativi significati sono descritti nella tabella "caratteri tipo per funzioni scanf" in [ `scanf` caratteri di campo di tipo](../c-runtime-library/scanf-type-field-characters.md).

> [!NOTE]
> I prefissi **h**, **l**e **l** sono estensioni Microsoft quando vengono utilizzate con dati di tipo **`char`** .

### <a name="size-prefixes-for-scanf-and-wscanf-format-type-specifiers"></a>Prefissi di dimensione per gli `scanf` `wscanf` identificatori di tipo di formato e

|Per specificare|Prefisso da usare|Con identificatore del tipo|
|----------------|----------------|-------------------------|
|**`double`**|**l**|**e**, **E**, **f**, **g** o **G**|
|**`long double`**(uguale a **`double`** )|**L**|**e**, **E**, **f**, **g** o **G**|
|**`long int`**|**l**|**d**, **i**, **o**, **x**, o **X**|
|**`long unsigned int`**|**l**|**u**|
|**`long long`**|**ll**|**d**, **i**, **o**, **x**, o **X**|
|**`short int`**|**h**|**d**, **i**, **o**, **x**, o **X**|
|**`short unsigned int`**|**h**|**u**|
|**`char`**|**hh**|**d**, **i**, **o**, **x**, o **X**|
|**`unsigned char`**|**hh**|**u**|
|**`int64`**|**I64**|**d**, **i**, **o**, **u**, **x** o **X**|
|Carattere a byte singolo con `scanf`|**h**|**c** o **c**|
|Carattere a byte singolo con `wscanf`|**h**|**c** o **c**|
|Carattere wide con `scanf`|**l**|**c** o **c**|
|Carattere wide con `wscanf`|**l**|**c** o **C**|
|Stringa di caratteri a byte singolo con`scanf`|**h**|**s** o **S**|
|Stringa di caratteri a byte singolo con`wscanf`|**h**|**s** o **S**|
|Stringa di caratteri wide con`scanf`|**l**|**s** o **S**|
|Stringa di caratteri wide con`wscanf`|**l**|**s** o **S**|

Gli esempi seguenti usano **h** e **l** con le funzioni `scanf_s` e `wscanf_s`:

```C
scanf_s("%ls", &x, 2);     // Read a wide-character string
wscanf_s(L"%hC", &x, 2);    // Read a single-byte character
```

Se si utilizza una funzione non protetta nella famiglia `scanf`, omettere il parametro di dimensione che indica la lunghezza del buffer dell'argomento precedente.

## <a name="reading-undelimited-strings"></a>Lettura di stringhe non delimitate

Per leggere le stringhe non delimitate da spazi vuoti, è possibile sostituire un set di caratteri tra parentesi quadre ( **`[ ]`** ) per il carattere di tipo **s** (String). Il set di caratteri tra parentesi quadre viene definito stringa di *controllo*. Il campo di input corrispondente viene letto fino al primo carattere che non viene visualizzato nella stringa di controllo. Se il primo carattere nel set è un accento circonflesso ( **`^`** ), l'effetto è invertito: il campo di input viene letto fino al primo carattere visualizzato nel resto del set di caratteri.

Entrambi i **% [a-z]** e **% [z-a]** vengono interpretati come equivalenti a **% [abcde... z]**. Si tratta di un' `scanf` estensione di funzione comune, ma non è necessaria per il linguaggio C standard.

## <a name="reading-unterminated-strings"></a>Lettura di stringhe senza terminazione

Per archiviare una stringa senza archiviare un carattere di terminazione null (' \ 0'), usare la specifica `%Nc` , dove *N* è un numero intero decimale. In questo caso, il carattere di tipo **c** indica che l'argomento è un puntatore a una matrice di caratteri. I successivi *N* caratteri vengono letti dal flusso di input nel percorso specificato e non viene aggiunto alcun carattere null (' \ 0'). Se *N* non è specificato, il valore predefinito è 1.

## <a name="when-scanf-stops-reading-a-field"></a>Quando `scanf` interrompe la lettura di un campo

La funzione `scanf` esegue l'analisi di ogni campo di input di un carattere. Potrebbe smettere di leggere un determinato campo di input prima di raggiungere un carattere di spazio per uno dei diversi motivi:

- La larghezza specificata è stata raggiunta.

- Il carattere successivo non può essere convertito come specificato.

- Il carattere successivo è in conflitto con un carattere nella stringa di controllo che dovrebbe corrispondere.

- Il carattere successivo non viene visualizzato in un set di caratteri specificato.

Per qualsiasi motivo, quando la funzione `scanf` interrompe la lettura di un campo di input, il campo di input successivo viene considerato per iniziare con il primo carattere da leggere. Il carattere in conflitto, se presente, viene considerato non letto. È il primo carattere del campo di input successivo o il primo carattere nelle successive operazioni di lettura nel flusso di input.

## <a name="see-also"></a>Vedere anche

[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[`scanf_s`, `_scanf_s_l`, `wscanf_s`, `_wscanf_s_l`](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)<br/>
[Campi di specifica di formato: `scanf` `wscanf` funzioni e](../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md)<br/>
[`scanf`Digitare i caratteri del campo](../c-runtime-library/scanf-type-field-characters.md)<br/>
