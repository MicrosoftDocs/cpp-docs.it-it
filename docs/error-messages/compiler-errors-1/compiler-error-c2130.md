---
title: Errore del compilatore C2130
ms.date: 11/04/2016
f1_keywords:
- C2130
helpviewer_keywords:
- C2130
ms.assetid: c6fd5a7e-8f28-4f67-99d1-95a13b0dff90
ms.openlocfilehash: aee0931926cad2ac30631c152aeb94bfd24befd2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50579741"
---
# <a name="compiler-error-c2130"></a>Errore del compilatore C2130

\#riga prevista una stringa contenente il nome file. trovato 'token'

Il token del nome file facoltativo che segue [#line](../../preprocessor/hash-line-directive-c-cpp.md) `linenumber` deve essere una stringa.

L'esempio seguente genera l'errore C2130:

```
// C2130.cpp
int main() {
   #line 1000 test   // C2130
   #line 1000 "test"   // OK
}
```