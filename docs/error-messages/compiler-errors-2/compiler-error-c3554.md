---
title: Errore del compilatore C3554 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3554
dev_langs:
- C++
helpviewer_keywords:
- C3554
ms.assetid: aede18d5-fefc-4da9-9b69-adfe90bfa742
caps.latest.revision: 4
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 2a05ebf4333b1642aaedc5967b0bfd0979cbac21
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3554"></a>Errore del compilatore C3554
impossibile combinare 'decltype' con qualsiasi altro identificatore di tipo  
  
 Non è possibile qualificare la parola chiave `decltype()` con un identificatore di tipo. Ad esempio, il frammento di codice seguente genera l'errore C3554.  
  
```  
int x;  
unsigned decltype(x); // C3554  
```
