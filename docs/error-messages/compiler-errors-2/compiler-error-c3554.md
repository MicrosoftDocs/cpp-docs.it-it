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
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 29fdf7dacbc24f136d24b283c787d40891969678
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3554"></a>Errore del compilatore C3554
impossibile combinare 'decltype' con qualsiasi altro identificatore di tipo  
  
 Non è possibile qualificare la parola chiave `decltype()` con un identificatore di tipo. Ad esempio, il frammento di codice seguente genera l'errore C3554.  
  
```  
int x;  
unsigned decltype(x); // C3554  
```
