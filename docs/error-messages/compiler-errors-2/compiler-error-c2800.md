---
title: Errore del compilatore C2800 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2800
dev_langs:
- C++
helpviewer_keywords:
- C2800
ms.assetid: a2f1a590-9fe6-44cb-ad09-b4505ef47c6a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0f23c6a4d0a38b800db09125af2401237458a4fa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2800"></a>Errore del compilatore C2800
Impossibile eseguire l'overload di 'operator operator'  
  
 Impossibile eseguire l'overload di operatori seguenti: accesso a membro di classe (`.`), puntatore a membro (`.*`), risoluzione ambito (`::`), espressione condizionale (`? :`), e `sizeof`.  
  
 L'esempio seguente genera l'errore C2800:  
  
```  
// C2800.cpp  
// compile with: /c  
class C {  
   operator:: ();   // C2800  
};  
```