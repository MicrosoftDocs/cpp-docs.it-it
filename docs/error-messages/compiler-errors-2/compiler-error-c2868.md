---
description: 'Altre informazioni su: errore del compilatore C2868'
title: Errore del compilatore C2868
ms.date: 11/04/2016
f1_keywords:
- C2868
helpviewer_keywords:
- C2868
ms.assetid: 6ff5837b-e66d-44d1-9d17-80af35e08d08
ms.openlocfilehash: c6a6368fbdfe61014a606fadce92322234e438f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333796"
---
# <a name="compiler-error-c2868"></a>Errore del compilatore C2868

> '*Identifier*': sintassi non valida per la dichiarazione using; previsto nome qualificato

Una [dichiarazione using](../../cpp/using-declaration.md) richiede un *nome completo*, una `::` sequenza separata dell'operatore Scope () di nomi di spazio dei nomi, di classe o di enumerazione che terminano con il nome dell'identificatore. Per introdurre un nome dallo spazio dei nomi globale, è possibile usare un singolo operatore di risoluzione dell'ambito.

## <a name="example"></a>Esempio

L'esempio seguente genera C2868 e Mostra anche l'uso corretto:

```cpp
// C2868.cpp
class X {
public:
   int i;
};

class Y : X {
public:
   using X::i;   // OK
};

int main() {
   using X;   // C2868
}
```
