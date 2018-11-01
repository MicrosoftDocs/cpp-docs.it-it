---
title: '#Line (direttiva) (C/C++)'
ms.date: 10/18/2017
f1_keywords:
- '#line'
helpviewer_keywords:
- preprocessor, directives
- line directive (#line)
- '#line directive'
ms.assetid: 585c1dc4-5184-4f01-98f4-80c1909744d7
ms.openlocfilehash: e478d287af097081910d192e2ac0fbee6890bfa2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614760"
---
# <a name="line-directive-cc"></a>Direttiva #line (C/C++)

Il **#line** direttiva indica al preprocessore di modificare il numero di riga memorizzato internamente del compilatore e nome file in un determinato numero di riga e il nome file.

## <a name="syntax"></a>Sintassi

> **#line** *digit-sequence* ["*filename*"]

## <a name="remarks"></a>Note

Il compilatore utilizza il numero di riga e il nome del file facoltativo per fare riferimento agli errori rilevati durante la compilazione. Il numero di riga in genere si riferisce alla linea di input corrente, mentre il nome del file fa riferimento al file di input corrente. Il numero di riga viene incrementato dopo l'elaborazione di ogni riga.

Il *digit-sequence* valore può essere qualsiasi costante integer. La sostituzione della macro può essere eseguita sui token di pre-elaborazione, ma il risultato deve valutare la sintassi corretta. Il *nomefile* può essere qualsiasi combinazione di caratteri e deve essere racchiuso tra virgolette doppie (**""**). Se *filename* viene omesso, il nome del file precedente rimane invariato.

È possibile modificare il numero di riga di origine e il nome per la scrittura di un **#line** direttiva. Il convertitore utilizza il numero di riga e il nome file per determinare i valori delle macro predefinite `__FILE__` e `__LINE__`. È possibile utilizzare queste macro per inserire messaggi di errore autodescrittivi nel testo del programma. Per altre informazioni su queste macro predefinite, vedere [macro predefinite](../preprocessor/predefined-macros.md).

Il `__FILE__` macro si espande in una stringa il cui contenuto è il nome del file, racchiuso tra virgolette doppie (**""**).

Se si modifica il numero di riga e il nome del file, il compilatore ignora i valori precedenti e continua l'elaborazione con i nuovi valori. Il **#line** direttiva viene generalmente utilizzata dai generatori di programma per i messaggi di errore fare riferimento al file di origine originale anziché al programma generato.

Gli esempi seguenti illustrano **#line** e il `__LINE__` e `__FILE__` macro.

In questa istruzione, il numero di riga archiviato internamente è impostato su 151 e il nome del file viene modificato in copy.c.

```cpp
#line 151 "copy.c"
```

In questo esempio, la macro `ASSERT` utilizza le macro predefinite `__LINE__` e `__FILE__` per stampare un messaggio di errore sul file di origine se un'asserzione specificata non è true.

```cpp
#define ASSERT(cond) if( !(cond) )\
{printf( "assertion error line %d, file(%s)\n", \
__LINE__, __FILE__ );}
```

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)