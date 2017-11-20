---
title: Errore del compilatore C2258 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2258
dev_langs: C++
helpviewer_keywords: C2258
ms.assetid: 105eaa87-befb-4ecb-9a3f-e09e14d2f5bf
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 86b4d96da58b33a62baf2f2587146563a4f0ed55
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2258"></a>Errore del compilatore C2258
sintassi pure non valida. Deve essere '= 0'.  
  
 Una funzione virtuale pura è stata dichiarata con una sintassi non corretta.  
  
 L'esempio seguente genera l'errore C2258:  
  
```  
// C2258.cpp  
// compile with: /c  
class A {  
public:  
   void virtual func1() = 1; // C2258  
   void virtual func2() = 0;   // OK  
};  
```