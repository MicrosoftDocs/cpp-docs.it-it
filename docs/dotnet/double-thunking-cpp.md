---
title: Doppio thunk (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- double thunks
- interop [C++], double thunking
- mixed assemblies [C++], double thunking
- /clr compiler option [C++], double thunking
- interoperability [C++], double thunking
ms.assetid: a85090b2-dc3c-498a-b40c-340db229dd6f
ms.openlocfilehash: 3f0fc5567baaa0c4f3fea410770963adf51e8366
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91414009"
---
# <a name="double-thunking-c"></a>Doppio thunk (C++)

Il doppio thunk si riferisce alla perdita di prestazioni che è possibile riscontrare quando una chiamata di funzione in un contesto gestito chiama una funzione gestita Visual C++ e dove l'esecuzione del programma chiama il punto di ingresso nativo della funzione per chiamare la funzione gestita. In questo argomento viene illustrato dove si verifica il doppio thunk e come è possibile evitarlo per migliorare le prestazioni.

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, quando si esegue la compilazione con **/CLR**, la definizione di una funzione gestita fa in modo che il compilatore generi un punto di ingresso gestito e un punto di ingresso nativo. Ciò consente la chiamata della funzione gestita da siti di chiamata nativi e gestiti. Tuttavia, quando esiste un punto di ingresso nativo, può essere il punto di ingresso per tutte le chiamate alla funzione. Se viene gestita una funzione chiamante, il punto di ingresso nativo chiamerà il punto di ingresso gestito. In effetti, per richiamare la funzione sono necessarie due chiamate, quindi il doppio thunk. Ad esempio, le funzioni virtuali vengono sempre chiamate tramite un punto di ingresso nativo.

Una soluzione consiste nel indicare al compilatore di non generare un punto di ingresso nativo per una funzione gestita, che la funzione verrà chiamata solo da un contesto gestito, usando la convenzione di chiamata [__clrcall](../cpp/clrcall.md) .

Analogamente, se si esporta ([dllexport, dllimport](../cpp/dllexport-dllimport.md)) una funzione gestita, viene generato un punto di ingresso nativo e qualsiasi funzione che importa e chiama tale funzione chiamerà tramite il punto di ingresso nativo. Per evitare il doppio thunk in questa situazione, non usare la semantica di esportazione/importazione nativa; è sufficiente fare riferimento ai metadati tramite `#using` (vedere [#using direttiva](../preprocessor/hash-using-directive-cpp.md)).

Il compilatore è stato aggiornato per ridurre il doppio thunk non necessario. Ogni funzione con un tipo gestito nella firma (incluso il tipo restituito), ad esempio, verrà contrassegnata in modo implicito come `__clrcall` .

## <a name="example-double-thunking"></a>Esempio: doppio thunk

### <a name="description"></a>Descrizione

Nell'esempio seguente viene illustrato il doppio thunk. Quando viene compilato native (senza **/CLR**), la chiamata alla funzione virtuale in `main` genera una chiamata al `T` costruttore di copia di e una chiamata al distruttore. Si otterrà un comportamento simile quando la funzione virtuale viene dichiarata con **/CLR** e `__clrcall` . Tuttavia, quando viene appena compilato con **/CLR**, la chiamata di funzione genera una chiamata al costruttore di copia, ma esiste un'altra chiamata al costruttore di copia a causa del thunk nativo a gestito.

### <a name="code"></a>Codice

```cpp
// double_thunking.cpp
// compile with: /clr
#include <stdio.h>
struct T {
   T() {
      puts(__FUNCSIG__);
   }

   T(const T&) {
      puts(__FUNCSIG__);
   }

   ~T() {
      puts(__FUNCSIG__);
   }

   T& operator=(const T&) {
      puts(__FUNCSIG__);
      return *this;
   }
};

struct S {
   virtual void /* __clrcall */ f(T t) {};
} s;

int main() {
   S* pS = &s;
   T t;

   printf("calling struct S\n");
   pS->f(t);
   printf("after calling struct S\n");
}
```

### <a name="sample-output"></a>Output di esempio

```
__thiscall T::T(void)
calling struct S
__thiscall T::T(const struct T &)
__thiscall T::T(const struct T &)
__thiscall T::~T(void)
__thiscall T::~T(void)
after calling struct S
__thiscall T::~T(void)
```

## <a name="example-effect-of-double-thunking"></a>Esempio: effetto del doppio thunk

### <a name="description"></a>Descrizione

Nell'esempio precedente è stata illustrata l'esistenza del doppio thunk. Questo esempio mostra l'effetto. Il **`for`** ciclo chiama la funzione virtuale e il programma segnala il tempo di esecuzione. Il tempo più lento viene segnalato quando il programma viene compilato con **/CLR**. Quando si esegue la compilazione senza **/CLR** o se la funzione virtuale viene dichiarata con, vengono segnalate le ore più veloci `__clrcall` .

### <a name="code"></a>Codice

```cpp
// double_thunking_2.cpp
// compile with: /clr
#include <time.h>
#include <stdio.h>

#pragma unmanaged
struct T {
   T() {}
   T(const T&) {}
   ~T() {}
   T& operator=(const T&) { return *this; }
};

struct S {
   virtual void /* __clrcall */ f(T t) {};
} s;

int main() {
   S* pS = &s;
   T t;
   clock_t start, finish;
   double  duration;
   start = clock();

   for ( int i = 0 ; i < 1000000 ; i++ )
      pS->f(t);

   finish = clock();
   duration = (double)(finish - start) / (CLOCKS_PER_SEC);
   printf( "%2.1f seconds\n", duration );
   printf("after calling struct S\n");
}
```

### <a name="sample-output"></a>Output di esempio

```
4.2 seconds
after calling struct S
```

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
