---
title: Errore del compilatore C3320 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3320
dev_langs:
- C++
helpviewer_keywords:
- C3320
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c729bf63fae7a7181496e1901dda1d8ac5bdfa50
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3320"></a>Errore del compilatore C3320
'type': il nome del tipo non può essere uguale alla proprietà 'name' del modulo  
  
Un esportato-tipo definito dall'utente (UDT), che può essere una struttura, classe, enum o unione, non può avere lo stesso nome del parametro passato per il [modulo](../../windows/module-cpp.md) proprietà name dell'attributo.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C3320:  
  
```cpp  
// C3320.cpp  
#include "unknwn.h"  
[module(name="xx")];  
  
[export] struct xx {   // C3320  
// Try the following line instead  
// [export] struct yy {  
   int i;  
};  
```