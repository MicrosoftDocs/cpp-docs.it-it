---
title: Avviso del compilatore (livello 3) C4265
ms.date: 11/04/2016
f1_keywords:
- C4265
helpviewer_keywords:
- C4265
ms.assetid: 20547159-6f30-4cc4-83aa-927884c8bb4c
ms.openlocfilehash: cfcbd9d9268785b87e45a833b332c276eec01522
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161542"
---
# <a name="compiler-warning-level-3-c4265"></a>Avviso del compilatore (livello 3) C4265

' Class ': la classe dispone di funzioni virtuali, ma il distruttore non è virtuale

Quando una classe dispone di funzioni virtuali ma un distruttore non virtuale, gli oggetti del tipo potrebbero non essere eliminati correttamente quando la classe viene distrutta tramite un puntatore della classe di base.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4265:

```cpp
// C4265.cpp
// compile with: /W3 /c
#pragma warning(default : 4265)
class B
{
public:
   virtual void vmf();

   ~B();
   // try the following line instead
   // virtual ~B();
};   // C4265

int main()
{
   B b;
}
```
