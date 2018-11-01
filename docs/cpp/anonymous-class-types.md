---
title: Tipi di classe anonimi
ms.date: 11/04/2016
helpviewer_keywords:
- class types [C++], anonymous
- anonymous class types
ms.assetid: 9ba667b2-8c2a-4c29-82a6-fa120b9233c8
ms.openlocfilehash: 9cd27fb40522a07ce4591b654ee8a6dda53b4f28
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456407"
---
# <a name="anonymous-class-types"></a>Tipi di classe anonimi

Le classi possono essere anonime, vale a dire, possono essere dichiarate senza un *identificatore*. Ciò è utile quando si sostituisce un nome di classe con un **typedef** il nome, come illustrato di seguito:

```cpp
typedef struct
{
    unsigned x;
    unsigned y;
} POINT;
```

> [!NOTE]
>  L'utilizzo di classi anonime illustrato con l'esempio precedente è utile per preservare la compatibilità con il codice C esistente. Alcuni codici C, l'uso di **typedef** è prevalente in combinazione con strutture anonime.

Le classi anonime sono utili anche quando si desidera che un riferimento al membro di classe venga visualizzato come se non fosse contenuto in una classe separata, come illustrato di seguito:

```cpp
struct PTValue
{
    POINT ptLoc;
    union
    {
        int  iValue;
        long lValue;
    };
};

PTValue ptv;
```

Nel codice precedente, `iValue` è possibile accedere tramite l'operatore di selezione dei membri di oggetti (**.**) come indicato di seguito:

```cpp
int i = ptv.iValue;
```

Le classi anonime sono soggette a determinate restrizioni. (Per altre informazioni sulle unioni anonime, vedere [unioni](../cpp/unions.md).) Le classi anonime:

- Non possono avere un costruttore o un distruttore.

- Non possono essere passate come argomenti alle funzioni (a meno che il controllo dei tipi non venga aggirato usando i puntini di sospensione).

- Non possono essere restituite dalle funzioni come valori restituiti.

## <a name="anonymous-structs"></a>Struct anonimi

### <a name="microsoft-specific"></a>Sezione specifica Microsoft

Un'estensione C Microsoft consente di dichiarare una variabile di struttura in un'altra struttura senza assegnarle un nome. Queste strutture annidate vengono chiamate strutture anonime. Il linguaggio C++ non consente strutture anonime.

È possibile accedere ai membri di una struttura anonima come se fossero membri della struttura contenitore.

```cpp
// anonymous_structures.c
#include <stdio.h>

struct phone
{
    int  areacode;
    long number;
};

struct person
{
    char   name[30];
    char   gender;
    int    age;
    int    weight;
    struct phone;    // Anonymous structure; no name needed
} Jim;

int main()
{
    Jim.number = 1234567;
    printf_s("%d\n", Jim.number);
}
//Output: 1234567
```

**Fine sezione specifica Microsoft**