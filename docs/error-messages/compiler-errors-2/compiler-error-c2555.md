---
title: Errore del compilatore C2555
ms.date: 11/04/2016
f1_keywords:
- C2555
helpviewer_keywords:
- C2555
ms.assetid: 5e49ebb8-7c90-457a-aa12-7ca7ab6574b2
ms.openlocfilehash: ebf3e4a3aff48311edd5fb95b01a7b2d23990231
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202424"
---
# <a name="compiler-error-c2555"></a>Errore del compilatore C2555

' Class1:: funzione1': il tipo restituito della funzione virtuale che esegue l'override è diverso da' Class2:: funzione2' e non è covariante

Una funzione virtuale e una funzione di override derivata hanno elenchi di parametri identici ma tipi restituiti diversi. Una funzione di override in una classe derivata non può essere diversa da una funzione virtuale in una classe base solo per il tipo restituito.

Per correggere l'errore, eseguire il cast del valore restituito dopo che è stata chiamata la funzione virtuale.

Questo errore può essere visualizzato anche se si compila con/CLR.   Ad esempio, l'oggetto C++ visivo equivale alla Dichiarazione C# seguente:

```
Guid[] CheckSources(Guid sourceID, Guid[] carouselIDs);
```

is

```
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
