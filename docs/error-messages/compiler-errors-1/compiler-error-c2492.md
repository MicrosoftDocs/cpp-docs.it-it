---
description: 'Altre informazioni su: errore del compilatore C2492'
title: Errore del compilatore C2492
ms.date: 11/04/2016
f1_keywords:
- C2492
helpviewer_keywords:
- C2492
ms.assetid: 8c44c9bb-c366-4fe5-a0ab-882e38608aaa
ms.openlocfilehash: ef31b2136a2cfc0422832899dba14ffb3108d965
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283674"
---
# <a name="compiler-error-c2492"></a>Errore del compilatore C2492

'*Variable*': i dati con durata di archiviazione del thread non possono avere l'interfaccia dll

La variabile viene dichiarata con l'attributo [thread](../../cpp/thread.md) e con l'interfaccia dll. L'indirizzo della `thread` variabile non è noto fino alla fase di esecuzione, pertanto non può essere collegato a un'importazione o esportazione della dll.

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
