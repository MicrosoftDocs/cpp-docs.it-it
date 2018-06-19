---
title: Errore dell'analizzatore di espressioni CXX0064 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0064
dev_langs:
- C++
helpviewer_keywords:
- CAN0064
- CXX0064
ms.assetid: aa509e71-0616-41ca-a94e-6c376b041e57
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7964eac628fa89695d1757cff8b7b329fd7fe713
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33302136"
---
# <a name="expression-evaluator-error-cxx0064"></a>Errore dell‘analizzatore di espressioni CXX0064
non è possibile impostare un punto di interruzione nella funzione membro virtuale associata  
  
 Un punto di interruzione è stato impostato su una funzione membro virtuale mediante un puntatore a un oggetto, ad esempio:  
  
```  
pClass->vfunc( int );  
```  
  
 Immettendo la classe, ad esempio, è possibile impostare un punto di interruzione su una funzione virtuale:  
  
```  
Class::vfunc( int );  
```  
  
 Questo errore è identico all'errore CAN0064.