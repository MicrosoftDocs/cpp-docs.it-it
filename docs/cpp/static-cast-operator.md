---
title: Operatore static_cast
ms.date: 11/04/2016
f1_keywords:
- static_cast_cpp
helpviewer_keywords:
- static_cast keyword [C++]
ms.assetid: 1f7c0c1c-b288-476c-89d6-0e2ceda5c293
ms.openlocfilehash: 8e39fe7eb0fb9b77a82b305fa2f8186ad4e855a1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50601708"
---
# <a name="staticcast-operator"></a>Operatore static_cast

Converte un' *espressione* al tipo di *-id, tipo* solo in base ai tipi presenti nell'espressione.

## <a name="syntax"></a>Sintassi

```
static_cast <type-id> ( expression )
```

## <a name="remarks"></a>Note

Nel linguaggio C++ standard non viene eseguito alcun controllo dei tipi in fase di esecuzione a garanzia della sicurezza della conversione. In C++/CX vengono eseguiti due controlli, uno in fase di compilazione, l'altro in fase di esecuzione. Per ulteriori informazioni, vedi [Cast](casting.md).

Il **static_cast** operatore può essere usato per operazioni quali la conversione di un puntatore a una classe base a un puntatore a una classe derivata. Questi tipi di conversioni non sempre sono sicure.

In generale si utilizza **static_cast** quando si desidera convertire tipi di dati numerici, ad esempio gli enum in int o tipi int in float e si sono alcuni dei tipi di dati coinvolti nella conversione. **static_cast** le conversioni non sono sicure quanto **dynamic_cast** conversioni, perché **static_cast** selezionare alcun tipo di fase di esecuzione, mentre **dynamic_cast** esegue. Oggetto **dynamic_cast** a un puntatore ambiguo non riuscirà, mentre un **static_cast** restituisce come se tutto fosse corretto e può essere pericolosa. Sebbene **dynamic_cast** sono più sicure, conversioni **dynamic_cast** solo eseguita sui puntatori o riferimenti e il controllo dei tipi in fase di esecuzione è un sovraccarico. Per altre informazioni, vedere [dynamic_cast Operator](../cpp/dynamic-cast-operator.md).

Nell'esempio seguente la riga `D* pd2 = static_cast<D*>(pb);` non è sicura perché `D` può contenere campi e metodi non presenti in `B`. Tuttavia, la riga `B* pb2 = static_cast<B*>(pd);` è una conversione sicura perché `D` contiene sempre tutti `B`.

```cpp
// static_cast_Operator.cpp
// compile with: /LD
class B {};

class D : public B {};

void f(B* pb, D* pd) {
   D* pd2 = static_cast<D*>(pb);   // Not safe, D can have fields
                                   // and methods that are not in B.

   B* pb2 = static_cast<B*>(pd);   // Safe conversion, D always
                                   // contains all of B.
}
```

A differenza [dynamic_cast](../cpp/dynamic-cast-operator.md), non viene eseguito alcun controllo in fase di esecuzione nel **static_cast** conversione di `pb`. L'oggetto a cui fa riferimento `pb` non può essere un oggetto di tipo `D`, nel qual caso l'utilizzo di `*pd2` può diventare molto rischioso. Ad esempio, la chiamata a una funzione membro della classe `D`, ma non della classe `B` potrebbe tradursi in una violazione di accesso.

Il **dynamic_cast** e **static_cast** operatori spostano un puntatore attraverso una gerarchia di classi. Tuttavia **static_cast** si basa esclusivamente sulle informazioni fornite nell'istruzione cast e pertanto può essere non sicuro. Ad esempio:

```cpp
// static_cast_Operator_2.cpp
// compile with: /LD /GR
class B {
public:
   virtual void Test(){}
};
class D : public B {};

void f(B* pb) {
   D* pd1 = dynamic_cast<D*>(pb);
   D* pd2 = static_cast<D*>(pb);
}
```

Se `pb` punta veramente a un oggetto di tipo `D`, `pd1` e `pd2` otterranno lo stesso valore. Otterranno anche lo stesso valore se `pb == 0`.

Se `pb` punta a un oggetto di tipo `B` e non per l'intero `D` classe, quindi **dynamic_cast** disporrà di informazioni sufficienti per restituire zero. Tuttavia **static_cast** si basa su asserzione del programmatore che `pb` punta a un oggetto di tipo `D` e restituisce semplicemente un puntatore a quella prevista `D` oggetto.

Di conseguenza **static_cast** può eseguire l'operazione inversa delle conversioni implicite, nel qual caso i risultati sono indefiniti. È compito del programmatore verificare che i risultati di una **static_cast** conversione siano sicuri.

Questo comportamento si applica anche a tipi diversi dai tipi di classe. Ad esempio, **static_cast** può essere utilizzato per convertire da int a un **char**. Tuttavia, l'oggetto risultante **char** potrebbe non disporre di bit sufficienti per contenere l'intero **int** valore. Anche in questo caso è compito del programmatore per verificare che i risultati di una **static_cast** conversione siano sicuri.

Il **static_cast** operatore può anche essere usato per eseguire conversioni implicite, incluse le conversioni standard e le conversioni definite dall'utente. Ad esempio:

```cpp
// static_cast_Operator_3.cpp
// compile with: /LD /GR
typedef unsigned char BYTE;

void f() {
   char ch;
   int i = 65;
   float f = 2.5;
   double dbl;

   ch = static_cast<char>(i);   // int to char
   dbl = static_cast<double>(f);   // float to double
   i = static_cast<BYTE>(ch);
}
```

Il **static_cast** operatore può convertire in modo esplicito un valore integrale a un tipo di enumerazione. Se il valore del tipo integrale non rientra nell'intervallo dei valori di enumerazione, il valore di enumerazione risultante sarà indefinito.

Il **static_cast** operatore converte un valore del puntatore null per il valore del puntatore null del tipo di destinazione.

Qualsiasi espressione può essere convertita in modo esplicito al tipo void tramite il **static_cast** operatore. Il tipo void di destinazione può includere facoltativamente il **const**, **volatile**, o **unaligned** attributo.

Il **static_cast** operatore non è possibile eseguire il cast di **const**, **volatile**, oppure **unaligned** attributi. Visualizzare [operatore const_cast](../cpp/const-cast-operator.md) per informazioni sulla rimozione di questi attributi.

A causa il rischio di esecuzione di cast non verificati nella parte superiore di un rilocazione garbage collector, l'uso di **static_cast** deve essere solo nel codice critiche per le prestazioni quando si è certi funzionerà correttamente. Se è necessario utilizzare **static_cast** in modalità di rilascio, sostituirlo con [safe_cast](../windows/safe-cast-cpp-component-extensions.md) nelle build di debug per garantire l'esito positivo.

## <a name="see-also"></a>Vedere anche

[Operatori di cast](../cpp/casting-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)