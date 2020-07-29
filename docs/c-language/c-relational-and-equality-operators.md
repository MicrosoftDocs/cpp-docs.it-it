---
title: Operatori relazionali e operatori di uguaglianza C
ms.date: 10/18/2018
helpviewer_keywords:
- relational operators, syntax
- equality operator
- operators [C], equality
- equality operator, syntax
- operators [C], relational
ms.assetid: c89a3815-a65e-4e0d-8333-0e8dc7fdb30b
ms.openlocfilehash: 9ae5a31b5f4b81876d2fe518635a9766d2b5323c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227946"
---
# <a name="c-relational-and-equality-operators"></a>Operatori relazionali e operatori di uguaglianza C

Gli operatori relazionali e di uguaglianza binari confrontano il primo operando con il secondo per testare la validità della relazione specificata. Il risultato di un'espressione relazionale è 1 se la relazione testata è true e 0 se è false. Il tipo del risultato è **`int`** .

**Sintassi**

*espressione relazionale*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Shift-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione* **&lt;** relazionale *Shift-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione* **>** relazionale *Shift-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione* **&lt;=** relazionale *Shift-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione* **>=** relazionale *Shift-espressione*

*equality-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione uguaglianza* **==** *espressione relazionale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*equality-expression* **!=** *relational-expression*

Gli operatori relazionali e di uguaglianza testano le relazioni seguenti:

|Operatore|Relazione testata|
|--------------|-------------------------|
|**&lt;**|Primo operando minore del secondo operando|
|**>**|Primo operando maggiore del secondo operando|
|**&lt;=**|Primo operando minore o uguale al secondo operando|
|**>=**|Primo operando maggiore o uguale al secondo operando|
|**==**|Primo operando uguale al secondo operando|
|**!=**|Primo operando non uguale al secondo operando|

I primi quattro operatori nell'elenco sopra riportato hanno maggiore precedenza rispetto agli operatori di uguaglianza (`==` e `!=`). Per informazioni sulla precedenza, vedere la tabella [Precedenza e associatività degli operatori C](../c-language/precedence-and-order-of-evaluation.md).

Gli operandi possono disporre di un tipo integrale, a virgola mobile o puntatore. I tipi di operandi possono essere diversi. Gli operatori relazionali eseguono conversioni aritmetiche consuete su operandi di tipo integrale e a virgola mobile. Inoltre, è possibile utilizzare le seguenti combinazioni di tipi di operando con gli operatori relazionali e di uguaglianza:

- Entrambi gli operandi di qualsiasi operatore relazionale o di uguaglianza possono essere puntatori allo stesso tipo. Per gli operatori di uguaglianza (`==`) e di disuguaglianza (`!=`) il risultato del confronto indica se i due puntatori sono indirizzati alla stessa posizione di memoria. Per gli altri operatori relazionali ( **\<**, **>** , **\<**=, and **>** =), il risultato del confronto indica la posizione relativa dei due indirizzi di memoria degli oggetti a cui punta. Gli operatori relazionali confrontano solo gli offset.

   Il confronto tra puntatori viene definito solo per le parti dello stesso oggetto. Se i puntatori fanno riferimento ai membri di una matrice, il confronto è equivalente al confronto dei pedici corrispondenti. L'indirizzo del primo elemento della matrice è "minore di" quello dell'ultimo elemento. Nel caso di strutture, i puntatori ai membri della struttura dichiarati successivamente sono "maggiori dei" puntatori ai membri dichiarati nella struttura. I puntatori ai membri della stessa unione sono uguali.

- Un valore del puntatore può essere confrontato con il valore costante 0 per uguaglianza (`==`) o disuguaglianza (`!=`). Un puntatore con un valore pari a 0 viene chiamato un puntatore "null", ovvero non indica una posizione di memoria valida.

- Gli operatori di uguaglianza seguono le stesse regole degli operatori relazionali, ma consentono opzioni aggiuntive: un puntatore può essere confrontato con un'espressione integrale costante con valore 0 o a un puntatore a **`void`** . Se due puntatori sono entrambi puntatori null, vengono considerati uguali. Gli operatori di uguaglianza confrontano segmento e offset.

## <a name="examples"></a>Esempi

Negli esempi riportati di seguito vengono illustrati gli operatori relazionali e di uguaglianza.

```C
int x = 0, y = 0;
if ( x < y )
```

Poiché `x` e `y` sono uguali, l'espressione in questo esempio produce il valore 0.

```C
char array[10];
char *p;

for ( p = array; p < &array[10]; p++ )
    *p = '\0';
```

Il frammento in questo esempio imposta ogni elemento `array` su una costante di carattere null.

```C
enum color { red, white, green } col;
   .
   .
   .
   if ( col == red )
   .
   .
   .
```

Queste istruzioni dichiarano una variabile di enumerazione denominata `col` con il tag `color`. In qualsiasi momento, la variabile può contenere un intero pari a 0, 1 o 2, che rappresenta uno degli elementi dell'enumerazione impostata `color`: rispettivamente il colore rosso, bianco o verde. Se `col` contiene 0 quando **`if`** viene eseguita l'istruzione, verranno eseguite tutte le istruzioni che dipendono da **`if`** .

## <a name="see-also"></a>Vedere anche

[Operatori relazionali: \<, > ,\<=, and >=](../cpp/relational-operators-equal-and-equal.md)<br/>
[Operatori di uguaglianza: = = e! =](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)
