---
title: Suggerimenti per la scelta tra funzioni e macro
description: Illustra le differenze tra l'uso delle macro e delle funzioni nella libreria di runtime di Microsoft C (CRT)
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- c.functions
helpviewer_keywords:
- functions [CRT], vs. macros
- macros, vs. functions
ms.assetid: 18a633d6-cf1c-470c-a649-fa7677473e2b
ms.openlocfilehash: 8791baf8e8645e0044ff180485ac7935b8ffa3f5
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91589705"
---
# <a name="recommendations-for-choosing-between-functions-and-macros"></a>Suggerimenti per la scelta tra funzioni e macro

La maggior parte delle routine delle librerie run-time di Microsoft è costituita da funzioni compilate o assemblate, ma alcune routine sono implementate come macro. Quando un file di intestazione dichiara sia una versione funzione che una versione macro di una routine, la versione macro ha la precedenza, perché viene sempre dopo la dichiarazione di funzione. Quando si chiama una routine implementata sia come funzione che come macro, è possibile imporre al compilatore di usare la versione funzione in due modi:

- Racchiudendo il nome della routine tra parentesi.

    ```C
    #include <ctype.h>
    a = _toupper(a);    // Use macro version of toupper.
    a = (_toupper)(a);  // Force compiler to use
                        // function version of toupper.
    ```

- "Rimuovendo" la versione macro con la direttiva `#undef`:

    ```C
    #include <ctype.h>
    #undef _toupper
    ```

Se è necessario scegliere tra l'implementazione come funzione e l'implementazione come macro di una routine di libreria, tenere in considerazione i compromessi seguenti:

- **Velocità contro dimensioni** Il vantaggio principale delle macro è la velocità di esecuzione. Durante la pre-elaborazione, una macro viene espansa (sostituita dalla definizione corrispondente) inline ogni volta che viene usata. Una definizione di funzione viene eseguita solo una volta indipendentemente dal numero di volte in cui viene chiamata. Le macro possono aumentare le dimensioni del codice ma non comportano il sovraccarico associato alle chiamate di funzione.

- **Valutazione della funzione** Una funzione restituisce un indirizzo, una macro no. Pertanto non è possibile usare un nome di macro in contesti che richiedono un puntatore. È ad esempio possibile dichiarare un puntatore a una funzione, ma non un puntatore a una macro.

- **Controllo del tipo** Quando si dichiara una funzione, il compilatore può controllare i tipi di argomento. Poiché non è possibile dichiarare una macro, il compilatore non può controllare i tipi di argomenti della macro, anche se può verificare il numero di argomenti passati a una macro.

## <a name="see-also"></a>Vedi anche

[Tipo-Math generico](tgmath.md)\
[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
