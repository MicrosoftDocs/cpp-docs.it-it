---
description: 'Altre informazioni su: errore del compilatore C2619'
title: Errore del compilatore C2619
ms.date: 11/04/2016
f1_keywords:
- C2619
helpviewer_keywords:
- C2619
ms.assetid: c826f8ab-d66a-4b79-a0b2-93b0af8c41ac
ms.openlocfilehash: 2ca9a8379901703299e89e71671ec0270c1ff1e3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123546"
---
# <a name="compiler-error-c2619"></a>Errore del compilatore C2619

'identifier': membro dati statico non consentito in una struct o unione anonima

Viene dichiarato un membro di un'Unione o di uno struct anonimo **`static`** .

L'esempio seguente genera l'errore C2619 e illustra come risolverlo rimuovendo la parola chiave static.

```cpp
// C2619.cpp
int main() {
   union { static int j; };  // C2619
   union { int j; };  // OK
}
```
