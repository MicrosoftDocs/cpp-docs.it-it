---
title: Utilizzo di VERIFY invece di ASSERT
ms.date: 05/06/2019
helpviewer_keywords:
- ASSERT statements
- debugging [MFC], ASSERT statements
- VERIFY macro
- assertions, troubleshooting ASSERT statements
- debugging assertions
- assertions, debugging
ms.assetid: 4c46397b-3fb1-49c1-a09b-41a72fae3797
ms.openlocfilehash: bfc0847677ae232fef67ab6200c626472f042bdb
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79438618"
---
# <a name="using-verify-instead-of-assert"></a>Utilizzo di VERIFY invece di ASSERT

Si supponga che, quando si esegue la versione di debug dell'applicazione MFC, non si verifichino problemi. Tuttavia, la versione finale della stessa applicazione si arresta in modo anomalo, restituisce risultati non corretti e/o presenta un altro comportamento anomalo.

Questo problema può essere causato quando si inserisce codice importante in un'istruzione ASSERT per verificare che venga eseguito correttamente. Poiché le istruzioni ASSERT sono impostate come commento in una build di rilascio di un programma MFC, il codice non viene eseguito in una build di rilascio.

Se si usa ASSERT per confermare che una chiamata di funzione ha avuto esito positivo, provare a usare [Verify](../mfc/reference/diagnostic-services.md#verify) . La macro VERIFY valuta i propri argomenti nelle build di debug e di rilascio dell'applicazione.

Un'altra tecnica preferita consiste nell'assegnare il valore restituito della funzione a una variabile temporanea e quindi testare la variabile in un'istruzione ASSERT.

Esaminare il frammento di codice seguente:

```
enum {
    sizeOfBuffer = 20
};
char *buf;
ASSERT(buf = (char *) calloc(sizeOfBuffer, sizeof(char) ));
strcpy_s( buf, sizeOfBuffer, "Hello, World" );
free( buf );
```

Questo codice viene eseguito perfettamente in una versione di debug di un'applicazione MFC. Se la chiamata a `calloc( )` ha esito negativo, viene visualizzato un messaggio di diagnostica che include il file e il numero di riga. Tuttavia, in una build finale di un'applicazione MFC:

- la chiamata a `calloc( )` non viene mai eseguita `buf` , lasciando non inizializzata o

- `strcpy_s( )`copia "`Hello, World`" in una porzione casuale di memoria, eventualmente arrestando l'arresto anomalo dell'applicazione o causando l'interruzione della risposta del sistema o

- `free()`tenta di liberare memoria che non è mai stata allocata.

Per utilizzare ASSERT correttamente, è necessario modificare l'esempio di codice nel modo seguente:

```
enum {
    sizeOfBuffer = 20
};
char *buf;
buf = (char *) calloc(sizeOfBuffer, sizeof(char) );
ASSERT( buf != NULL );
strcpy_s( buf, sizeOfBuffer, "Hello, World" );
free( buf );
```

In alternativa, è possibile utilizzare VERIFY:

```
enum {
    sizeOfBuffer = 20
};
char *buf;
VERIFY(buf = (char *) calloc(sizeOfBuffer, sizeof(char) ));
strcpy_s( buf, sizeOfBuffer, "Hello, World" );
free( buf );
```

## <a name="see-also"></a>Vedere anche

[Correzione dei problemi della build di versione](fixing-release-build-problems.md)
