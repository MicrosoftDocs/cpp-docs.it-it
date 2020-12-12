---
description: 'Altre informazioni su: inizializzazione di stringhe'
title: Inizializzazione di stringhe
ms.date: 11/04/2016
helpviewer_keywords:
- character arrays, initializing
- strings [C++], initializing
- initializing arrays, strings
ms.assetid: 0ab8079d-d0d3-48f9-afd1-36a7bb439b29
ms.openlocfilehash: 145fc55eaccd64b30bae2736dd78317dc5db7d7d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137579"
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

## <a name="see-also"></a>Vedi anche

[Inizializzazione](../c-language/initialization.md)
