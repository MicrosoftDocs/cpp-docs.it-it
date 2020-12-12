---
description: 'Altre informazioni su: errore del compilatore C2957'
title: Errore del compilatore C2957
ms.date: 11/04/2016
f1_keywords:
- C2957
helpviewer_keywords:
- C2957
ms.assetid: 9cb4526f-4af8-47e9-b786-56192627ca72
ms.openlocfilehash: 7d5539f43651feb930b3eb0f81677aaed0fa6b4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210582"
---
# <a name="compiler-error-c2957"></a>Errore del compilatore C2957

'delim': delimitatore sinistro non valido: previsto '<'

Una classe generica non è stata creata nel formato corretto.

L'esempio seguente genera l'errore C2957:

```cpp
// C2957.cpp
// compile with: /clr /LD
generic << class T>   // C2957
// try the following line instead
// generic < class T>
gc class C {};
```
