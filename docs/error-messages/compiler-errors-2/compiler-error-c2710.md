---
title: Errore del compilatore C2710 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2710
dev_langs: C++
helpviewer_keywords: C2710
ms.assetid: a2a6bb5b-86ad-4a6c-acd0-e2bef8464e0e
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 818573ae74f33d10b3a27e815771e3212135bdcf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2710"></a>Errore del compilatore C2710
'construct': '__declspec(modifier)' può essere applicato solo a una funzione che restituisce un puntatore  
  
 Una funzione il cui valore restituito è un puntatore è l'unico costrutto a cui `modifier` può essere applicato.  
  
 L'esempio seguente genera l'errore C2710:  
  
```  
// C2710.cpp  
__declspec(restrict) void f();   // C2710  
// try the following line instead  
__declspec(restrict) int * g();  
```