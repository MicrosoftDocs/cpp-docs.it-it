---
title: Compilatore avviso (livello 1) C4806 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4806
dev_langs:
- C++
helpviewer_keywords:
- C4806
ms.assetid: 79eb74cd-b925-4b5b-84e1-8ae6f33e38b3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b580500c3887fe60b7864280ad5ca1804752f2ae
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062605"
---
# <a name="compiler-warning-level-1-c4806"></a>Avviso del compilatore (livello 1) C4806

'operation': operazione non affidabile: nessun valore di tipo 'type' promosso al tipo 'type' può eguagliare la costante data

Questo messaggio fornisce un avviso su codice come `b == 3`, dove `b` è di tipo `bool`. Le regole di promozione causano la promozione di `bool` a `int`. Tale operazione è valida, ma non può mai essere **true**. L'esempio seguente genera l'errore C4806:

```
// C4806.cpp
// compile with: /W1
int main()
{
   bool b = true;
   // try..
   // int b = true;

   if (b == 3)   // C4806
   {
      b = false;
   }
}
```