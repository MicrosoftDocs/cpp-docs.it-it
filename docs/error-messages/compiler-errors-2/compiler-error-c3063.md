---
title: Errore del compilatore C3063 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3063
dev_langs:
- C++
helpviewer_keywords:
- C3063
ms.assetid: 0ecf6f1f-e4a7-487a-9fd5-79d8ac470001
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9adea484416b85f027693b59acb343d4ca19cf6e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46021642"
---
# <a name="compiler-error-c3063"></a>Errore del compilatore C3063

l'operatore 'operator': tutti gli operandi devono avere lo stesso tipo di enumerazione

Quando si usano gli operatori sugli enumeratori, entrambi gli operandi devono essere del tipo di enumerazione. Per altre informazioni, vedere [procedura: definire e usare enumerazioni in c++ /CLI CLI](../../dotnet/how-to-define-and-consume-enums-in-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3063 e Mostra come risolverlo:

```
// C3063.cpp
// compile with: /clr
enum class E { a, b } e, mask;
int main() {
   if ( ( e & mask ) != 0 ) ;   // C3063 no operator!= (E, int)

   if ( ( e & mask ) != E() )   // OK
      ;
}
```