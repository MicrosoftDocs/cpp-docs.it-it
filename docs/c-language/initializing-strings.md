---
title: Inizializzazione di stringhe
ms.date: 11/04/2016
helpviewer_keywords:
- character arrays, initializing
- strings [C++], initializing
- initializing arrays, strings
ms.assetid: 0ab8079d-d0d3-48f9-afd1-36a7bb439b29
ms.openlocfilehash: c9dbad72314e9ce01d022d26209e2132c29c106a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62326001"
---
# <a name="initializing-strings"></a>Inizializzazione di stringhe

È possibile inizializzare una matrice di caratteri (o carattere "wide") con un valore letterale stringa (o valore letterale stringa "wide"). Ad esempio:

```
char code[ ] = "abc";
```

inizializza `code` come matrice di caratteri di quattro elementi. Il quarto elemento è il carattere null, che termina tutti i valori letterali stringa.

Un elenco di identificatori può essere lungo solo come il numero di identificatori da inizializzare. Se si specifica una matrice con dimensione minore della stringa, i caratteri aggiuntivi vengono ignorati. Ad esempio, la seguente dichiarazione inizializza `code` come matrice di caratteri con tre elementi:

```
char code[3] = "abcd";
```

Solo i primi tre caratteri dell'inizializzatore vengono assegnati a `code`. Il carattere `d` e il carattere di terminazione null della stringa vengono rimossi. Si noti che in questo modo viene creata una stringa non terminata (ovvero una stringa senza un valore 0 che ne contrassegni la fine) e viene generato un messaggio di diagnostica che indica questa condizione.

La dichiarazione

```
char s[] = "abc", t[3] = "abc";
```

è identica a

```
char s[]  = {'a', 'b', 'c', '\0'},
     t[3] = {'a', 'b', 'c' };
```

Se la stringa è minore delle dimensioni della matrice specificate, gli elementi rimanenti della matrice verranno inizializzati sul valore 0.

**Specifico di Microsoft**

In Microsoft C i valori letterali stringa possono essere lunghi fino a 2048 byte.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Inizializzazione](../c-language/initialization.md)
