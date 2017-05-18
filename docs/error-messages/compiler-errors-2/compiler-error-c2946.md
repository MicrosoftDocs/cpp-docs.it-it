---
title: Errore del compilatore C2946 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2946
dev_langs:
- C++
helpviewer_keywords:
- C2946
ms.assetid: c86dfbfc-7702-4f09-8a53-d205710e99c2
caps.latest.revision: 7
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
ms.openlocfilehash: 151d69bc17ea52b0c6968933b3a50112c7800d2c
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2946"></a>Errore del compilatore C2946
creazione di un'istanza esplicita. 'class' non è una specializzazione della classe modello  
  
 Non è possibile creare un'istanza esplicita di una classe non basata su modello.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2946.  
  
```  
// C2946.cpp  
class C {};  
template C;  // C2946  
int main() {}  
```
