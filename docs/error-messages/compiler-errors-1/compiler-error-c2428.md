---
title: Errore del compilatore C2428 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2428
dev_langs: C++
helpviewer_keywords: C2428
ms.assetid: 74aa5714-e930-4f9e-9061-68ccce7f0d38
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 72153d758fe1c6e1204f38de6dcefa35cb5387ec
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2428"></a>Errore del compilatore C2428
'operation': non consentito su operando di tipo 'bool'  
  
 Non è possibile applicare un operatore di decremento a oggetti di tipo `bool`.  
  
 L'esempio seguente genera l'errore C2428:  
  
```  
// C2428.cpp  
void g(bool fFlag) {  
   --fFlag;   // C2428  
   fFlag--;   // C2428  
}  
```