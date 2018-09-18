---
title: Errore del compilatore C3269 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3269
dev_langs:
- C++
helpviewer_keywords:
- C3269
ms.assetid: c575f067-244d-4dd5-bf58-9e7630ea58b7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 84cb9acdd6444b934e7ec51691d87a6912880de2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46061812"
---
# <a name="compiler-error-c3269"></a>Errore del compilatore C3269

'function': una funzione membro di un oggetto gestito o WinRTtype non può essere dichiarata con '.'

Le funzioni membro delle classi gestite e WinRT non possono dichiarare elenchi di parametri a lunghezza variabile.

L'esempio seguente genera l'errore C3269 e mostra come risolverlo:

```
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
