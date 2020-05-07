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
ms.openlocfilehash: 3cf7eddcf43a65a787de60c391863d6471be7bcf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62232943"
---
# <a name="initializing-scalar-types"></a>Inizializzazione di tipi scalari

Durante l'inizializzazione dei tipi scalari, il valore di *assignment-expression* viene assegnato alla variabile. Vengono applicate le regole di conversione per l'assegnazione. Per informazioni sulle regole di conversione, vedere [Conversione di tipi](../c-language/type-conversions-c.md).

## <a name="syntax"></a>Sintassi

*dichiarazione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *init-declarator-list*<sub>opt</sub> **;**

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*storage-class-specifier* *declaration-specifiers*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declaration-specifiers*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *declaration-specifiers*<sub>opt</sub>

*init-declarator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*init-declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*init-declarator-list* **,** *init-declarator*

*init-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*dichiaratore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\* *inizializzatore* **=**  / di *dichiaratori* per inizializzazione scalare\*/

*inizializzatore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assegnazione-espressione*

È possibile inizializzare variabili di qualsiasi tipo, a condizione che vengano applicate le regole seguenti:

- Le variabili dichiarate a livello di ambito file possono essere inizializzate. Se non si inizializza una variabile in modo esplicito a livello esterno, viene inizializzata su 0 per impostazione predefinita.

- Un'espressione costante può essere usata per inizializzare qualsiasi variabile globale dichiarata con **static come ** *storage-class-specifier*. Le variabili dichiarate come **static** vengono inizializzate quando inizia l'esecuzione del programma. Se non si inizializza in modo esplicito una variabile globale **static**, la variabile viene inizializzata per impostazione predefinita su 0 e a ogni membro con tipo puntatore viene assegnato un puntatore null.

- Le variabili dichiarate con l'identificatore della classe di archiviazione **auto** o **register** vengono inizializzate ogni volta che il controllo dell'esecuzione passa al blocco in cui vengono dichiarate. Se si omette un inizializzatore dalla dichiarazione di una variabile **auto** o **register**, il valore iniziale della variabile non è definito. Per i valori automatic e register, l'inizializzatore non è necessariamente costituito da una costante; può essere qualsiasi espressione che includa i valori definiti in precedenza, anche le chiamate di funzione.

- I valori iniziali per le dichiarazioni delle variabili esterne e per tutte le variabili **static**, sia esterne che interne, devono essere espressioni costanti. Per ulteriori informazioni, vedere [espressioni costanti](../c-language/c-constant-expressions.md). Poiché l'indirizzo di qualsiasi variabile dichiarata esternamente o statica è costante, può essere utilizzato per inizializzare una variabile puntatore **statica** dichiarata internamente. Tuttavia l'indirizzo di una variabile **auto** non può essere usato come inizializzatore statico perché può essere diverso per ogni esecuzione del blocco. È possibile usare valori delle costanti o delle variabili per inizializzare le variabili **auto** e **register**.

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

Questo esempio usa un'espressione costante `(3 * 1024)` per inizializzare `c` con un valore costante che non può essere modificato a causa della parola chiave **const**.

```C
int *b = &x;
```

Questa istruzione consente di inizializzare il puntatore `b` con l'indirizzo di un'altra variabile, `x`.

```C
int *const a = &z;
```

Il puntatore `a` viene inizializzato con l'indirizzo di una variabile denominata `z`. Tuttavia, poiché viene specificata come **const**, la variabile `a` può essere solo inizializzata e mai modificata. Punta sempre allo stesso percorso.

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

La variabile globale `GLOBAL` viene dichiarata a livello esterno, quindi ha una durata globale. La variabile locale `LOCAL` ha la classe di archiviazione **auto** e ha un indirizzo solo durante l'esecuzione della funzione in cui viene dichiarata. Di conseguenza, il tentativo di inizializzare la variabile puntatore **static**`lp` con l'indirizzo di `LOCAL` non è consentito. La variabile puntatore **static**`gp` può essere inizializzata con l'indirizzo di `GLOBAL` perché tale indirizzo è sempre lo stesso. Analogamente, `*rp` può essere inizializzato in quanto `rp` è una variabile locale e può disporre di un inizializzatore non costante. Ogni volta che viene attivato il blocco, `LOCAL` presenta un nuovo indirizzo, che viene quindi assegnato a `rp`.

## <a name="see-also"></a>Vedere anche

[Inizializzazione](../c-language/initialization.md)
