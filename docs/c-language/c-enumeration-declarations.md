---
title: Dichiarazioni di enumerazioni C
ms.date: 11/04/2016
helpviewer_keywords:
- declarations, enumerations
- define directive (#define), alternative to
- enumerators, declaring
- '#define directive, alternative to'
- named constants, enumeration declarations
- declaring enumerations
ms.assetid: bd18f673-4dda-4bc1-92fd-d1ce10074910
ms.openlocfilehash: d917c93ab8ef2e896f3ef09c9d9191dae49116c3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213723"
---
# <a name="c-enumeration-declarations"></a>Dichiarazioni di enumerazioni C

Un'enumerazione è un set di costanti di tipo Integer denominate. Una dichiarazione del tipo di enumerazione fornisce il nome del tag (facoltativo) di enumerazione e definisce il set di identificatori Integer denominati (denominati "set di enumerazione", "costanti di enumeratore", "enumeratori" o "membri"). Una variabile con tipo di enumerazione archivia uno dei valori del set di enumerazione definiti da quel tipo.

Le variabili di **`enum`** tipo possono essere utilizzate nelle espressioni di indicizzazione e come operandi di tutti gli operatori aritmetici e relazionali. Le enumerazioni forniscono un'alternativa alla direttiva per il preprocessore `#define` con il vantaggio che i valori possono essere generati automaticamente e sono conformi alle normali regole di ambito.

In ANSI C, le espressioni che definiscono il valore di una costante di enumeratore hanno sempre il **`int`** tipo; pertanto, lo spazio di archiviazione associato a una variabile di enumerazione è lo spazio di archiviazione necessario per un singolo **`int`** valore. Una costante di enumerazione o un valore di tipo enumerato può essere utilizzato ovunque il linguaggio C consenta un'espressione Integer.

## <a name="syntax"></a>Sintassi

*enum-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`enum`***identificatore*<sub>opt</sub> **{** *Enumerator-list* **}**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`enum`***identificatore* di

L'elemento *identifier* facoltativo assegna un nome al tipo di enumerazione definito da *enumerator-list*. Questo identificatore è spesso definito il "tag" dell'enumerazione specificata dall'elenco. Un identificatore di tipo del formato

```
enum identifier
{
    enumerator-list
}
```

dichiara che *identifier* è il tag dell'enumerazione specificata da *enumerator-list* non terminale. L'elemento *enumerator-list* definisce il "contenuto dell'enumeratore". I dettagli di *enumerator-list* sono riportati di seguito.

Se la dichiarazione di un tag è visibile, le dichiarazioni successive che usano il tag ma omettono *enumerator-list* specificano il tipo enumerato dichiarato in precedenza. Il tag deve fare riferimento a un tipo di enumerazione definito e tale tipo di enumerazione deve trovarsi nell'ambito corrente. Poiché il tipo di enumerazione viene definito altrove, *enumerator-list* non viene visualizzato nella dichiarazione. Le dichiarazioni di tipi derivati da enumerazioni e **`typedef`** dichiarazioni per i tipi di enumerazione possono utilizzare il tag di enumerazione prima che venga definito il tipo di enumerazione.

## <a name="syntax"></a>Sintassi

*enumeratore-elenco*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*enumeratore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Enumerator-list* **,** *enumeratore*

*enumeratore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Enumerazione-costante*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*enumerazione-costante* **=** *espressione costante*

*enumerazione-costante*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*

Ogni elemento *enumeration-constant* in un elenco *enumeration-list* assegna un nome a un valore del set di enumerazione. Per impostazione predefinita, il primo elemento *enumeration-constant* viene associato al valore 0. Il successivo elemento *enumeration-constant* nell'elenco viene associato al valore di (*constant-expression* + 1), a meno che non lo si associ in modo esplicito a un altro valore. Il nome di un elemento *enumeration-constant* è equivalente al relativo valore.

È possibile usare *enumeration-constant = constant-expression* per eseguire l'override della sequenza di valori predefinita. Pertanto se *enumeration-constant = constant-expression* appare in *enumerator-list*, *enumeration-constant* è associato al valore specificato da *constant-expression*. *Constant-Expression* deve **`int`** essere di tipo e può essere negativo.

Le regole seguenti vengono applicate ai membri di un set di enumerazione:

- Un set di enumerazione può contenere valori costanti duplicati. Ad esempio, è possibile associare il valore 0 a due identificatori diversi, talvolta denominato `null` e `zero`, nello stesso set.

- Gli identificatori nell'elenco di enumerazione devono essere diversi dagli altri identificatori nello stesso ambito con la stessa visibilità, inclusi i nomi di variabili comuni e gli identificatori in altri elenchi di enumerazione.

- I tag di enumerazione sono conformi alle normali regole di ambito. Devono essere differenti da altri tag di enumerazione, struttura e unione con la stessa visibilità.

## <a name="examples"></a>Esempi

In questi esempi vengono illustrate le dichiarazioni di enumerazione:

```
enum DAY            /* Defines an enumeration type    */
{
    saturday,       /* Names day and declares a       */
    sunday = 0,     /* variable named workday with    */
    monday,         /* that type                      */
    tuesday,
    wednesday,      /* wednesday is associated with 3 */
    thursday,
    friday
} workday;
```

Il valore 0 è associato a `saturday` per impostazione predefinita. L'identificatore `sunday` è impostato in modo esplicito su 0. Agli identificatori restanti vengono forniti i valori da 1 a 5 per impostazione predefinita.

In questo esempio, un valore del set `DAY` viene assegnato alla variabile `today`.

```
enum DAY today = wednesday;
```

Si noti che il nome della costante di enumerazione viene utilizzato per assegnare il valore. Poiché il tipo di enumerazione `DAY` era dichiarato in precedenza, è necessario solo il tag `DAY` di enumerazione.

Per assegnare in modo esplicito un Integer a una variabile di un tipo di dati enumerato, utilizzare un cast di tipo:

```
workday = ( enum DAY ) ( day_value - 1 );
```

Questo cast è consigliato nel linguaggio C ma non è obbligatorio.

```
enum BOOLEAN  /* Declares an enumeration data type called BOOLEAN */
{
    false,     /* false = 0, true = 1 */
    true
};

enum BOOLEAN end_flag, match_flag; /* Two variables of type BOOLEAN */
```

Questa dichiarazione può essere specificata come

```
enum BOOLEAN { false, true } end_flag, match_flag;\
```

o come

```
enum BOOLEAN { false, true } end_flag;
enum BOOLEAN match_flag;
```

Un esempio che utilizza queste variabili potrebbe essere simile al seguente:

```
if ( match_flag == false )
    {
     .
     .   /* statement */
     .
    }
    end_flag = true;
```

I tipi di dati senza nome dell'enumeratore possono anche essere dichiarati. Il nome del tipo di dati viene omesso, ma le variabili possono essere dichiarate. La variabile `response` è una variabile del tipo definito:

```
enum { yes, no } response;
```

## <a name="see-also"></a>Vedere anche

[Enumerazioni](../cpp/enumerations-cpp.md)
