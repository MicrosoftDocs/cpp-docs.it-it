---
title: Avviso del compilatore (livello 1) C4806
ms.date: 11/04/2016
f1_keywords:
- C4806
helpviewer_keywords:
- C4806
ms.assetid: 79eb74cd-b925-4b5b-84e1-8ae6f33e38b3
ms.openlocfilehash: b6fc5708d4e2f9982ceaab57260f13e134e4d247
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62406405"
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