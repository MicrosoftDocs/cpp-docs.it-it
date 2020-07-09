---
title: '#Direttiva line (C/C++)'
description: 'Viene descritta la direttiva #line utilizzata per impostare il numero di riga e il nome del file segnalato dalle macro del preprocessore.'
ms.date: 07/06/2020
f1_keywords:
- '#line'
helpviewer_keywords:
- preprocessor, directives
- line directive (#line)
- '#line directive'
ms.assetid: 585c1dc4-5184-4f01-98f4-80c1909744d7
ms.openlocfilehash: 7b671cfdf5d5ce43024ac3e038c214396ac8679c
ms.sourcegitcommit: 85d96eeb1ce41d9e1dea947f65ded672e146238b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/07/2020
ms.locfileid: "86058620"
---
# <a name="line-directive-cc"></a>direttiva #line (C/C++)

La direttiva **#line** indica al preprocessore di impostare i valori segnalati del compilatore per il numero di riga e il nome del file su un numero di riga e un nome file specificati.

## <a name="syntax"></a>Sintassi

> **`#line`***digit-Sequence* ["*filename*"]

## <a name="remarks"></a>Osservazioni

Il compilatore utilizza il numero di riga e il nome del file facoltativo per fare riferimento agli errori rilevati durante la compilazione. Il numero di riga in genere si riferisce alla linea di input corrente, mentre il nome del file fa riferimento al file di input corrente. Il numero di riga viene incrementato dopo l'elaborazione di ogni riga.

Il valore della *sequenza di cifre* può essere qualsiasi costante di tipo Integer. La sostituzione delle macro può essere utilizzata sui token di pre-elaborazione, ma il risultato deve restituire la sintassi corretta. Il *nome file* può essere costituito da qualsiasi combinazione di caratteri e deve essere racchiuso tra virgolette doppie ( `" "` ). Se *filename* viene omesso, il nome file precedente rimane invariato.

È possibile modificare il numero di riga e il nome del file di origine scrivendo una **`#line`** direttiva. La **`#line`** direttiva imposta il valore per la riga che segue immediatamente la direttiva nel file di origine. Il convertitore usa il numero di riga e il nome del file per determinare i valori delle macro predefinite `__FILE__` e `__LINE__` . È possibile utilizzare queste macro per inserire messaggi di errore autodescrittivi nel testo del programma. Per altre informazioni su queste macro predefinite, vedere [macro predefinite](../preprocessor/predefined-macros.md).

La `__FILE__` macro si espande in una stringa il cui contenuto è il nome del file, racchiuso tra virgolette doppie ( `" "` ).

Se si modifica il numero di riga e il nome del file, il compilatore ignora i valori precedenti e continua l'elaborazione con i nuovi valori. La direttiva **#line** viene in genere utilizzata dai generatori di programma. Viene usato per fare in modo che i messaggi di errore facciano riferimento al file di origine originale, anziché al programma generato.

## <a name="example"></a>Esempio

Negli esempi seguenti vengono illustrate **`#line`** le `__LINE__` `__FILE__` macro e.

Nel primo esempio, il numero di riga è impostato su 10, quindi su 20 e il nome del file viene modificato in *Hello. cpp*.

```cpp
// line_directive.cpp
// Compile by using: cl /W4 /EHsc line_directive.cpp
#include <stdio.h>

int main()
{
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
#line 10
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
#line 20 "hello.cpp"
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
}
```

```Output
This code is on line 7, in file line_directive.cpp
This code is on line 10, in file line_directive.cpp
This code is on line 20, in file hello.cpp
This code is on line 21, in file hello.cpp
```

In questo esempio, la macro `ASSERT` Usa le macro predefinite `__LINE__` e `__FILE__` per stampare un messaggio di errore relativo al file di origine se un'asserzione specificata non è true.

```C
#define ASSERT(cond) if( !(cond) )\
{printf( "assertion error line %d, file(%s)\n", \
__LINE__, __FILE__ );}
```

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
