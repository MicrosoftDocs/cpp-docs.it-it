---
title: Operatori di assegnazione
ms.date: 03/27/2019
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
ms.openlocfilehash: 758c82f02d2b113f6c750f7f0ede662c97b646b0
ms.sourcegitcommit: 309dc532f13242854b47759cef846de59bb807f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/28/2019
ms.locfileid: "58565480"
---
# <a name="assignment-operators"></a>Operatori di assegnazione

## <a name="syntax"></a>Sintassi

*expression* *assignment-operator* *expression*

*operatore di assegnazione* : uno dei<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>=&nbsp;&nbsp;&nbsp;*=&nbsp;&nbsp;&nbsp;/=&nbsp;&nbsp;&nbsp;%=&nbsp;&nbsp;&nbsp;+=&nbsp;&nbsp;&nbsp;-=&nbsp;&nbsp;&nbsp;\<\<=&nbsp;&nbsp;&nbsp;>>=&nbsp;&nbsp;&nbsp;&=&nbsp;&nbsp;&nbsp;^=&nbsp;&nbsp;&nbsp;\|=</strong>

## <a name="remarks"></a>Note

Gli operatori di assegnamento consentono di memorizzare un valore nell'oggetto definito dall'operando sinistro. Esistono due tipi di operazioni di assegnazione:

1. *assegnazione semplice*, in cui il valore del secondo operando viene archiviato nell'oggetto specificato dal primo operando.

1. *assegnazione composta*, in cui un aritmetica, spostamento o operazione bit per bit viene eseguita prima di archiviare il risultato.

Tutti gli operatori di assegnamento nella tabella seguente, ad eccezione dell'operatore =, sono operatori di assegnamento composti.

### <a name="assignment-operators-table"></a>Tabella di operatori di assegnazione

|Operatore|Significato|
|--------------|-------------|
|**=**|Memorizza il valore del secondo operando nell'oggetto specificato dal primo operando (assegnamento semplice).|
|**\*=**|Moltiplica il valore del primo operando per il valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|
|**/=**|Divide il valore del primo operando per il valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|
|**%=**|Calcola il modulo del primo operando specificato per il valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|
|**+=**|Somma il valore del secondo operando al valore del primo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|
|**-=**|Sottrae il valore del secondo operando dal valore del primo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|
|**<\<=**|Esegue uno spostamento a sinistra del valore del primo operando di un numero di bit specificati dal valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|
|**>>=**|Esegue uno spostamento a destra del valore del primo operando di un numero di bit specificati dal valore del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|
|**&=**|Ottiene l'AND bit per bit del primo e del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|
|**^=**|Ottiene l'OR esclusivo bit per bit del primo e del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|
|**\|=**|Ottiene l'OR inclusivo bit per bit del primo e del secondo operando e memorizza il risultato nell'oggetto specificato dal primo operando.|

### <a name="operator-keywords"></a>Parole chiave per operatori

Tre degli operatori di assegnamento composti hanno testo equivalente. Ad esempio:

|Operatore|Equivalente|
|--------------|----------------|
|**&=**|`and_eq`|
|**\|=**|`or_eq`|
|**^=**|`xor_eq`|

Esistono due modi per accedere a queste parole chiave per operatori nei programmi: includere il file di intestazione `iso646.h`, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).

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

L'operatore di assegnazione semplice (**=**) fa sì che il valore del secondo operando deve essere archiviato nell'oggetto specificato dal primo operando. Se entrambi gli oggetti sono di tipi aritmetici, l'operando di destra viene convertito nel tipo di sinistra, prima di archiviare il valore.

Gli oggetti di **const** e **volatile** può essere associato a valori l dei tipi che sono semplicemente tipi **volatile** o nessuna delle due **const** né **volatile**.

L'assegnazione a oggetti del tipo di classe (struct, unione e i tipi di classe) viene eseguita da una funzione denominata `operator=`. Il comportamento predefinito di questa funzione di operatore è di eseguire una copia bit per bit; tuttavia, questo comportamento può essere modificato mediante gli operatori di overload. Visualizzare [overload di operatori](../cpp/operator-overloading.md) per altre informazioni. Inoltre, possono avere tipi di classe *assegnazione di copia* e *assegnazione di spostamento* operatori. Per altre informazioni, vedere [costruttori di copia e operatori di assegnazione di copia](copy-constructors-and-copy-assignment-operators-cpp.md) e [i costruttori di spostamento e operatori di assegnazione di spostamento](move-constructors-and-move-assignment-operators-cpp.md).

Un oggetto senza alcuna ambiguità di classe derivata da una classe base specificata può essere assegnato a un oggetto della classe base. Il contrario non è consentito perché è presente una conversione implicita da classe derivata a classe base ma non da classe base a classe derivata. Ad esempio:

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

- Chiamare la funzione `operator=` per `UserType2`, specificato `operator=` viene fornito con un `UserType1` argomento.

- Chiamare la funzione esplicita `UserType1::operator UserType2` di conversione, se tale funzione non esiste.

- Chiamare un costruttore `UserType2::UserType2`, se tale costruttore esiste, che accetta un argomento `UserType1` e copia il risultato.

## <a name="compound-assignment"></a>Assegnazione composta

Operatori di assegnamento composti, illustrati nella [tabella gli operatori di assegnazione](#assignment-operators-table), vengono specificati nel formato *e1* *op*= *e2*, dove *e1* è un l-value modificabile non dei **const** tipo e *e2* è uno dei seguenti:

- Un tipo aritmetico

- Un puntatore, se *op* viene **+** o **-**

Il *e1* *op*= *e2* modulo si comporti come *e1* **=** *e1* *op* *e2*, ma *e1* viene valutata una sola volta.

L'assegnazione composta a un tipo enumerato genera un messaggio di errore. Se l'operando sinistro è di tipo puntatore, l'operando destro deve essere di tipo puntatore o un'espressione costante che restituisce 0. Se l'operando sinistro è di tipo integrale, l'operando destro non deve essere di tipo puntatore.

## <a name="result-of-assignment-operators"></a>Risultato degli operatori di assegnazione

Gli operatori di assegnazione restituiscono il valore dell'oggetto specificato dall'operando sinistro in seguito all'assegnazione. Il tipo risultante è il tipo dell'operando sinistro. Il risultato di un'espressione di assegnazione è sempre un l-value. Questi operatori hanno un'associatività da destra a sinistra. L'operando sinistro deve essere un l-value modificabile.

In ANSI C, Il risultato di un'espressione di assegnazione non è un l-value. Pertanto, l'espressione `(a += b) += c` risulta valida in C++ e non valida in C.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori di assegnazione C](../c-language/c-assignment-operators.md)
