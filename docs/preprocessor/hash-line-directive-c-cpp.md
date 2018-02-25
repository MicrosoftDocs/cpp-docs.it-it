---
title: '#Line (direttiva) (C/C++) | Documenti Microsoft'
ms.custom: 
ms.date: 10/18/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- '#line'
dev_langs:
- C++
helpviewer_keywords:
- preprocessor, directives
- line directive (#line)
- '#line directive'
ms.assetid: 585c1dc4-5184-4f01-98f4-80c1909744d7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 13760aa7c503339c16ed6418badc295170d2c938
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="line-directive-cc"></a>Direttiva #line (C/C++)

La direttiva `#line` indica al preprocessore di modificare il numero di riga memorizzato internamente e il nome del file per un determinato numero di riga e nome del file.

## <a name="syntax"></a>Sintassi

> **#line** *sequenza di cifre* ["*filename*"]

## <a name="remarks"></a>Note

Il compilatore utilizza il numero di riga e il nome del file facoltativo per fare riferimento agli errori rilevati durante la compilazione. Il numero di riga in genere si riferisce alla linea di input corrente, mentre il nome del file fa riferimento al file di input corrente. Il numero di riga viene incrementato dopo l'elaborazione di ogni riga.

Il *sequenza di cifre* valore può essere qualsiasi costante integer. La sostituzione della macro può essere eseguita sui token di pre-elaborazione, ma il risultato deve valutare la sintassi corretta. Il *filename* può essere qualsiasi combinazione di caratteri e deve essere racchiuso tra virgolette doppie (**""**). Se *filename* viene omesso, il nome del file precedente rimane invariato.

È possibile modificare il numero della riga di codice e il nome del file sorgente scrivendo una direttiva `#line`. Il convertitore utilizza il numero di riga e il nome file per determinare i valori delle macro predefinite **&#95; &#95; FILE &#95; &#95;**  e **&#95; &#95; RIGA &#95; &#95;** . È possibile utilizzare queste macro per inserire messaggi di errore autodescrittivi nel testo del programma. Per ulteriori informazioni su queste macro predefinite, vedere [macro predefinite](../preprocessor/predefined-macros.md).

Il **&#95; &#95; FILE &#95; &#95;**  macro si espande in una stringa il cui contenuto è il nome del file, racchiuso tra virgolette doppie (**""**).

Se si modifica il numero di riga e il nome del file, il compilatore ignora i valori precedenti e continua l'elaborazione con i nuovi valori. La direttiva `#line` è in genere utilizzata dai generatori di programmi per visualizzare messaggi di errore che fanno riferimento al file sorgente anziché al programma generato.

Gli esempi seguenti illustrano `#line` e **&#95; &#95; RIGA &#95; &#95;**  e **&#95; &#95; FILE &#95; &#95;**  macro.

In questa istruzione, il numero di riga archiviato internamente è impostato su 151 e il nome del file viene modificato in copy.c.

```cpp
#line 151 "copy.c"
```

 In questo esempio, la macro `ASSERT` utilizza le macro predefinite **&#95; &#95; RIGA &#95; &#95;**  e **&#95; &#95; FILE &#95; &#95;**  per stampare un messaggio di errore sul file di origine se un'asserzione specificata non è true.

```cpp
#define ASSERT(cond) if( !(cond) )\
{printf( "assertion error line %d, file(%s)\n", \
__LINE__, __FILE__ );}
```

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)