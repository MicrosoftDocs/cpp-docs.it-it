---
title: Compilatore avviso (livello 1) C4097 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4097
dev_langs:
- C++
helpviewer_keywords:
- C4097
ms.assetid: 2525be51-fac2-43b2-b57c-3bbf1a2268f7
caps.latest.revision: 6
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
ms.openlocfilehash: 465cd639fb4be9089647f079df2728f6da0c18de
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4097"></a>Avviso del compilatore (livello 1) C4097
parametro pragma previsto: 'restore' o 'off'  
  
 A un pragma è stato passato un valore non valido.  
  
 L'esempio seguente genera l'errore C4097:  
  
```  
// C4097.cpp  
// compile with: /W1  
#pragma runtime_checks("",test)   // C4097  
// try the following line instead  
// #pragma runtime_checks("",off)  
  
int main() {  
}  
```
