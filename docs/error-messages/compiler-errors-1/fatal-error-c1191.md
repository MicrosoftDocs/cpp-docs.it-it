---
title: Errore irreversibile C1191
ms.date: 11/04/2016
f1_keywords:
- C1191
helpviewer_keywords:
- C1191
ms.assetid: 2888c6c4-b4e6-449e-8ee0-7917f31086df
ms.openlocfilehash: 89af73699120ee4d8af3cda746727d758ef6d22c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50609664"
---
# <a name="fatal-error-c1191"></a>Errore irreversibile C1191

'dll' può essere importato solo in ambito globale

L'istruzione per l'importazione di mscorlib. dll in un programma che usa la programmazione /clr non può trovarsi in una funzione o lo spazio dei nomi, ma deve comparire in ambito globale.

L'esempio seguente genera l'errore C1191:

```
// C1191.cpp
// compile with: /clr
namespace sample {
   #using <mscorlib.dll>   // C1191 not at global scope
}
```

Possibile soluzione:

```
// C1191b.cpp
// compile with: /clr /c
#using <mscorlib.dll>
namespace sample {}
```