---
title: Errore del compilatore C3161
ms.date: 11/04/2016
f1_keywords:
- C3161
helpviewer_keywords:
- C3161
ms.assetid: 1fe2be85-a343-487b-8476-bf9e257eb29d
ms.openlocfilehash: 22ecc176036308699c3ad7bd8c015836be910073
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50501660"
---
# <a name="compiler-error-c3161"></a>Errore del compilatore C3161

'interface': Impossibile nidificare una classe, struttura, unione o un'interfaccia in un'interfaccia non è valida; Impossibile annidare un'interfaccia in una classe, struct o unione non è valida

Un' [Interface](../../cpp/interface.md) può apparire solo in ambito globale o all'interno di uno spazio dei nomi. Una classe, struct o unione non può trovarsi in un'interfaccia.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3161.

```
// C3161.cpp
// compile with: /c
__interface X {
   __interface Y {};   // C3161 A nested interface
};
```