---
title: Errore del compilatore C2492
ms.date: 11/04/2016
f1_keywords:
- C2492
helpviewer_keywords:
- C2492
ms.assetid: 8c44c9bb-c366-4fe5-a0ab-882e38608aaa
ms.openlocfilehash: fd52b434f86bdc93124c6005bbf7fadad3cb56b2
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757059"
---
# <a name="compiler-error-c2492"></a>Errore del compilatore C2492

'*Variable*': i dati con durata di archiviazione del thread non possono avere l'interfaccia dll

La variabile viene dichiarata con l'attributo [thread](../../cpp/thread.md) e con l'interfaccia dll. L'indirizzo della variabile `thread` non è noto fino alla fase di esecuzione, pertanto non può essere collegato a un'importazione o un'esportazione DLL.

L'esempio seguente genera l'C2492:

```cpp
// C2492.cpp
// compile with: /c
class C {
public:
   char   ch;
};

__declspec(dllexport) __declspec(thread) C c_1;   // C2492
__declspec(thread) C c_1;   // OK
```
