---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4806'
title: Avviso del compilatore (livello 1) C4806
ms.date: 11/04/2016
f1_keywords:
- C4806
helpviewer_keywords:
- C4806
ms.assetid: 79eb74cd-b925-4b5b-84e1-8ae6f33e38b3
ms.openlocfilehash: 3e4aaa67c2a979afde2d1a7643d0c5ab1b879418
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97238245"
---
# <a name="compiler-warning-level-1-c4806"></a>Avviso del compilatore (livello 1) C4806

'operation': operazione non affidabile: nessun valore di tipo 'type' promosso al tipo 'type' può eguagliare la costante data

Questo messaggio genera un avviso sul codice, ad esempio `b == 3` , dove `b` è di tipo **`bool`** . Le regole di innalzamento di pagina provocano la promozione di **`bool`** a **`int`** . Questa operazione è valida, ma non può mai essere **`true`** . L'esempio seguente genera l'errore C4806:

```cpp
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
