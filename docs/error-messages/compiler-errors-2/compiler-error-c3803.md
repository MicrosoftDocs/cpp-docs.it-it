---
description: 'Altre informazioni su: errore del compilatore C3803'
title: Errore del compilatore C3803
ms.date: 11/04/2016
f1_keywords:
- C3803
helpviewer_keywords:
- C3803
ms.assetid: bad5fb9a-ed9a-4c15-96e7-cf06e200a50d
ms.openlocfilehash: 23b3c9f38470bca471910bb31f7a0acbdf14693e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97291558"
---
# <a name="compiler-error-c3803"></a>Errore del compilatore C3803

' Property ': la proprietà ha un tipo incompatibile con una delle relative funzioni di accesso ' funzione di accesso '

Il tipo di una proprietà definita con la [Proprietà](../../cpp/property-cpp.md) non corrisponde al tipo restituito per una delle funzioni di accesso.

L'esempio seguente genera l'C3803:

```cpp
// C3803.cpp
struct A
{
   __declspec(property(get=GetIt)) int i;
   char GetIt()
   {
      return 0;
   }

   /*
   // try the following definition instead
   int GetIt()
   {
      return 0;
   }
   */
}; // C3803

int main()
{
}
```
