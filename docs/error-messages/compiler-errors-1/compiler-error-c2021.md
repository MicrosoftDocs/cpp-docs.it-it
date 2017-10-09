---
title: Errore del compilatore C2021 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2021
dev_langs:
- C++
helpviewer_keywords:
- C2021
ms.assetid: 064f32e2-3794-48d5-9767-991003dcb36a
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: d87775cb88579cae93e4de208b1386ab067a07b8
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2021"></a>Errore del compilatore C2021
previsto valore esponente. Trovato 'character'  
  
 Carattere usato come esponente di una costante a virgola mobile non è un numero valido. Assicurarsi di utilizzare un esponente è compreso nell'intervallo.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2021:  
  
```  
// C2021.cpp  
float test1=1.175494351E;   // C2021  
```  
  
## <a name="example"></a>Esempio  
 Possibile soluzione:  
  
```  
// C2021b.cpp  
// compile with: /c  
float test2=1.175494351E8;  
```
