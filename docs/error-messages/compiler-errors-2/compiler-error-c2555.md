---
title: Errore del compilatore C2555
description: Riferimento per l'errore del compilatore C'è C2555.
ms.date: 03/30/2020
f1_keywords:
- C2555
helpviewer_keywords:
- C2555
ms.assetid: 5e49ebb8-7c90-457a-aa12-7ca7ab6574b2
ms.openlocfilehash: fe0e6379e783387506e6098c9b14a047baa8e6c8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374178"
---
# <a name="compiler-error-c2555"></a>Errore del compilatore C2555

> '*classe1*::*funzione1*': il tipo restituito della funzione virtuale di override è diverso e non è covariante da '*class2**:: function2*'

Una funzione virtuale e una funzione di override derivata hanno elenchi di parametri identici ma tipi restituiti diversi.

## <a name="remarks"></a>Osservazioni

Una funzione di override in una classe derivata non può essere diversa solo per il tipo restituito da una funzione virtuale in una classe base.

Esiste un'eccezione a questa regola per alcuni tipi restituiti. Quando una classe derivata esegue l'override di una classe base pubblica, può restituire un puntatore o un riferimento alla classe derivata anziché un puntatore o un riferimento della classe base. Questi tipi restituiti sono denominati *covarianti*, in quanto variano insieme al tipo . Questa eccezione della regola non consente tipi di riferimento a puntatore o puntatore a puntatore covarianti.

Un modo per risolvere l'errore consiste nel restituire lo stesso tipo della classe base. Quindi, eseguire il cast del valore restituito dopo che è stata chiamata la funzione virtuale. Un altro consiste nel modificare anche l'elenco di parametri, per rendere la funzione membro della classe derivata un overload anziché un override.

## <a name="examples"></a>Esempi

Questo errore può essere visualizzato **`/clr`** se si esegue la compilazione con . Ad esempio, l'equivalente di C ' per la seguente dichiarazione di C:

```csharp
Guid[] CheckSources(Guid sourceID, Guid[] carouselIDs);
```

is

```cpp
Guid CheckSources(Guid sourceID, Guid carouselIDs[]) [];
```

Nell'esempio seguente viene generato l'errore C2555:

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

Per risolvere il problema, `Y::func` modificare `void`il tipo restituito di in .
