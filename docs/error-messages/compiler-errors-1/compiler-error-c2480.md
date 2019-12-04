---
title: Errore del compilatore C2480
ms.date: 11/04/2016
f1_keywords:
- C2480
helpviewer_keywords:
- C2480
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
ms.openlocfilehash: 3e495a8019405a558511637467133877dae1183e
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74743523"
---
# <a name="compiler-error-c2480"></a>Errore del compilatore C2480

' Identifier ':' thread ' è valido solo per gli elementi di dati con estensione statica

Non è possibile usare l'attributo `thread` con una variabile automatica, un membro dati non statico, un parametro di funzione o dichiarazioni o definizioni di funzione.

Usare l'attributo `thread` per variabili globali, membri dati statici e solo variabili statiche locali.

L'esempio seguente genera l'C2480:

```cpp
// C2480.cpp
// compile with: /c
__declspec( thread ) void func();   // C2480
__declspec( thread ) static int i;   // OK
```
