---
title: '#define (direttiva) (C/C++)'
ms.date: 11/04/2016
f1_keywords:
- '#define'
helpviewer_keywords:
- define directive (#define), syntax
- preprocessor, directives
- define directive (#define)
- '#define directive, syntax'
- '#define directive'
ms.assetid: 33cf25c6-b24e-40bf-ab30-9008f0391710
ms.openlocfilehash: 8a0cc7e7836a0c82c72055fe8d9e7497995485d0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62409902"
---
# <a name="define-directive-cc"></a>Direttiva #define (C/C++)

Il **#define** consente di creare un *macro*, ovvero l'associazione di un identificatore o un identificatore con parametri con una stringa di token. Dopo che la macro è stata definita, il compilatore può sostituire la stringa di token per ogni occorrenza dell'identificatore presente nel file di origine.

## <a name="syntax"></a>Sintassi

`#define` *identifier* *token-string*<sub>opt</sub>

`#define` *identifier* `(` *identifier*<sub>opt</sub>`,` *...* `,` *identifier*<sub>opt</sub>`)` *token-string*<sub>opt</sub>

## <a name="remarks"></a>Note

Il **#define** direttiva indica al compilatore di sostituire *token-string* per ogni occorrenza degli *identificatore* nel file di origine. Il *identificatore* viene sostituito solo quando costituisce un token. Vale a dire *identificatore* non viene sostituita se viene visualizzato in un commento, in una stringa o come parte di un identificatore più lungo. Per altre informazioni, vedere [token](../cpp/tokens-cpp.md).

Il *token-string* argomento è costituito da una serie di token, ad esempio le parole chiave, costanti o istruzioni complete. Uno o più spazi vuoti devono separare *token-string* dalla *identificatore*. Questo spazio vuoto non è considerato parte del testo sostituito; né viene considerato alcuno spazio vuoto dopo l'ultimo token del testo.

Oggetto `#define` senza una *token-string* rimuove le occorrenze dei *identificatore* dal file di origine. Il *identifier* rimane definito e possono essere testati tramite il `#if defined` e `#ifdef` direttive.

La seconda forma di sintassi definisce una macro simile a una funzione con parametri. Questa forma accetta un elenco facoltativo di parametri che devono essere visualizzati tra parentesi. Dopo che la macro è definito, ogni occorrenza successiva di *identifier*( *identifier*<sub>opt</sub>,..., *identificatore* <sub>opt</sub> ) viene sostituita con una versione del *token-string* argomento che presenta argomenti effettivi in sostituzione dei parametri formali.

Nomi parametri formali vengono visualizzati nella *token-string* per contrassegnare le posizioni in cui vengono sostituiti con i valori effettivi. Ogni nome di parametro può essere visualizzati più volte nel *token-string*, e i nomi possono essere visualizzati in qualsiasi ordine. Il numero degli argomenti nella chiamata deve corrispondere al numero di parametri nella definizione della macro. Il libero utilizzo delle parentesi garantisce che gli argomenti effettivi complessi vengano interpretati correttamente.

I parametri formali nell'elenco sono separati da virgole. Ogni nome nell'elenco deve essere univoco e l'elenco deve essere racchiuso tra parentesi. Spazi non possono separare *identificatore* e la parentesi di apertura. Utilizzare la concatenazione della riga, inserire una barra rovesciata (`\`) immediatamente prima del carattere di nuova riga, per le direttive che occupano più righe nel codice sorgente. L'ambito di un nome di parametro formale si estende nella nuova riga che termina *token-string*.

Se una macro è stata definita nella seconda forma di sintassi, le successive istanze testuali seguite da un elenco di argomenti indicano una chiamata di macro. Gli argomenti effettivi che seguono un'istanza di *identificatore* nel file di origine vengono associati ai parametri formali corrispondenti nella definizione della macro. Ogni parametro formale nel *token-string* che non è preceduto da una creazione di stringhe (`#`), di caratteri (`#@`), o Incolla per token (`##`) (operatore), o non seguito da un `##` operatore, è sostituito dall'argomento corrispondente effettivo. Eventuali macro presenti nell'argomento effettivo vengono espanse prima che la direttiva sostituisca il parametro formale. (Gli operatori sono descritti [operatori del preprocessore](../preprocessor/preprocessor-operators.md).)

Gli esempi seguenti di macro con argomenti illustrano la seconda forma del **#define** sintassi:

```C
// Macro to define cursor lines
#define CURSOR(top, bottom) (((top) << 8) | (bottom))

// Macro to get a random integer with a specified range
#define getrandom(min, max) \
    ((rand()%(int)(((max) + 1)-(min)))+ (min))
```

Gli argomenti con effetti collaterali talvolta determinano la restituzione di risultati imprevisti da parte delle macro. Un parametro formale specificato potrebbe visualizzato più di una volta nella *token-string*. Se tale parametro formale è sostituito da un'espressione con effetti collaterali, l'espressione, con i relativi effetti collaterali, può essere valutata più volte. (Vedere gli esempi nella [operatore di Incolla per Token (#)](../preprocessor/token-pasting-operator-hash-hash.md).)

La direttiva `#undef` causa la dimenticanza della definizione del preprocessore di un identificatore. Visualizzare [#undef direttiva](../preprocessor/hash-undef-directive-c-cpp.md) per altre informazioni.

Se è presente il nome della macro definita *token-string* (anche in seguito a un'altra espansione di macro), non è espanso.

Una seconda **#define** per una macro con lo stesso nome genera un avviso, a meno che la seconda sequenza di token è identica al primo.

**Sezione specifica Microsoft**

Microsoft C/C++ consente di ridefinire una macro se la nuova definizione è sintatticamente identica alla definizione originale. In altre parole, due definizioni possono avere nomi di parametri diversi. Questo comportamento è diverso da ANSI C, che richiede che le due definizioni siano identiche a livello lessicale.

Ad esempio, le due macro seguenti sono identiche a eccezione dei nomi del parametro. ANSI C non consente tale ridefinizione, ma Microsoft C/C++ viene compilata senza errori.

```C
#define multiply( f1, f2 ) ( f1 * f2 )
#define multiply( a1, a2 ) ( a1 * a2 )
```

D'altro canto, le due macro seguenti non sono identiche e genereranno un avviso in Microsoft C/C++.

```C
#define multiply( f1, f2 ) ( f1 * f2 )
#define multiply( a1, a2 ) ( b1 * b2 )
```

**Fine sezione specifica Microsoft**

Questo esempio viene illustrata la **#define** direttiva:

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

**Sezione specifica Microsoft**

Definizione delle macro e costanti con il [/D](../build/reference/d-preprocessor-definitions.md) l'opzione del compilatore ha lo stesso effetto dell'utilizzo un **#define** pre-elaborazione della direttiva all'inizio del file app. È possibile definire fino a 30 macro utilizzando l'opzione /D.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)