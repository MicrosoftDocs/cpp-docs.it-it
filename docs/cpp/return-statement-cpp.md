---
description: 'Altre informazioni su: istruzione return (C++)'
title: Istruzione return (C++)
ms.date: 11/04/2016
f1_keywords:
- return_cpp
helpviewer_keywords:
- return keyword [C++], syntax
- return keyword [C++]
ms.assetid: a498903a-056a-4df0-a6cf-72f633a62210
ms.openlocfilehash: bb847900a0a9fc4c5d723d1b0392f27b6b5cf667
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340476"
---
# <a name="return-statement-c"></a>Istruzione return (C++)

Viene interrotta l'esecuzione di una funzione e il controllo viene restituito alla funzione chiamante (o al sistema operativo, se il controllo viene trasferito dalla funzione `main`). Nella funzione chiamante, l'esecuzione riprende dal punto immediatamente successivo alla chiamata.

## <a name="syntax"></a>Sintassi

```
return [expression];
```

## <a name="remarks"></a>Osservazioni

La clausola `expression`, se presente, viene convertita nel tipo specificato nella dichiarazione di funzione, come se si eseguisse un'inizializzazione. La conversione dal tipo dell'espressione al **`return`** tipo della funzione può creare oggetti temporanei. Per ulteriori informazioni su come e quando vengono creati temporaries, vedere [oggetti temporanei](../cpp/temporary-objects.md).

Il valore della clausola `expression` viene restituito alla funzione chiamante. Se l'espressione viene omessa, il valore restituito della funzione è indefinito. I costruttori e i distruttori e le funzioni di tipo **`void`** non possono specificare un'espressione nell' **`return`** istruzione. Le funzioni di tutti gli altri tipi devono specificare un'espressione nell' **`return`** istruzione.

Quando il flusso di controllo esce dal blocco che include la definizione della funzione, il risultato è identico a quello di un' **`return`** istruzione senza un'espressione eseguita. Ciò non è valido per le funzioni che vengono dichiarate come elementi che restituiscono un valore.

Una funzione può avere un numero qualsiasi di **`return`** istruzioni.

Nell'esempio seguente viene utilizzata un'espressione con un' **`return`** istruzione per ottenere il più grande tra due numeri interi.

## <a name="example"></a>Esempio

```cpp
// return_statement2.cpp
#include <stdio.h>

int max ( int a, int b )
{
   return ( a > b ? a : b );
}

int main()
{
    int nOne = 5;
    int nTwo = 7;

    printf_s("\n%d is bigger\n", max( nOne, nTwo ));
}
```

## <a name="see-also"></a>Vedere anche

[Istruzioni di salto](../cpp/jump-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
