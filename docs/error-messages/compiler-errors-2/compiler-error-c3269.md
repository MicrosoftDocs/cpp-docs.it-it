---
title: Errore del compilatore C3269
ms.date: 11/04/2016
f1_keywords:
- C3269
helpviewer_keywords:
- C3269
ms.assetid: c575f067-244d-4dd5-bf58-9e7630ea58b7
ms.openlocfilehash: 95f71c9312faaf5c14bd8990898257002c528c0e
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754017"
---
# <a name="compiler-error-c3269"></a>Errore del compilatore C3269

' Function ': una funzione membro di un oggetto gestito o WinRTtype non può essere dichiarata con '.. .'

Le funzioni membro delle classi gestite e WinRT non possono dichiarare elenchi di parametri a lunghezza variabile.

L'esempio seguente genera l'errore C3269 e mostra come risolverlo:

```cpp
// C3269_2.cpp
// compile with: /clr

ref struct A
{
   void func(int i, ...)   // C3269
   // try the following line instead
   // void func(int i )
   {
   }
};

int main()
{
}
```
