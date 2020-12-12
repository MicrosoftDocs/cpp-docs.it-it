---
description: 'Altre informazioni su: errore irreversibile C1191'
title: Errore irreversibile C1191
ms.date: 11/04/2016
f1_keywords:
- C1191
helpviewer_keywords:
- C1191
ms.assetid: 2888c6c4-b4e6-449e-8ee0-7917f31086df
ms.openlocfilehash: ef7f9ec6554daf0d83f3e597877509025512a6d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123578"
---
# <a name="fatal-error-c1191"></a>Errore irreversibile C1191

' dll ' può essere importato solo in ambito globale

L'istruzione per importare mscorlib.dll in un programma che usa la programmazione/CLR non può comparire in uno spazio dei nomi o in una funzione, ma deve essere visualizzata nell'ambito globale.

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
