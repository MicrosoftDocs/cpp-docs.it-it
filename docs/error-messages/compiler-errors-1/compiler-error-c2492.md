---
title: Errore del compilatore C2492
ms.date: 11/04/2016
f1_keywords:
- C2492
helpviewer_keywords:
- C2492
ms.assetid: 8c44c9bb-c366-4fe5-a0ab-882e38608aaa
ms.openlocfilehash: e2b08ef3e46681147c4efd77cbffadb096bbfc16
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62360710"
---
# <a name="compiler-error-c2492"></a>Errore del compilatore C2492

«*variabile*': i dati con durata di archiviazione del thread potrebbero non avere un'interfaccia dll

La variabile viene dichiarata con la [thread](../../cpp/thread.md) attributo e con la DLL dell'interfaccia. L'indirizzo del `thread` variabile non è noto fino alla fase di esecuzione, pertanto, non può essere collegata a un'importazione di file DLL o un'esportazione.

L'esempio seguente genera l'errore C2492:

```
// C2492.cpp
// compile with: /c
class C {
public:
   char   ch;
};

__declspec(dllexport) __declspec(thread) C c_1;   // C2492
__declspec(thread) C c_1;   // OK
```