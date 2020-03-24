---
title: Avviso del compilatore (livello 1) C4489
ms.date: 11/04/2016
f1_keywords:
- C4489
helpviewer_keywords:
- C4489
ms.assetid: 43b51c8c-27b5-44c9-b974-fe4b48f4896f
ms.openlocfilehash: e9811e9f9c17463fdcd550ffd82af4f81a40bb34
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186608"
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
