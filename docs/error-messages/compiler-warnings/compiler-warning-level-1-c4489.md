---
title: Avviso del compilatore (livello 1) C4489
ms.date: 11/04/2016
f1_keywords:
- C4489
helpviewer_keywords:
- C4489
ms.assetid: 43b51c8c-27b5-44c9-b974-fe4b48f4896f
ms.openlocfilehash: dd150621ad3474444861982c095ae8a6addb52fa
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59779206"
---
# <a name="compiler-warning-level-1-c4489"></a>Avviso del compilatore (livello 1) C4489

'identificatore': non consentito per il metodo di interfaccia 'method'; eseguire l'override gli identificatori sono consentiti solo nei metodi della classe classe e il valore ref

Una parola chiave identificatore è stata usata in modo errato in un metodo di interfaccia.

Per altre informazioni, vedere [gli identificatori di Override](../../extensions/override-specifiers-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4489.

```
// C4489.cpp
// compile with: /clr /c /W1
public interface class I {
   void f() new;   // C4489
   virtual void b() override;   // C4489

   void g();   // OK
};
```