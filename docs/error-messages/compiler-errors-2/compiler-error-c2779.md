---
description: 'Altre informazioni su: errore del compilatore C2779'
title: Errore del compilatore C2779
ms.date: 11/04/2016
f1_keywords:
- C2779
helpviewer_keywords:
- C2779
ms.assetid: 4a00e492-855a-41f3-8a18-5f60ee20c2f2
ms.openlocfilehash: 88acf83feb7a5aece8f05431eec7c70869cba6a9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298045"
---
# <a name="compiler-error-c2779"></a>Errore del compilatore C2779

' declaration ': i metodi delle proprietà possono essere associati solo a membri dati non statici

L' **`property`** attributo esteso viene applicato erroneamente a un membro dati statici.

L'esempio seguente genera l'C2779:

```cpp
// C2779.cpp
struct A {
   static __declspec(property(put=PutProp))
   // try the following line instead
   __declspec(property(put=PutProp))
      int prop;   // C2779
   int PutProp(void);
};
```
