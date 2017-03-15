---
title: Errore del compilatore C2821 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2821
dev_langs:
- C++
helpviewer_keywords:
- C2821
ms.assetid: e8d71988-a968-4484-94db-e8c3bad74a4a
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 65e7a7bd56096fbeec61b651ab494d82edef9c90
ms.openlocfilehash: 5a8000d7867ec7a18730a5d95538f21ffb3a0b2e
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2821"></a>Errore del compilatore C2821
il primo parametro formale di 'operator new' deve essere 'unsigned int'  
  
Il primo parametro formale di [operatore new](../../standard-library/new-operators.md#operator_new) deve essere un unsigned `int`.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2821:  
  
```cpp  
// C2821.cpp  
// compile with: /c  
void * operator new( /* unsigned int,*/ void * );   // C2821  
void * operator new( unsigned int, void * );  
```
