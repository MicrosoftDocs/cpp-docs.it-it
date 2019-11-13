---
title: Avviso del compilatore (livello 1) C4489
ms.date: 11/04/2016
f1_keywords:
- C4489
helpviewer_keywords:
- C4489
ms.assetid: 43b51c8c-27b5-44c9-b974-fe4b48f4896f
ms.openlocfilehash: 78ceecb5918ccb74bd61afe62bbf8b542d585f81
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966191"
---
# <a name="compiler-warning-level-1-c4489"></a>Avviso del compilatore (livello 1) C4489

' specifier ': non consentito nel metodo di interfaccia ' Method '; gli identificatori di override sono consentiti solo nei metodi della classe di riferimento e della classe di valori

Una parola chiave specifier non è stata usata correttamente in un metodo di interfaccia.

Per altre informazioni, vedere [identificatori di override](../../extensions/override-specifiers-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4489.

```cpp
// C4489.cpp
// compile with: /clr /c /W1
public interface class I {
   void f() new;   // C4489
   virtual void b() override;   // C4489

   void g();   // OK
};
```