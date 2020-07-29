---
title: Inizializzazione di tipi scalari
ms.date: 11/04/2016
helpviewer_keywords:
- initializing scalar types
- register variables
- initialization, scalar types
- initializing variables, scalar types
- scalar types
- static variables, initializing
- automatic storage class, initializing scalar types
- automatic storage class
- types [C], initializing
ms.assetid: 73c516f5-c3ad-4d56-ab3b-f2a82b621104
ms.openlocfilehash: 063761abcbb1541893b9cbab463e3d121684d00a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211827"
---
# <a name="initializing-scalar-types"></a>Inizializzazione di tipi scalari

Quando si inizializzano i tipi scalari, il valore di *`assignment-expression`* viene assegnato alla variabile. Vengono applicate le regole di conversione per l'assegnazione. Per informazioni sulle regole di conversione, vedere [Conversione di tipi](../c-language/type-conversions-c.md).

## <a name="syntax"></a>Sintassi

*`declaration`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`**`init-declarator-list`* <sub>consenso esplicito</sub>**`;`**

*`declaration-specifiers`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`storage-class-specifier`**`declaration-specifiers`* <sub>consenso esplicito</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-specifier`**`declaration-specifiers`* <sub>consenso esplicito</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-qualifier`**`declaration-specifiers`* <sub>consenso esplicito</sub>

*`init-declarator-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator-list`* **`,`** *`init-declarator`*

*`init-declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`***`=`** *`initializer`* /\* Per l'inizializzazione scalare\*/

*`initializer`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`assignment-expression`*

È possibile inizializzare variabili di qualsiasi tipo, a condizione che vengano applicate le regole seguenti:

- Le variabili dichiarate a livello di ambito file possono essere inizializzate. Se non si inizializza una variabile in modo esplicito a livello esterno, viene inizializzata su 0 per impostazione predefinita.

- Un'espressione costante può essere usata per inizializzare qualsiasi variabile globale dichiarata con **`static`** *`storage-class-specifier`* . Le variabili dichiarate come **`static`** vengono inizializzate all'inizio dell'esecuzione del programma. Se non si inizializza in modo esplicito una **`static`** variabile globale, viene inizializzata su 0 per impostazione predefinita e a ogni membro con tipo di puntatore viene assegnato un puntatore null.

- Le variabili dichiarate con l' **`auto`** **`register`** identificatore della classe di archiviazione o vengono inizializzate ogni volta che il controllo dell'esecuzione passa al blocco in cui sono dichiarate. Se si omette un inizializzatore dalla dichiarazione di una **`auto`** **`register`** variabile o, il valore iniziale della variabile non è definito. Per i valori automatic e register, l'inizializzatore non è necessariamente costituito da una costante; può essere qualsiasi espressione che includa i valori definiti in precedenza, anche le chiamate di funzione.

- I valori iniziali per le dichiarazioni di variabili esterne e per tutte le **`static`** variabili, sia esterne che interne, devono essere espressioni costanti. Per ulteriori informazioni, vedere [espressioni costanti](../c-language/c-constant-expressions.md). Poiché l'indirizzo di qualsiasi variabile dichiarata esternamente o statica è costante, può essere utilizzato per inizializzare una variabile del puntatore dichiarata internamente **`static`** . Tuttavia, l'indirizzo di una **`auto`** variabile non può essere usato come inizializzatore statico perché può essere diverso per ogni esecuzione del blocco. È possibile utilizzare valori costanti o variabili per inizializzare **`auto`** le **`register`** variabili e.

- Se la dichiarazione di un identificatore presenta un ambito del blocco e l'identificatore presenta un collegamento esterno, la dichiarazione non può avere un'inizializzazione.

## <a name="examples"></a>Esempi

Negli esempi riportati di seguito vengono illustrate le inizializzazioni:

```C
int x = 10;
```

La variabile Integer `x` viene inizializzata nell'espressione costante `10`.

```C
register int *px = 0;
```

Il puntatore `px` viene inizializzato su 0, generando un puntatore "null".

```C
const int c = (3 * 1024);
```

Questo esempio usa un'espressione costante `(3 * 1024)` per inizializzare `c` su un valore costante che non può essere modificato a causa della **`const`** parola chiave.

```C
int *b = &x;
```

Questa istruzione consente di inizializzare il puntatore `b` con l'indirizzo di un'altra variabile, `x`.

```C
int *const a = &z;
```

Il puntatore `a` viene inizializzato con l'indirizzo di una variabile denominata `z`. Tuttavia, poiché viene specificato come un oggetto **`const`** , la variabile `a` può essere inizializzata e mai modificata. Punta sempre allo stesso percorso.

```C
int GLOBAL ;

int function( void )
{
    int LOCAL ;
    static int *lp = &LOCAL;   /* Illegal initialization */
    static int *gp = &GLOBAL;  /* Legal initialization   */
    register int *rp = &LOCAL; /* Legal initialization   */
}
```

La variabile globale `GLOBAL` viene dichiarata a livello esterno, quindi ha una durata globale. La variabile locale `LOCAL` ha **`auto`** una classe di archiviazione e ha un indirizzo solo durante l'esecuzione della funzione in cui è dichiarata. Pertanto, il tentativo di inizializzare la **`static`** variabile puntatore `lp` con l'indirizzo di `LOCAL` non è consentito. La **`static`** variabile puntatore `gp` può essere inizializzata nell'indirizzo di `GLOBAL` perché tale indirizzo è sempre lo stesso. Analogamente, `*rp` può essere inizializzato in quanto `rp` è una variabile locale e può disporre di un inizializzatore non costante. Ogni volta che viene attivato il blocco, `LOCAL` presenta un nuovo indirizzo, che viene quindi assegnato a `rp`.

## <a name="see-also"></a>Vedere anche

[Inizializzazione](../c-language/initialization.md)
