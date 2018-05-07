---
title: Errore del compilatore C2758 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2758
dev_langs:
- C++
helpviewer_keywords:
- C2758
ms.assetid: 1d273034-194c-4926-9869-142d1b219cbe
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 34cce7840f888a4377440299a4dc5ac38ee6a1d5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2758"></a>Errore del compilatore C2758
'member': un membro di tipo di riferimento deve essere inizializzato  
  
 L'errore del compilatore C2758 si verifica quando il costruttore non inizializza un membro del tipo riferimento in un elenco di inizializzatori. Il compilatore lascia il membro non definito. È necessario che le variabili del membro di riferimento siano inizializzate quando vengono dichiarate o che ricevano un valore nell'elenco di inizializzazione del costruttore.  
  
 L'esempio seguente genera l'errore C2758:  
  
```  
// C2758.cpp  
// Compile by using: cl /W3 /c C2758.cpp  
struct A {  
   const int i;  
  
   A(int n) { };   // C2758  
   // try the following line instead  
   // A(int n) : i{n} {};  
};  
```