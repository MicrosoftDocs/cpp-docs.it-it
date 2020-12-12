---
description: 'Altre informazioni su: errore del compilatore C3269'
title: Errore del compilatore C3269
ms.date: 11/04/2016
f1_keywords:
- C3269
helpviewer_keywords:
- C3269
ms.assetid: c575f067-244d-4dd5-bf58-9e7630ea58b7
ms.openlocfilehash: 041a0af061e4ddd1a691c396cdd15e86085124c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113700"
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
