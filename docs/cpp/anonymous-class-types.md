---
title: Tipi di classe anonimi
ms.date: 11/04/2016
helpviewer_keywords:
- class types [C++], anonymous
- anonymous class types
ms.assetid: 9ba667b2-8c2a-4c29-82a6-fa120b9233c8
ms.openlocfilehash: e227f48588c3c4f59c0d0bd28ab16178de159b58
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82032083"
---
# <a name="anonymous-class-types"></a>Tipi di classe anonimi

Le classi possono essere anonime, ovvero possono essere dichiarate senza un *identificatore*. Ciò è utile quando si sostituisce un nome di classe con un nome **typedef,** come nel seguente:

```cpp
typedef struct
{
    unsigned x;
    unsigned y;
} POINT;
```

> [!NOTE]
> L'utilizzo di classi anonime illustrato con l'esempio precedente è utile per preservare la compatibilità con il codice C esistente. In alcuni codice C, l'uso di **typedef** in combinazione con strutture anonime è prevalente.

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

Nel codice precedente `iValue` è possibile accedere utilizzando l'operatore di selezione dei membri dell'oggetto (**.**) nel modo seguente:

```cpp
int i = ptv.iValue;
```

Le classi anonime sono soggette a determinate restrizioni. Per ulteriori informazioni sulle unioni anonime, vedere [Unioni.](../cpp/unions.md) Classi anonime:

- Non possono avere un costruttore o un distruttore.

- Non può essere passato come argomento alle funzioni (a meno che il controllo dei tipi non venga sconfitto utilizzando i lipsiane).

- Non possono essere restituite dalle funzioni come valori restituiti.

## <a name="anonymous-structs"></a>Struct anonimi

**Specifico di Microsoft**

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

**FINE Specifico di Microsoft**
