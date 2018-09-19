---
title: Errore del compilatore C3809 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3809
dev_langs:
- C++
helpviewer_keywords:
- C3809
ms.assetid: 37eca584-c20c-464e-8e45-a987214b7ce4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b99cda2ab1790ce63ecbd0f6c5a3dc4d916d34c9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46104218"
---
# <a name="compiler-error-c3809"></a>Errore del compilatore C3809

'class': un tipo gestito o WinRT non può avere funzioni, classi o interfacce friend

I tipi gestiti e i tipi Windows Runtime non consentano elementi friend. Per correggere l'errore, non dichiarare elementi friend nei tipi gestiti o Windows Runtime.

L'esempio seguente genera l'errore C3809:

```
// C3809a.cpp
// compile with: /clr
ref class A {};

ref class B
{
public:
   friend ref class A;   // C3809
};

int main()
{
}
```