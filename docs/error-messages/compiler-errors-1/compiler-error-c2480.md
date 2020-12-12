---
description: 'Altre informazioni su: errore del compilatore C2480'
title: Errore del compilatore C2480
ms.date: 11/04/2016
f1_keywords:
- C2480
helpviewer_keywords:
- C2480
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
ms.openlocfilehash: 0c7f73b7e1aa205d38577602b93907309935b216
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316544"
---
# <a name="compiler-error-c2480"></a>Errore del compilatore C2480

' Identifier ':' thread ' è valido solo per gli elementi di dati con estensione statica

Non è possibile usare l' `thread` attributo con una variabile automatica, un membro dati non statico, un parametro di funzione o una dichiarazione di funzione o definizioni.

Usare l' `thread` attributo per variabili globali, membri dati statici e solo variabili statiche locali.

L'esempio seguente genera l'C2480:

```cpp
// C2480.cpp
// compile with: /c
__declspec( thread ) void func();   // C2480
__declspec( thread ) static int i;   // OK
```
