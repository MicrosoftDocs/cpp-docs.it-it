---
description: 'Altre informazioni su: errore del compilatore C2130'
title: Errore del compilatore C2130
ms.date: 11/04/2016
f1_keywords:
- C2130
helpviewer_keywords:
- C2130
ms.assetid: c6fd5a7e-8f28-4f67-99d1-95a13b0dff90
ms.openlocfilehash: 78e7b756d5902562c6093e3f26f9934e87e732ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323181"
---
# <a name="compiler-error-c2130"></a>Errore del compilatore C2130

\#per la riga è prevista una stringa contenente il nome file. trovato ' token '

Il token del nome file facoltativo che segue [#line](../../preprocessor/hash-line-directive-c-cpp.md) `linenumber` deve essere una stringa.

L'esempio seguente genera l'errore C2130:

```cpp
// C2130.cpp
int main() {
   #line 1000 test   // C2130
   #line 1000 "test"   // OK
}
```
