---
title: Avviso del compilatore (livello 1) C4944
ms.date: 11/04/2016
f1_keywords:
- C4944
helpviewer_keywords:
- C4944
ms.assetid: e2905eb1-2e3b-4fab-a48b-c0cae0fd997f
ms.openlocfilehash: f9db36d52647b55c292a15ca724822f8b8b47e9c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199200"
---
# <a name="compiler-warning-level-1-c4944"></a>Avviso del compilatore (livello 1) C4944

'symbol': non è possibile importare il simbolo da 'assembly1' perché 'symbol' esiste già nell'ambito corrente

In un file di codice sorgente è definito un simbolo, che è definito anche in un assembly a cui fa riferimento un'istruzione #using. Il simbolo nell'assembly viene ignorato.

## <a name="example"></a>Esempio

L'esempio seguente crea un componente con un tipo denominato ClassA.

```csharp
// C4944.cs
// compile with: /target:library
// C# source code to create a dll
public class ClassA {
   public int i;
}
```

## <a name="example"></a>Esempio

Gli esempi seguenti generano l'errore C4944.

```cpp
// C4944b.cpp
// compile with: /clr /W1
class ClassA {
public:
   int u;
};

#using "C4944.dll"   // C4944 ClassA also defined C4944.dll

int main() {
   ClassA * x = new ClassA();
   x->u = 9;
   System::Console::WriteLine(x->u);
}
```
