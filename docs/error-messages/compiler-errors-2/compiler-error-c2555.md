---
title: Errore del compilatore C2555
description: Riferimento per l'errore del compilatore C++ di Visual Studio C2555.
ms.date: 03/30/2020
f1_keywords:
- C2555
helpviewer_keywords:
- C2555
ms.assetid: 5e49ebb8-7c90-457a-aa12-7ca7ab6574b2
ms.openlocfilehash: ecac92bc663a6344e9ddafe13c194a92ab944c51
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87207797"
---
# <a name="compiler-error-c2555"></a>Errore del compilatore C2555

> '*Class1*::*funzione1*': il tipo restituito della funzione virtuale che esegue l'override è diverso da'*Class2*::*funzione2*' e non è covariante

Una funzione virtuale e una funzione di override derivata hanno elenchi di parametri identici ma tipi restituiti diversi.

## <a name="remarks"></a>Osservazioni

In C++, una funzione di override in una classe derivata non può differire solo per il tipo restituito da una funzione virtuale in una classe base.

Esiste un'eccezione a questa regola per determinati tipi restituiti. Quando una classe derivata esegue l'override di una classe di base pubblica, può restituire un puntatore o un riferimento alla classe derivata anziché un puntatore o un riferimento a una classe di base. Questi tipi restituiti sono detti *covariante*, in quanto variano insieme al tipo. Questa eccezione della regola non consente i tipi di riferimento a puntatore o puntatore a puntatore a covariante.

Un modo per risolvere l'errore consiste nel restituire lo stesso tipo della classe base. Eseguire quindi il cast del valore restituito dopo che è stata chiamata la funzione virtuale. Un altro è modificare anche l'elenco dei parametri, in modo da rendere la funzione membro della classe derivata un overload anziché un override.

## <a name="examples"></a>Esempi

Questo errore può essere visualizzato se si esegue la compilazione con **`/clr`** . Ad esempio, C++ equivale alla seguente dichiarazione C#:

```csharp
Guid[] CheckSources(Guid sourceID, Guid[] carouselIDs);
```

is

```cpp
Guid CheckSources(Guid sourceID, Guid carouselIDs[]) [];
```

L'esempio seguente genera l'C2555:

```cpp
// C2555.cpp
// compile with: /c
struct X {
   virtual void func();
};
struct Y : X {
   char func();  // C2555
   void func2();   // OK
};
```

Per risolvere il problema, modificare il tipo restituito di `Y::func` in **`void`** .
