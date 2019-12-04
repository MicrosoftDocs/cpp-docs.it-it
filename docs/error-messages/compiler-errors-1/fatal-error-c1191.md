---
title: Errore irreversibile C1191
ms.date: 11/04/2016
f1_keywords:
- C1191
helpviewer_keywords:
- C1191
ms.assetid: 2888c6c4-b4e6-449e-8ee0-7917f31086df
ms.openlocfilehash: 7c6756dec29138af534278742d99c2f77109b1cc
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74747293"
---
# <a name="fatal-error-c1191"></a>Errore irreversibile C1191

' dll ' può essere importato solo in ambito globale

L'istruzione per importare mscorlib. dll in un programma che utilizza la programmazione/CLR non può comparire in uno spazio dei nomi o in una funzione, ma deve essere presente nell'ambito globale.

L'esempio seguente genera l'C1191:

```cpp
// C1191.cpp
// compile with: /clr
namespace sample {
   #using <mscorlib.dll>   // C1191 not at global scope
}
```

Possibile soluzione:

```cpp
// C1191b.cpp
// compile with: /clr /c
#using <mscorlib.dll>
namespace sample {}
```
