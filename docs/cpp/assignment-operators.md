---
title: Operatori di assegnazione
description: Sintassi e utilizzo degli operatori di assegnazione del linguaggio standard C++.
ms.date: 07/24/2020
f1_keywords:
- =
- '*='
- /=
- '%='
- +=
- -=
- <<=
- '>>='
- '&='
- ^=
- '|='
helpviewer_keywords:
- operators [C++], assignment
- assignment operators [C++], C++
- '&= operator'
- ^= operator
- += operator
- '>>= operator'
- '|= operator'
- operator>>=
- '*= operator'
- '%= operator'
- ^= operator
- operator >>=
- = operator
- -= operator
- /= operator
- <<= operator
ms.assetid: b028cf35-2ff1-4f14-9027-fd53ebec8aa0
ms.openlocfilehash: 91346d06c6fab4f3cd83c5318c88e738daf8d249
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229220"
---
# <a name="assignment-operators"></a>Operatori di assegnazione

## <a name="syntax"></a>Sintassi

*espressione* di assegnazione *espressione* *-operatore*

*assignment-operator*: uno tra<br/>
&emsp;**`=`**&emsp;**`*=`**&emsp;**`/=`**&emsp;**`%=`**&emsp;**`+=`**&emsp;**`-=`**&emsp;**`<<=`**&emsp;**`>>=`**&emsp;**`&=`**&emsp;**`^=`**&emsp;**`|=`**

## <a name="remarks"></a>Osservazioni

Gli operatori di assegnazione archiviano un valore nell'oggetto specificato dall'operando di sinistra. Esistono due tipi di operazioni di assegnazione:

- *assegnazione semplice*, in cui il valore del secondo operando viene archiviato nell'oggetto specificato dal primo operando.

- *assegnazione composta*, in cui viene eseguita un'operazione aritmetica, Shift o bit per bit prima di archiviare il risultato.

Tutti gli operatori di assegnazione nella tabella seguente, ad eccezione dell' **`=`** operatore, sono operatori di assegnazione composti.

### <a name="assignment-operators-table"></a>Tabella operatori di assegnazione

| Operatore | Significato |
|--|--|
| **`=`** | Memorizza il valore del secondo operando nell'oggetto specificato dal primo operando (assegnamento semplice). |
| **`*=`** | Moltiplica il valore del primo operando per il valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |
| **`/=`** | Divide il valore del primo operando per il valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |
| **`%=`** | Calcola il modulo del primo operando specificato per il valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |
| **`+=`** | Somma il valore del secondo operando al valore del primo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |
| **`-=`** | Sottrae il valore del secondo operando dal valore del primo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |
| **`<<=`** | Esegue uno spostamento a sinistra del valore del primo operando di un numero di bit specificati dal valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |
| **`>>=`** | Esegue uno spostamento a destra del valore del primo operando di un numero di bit specificati dal valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |
| **`&=`** | Ottiene l'AND bit per bit del primo e del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |
| **`^=`** | Ottiene l'OR esclusivo bit per bit del primo e del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |
| **`|=`** | Ottiene l'OR inclusivo bit per bit del primo e del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando. |

### <a name="operator-keywords"></a>Parole chiave operatore

Tre degli operatori di assegnazione composti hanno equivalenti di parola chiave. ovvero:

| Operatore | Equivalente |
|--|--|
| **`&=`** | **`and_eq`** |
| **`|=`** | **`or_eq`** |
| **`^=`** | **`xor_eq`** |

C++ specifica queste parole chiave dell'operatore come ortografia alternativa per gli operatori di assegnazione composta. In C, le ortografie alternative vengono fornite come macro nell' \<iso646.h> intestazione. In C++, le ortografie alternative sono parole chiave; l'utilizzo di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare l'ortografia alternativa.

## <a name="example"></a>Esempio

```cpp
// expre_Assignment_Operators.cpp
// compile with: /EHsc
// Demonstrate assignment operators
#include <iostream>
using namespace std;
int main() {
   int a = 3, b = 6, c = 10, d = 0xAAAA, e = 0x5555;

   a += b;      // a is 9
   b %= a;      // b is 6
   c >>= 1;      // c is 5
   d |= e;      // Bitwise--d is 0xFFFF

   cout  << "a = 3, b = 6, c = 10, d = 0xAAAA, e = 0x5555" << endl
         << "a += b yields " << a << endl
         << "b %= a yields " << b << endl
         << "c >>= 1 yields " << c << endl
         << "d |= e yields " << hex << d << endl;
}
```

## <a name="simple-assignment"></a>Assegnazione singola

L'operatore di assegnazione semplice ( **`=`** ) fa sì che il valore del secondo operando venga archiviato nell'oggetto specificato dal primo operando. Se entrambi gli oggetti sono di tipo aritmetico, l'operando destro viene convertito nel tipo a sinistra, prima dell'archiviazione del valore.

Gli oggetti di **`const`** e **`volatile`** i tipi possono essere assegnati a l-value di tipi che sono solo **`volatile`** o che non sono **`const`** o **`volatile`** .

L'assegnazione a oggetti di tipo classe **`struct`** ( **`union`** tipi, e **`class`** ) viene eseguita da una funzione denominata `operator=` . Il comportamento predefinito di questa funzione di operatore è di eseguire una copia bit per bit; tuttavia, questo comportamento può essere modificato mediante gli operatori di overload. Per altre informazioni, vedere [Overload degli operatori](../cpp/operator-overloading.md). I tipi di classe possono avere anche operatori di assegnazione di *copia* e di *assegnazione di spostamento* . Per altre informazioni, vedere [costruttori di copia e operatori di assegnazione di copia](copy-constructors-and-copy-assignment-operators-cpp.md) e [costruttori di spostamento e operatori di assegnazione di spostamento](move-constructors-and-move-assignment-operators-cpp.md).

Un oggetto senza alcuna ambiguità di classe derivata da una classe base specificata può essere assegnato a un oggetto della classe base. Il contrario non è vero perché esiste una conversione implicita dalla classe derivata alla classe di base, ma non dalla classe base alla classe derivata. Ad esempio:

```cpp
// expre_SimpleAssignment.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;
class ABase
{
public:
    ABase() { cout << "constructing ABase\n"; }
};

class ADerived : public ABase
{
public:
    ADerived() { cout << "constructing ADerived\n"; }
};

int main()
{
    ABase aBase;
    ADerived aDerived;

    aBase = aDerived; // OK
    aDerived = aBase; // C2679
}
```

Le assegnazioni ai tipi di riferimento si comportano come se l'assegnazione venisse effettuata all'oggetto cui punta il riferimento.

Per gli oggetti di tipo classe, l'assegnazione è diversa dall'inizializzazione. Per illustrare come possono essere diverse l'assegnazione e l'inizializzazione, si consideri il codice

```cpp
UserType1 A;
UserType2 B = A;
```

Il codice precedente mostra un inizializzatore; chiama il costruttore per `UserType2` che accetta un argomento di tipo `UserType1`. Dato il codice

```cpp
UserType1 A;
UserType2 B;

B = A;
```

l'istruzione di assegnazione

```cpp
B = A;
```

può avere uno dei seguenti effetti:

- Chiamare la funzione `operator=` per `UserType2` , fornito `operator=` viene fornito con un `UserType1` argomento.

- Chiamare la funzione esplicita `UserType1::operator UserType2` di conversione, se tale funzione non esiste.

- Chiamare un costruttore `UserType2::UserType2`, se tale costruttore esiste, che accetta un argomento `UserType1` e copia il risultato.

## <a name="compound-assignment"></a>Assegnazione composta

Gli operatori di assegnazione composta vengono visualizzati nella [tabella operatori di assegnazione](#assignment-operators-table). Questi operatori hanno il formato *E1* *op* =  *E2*, dove *E1* è un **`const`** l-value non modificabile ed *E2* è:

- tipo aritmetico

- puntatore, se *op* è **`+`** o**`-`**

Il form *E1* *op* =  *E2* si comporta come *E1* **`=`** *E1* *op* *E2*, ma *E1* viene valutato una sola volta.

L'assegnazione composta a un tipo enumerato genera un messaggio di errore. Se l'operando sinistro è di tipo puntatore, l'operando destro deve essere di tipo puntatore o deve essere un'espressione costante che restituisce 0. Quando l'operando sinistro è di tipo integrale, l'operando destro non deve essere di tipo puntatore.

## <a name="result-of-assignment-operators"></a>Risultato degli operatori di assegnazione

Gli operatori di assegnazione restituiscono il valore dell'oggetto specificato dall'operando sinistro in seguito all'assegnazione. Il tipo risultante è il tipo dell'operando sinistro. Il risultato di un'espressione di assegnazione è sempre un l-value. Questi operatori hanno un'associatività da destra a sinistra. L'operando sinistro deve essere un l-value modificabile.

In ANSI C il risultato di un'espressione di assegnazione non è un l-value. Ciò significa che l'espressione C++ valida `(a += b) += c` non è consentita in C.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)<br/>
[Operatori, precedenza e associatività predefiniti di C++](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[operatori di assegnazione C](../c-language/c-assignment-operators.md)
