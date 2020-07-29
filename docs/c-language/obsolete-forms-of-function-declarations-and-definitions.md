---
title: Forme obsolete di dichiarazioni e definizioni di funzioni
ms.date: 11/04/2016
helpviewer_keywords:
- old style function declarations
ms.assetid: 67c5038f-0529-4f29-9d0f-c27580977b50
ms.openlocfilehash: 3311fc846ad0f4f80c2e3b61508edd626a13fbb2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218793"
---
# <a name="obsolete-forms-of-function-declarations-and-definitions"></a>Forme obsolete di dichiarazioni e definizioni di funzioni

Rispetto alla sintassi consigliata dallo standard ANSI C, le dichiarazioni e le definizioni delle funzioni obsolete utilizzano regole leggermente differenti per la dichiarazione dei parametri. Innanzitutto, le dichiarazioni obsolete non includono un elenco di parametri. In secondo luogo, nella definizione di funzione, i parametri sono elencati, ma i relativi tipi sono dichiarati nell'elenco di parametri. Le dichiarazioni del tipo precedono l'istruzione composta che costituisce il corpo della funzione. La sintassi obsoleta non è aggiornata e non deve essere utilizzata nel nuovo codice. Il codice che utilizza la sintassi obsoleta è, tuttavia, ancora supportato. In questo esempio vengono illustrati i form obsoleti delle dichiarazioni e delle definizioni:

```
double old_style();           /* Obsolete function declaration */

double alt_style( a , real )  /* Obsolete function definition */
    double *real;
    int a;
{
    return ( *real + a ) ;
}
```

Le funzioni che restituiscono un intero o un puntatore con le stesse dimensioni di un **`int`** non devono avere una dichiarazione, sebbene la dichiarazione sia consigliata.

Per la conformità allo standard ANSI C, le dichiarazioni di funzione obsolete con i puntini di sospensione generano ora un errore durante la compilazione con l'opzione /Za e un avviso di livello 4 durante la compilazione con /Ze. Ad esempio:

```cpp
void funct1( a, ... )  /* Generates a warning under /Ze or */
int a;                 /* an error when compiling with /Za */
{
}
```

È necessario riscrivere questa dichiarazione come prototipo:

```cpp
void funct1( int a, ... )
{
}
```

Anche le dichiarazioni di funzione obsolete generano avvisi se, in un secondo momento, si dichiara o si definisce la stessa funzione con i puntini di sospensione o con un parametro con un tipo che non è uguale al relativo tipo promosso.

Nella sezione successiva, [Definizioni di funzioni C](../c-language/c-function-definitions.md), viene illustrata la sintassi per le definizioni di funzioni, inclusa la sintassi obsoleta. Il non terminale per l'elenco dei parametri nella sintassi obsoleta è *identifier-list*.

## <a name="see-also"></a>Vedere anche

[Panoramica delle funzioni](../c-language/overview-of-functions.md)
