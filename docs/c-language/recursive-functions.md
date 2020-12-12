---
description: 'Altre informazioni su: funzioni ricorsive'
title: Funzioni ricorsive
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C], recursive
- function calls, recursive
- functions [C], calling recursively
- recursive function calls
ms.assetid: 59739040-3081-4006-abbc-9d8423992bce
ms.openlocfilehash: 4ea374b0831fdcfa8c63243c6e59c017856f047f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176210"
---
# <a name="recursive-functions"></a>Funzioni ricorsive

Qualsiasi funzione in un programma C può essere chiamata in modo ricorsivo, vale a dire che può chiamare se stessa. Il numero di chiamate ricorsive è limitato alla dimensione dello stack. Per informazioni sulle opzioni del linker che impostano le dimensioni dello stack, vedere l'opzione del linker [ `/STACK` (Allocazioni stack)](../build/reference/stack-stack-allocations.md) . Ogni volta che viene chiamata la funzione, viene allocata una nuova risorsa di archiviazione per i parametri e per le **`auto`** variabili e, **`register`** in modo che i relativi valori nelle chiamate precedenti non completate non vengano sovrascritti. I parametri sono solo accessibili direttamente all'istanza della funzione in cui vengono creati. I parametri precedenti non sono accessibili direttamente a istanze che seguono la funzione.

Si noti che le variabili dichiarate con **`static`** l'archiviazione non richiedono una nuova risorsa di archiviazione con ogni chiamata ricorsiva. La relativa archiviazione disponibile esiste per la durata del programma. Ogni riferimento a tale variabile accede alla stessa area di archiviazione.

## <a name="example"></a>Esempio

In questo esempio sono illustrate le chiamate ricorsive:

```C
int factorial( int num );      /* Function prototype */

int main()
{
    int result, number;
    .
    .
    .
    result = factorial( number );
}

int factorial( int num )      /* Function definition */
{
    .
    .
    .
    if ( ( num > 0 ) || ( num <= 10 ) )
        return( num * factorial( num - 1 ) );
}
```

## <a name="see-also"></a>Vedi anche

[Chiamate di funzione](../c-language/function-calls.md)
