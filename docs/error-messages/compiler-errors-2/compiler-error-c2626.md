---
description: 'Altre informazioni su: errore del compilatore C2626'
title: Errore del compilatore C2626
ms.date: 11/04/2016
f1_keywords:
- C2626
helpviewer_keywords:
- C2626
ms.assetid: 4c283ad0-251b-4571-bc18-468b9836746f
ms.openlocfilehash: 1a89d63d18fd029daa98ce1d248da24296ee2d4f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123545"
---
# <a name="compiler-error-c2626"></a>Errore del compilatore C2626

'identifier': membro dati privato o protetto non consentito in una struct o unione anonima

Un membro di una struct o unione anonima deve avere accesso pubblico.

L'esempio seguente genera l'errore C2626:

```cpp
// C2626.cpp
int main() {
   union {
   protected:
      int j;     // C2626, j is protected
   private:
      int k;     // C2626, k is private
   };
}
```

Per risolvere il problema, rimuovere eventuali tag private o protected:

```cpp
// C2626b.cpp
int main() {
   union {
   public:
      int i;   // OK, i is public
   };
}
```
