---
title: Operatori address-of e di riferimento indiretto | Microsoft Docs
ms.custom: ''
ms.date: 02/16/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- address-of operator (&)
- '* operator'
- operators [C++], address-of
- ampersand operator (&)
- '* operator, indirection operator'
- addresses [C++], indirection
- addresses [C++]
- indirection operator
- '& operator, address-of operator'
- null pointers [C++]
- '* operator, address-of operator'
- operators [C++], indirection
ms.assetid: 10d62b00-12ba-4ea9-a2d5-09ac29ca2232
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 75afd44b8c0a31d9f3731a4c6f9fb86c15de4328
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="indirection-and-address-of-operators"></a>Operatori address-of e di riferimento indiretto

L'operatore di riferimento indiretto unario (__&#42;__) accede indirettamente a un valore tramite un puntatore. L'operando deve essere un tipo di puntatore. Il risultato dell'operazione è il valore indicato dall'operando, ovvero il valore al cui indirizzo punta l'operando. Il tipo del risultato corrisponde al tipo indirizzato dall'operando.

Il risultato dell'operatore di riferimento indiretto è *type* se l'operando è di tipo *pointer to type*. Se l'operando punta a una funzione, il risultato è un indicatore di funzione. Se invece punta a un oggetto, il risultato è un lvalue che definisce l'oggetto.

Se il valore del puntatore non è valido, il risultato dell'operatore di riferimento indiretto è indefinito. Di seguito sono elencate alcune delle condizioni più comuni che invalidano un valore di puntatore:

- Il puntatore è un puntatore null.

- Il puntatore specifica l'indirizzo di un oggetto la cui durata è terminata, ad esempio un oggetto fuori ambito o deallocato, al momento del riferimento.

- Il puntatore specifica un indirizzo allineato in modo non appropriato per il tipo di oggetto cui fa riferimento.

- Il puntatore specifica un indirizzo non utilizzato dal programma di esecuzione.

L'operatore address-of unario (**&**) specifica l'indirizzo del relativo operando. L'operando deve essere un lvalue che specifica un oggetto non dichiarato __register__ e non è un campo di bit oppure il risultato di un operatore __&#42;__ unario, di un operatore (__&#91;&#93;__) senza riferimenti di matrice o di un indicatore di funzione. Il risultato è di tipo *pointer to type* per un operando di tipo *type*.

Se l'operando è il risultato di un operatore __&#42;__ unario, non viene valutato alcun operatore e ne deriva un risultato che corrisponde all'omissione di entrambi. Il risultato non è un lvalue e i vincoli sugli operatori vengono mantenuti. Se l'operando è il risultato di un operatore __&#91;&#93;__, non viene valutato né l'operatore __&__ né l'operatore __&#42;__ unario implicato dall'operatore __&#91;&#93;__. Il risultato corrisponde alla rimozione dell'operatore __&__ e alla modifica dell'operatore __&#91;&#93;__ in un operatore __+__. In caso contrario, il risultato è un puntatore all'oggetto o alla funzione definita dall'operando.


## <a name="examples"></a>Esempi

Gli esempi seguenti usano le dichiarazioni comuni che seguono:

```C
int *pa, x;
int a[20];
double d;
```

Questa istruzione usa l'operatore address-of (**&**) per accettare l'indirizzo del sesto elemento della matrice `a`. Il risultato viene archiviato nella variabile del puntatore `pa`:

```C  
pa = &a[5];
```

L'operatore di riferimento indiretto (__&#42;__) viene usato in questo esempio per accedere al valore `int` all'indirizzo archiviato in `pa`. Il valore viene assegnato alla variabile Integer `x`:

```C
x = *pa;
```

L'esempio dimostra che il risultato dell'applicazione dell'operatore di riferimento indiretto all'indirizzo di `x` è lo stesso di `x`:

```C
assert( x == *&x );
```

Questo esempio illustra modi equivalenti di dichiarare un puntatore a una funzione:

```C
int roundup( void );     /* Function declaration */

int  *proundup  = roundup;
int  *pround  = &roundup;
assert( pround == proundup );
```  

Dopo che la funzione `roundup` è stata dichiarata, vengono dichiarati e inizializzati due puntatori a `roundup`. Il primo puntatore, `proundup`, viene inizializzata utilizzando solo il nome della funzione, mentre il secondo, `pround`, utilizza l'operatore address-of nell'inizializzazione. Le inizializzazioni sono equivalenti.

## <a name="see-also"></a>Vedere anche

[Operatore di riferimento indiretto: &#42;](../cpp/indirection-operator-star.md)  
[Operatore address-of: &](../cpp/address-of-operator-amp.md)  
