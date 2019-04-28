---
title: Istruzione Null
ms.date: 11/04/2016
helpviewer_keywords:
- expressions [C++], null
- null statement
- null values, expressions
ms.assetid: 606f5953-55f0-40c8-ae03-3ee3a819b851
ms.openlocfilehash: 2797937b184bebe0e29f8e5eae428f601c824811
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62245180"
---
# <a name="null-statement"></a>Istruzione Null

L'istruzione"null" è un'istruzione di espressione con il *espressione* mancante. Risulta utile quando la sintassi del linguaggio chiama un'istruzione ma non la relativa valutazione. È costituita da un punto e virgola.

Le istruzioni null vengono comunemente utilizzate come segnaposto nelle istruzioni di iterazione o come istruzioni su cui posizionare le etichette alla fine delle istruzioni composte o delle funzioni.

Nel frammento di codice seguente viene illustrato come copiare una stringa in un'altra e incorporare l'istruzione null:

```cpp
// null_statement.cpp
char *myStrCpy( char *Dest, const char *Source )
{
    char *DestStart = Dest;

    // Assign value pointed to by Source to
    // Dest until the end-of-string 0 is
    // encountered.
    while( *Dest++ = *Source++ )
        ;   // Null statement.

    return DestStart;
}

int main()
{
}
```

## <a name="see-also"></a>Vedere anche

[Istruzione di espressione](../cpp/expression-statement.md)