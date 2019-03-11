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
ms.openlocfilehash: 984a20d701b159820a94483fe9d3743f015b71f6
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57741967"
---
# <a name="double-thunking-c"></a>Doppio thunk (C++)

Doppio thunk si intende la perdita di prestazioni che possono verificarsi quando una chiamata di funzione in un contesto gestito chiama un Visual C++ gestito (funzione) e l'esecuzione del programma in cui viene chiamato punto di ingresso nativo della funzione per chiamare la funzione gestita. Questo argomento illustra in cui si è il doppio thunk e come si può evitare in modo da migliorare le prestazioni.

## <a name="remarks"></a>Note

Per impostazione predefinita, durante la compilazione con **/clr**, la definizione di una funzione gestita indica al compilatore di generare un punto di ingresso nativo e un punto di ingresso gestito. In questo modo la funzione gestita da chiamare da siti di chiamata nativi e gestiti. Tuttavia, in presenza di un punto di ingresso nativo, può essere il punto di ingresso per tutte le chiamate alla funzione. Se una funzione chiamante è gestita, il punto di ingresso nativo chiamerà quindi il punto di ingresso gestito. In effetti, sono necessarie due chiamate per richiamare la funzione (di conseguenza, fare doppio thunk). Ad esempio, le funzioni virtuali vengono chiamate sempre tramite un punto di ingresso nativo.

Una possibile soluzione consiste nell'indicare al compilatore di non generare un punto di ingresso nativo per una funzione non gestita, che la funzione di essere chiamata solo da un contesto gestito, tramite il [clrcall](../cpp/clrcall.md) convenzione di chiamata.

Analogamente, se si esportano ([dllexport, dllimport](../cpp/dllexport-dllimport.md)) una funzione non gestita, viene generato un punto di ingresso nativo e qualsiasi funzione che importa e chiama tale funzione chiamerà tramite il punto di ingresso nativo. Per evitare il doppio thunk in questo caso, non usare la semantica di esportazione/importazione nativa; è sufficiente fare riferimento ai metadati tramite `#using` (vedere [# direttiva using](../preprocessor/hash-using-directive-cpp.md)).

Il compilatore è stato aggiornato in modo da ridurre il doppio thunk non necessari. Ad esempio, qualsiasi funzione con un tipo gestito nella firma (incluso il tipo restituito) in modo implicito essere contrassegnato come `__clrcall`. Per altre informazioni sull'eliminazione del doppio thunk, vedere [ https://msdn.microsoft.com/msdnmag/issues/05/01/COptimizations/default.aspx ](https://msdn.microsoft.com/msdnmag/issues/05/01/COptimizations/default.aspx).

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

L'esempio seguente viene illustrato il doppio thunk. Durante la compilazione nativa (senza **/clr**), la chiamata alla funzione virtuale in `main` genera una chiamata a `T`della copia di costruttore e una sola chiamata al distruttore. Comportamento analogo si ottiene quando la funzione virtuale viene dichiarata con **/clr** e `__clrcall`. Tuttavia, al termine della compilazione con **/clr**, la chiamata di funzione genera una chiamata al costruttore di copia, ma non vi è un'altra chiamata al costruttore di copia a causa il thunk nativo a gestito.

### <a name="code"></a>Codice

```
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

### <a name="sample-output"></a>Esempio di output

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

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

L'esempio precedente ha dimostrato l'esistenza del doppio thunk. In questo esempio mostra l'effetto. Il `for` loop chiama la funzione virtuale e il programma segnala il tempo di esecuzione. Il tempo più lento viene segnalato quando il programma viene compilato con **/clr**. I tempi più rapidi vengono segnalati durante la compilazione senza **/clr** o se la funzione virtuale viene dichiarata con `__clrcall`.

### <a name="code"></a>Codice

```
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

### <a name="sample-output"></a>Esempio di output

```
4.2 seconds
after calling struct S
```

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
