---
title: Errore del compilatore C3320 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3320
dev_langs: C++
helpviewer_keywords: C3320
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: fbc375682bb42070d49dd08b711926462c17f32b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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