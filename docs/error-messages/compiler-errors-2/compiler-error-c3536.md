---
title: Errore del compilatore C3536 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3536
dev_langs:
- C++
helpviewer_keywords:
- C3536
ms.assetid: 8d866075-866b-49eb-9979-ee27b308f7e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7585a75ebe9733c228756e92d8e5ae57699aca27
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46088579"
---
# <a name="compiler-error-c3536"></a>Errore del compilatore C3536

'symbol': non è possibile usare prima che venga inizializzata

Impossibile utilizzare il simbolo indicato prima che venga inizializzata. In pratica, ciò significa che una variabile non può essere usata per inizializzare se stessa.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non si Inizializza una variabile con se stesso.

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3536 perché ogni variabile viene inizializzata con se stesso.

```
// C3536.cpp
// Compile with /Zc:auto
int main()
{
   auto a = a;     //C3536
   auto b = &b;    //C3536
   auto c = c + 1; //C3536
   auto* d = &d;   //C3536
   auto& e = e;    //C3536
   return 0;
};
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)