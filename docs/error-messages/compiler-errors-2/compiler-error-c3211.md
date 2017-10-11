---
title: Errore del compilatore C3211 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3211
dev_langs:
- C++
helpviewer_keywords:
- C3211
ms.assetid: 85e33fed-3b59-4315-97e6-20d31c6a985a
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 2f308f3a0be65175a62c53e3dd395b2e3b2984a6
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3211"></a>Errore del compilatore C3211
'explicit specialization': la specializzazione esplicita utilizza una sintassi di specializzazione parziale. Utilizzare invece il modello <>  
  
 Una specializzazione esplicita non è stata creata nel formato corretto.  
  
 L'esempio seguente genera l'errore C3211:  
  
```  
// C3211.cpp  
// compile with: /LD  
template<class T>  
struct s;  
  
template<class T>  
// use the following line instead  
// template<>  
struct s<int>{};   // C3211  
```
