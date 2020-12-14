---
description: 'Altre informazioni su: errore del compilatore C3196'
title: Errore del compilatore C3196
ms.date: 11/04/2016
f1_keywords:
- C3196
helpviewer_keywords:
- C3196
ms.assetid: d9c38a13-191d-472d-aa2b-f61a6459d16c
ms.openlocfilehash: 02ace9096754548a6629d1a5b5a71060a847da06
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241872"
---
# <a name="compiler-error-c3196"></a>Errore del compilatore C3196

' keyword ': usato più di una volta

Una parola chiave è stata usata più di una volta.

L'esempio seguente genera l'C3196:

```cpp
// C3196.cpp
// compile with: /clr
ref struct R abstract abstract {};   // C3196
ref struct S abstract {};   // OK
```
