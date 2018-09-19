---
title: Compilatore avviso (livello 1) C4526 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4526
dev_langs:
- C++
helpviewer_keywords:
- C4526
ms.assetid: 490f8916-5fdc-4cad-b412-76c3382a5976
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2ed6f2da3252c27b7a84b4d5b73f7e8ba52823dd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46118505"
---
# <a name="compiler-warning-level-1-c4526"></a>Avviso del compilatore (livello 1) C4526

'function': funzione membro statica non è possibile eseguire l'override di funzioni virtuali ' function'override virtuale ignorata, funzione virtuale verrà nascosta

La funzione membro statica soddisfa i criteri per eseguire l'override della funzione virtuale, che rende la funzione membro virtuale sia statico.

Il codice seguente genera l'errore C4526:

```
// C4526.cpp
// compile with: /W1 /c
// C4526 expected
struct myStruct1 {
   virtual void __stdcall func( int ) = 0;
};

struct myStruct2: public myStruct1 {
   static void __stdcall func( int );
};
```

Di seguito sono indicate le possibili correzioni.

- Se la funzione è intenzionale per eseguire l'override della funzione di classe base virtuale, rimuovere l'identificatore statico.

- Se la funzione è stata pensata come una funzione membro statica, rinominarlo in modo che non entrino in conflitto con la funzione di classe base virtuale.