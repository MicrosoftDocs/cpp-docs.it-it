---
title: Errore del compilatore C3161 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3161
dev_langs:
- C++
helpviewer_keywords:
- C3161
ms.assetid: 1fe2be85-a343-487b-8476-bf9e257eb29d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 11396ccad33489b41d18759ba4d2f00b445e94a3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46136075"
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