---
title: Utilizzo di VERIFY invece di ASSERT
ms.date: 11/04/2016
f1_keywords:
- assert
helpviewer_keywords:
- ASSERT statements
- debugging [MFC], ASSERT statements
- VERIFY macro
- assertions, troubleshooting ASSERT statements
- debugging assertions
- assertions, debugging
ms.assetid: 4c46397b-3fb1-49c1-a09b-41a72fae3797
ms.openlocfilehash: e6903616f8b4250b3d67db333be4fc17e8328952
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62326222"
---
# <a name="using-verify-instead-of-assert"></a>Utilizzo di VERIFY invece di ASSERT

Si supponga che quando si esegue la versione di debug dell'applicazione MFC, non esistono problemi. Tuttavia, la versione della stessa applicazione si blocca, restituisce risultati non corretti e/o presenta alcuni altri comportamenti anomali.

Questo problema può essere causato quando si inserisce codice importanti in un'istruzione ASSERT per verificare che venga eseguito correttamente. Poiché le istruzioni ASSERT impostare come commento in una build di rilascio di un programma MFC, il codice non viene eseguito in una build di rilascio.

Se si usa ASSERT per confermare che una chiamata di funzione ha avuto esito positivo, è consigliabile usare [VERIFY](../mfc/reference/diagnostic-services.md#verify) invece. La macro VERIFY valuta i propri argomenti in entrambe le modalità di debug e build di rilascio dell'applicazione.

Un'altra preferita tecnica consiste nell'assegnare valore restituito della funzione a una variabile temporanea e quindi testare la variabile in un'istruzione ASSERT.

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

Questo codice viene eseguito perfettamente in una versione di debug di un'applicazione MFC. Se la chiamata a `calloc( )` viene visualizzato un messaggio di diagnostica che include il numero di file e righe ha esito negativo. Tuttavia, in una build finale di un'applicazione MFC:

- la chiamata a `calloc( )` non si verifica mai, lasciando `buf` non inizializzato, o

- `strcpy_s( )` copie "`Hello, World`" in una porzione di memoria, probabilmente un arresto anomalo dell'applicazione o il sistema smetterà di rispondere, causando casuale o

- `free()` è stato effettuato un tentativo di liberare la memoria allocata mai.

Per usare correttamente l'ASSERZIONE, il codice di esempio deve essere modificata in quanto segue:

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

In alternativa, è possibile usare invece verificare:

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
