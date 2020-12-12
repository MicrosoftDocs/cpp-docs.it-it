---
description: 'Altre informazioni su: tipo restituito'
title: Tipo restituito
ms.date: 11/04/2016
helpviewer_keywords:
- function return types
- return values [C++], function procedures
- function return types, syntax
- return values [C++]
- data types [C++], function return types
- return keyword [C++], function return types
- functions [C++], return types
ms.assetid: 3e5b8a97-b341-48c5-8be8-8986980ef586
ms.openlocfilehash: 5f4c3c59dd5d89a3c9083eb177bb72e4049ab454
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293027"
---
# <a name="return-type"></a>Tipo restituito

Il tipo restituito di una funzione determina la dimensione e il tipo del valore restituito dalla funzione e corrisponde all'identificatore di tipo nella sintassi seguente:

## <a name="syntax"></a>Sintassi

*definizione di funzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *attribute-seq*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

/\**attribute-seq* è specifico di Microsoft\*/

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*storage-class-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *declaration-specifiers*<sub>opt</sub>

*type-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`void`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`char`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`short`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`int`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__int8`** /\* Specifiche di Microsoft \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__int16`** /\* Specifiche di Microsoft \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__int32`** /\* Specifiche di Microsoft \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__int64`** /\* Specifiche di Microsoft \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`long`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`float`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`double`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`signed`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`unsigned`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union-specifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore enum*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*typedef-name*

*type-specifier* può specificare qualsiasi struttura o tipo di unione fondamentale. Se non si include *Type-specifier*, viene utilizzato il tipo restituito **`int`** .

Il tipo restituito fornito nella definizione di funzione deve corrispondere al tipo restituito nelle dichiarazioni della funzione in altre parti del programma. Una funzione restituisce un valore quando **`return`** viene eseguita un'istruzione contenente un'espressione. L'espressione viene valutata, convertita in un tipo di valore restituito se necessario e viene restituita al punto in cui la funzione è stata chiamata. Se una funzione viene dichiarata con il tipo restituito **`void`** , un'istruzione return contenente un'espressione genera un avviso e l'espressione non viene valutata.

Negli esempi seguenti vengono illustrati i valori restituiti dalla funzione.

```C
typedef struct
{
    char name[20];
    int id;
    long class;
} STUDENT;

/* Return type is STUDENT: */

STUDENT sortstu( STUDENT a, STUDENT b )
{
    return ( (a.id < b.id) ? a : b );
}
```

In questo esempio viene definito il `STUDENT` tipo con una **`typedef`** dichiarazione e viene definita la funzione `sortstu` per avere un `STUDENT` tipo restituito. La funzione selezionata e restituisce uno dei propri argomenti struttura. Nelle successive chiamate alla funzione, il compilatore controlla per verificare che i tipi di argomento siano `STUDENT`.

> [!NOTE]
> L'efficienza risulta miglioratala passando di puntatori alla struttura, piuttosto che l'intera struttura.

```C
char *smallstr( char s1[], char s2[] )
{
    int i;

    i = 0;
    while ( s1[i] != '\0' && s2[i] != '\0' )
        i++;
    if ( s1[i] == '\0' )
        return ( s1 );
    else
        return ( s2 );
}
```

Nell'esempio seguente viene definita una funzione che restituisce un puntatore a una matrice di caratteri. La funzione accetta due matrici di caratteri (stringhe) come argomenti e restituisce un puntatore alla più breve delle due stringhe. Un puntatore a una matrice punta al primo degli elementi della matrice e ha il tipo. Pertanto, il tipo restituito della funzione è un puntatore al tipo **`char`** .

Non è necessario dichiarare le funzioni con **`int`** il tipo restituito prima di chiamarle, sebbene i prototipi siano consigliati in modo da abilitare il controllo del tipo corretto per gli argomenti e i valori restituiti.

## <a name="see-also"></a>Vedi anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
