---
title: Errore del compilatore C3367 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3367
dev_langs:
- C++
helpviewer_keywords:
- C3367
ms.assetid: e675d42b-f5b0-4d43-aab1-1f5024233102
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2e063635e521efe1eabf8f2b50664ef8bf3e85e8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46020231"
---
# <a name="compiler-error-c3367"></a>Errore del compilatore C3367

'static_member_function': impossibile utilizzare una funzione statica per creare un delegato non associato

Quando si chiama un delegato non associato, è necessario passare un'istanza di un oggetto. Una funzione membro statico viene chiamata tramite il nome della classe, quindi è possibile creare solo un'istanza di un delegato non associato con una funzione di membro di istanza.

Per altre informazioni sui delegati non associati, vedere [procedura: definire e usare delegati (C + + / CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3367.

```cpp
// C3367.cpp
// compile with: /clr
ref struct R {
   void b() {}
   static void f() {}
};

delegate void Del(R^);

int main() {
   Del ^ a = gcnew Del(&R::b);   // OK
   Del ^ b = gcnew Del(&R::f);   // C3367
}
```