---
description: 'Altre informazioni su: operatore Conditional-Expression'
title: Operatore di espressione condizionale
ms.date: 11/04/2016
helpviewer_keywords:
- conditional operators
- operators [C++], conditional
- expressions [C++], conditional
ms.assetid: c4f1a5ca-0844-44a7-a384-eca584d4e3dd
ms.openlocfilehash: 4b11b0f3ed132459f4e1608922e111c3b5bf2a98
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293313"
---
# <a name="conditional-expression-operator"></a>Operatore di espressione condizionale

Il linguaggio C dispone di un operatore ternario: l'operatore di espressione condizionale (**? :**).

## <a name="syntax"></a>Sintassi

*espressione condizionale*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*logical-OR-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*logical-OR expression*  **?**  *espressione*  **:**  *conditional-expression*

*logical-OR-expression* deve essere di tipo integrale, a virgola mobile o puntatore. Viene valutata in termini di equivalenza relativa a 0. *logical-OR-expression* è seguita da un punto di sequenza. La valutazione degli operandi prosegue nel modo seguente:

- Se *logical-OR-expression* non è uguale a 0, *expression* viene valutato. Il risultato della valutazione dell'espressione è dato da *expression* non terminale. Ciò significa che *expression* viene valutato solo se *logical-OR-expression* è true.

- Se *logical-OR-expression* è uguale a 0, *conditional-expression* viene valutato. Il risultato dell'espressione è il valore di *conditional-expression*. Ciò significa che *conditional-expression* viene valutato solo se *logical-OR-expression* è false.

Si noti che viene valutato *expression* o *conditional-expression*, ma non entrambi.

Il tipo del risultato di un'operazione condizionale dipende dal tipo dell'operando *expression* o *conditional-expression* come segue:

- Se *expression* o *conditional-expression* è di tipo integrale o a virgola mobile (i tipi possono essere diversi), l'operatore esegue le conversioni aritmetiche comuni. Il tipo del risultato è il tipo degli operandi in seguito alla conversione.

- Se *expression* e *conditional-expression* hanno lo stesso tipo struttura, unione o puntatore, il tipo del risultato è lo stesso tipo struttura, unione o puntatore.

- Se entrambi gli operandi sono di tipo **`void`** , il risultato è di tipo **`void`** .

- Se uno degli operandi è un puntatore a un oggetto di qualsiasi tipo e l'altro operando è un puntatore a **`void`** , il puntatore all'oggetto viene convertito in un puntatore a **`void`** e il risultato è un puntatore a **`void`** .

- Se *expression* o *conditional-expression* è un puntatore e l'altro operando è un'espressione costante con valore 0, il tipo del risultato è il tipo puntatore.

Nel confronto dei tipi per i puntatori, qualsiasi qualificatore di tipo ( **`const`** o **`volatile`** ) nel tipo a cui punta il puntatore non è significativo, ma il tipo di risultato eredita i qualificatori da entrambi i componenti dell'oggetto condizionale.

## <a name="examples"></a>Esempio

Negli esempi seguenti vengono illustrati gli utilizzi dell'operatore condizionale.

```
j = ( i < 0 ) ? ( -i ) : ( i );
```

In questo esempio viene assegnato il valore assoluto `i` a `j`. Se `i` è minore di 0, `-i` è assegnato a `j`. Se `i` è maggiore o uguale a 0, `i` è assegnato a `j`.

```cpp
void f1( void );
void f2( void );
int x;
int y;
    .
    .
    .
( x == y ) ? ( f1() ) : ( f2() );
```

In questo esempio le due funzioni `f1` e `f2` e le due variabili `x` e `y` vengono dichiarate. Più avanti nel programma, se le due variabili presentano lo stesso valore, viene chiamata la funzione `f1`. In caso contrario, viene chiamato `f2`.

## <a name="see-also"></a>Vedi anche

[Operatore condizionale: ? :](../cpp/conditional-operator-q.md)
