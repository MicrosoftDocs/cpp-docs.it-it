---
title: Errore irreversibile C1191 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1191
dev_langs:
- C++
helpviewer_keywords:
- C1191
ms.assetid: 2888c6c4-b4e6-449e-8ee0-7917f31086df
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: daefec7c89fc98d056963c4f761b7298d6e491cc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062969"
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