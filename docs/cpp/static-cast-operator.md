---
title: Operatore static_cast
ms.date: 11/04/2016
f1_keywords:
- static_cast_cpp
helpviewer_keywords:
- static_cast keyword [C++]
ms.assetid: 1f7c0c1c-b288-476c-89d6-0e2ceda5c293
ms.openlocfilehash: 37708bf50b28eb120af8e8a79e770c3121e6f509
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80178587"
---
# <a name="static_cast-operator"></a>Operatore static_cast

Converte un' *espressione* nel tipo di *tipo-ID,* in base ai tipi presenti nell'espressione.

## <a name="syntax"></a>Sintassi

```
static_cast <type-id> ( expression )
```

## <a name="remarks"></a>Osservazioni

Nel linguaggio C++ standard non viene eseguito alcun controllo dei tipi in fase di esecuzione a garanzia della sicurezza della conversione. In C++/CX vengono eseguiti due controlli, uno in fase di compilazione, l'altro in fase di esecuzione. Per ulteriori informazioni, vedi [Cast](casting.md).

L'operatore **static_cast** può essere utilizzato per operazioni quali la conversione di un puntatore a una classe di base in un puntatore a una classe derivata. Questi tipi di conversioni non sempre sono sicure.

In generale, si usa **static_cast** quando si desidera convertire i tipi di dati numerici, ad esempio enumerazioni in int o int, in float e si è certi dei tipi di dati interessati dalla conversione. le conversioni di **static_cast** non sono sicure quanto **dynamic_cast** le conversioni, perché **static_cast** non esegue alcun controllo del tipo in fase di esecuzione, mentre **dynamic_cast** lo fa. Un **dynamic_cast** a un puntatore ambiguo avrà esito negativo, mentre una **static_cast** restituisce come se non fossero presenti errori; Questo può essere pericoloso. Sebbene le conversioni di **dynamic_cast** siano più sicure, **dynamic_cast** funziona solo su puntatori o riferimenti e il controllo dei tipi in fase di esecuzione è un sovraccarico. Per ulteriori informazioni, vedere [operatore dynamic_cast](../cpp/dynamic-cast-operator.md).

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

A differenza di [dynamic_cast](../cpp/dynamic-cast-operator.md), non viene eseguito alcun controllo in fase di esecuzione sulla conversione **static_cast** di `pb`. L'oggetto a cui fa riferimento `pb` non può essere un oggetto di tipo `D`, nel qual caso l'utilizzo di `*pd2` può diventare molto rischioso. Ad esempio, la chiamata a una funzione membro della classe `D`, ma non della classe `B` potrebbe tradursi in una violazione di accesso.

Gli operatori **dynamic_cast** e **static_cast** spostano un puntatore all'interno di una gerarchia di classi. Tuttavia, **static_cast** si basa esclusivamente sulle informazioni fornite nell'istruzione cast e pertanto possono essere non sicure. Ad esempio:

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

Se `pb` punta a un oggetto di tipo `B` e non alla classe `D` completa, **dynamic_cast** rileverà sufficiente per restituire zero. Tuttavia, **static_cast** si basa sull'asserzione del programmatore che `pb` punta a un oggetto di tipo `D` e restituisce semplicemente un puntatore a tale oggetto `D`.

Di conseguenza, **static_cast** possibile eseguire l'inversione di conversioni implicite, nel qual caso i risultati non sono definiti. Il programmatore viene lasciato al programmatore per verificare che i risultati di una conversione di **static_cast** siano sicuri.

Questo comportamento si applica anche a tipi diversi dai tipi di classe. Ad esempio, è possibile usare **static_cast** per eseguire la conversione da int a **char**. Tuttavia, il **carattere** risultante potrebbe non avere un numero sufficiente di bit per contenere l'intero valore **int** . Anche in questo caso, viene lasciata al programmatore per verificare che i risultati di una conversione di **static_cast** siano sicuri.

È inoltre possibile utilizzare l'operatore **static_cast** per eseguire qualsiasi conversione implicita, incluse le conversioni standard e le conversioni definite dall'utente. Ad esempio:

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

L'operatore **static_cast** può convertire in modo esplicito un valore integrale in un tipo di enumerazione. Se il valore del tipo integrale non rientra nell'intervallo dei valori di enumerazione, il valore di enumerazione risultante sarà indefinito.

L'operatore **static_cast** converte un valore del puntatore null nel valore del puntatore null del tipo di destinazione.

Qualsiasi espressione può essere convertita in modo esplicito nel tipo void dall'operatore **static_cast** . Il tipo void di destinazione può includere facoltativamente l'attributo **const**, **volatile**o **__unaligned** .

L'operatore **static_cast** non è in grado di eseguire il cast degli attributi **const**, **volatile**o **__unaligned** . Per informazioni sulla rimozione di questi attributi, vedere [operatore const_cast](../cpp/const-cast-operator.md) .

**C++/CLI:** A causa del rischio di eseguire cast non verificati su un Garbage Collector di rilocazione, l'uso di **static_cast** deve essere presente solo nel codice critico per le prestazioni quando si è certi che funzioni correttamente. Se è necessario usare **static_cast** in modalità versione, sostituirlo con [safe_cast](../extensions/safe-cast-cpp-component-extensions.md) nelle build di debug per garantire l'esito positivo.

## <a name="see-also"></a>Vedere anche

[Operatori di cast](../cpp/casting-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
