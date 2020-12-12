---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4489'
title: Avviso del compilatore (livello 1) C4489
ms.date: 11/04/2016
f1_keywords:
- C4489
helpviewer_keywords:
- C4489
ms.assetid: 43b51c8c-27b5-44c9-b974-fe4b48f4896f
ms.openlocfilehash: d2865f7f2eba4db72fa4cbf622609b319197f942
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212415"
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
