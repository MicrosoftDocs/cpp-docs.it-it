---
description: 'Altre informazioni su: errore del compilatore C2758'
title: Errore del compilatore C2758
ms.date: 11/04/2016
f1_keywords:
- C2758
helpviewer_keywords:
- C2758
ms.assetid: 1d273034-194c-4926-9869-142d1b219cbe
ms.openlocfilehash: 28ca42a5dc62ad17fef59ca129092f791a12a39f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336176"
---
# <a name="compiler-error-c2758"></a>Errore del compilatore C2758

'member': un membro di tipo di riferimento deve essere inizializzato

L'errore del compilatore C2758 si verifica quando il costruttore non inizializza un membro del tipo riferimento in un elenco di inizializzatori. Il compilatore lascia il membro non definito. È necessario che le variabili del membro di riferimento siano inizializzate quando vengono dichiarate o che ricevano un valore nell'elenco di inizializzazione del costruttore.

L'esempio seguente genera l'errore C2758:

```cpp
// C2758.cpp
// Compile by using: cl /W3 /c C2758.cpp
struct A {
   const int i;

   A(int n) { };   // C2758
   // try the following line instead
   // A(int n) : i{n} {};
};
```
