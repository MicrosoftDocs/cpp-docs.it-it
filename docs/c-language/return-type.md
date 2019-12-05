---
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
ms.openlocfilehash: fe9280f434dd6267b03764df2ee663c494f007d8
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857034"
---
# <a name="return-type"></a>Tipo restituito

Il tipo restituito di una funzione determina la dimensione e il tipo del valore restituito dalla funzione e corrisponde all'identificatore di tipo nella sintassi seguente:

## <a name="syntax"></a>Sintassi

*function-definition*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *attribute-seq*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

/\* *attribute-seq* è \*specifico di Microsoft /

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*storage-class-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *declaration-specifiers*<sub>opt</sub>

*type-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**void**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**char**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**short**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**int**<br/>
&nbsp;&nbsp; **&nbsp;&nbsp;__int8 /\*** \*specifiche di Microsoft /<br/>
&nbsp;&nbsp; **&nbsp;&nbsp;__int16 /\*** \*specifiche di Microsoft /<br/>
&nbsp;&nbsp; **&nbsp;&nbsp;__int32 /\*** \*specifiche di Microsoft /<br/>
&nbsp;&nbsp; **&nbsp;&nbsp;__int64 /\*** \*specifiche di Microsoft /<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**long**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**float**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**double**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**signed**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**unsigned**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union-specifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*enum-specifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*typedef-name*

*type-specifier* può specificare qualsiasi struttura o tipo di unione fondamentale. Se non si include *type-specifier*, viene presupposto il tipo restituito `int`.

Il tipo restituito fornito nella definizione di funzione deve corrispondere al tipo restituito nelle dichiarazioni della funzione in altre parti del programma. Una funzione restituisce un valore quando un'istruzione `return` che contiene un'espressione viene eseguita. L'espressione viene valutata, convertita in un tipo di valore restituito se necessario e viene restituita al punto in cui la funzione è stata chiamata. Se una funzione è dichiarata con il tipo restituito `void`, un'istruzione return che contiene un'espressione genera un avviso e l'espressione non viene valutata.

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

Viene definito il tipo `STUDENT` con una dichiarazione `typedef` e viene definita la funzione `sortstu` per avere il tipo restituito `STUDENT`. La funzione selezionata e restituisce uno dei propri argomenti struttura. Nelle successive chiamate alla funzione, il compilatore controlla per verificare che i tipi di argomento siano `STUDENT`.

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

Nell'esempio seguente viene definita una funzione che restituisce un puntatore a una matrice di caratteri. La funzione accetta due matrici di caratteri (stringhe) come argomenti e restituisce un puntatore alla più breve delle due stringhe. Un puntatore a un elemento punta al primo degli elementi della matrice e ha il suo tipo; pertanto, il tipo restituito della funzione è un puntatore al tipo `char`.

Non è necessario dichiarare le funzioni con il tipo restituito `int` prima di chiamarle, sebbene i prototipi siano consigliati in modo da consentire il controllo del tipo corretto per gli argomenti e i valori restituiti.

## <a name="see-also"></a>Vedere anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
