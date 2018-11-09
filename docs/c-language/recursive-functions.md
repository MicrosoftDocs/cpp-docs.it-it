---
title: Funzioni ricorsive
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C], recursive
- function calls, recursive
- functions [C], calling recursively
- recursive function calls
ms.assetid: 59739040-3081-4006-abbc-9d8423992bce
ms.openlocfilehash: 69d7a1c82b7efb215b941aa5a6e9d94276bed529
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630126"
---
# <a name="recursive-functions"></a>Funzioni ricorsive

Qualsiasi funzione in un programma C può essere chiamata in modo ricorsivo, vale a dire che può chiamare se stessa. Il numero di chiamate ricorsive è limitato alla dimensione dello stack. Per informazioni sulle opzioni del linker che impostano la dimensione dello stack, vedere l'opzione del linker /STACK in [/STACK (Stack Allocations)](../build/reference/stack-stack-allocations.md) (/STACK (allocazioni di stack)). Ogni volta che la funzione viene chiamata, viene allocata altra memoria per i parametri e per le variabili **auto** e **register**, in modo da non sovrascrivere i valori di queste nelle chiamate precedenti non completate. I parametri sono solo accessibili direttamente all'istanza della funzione in cui vengono creati. I parametri precedenti non sono accessibili direttamente a istanze che seguono la funzione.

Tenere presente che le variabili dichiarate con memoria **statica** non richiedono nuova memoria per ogni chiamata ricorsiva. La relativa archiviazione disponibile esiste per la durata del programma. Ogni riferimento a tale variabile accede alla stessa area di archiviazione.

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

## <a name="see-also"></a>Vedere anche

[Chiamate di funzione](../c-language/function-calls.md)