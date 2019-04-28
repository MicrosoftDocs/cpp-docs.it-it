---
title: Errore del compilatore C3367
ms.date: 11/04/2016
f1_keywords:
- C3367
helpviewer_keywords:
- C3367
ms.assetid: e675d42b-f5b0-4d43-aab1-1f5024233102
ms.openlocfilehash: f53312fa9225270ef79d50d2ad351adce790d6fa
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62300537"
---
# <a name="compiler-error-c3367"></a>Errore del compilatore C3367

'static_member_function': impossibile utilizzare una funzione statica per creare un delegato non associato

Quando si chiama un delegato non associato, è necessario passare un'istanza di un oggetto. Una funzione membro statico viene chiamata tramite il nome della classe, quindi è possibile creare solo un'istanza di un delegato non associato con una funzione di membro di istanza.

Per altre informazioni sui delegati non associati, vedere [come: Definire e usare delegati (C++/CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md).

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