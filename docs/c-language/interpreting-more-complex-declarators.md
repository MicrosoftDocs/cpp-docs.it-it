---
title: Interpretazione di più dichiaratori complessi
ms.date: 11/04/2016
helpviewer_keywords:
- complex declarators
- interpreting complex declarators
ms.assetid: dd5b7019-c86d-4645-a5cc-21f834de6f4a
ms.openlocfilehash: 385392ea8836998e71584d02bd0ee4478fb774a0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87199906"
---
# <a name="interpreting-more-complex-declarators"></a>Interpretazione di più dichiaratori complessi

È possibile racchiudere qualsiasi dichiaratore tra parentesi per specificare un'interpretazione particolare di un "dichiaratore complesso". Un dichiaratore complesso è un identificatore qualificato da più matrici, puntatori o modificatori di funzione. È possibile applicare varie combinazioni di matrice, puntatore e modificatori di funzione a un singolo identificatore. In genere **`typedef`** può essere usato per semplificare le dichiarazioni. Vedere [Dichiarazioni typedef](../c-language/typedef-declarations.md).

Nell'interpretazione dei dichiaratori complessi, le parentesi quadre e le parentesi (ovvero modificatori a destra dell'identificatore) hanno la precedenza sugli asterischi (ovvero modificatori a sinistra dell'identificatore). Parentesi quadre e parentesi tonde hanno la stessa precedenza e vengono associate da sinistra a destra. Dopo che il dichiaratore è stato completamente interpretato, l'identificatore del tipo viene applicato come ultimo passaggio. Utilizzando le parentesi tonde è possibile eseguire l'override dell'ordine di associazione predefinito e forzare un'interpretazione particolare. Non utilizzare mai le parentesi, tuttavia, attorno al nome di un identificatore da solo. Ciò potrebbe essere interpretato erroneamente come un elenco di parametri.

Un modo semplice per interpretare i dichiaratori complessi consiste nel leggerli da "dall'interno verso l'esterno", utilizzando i quattro passaggi seguenti:

1. Iniziare con l'identificatore e individuare direttamente le eventuali parentesi quadre o le parentesi tonde presenti sulla destra.

1. Interpretare queste parentesi quadre o parentesi tonde, quindi individuare gli asterischi sulla sinistra.

1. Se durante una delle fasi si rileva una parentesi chiusa, tornare indietro e applicare le regole 1 e 2 a qualsiasi elemento all'interno delle parentesi.

1. Applicare l'identificatore di tipo.

    ```
    char *( *(*var)() )[10];
     ^   ^  ^ ^ ^   ^    ^
     7   6  4 2 1   3    5
    ```

In questo esempio, i passaggi sono numerati in ordine e possono essere interpretati come segue:

1. L'identificatore `var` viene dichiarato come

1. un puntatore a

1. una funzione che restituisce

1. un puntatore a

1. una matrice di 10 elementi, che sono

1. puntatori a

1. **`char`** valori.

## <a name="examples"></a>Esempi

Negli esempi seguenti vengono illustrate altre dichiarazioni complesse e mostrato come le parentesi possono influire sul significato di una dichiarazione.

```
int *var[5]; /* Array of pointers to int values */
```

Il modificatore di matrice ha priorità più alta rispetto al modificatore del puntatore, quindi `var` viene dichiarato come una matrice. Il modificatore del puntatore viene applicato al tipo degli elementi della matrice; gli elementi della matrice sono pertanto puntatori a **`int`** valori.

```
int (*var)[5]; /* Pointer to array of int values */
```

In questa dichiarazione per `var` le parentesi forniscono al modificatore di puntatore una priorità più alta rispetto al modificatore di matrice ed `var` è dichiarata come puntatore a una matrice di cinque **`int`** valori.

```
long *var( long, long ); /* Function returning pointer to long */
```

I modificatori di funzione hanno anche una priorità più alta rispetto ai modificatori del puntatore, quindi questa dichiarazione per `var` dichiara `var` di essere una funzione che restituisce un puntatore a un **`long`** valore. La funzione viene dichiarata per assumere due **`long`** valori come argomenti.

```
long (*var)( long, long ); /* Pointer to function returning long */
```

Questo esempio è simile al precedente. Le parentesi forniscono al modificatore di puntatore una priorità più alta rispetto al modificatore di funzione e `var` viene dichiarata come puntatore a una funzione che restituisce un **`long`** valore. Anche in questo caso, la funzione accetta due **`long`** argomenti.

```
struct both       /* Array of pointers to functions */
{                 /*   returning structures         */
    int a;
    char b;
} ( *var[5] )( struct both, struct both );
```

Gli elementi di una matrice non possono essere funzioni, ma questa dichiarazione dimostra come dichiarare una matrice di puntatori a funzioni. In questo esempio, `var` viene dichiarato come una matrice di cinque puntatori a funzioni che restituiscono strutture con due membri. Gli argomenti alle funzioni vengono dichiarati come due strutture con lo stesso tipo di struttura, `both`. Si noti che le parentesi che racchiudono `*var[5]` sono necessarie. Senza di esse, la dichiarazione è un tentativo non valido di dichiarare una matrice di funzioni, come illustrato di seguito:

```
/* ILLEGAL */
struct both *var[5](struct both, struct both);
```

L'istruzione seguente dichiara una matrice di puntatori.

```
unsigned int *(* const *name[5][10] ) ( void );
```

La matrice `name` dispone di 50 elementi organizzati in una matrice multidimensionale. Gli elementi sono puntatori a un puntatore che è una costante. Questo puntatore constant fa riferimento a una funzione non ha alcun parametro e restituisce un puntatore a un tipo unsigned.

Questo esempio seguente è una funzione che restituisce un puntatore a una matrice di tre **`double`** valori.

```
double ( *var( double (*)[3] ) )[3];
```

In questa dichiarazione, una funzione restituisce un puntatore a una matrice, poiché le funzioni che restituiscono matrici non sono consentite. Qui `var` viene dichiarato come una funzione che restituisce un puntatore a una matrice di tre **`double`** valori. La funzione `var` accetta un argomento. L'argomento, come il valore restituito, è un puntatore a una matrice di tre **`double`** valori. Il tipo di argomento viene specificato da un *abstract-declarator* complesso. Le parentesi intorno all'asterisco nel tipo di argomento sono obbligatorie. senza di esse, il tipo di argomento sarebbe una matrice di tre puntatori a **`double`** valori. Per informazioni ed esempi di dichiaratori abstract, vedere [Dichiaratori abstract](../c-language/c-abstract-declarators.md).

```
union sign         /* Array of arrays of pointers */
{                  /* to pointers to unions       */
     int x;
     unsigned y;
} **var[5][5];
```

Come illustrato nell'esempio precedente, un puntatore può indicare un altro puntatore e una matrice può contenere matrici come elementi. In questo caso `var` è una matrice di cinque elementi. Ogni elemento è una matrice di cinque elementi di puntatori ai puntatori a unioni con due membri.

```
union sign *(*var[5])[5]; /* Array of pointers to arrays
                             of pointers to unions        */
```

In questo esempio viene mostrato come la posizione delle parentesi modifica il significato della dichiarazione. In questo esempio, `var` è una matrice di cinque elementi dei puntatori a matrici di cinque elementi dei puntatori a unioni. Per esempi relativi all'uso **`typedef`** di per evitare dichiarazioni complesse, vedere [dichiarazioni typedef](../c-language/typedef-declarations.md).

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e tipi](../c-language/declarations-and-types.md)
