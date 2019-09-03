---
title: '#Direttiva line (C/C++)'
ms.date: 08/29/2019
f1_keywords:
- '#line'
helpviewer_keywords:
- preprocessor, directives
- line directive (#line)
- '#line directive'
ms.assetid: 585c1dc4-5184-4f01-98f4-80c1909744d7
ms.openlocfilehash: 35bee779ebf059c20d4a46e27b5ad4cbfb3ce5f3
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220232"
---
# <a name="line-directive-cc"></a>direttiva #line (C/C++)

La direttiva **#line** indica al preprocessore di modificare il numero di riga e il nome file archiviati internamente del compilatore in un numero di riga e un nome file specificati.

## <a name="syntax"></a>Sintassi

> **#line** *sequenza numerica* ["*nomefile*"]

## <a name="remarks"></a>Note

Il compilatore utilizza il numero di riga e il nome del file facoltativo per fare riferimento agli errori rilevati durante la compilazione. Il numero di riga in genere si riferisce alla linea di input corrente, mentre il nome del file fa riferimento al file di input corrente. Il numero di riga viene incrementato dopo l'elaborazione di ogni riga.

Il valore della *sequenza di cifre* può essere qualsiasi costante di tipo Integer. La sostituzione della macro può essere eseguita sui token di pre-elaborazione, ma il risultato deve valutare la sintassi corretta. Il *nome file* può essere costituito da qualsiasi combinazione di caratteri e deve essere racchiuso`" "`tra virgolette doppie (). Se *filename* viene omesso, il nome file precedente rimane invariato.

È possibile modificare il numero di riga e il nome del file di origine scrivendo una direttiva **#line** . Il convertitore usa il numero di riga e il nome del file per determinare i valori delle `__FILE__` macro `__LINE__`predefinite e. È possibile utilizzare queste macro per inserire messaggi di errore autodescrittivi nel testo del programma. Per altre informazioni su queste macro predefinite, vedere [macro predefinite](../preprocessor/predefined-macros.md).

La `__FILE__` macro si espande in una stringa il cui contenuto è il nome del file, racchiuso tra`" "`virgolette doppie ().

Se si modifica il numero di riga e il nome del file, il compilatore ignora i valori precedenti e continua l'elaborazione con i nuovi valori. La direttiva **#line** viene in genere utilizzata dai generatori di programma per fare in modo che i messaggi di errore facciano riferimento al file di origine originale anziché al programma generato.

Gli esempi seguenti illustrano **#line** e le `__LINE__` macro `__FILE__` e.

In questa istruzione, il numero di riga archiviato internamente è impostato su 151 e il nome file viene modificato in copy. c.

```C
#line 151 "copy.c"
```

In questo esempio, la macro `ASSERT` usa le macro `__LINE__` predefinite e `__FILE__` per stampare un messaggio di errore relativo al file di origine se un'asserzione specificata non è vera.

```C
#define ASSERT(cond) if( !(cond) )\
{printf( "assertion error line %d, file(%s)\n", \
__LINE__, __FILE__ );}
```

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
