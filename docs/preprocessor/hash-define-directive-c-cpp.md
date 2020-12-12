---
description: 'Altre informazioni su: direttiva #define (C/C++)'
title: '#Direttiva define (C/C++)'
ms.date: 08/29/2019
f1_keywords:
- '#define'
helpviewer_keywords:
- define directive (#define), syntax
- preprocessor, directives
- define directive (#define)
- '#define directive, syntax'
- '#define directive'
ms.assetid: 33cf25c6-b24e-40bf-ab30-9008f0391710
ms.openlocfilehash: 6821f775492671d860f4491354fff77e66150101
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300461"
---
# <a name="define-directive-cc"></a>direttiva #define (C/C++)

Il **#define** crea una *macro*, ovvero l'associazione di un identificatore o di un identificatore con parametri con una stringa di token. Dopo che la macro è stata definita, il compilatore può sostituire la stringa di token per ogni occorrenza dell'identificatore presente nel file di origine.

## <a name="syntax"></a>Sintassi

>  *identificatore* del *token di #define-stringa*<sub>opz</sub>\
> **identificatore #define**  **(** *identificatore*<sub>opz</sub>**...** **,** *identificatore*<sub>opt</sub> **)** *-stringa di token*<sub>opz</sub>

## <a name="remarks"></a>Commenti

La direttiva **#define** fa in modo che il compilatore sostituisca la *stringa di token* per ogni occorrenza dell' *identificatore* nel file di origine. L' *identificatore* viene sostituito solo quando costituisce un token. Ovvero, l' *identificatore* non viene sostituito se viene visualizzato in un commento, in una stringa o come parte di un identificatore più lungo. Per ulteriori informazioni, vedere [token](../cpp/character-sets.md).

L'argomento della *stringa di token* è costituito da una serie di token, ad esempio parole chiave, costanti o istruzioni complete. Uno o più caratteri di spazio vuoto devono separare la *stringa di token* dall' *identificatore*. Questo spazio vuoto non è considerato parte del testo sostituito; né viene considerato alcuno spazio vuoto dopo l'ultimo token del testo.

Un oggetto `#define` senza una *stringa di token* rimuove le occorrenze dell' *identificatore* dal file di origine. L' *identificatore* rimane definito e può essere testato utilizzando le `#if defined` `#ifdef` direttive e.

La seconda forma di sintassi definisce una macro simile a una funzione con parametri. Questa forma accetta un elenco facoltativo di parametri che devono essere visualizzati tra parentesi. Dopo che la macro è stata definita, ogni occorrenza successiva di *Identifier*( *Identifier*<sub>opt</sub>,..., *Identifier*<sub>opt</sub> ) viene sostituita con una versione dell'argomento della *stringa di token* con argomenti effettivi sostituiti per i parametri formali.

I nomi dei parametri formali vengono visualizzati nella *stringa token* per contrassegnare le posizioni in cui vengono sostituiti i valori effettivi. Ogni nome di parametro può essere visualizzato più volte nella *stringa di token* e i nomi possono essere visualizzati in qualsiasi ordine. Il numero degli argomenti nella chiamata deve corrispondere al numero di parametri nella definizione della macro. Il libero utilizzo delle parentesi garantisce che gli argomenti effettivi complessi vengano interpretati correttamente.

I parametri formali nell'elenco sono separati da virgole. Ogni nome nell'elenco deve essere univoco e l'elenco deve essere racchiuso tra parentesi. Nessuno spazio può separare l' *identificatore* e la parentesi di apertura. USA concatenazione di righe: inserire una barra rovesciata ( `\` ) immediatamente prima del carattere di nuova riga, per le direttive Long su più righe di origine. L'ambito di un nome di parametro formale si estende alla nuova riga che termina con la *stringa di token*.

Se una macro è stata definita nella seconda forma di sintassi, le successive istanze testuali seguite da un elenco di argomenti indicano una chiamata di macro. Gli argomenti effettivi che seguono un'istanza dell' *identificatore* nel file di origine vengono associati ai parametri formali corrispondenti nella definizione della macro. Ogni parametro formale nella *stringa di token* che non è preceduto da un operatore per ( `#` ), charizing ( `#@` ) o di incollamento dei token ( `##` ) o non seguito da un `##` operatore, viene sostituito dall'argomento effettivo corrispondente. Eventuali macro presenti nell'argomento effettivo vengono espanse prima che la direttiva sostituisca il parametro formale. Gli operatori sono descritti in [operatori del preprocessore](../preprocessor/preprocessor-operators.md).

Negli esempi seguenti di macro con argomenti viene illustrata la seconda forma della sintassi **#define** :

```C
// Macro to define cursor lines
#define CURSOR(top, bottom) (((top) << 8) | (bottom))

// Macro to get a random integer with a specified range
#define getrandom(min, max) \
    ((rand()%(int)(((max) + 1)-(min)))+ (min))
```

Gli argomenti con effetti collaterali talvolta determinano la restituzione di risultati imprevisti da parte delle macro. Un parametro formale specificato può essere visualizzato più di una volta nella *stringa di token*. Se tale parametro formale è sostituito da un'espressione con effetti collaterali, l'espressione, con i relativi effetti collaterali, può essere valutata più volte. Vedere gli esempi in [operatore di incollamento dei token (# #)](../preprocessor/token-pasting-operator-hash-hash.md).

La direttiva `#undef` causa la dimenticanza della definizione del preprocessore di un identificatore. Per ulteriori informazioni, vedere [la direttiva #undef](../preprocessor/hash-undef-directive-c-cpp.md) .

Se il nome della macro definita si verifica in una *stringa di token* (anche come risultato di un'altra espansione di una macro), non viene espanso.

Un secondo **#define** per una macro con lo stesso nome genera un avviso a meno che la seconda sequenza del token non sia identica alla prima.

**Specifico di Microsoft**

Microsoft C/C++ consente di ridefinire una macro se la nuova definizione è sintatticamente identica alla definizione originale. In altre parole, due definizioni possono avere nomi di parametri diversi. Questo comportamento è diverso da ANSI C, che richiede che le due definizioni siano identiche lessicali.

Ad esempio, le due macro seguenti sono identiche a eccezione dei nomi del parametro. ANSI C non consente tale ridefinizione, ma Microsoft C/C++ la compila senza errori.

```C
#define multiply( f1, f2 ) ( f1 * f2 )
#define multiply( a1, a2 ) ( a1 * a2 )
```

D'altro canto, le due macro seguenti non sono identiche e genereranno un avviso in Microsoft C/C++.

```C
#define multiply( f1, f2 ) ( f1 * f2 )
#define multiply( a1, a2 ) ( b1 * b2 )
```

**TERMINA specifica Microsoft**

In questo esempio viene illustrata la direttiva **#define** :

```C
#define WIDTH       80
#define LENGTH      ( WIDTH + 10 )
```

La prima istruzione definisce l'identificatore `WIDTH` come costante Integer 80 e definisce `LENGTH` in termini di `WIDTH` come costante Integer 10. Ogni occorrenza di `LENGTH` viene sostituita da (`WIDTH + 10`). Ogni occorrenza di `WIDTH + 10` viene a sua volta sostituita dall'espressione (`80 + 10`). Le parentesi intorno a `WIDTH + 10` sono importanti in quanto controllano l'interpretazione nelle istruzioni simili alle seguenti:

```C
var = LENGTH * 20;
```

Dopo la fase di pre-elaborazione l'istruzione diventa:

```C
var = ( 80 + 10 ) * 20;
```

che restituisce 1800. Senza parentesi, il risultato è:

```C
var = 80 + 10 * 20;
```

che restituisce 280.

**Specifico di Microsoft**

La definizione delle macro e delle costanti con l'opzione del compilatore [/d](../build/reference/d-preprocessor-definitions.md) ha lo stesso effetto dell'uso di una **#define** direttiva di pre-elaborazione all'inizio del file. È possibile definire fino a 30 macro utilizzando l'opzione /D.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
