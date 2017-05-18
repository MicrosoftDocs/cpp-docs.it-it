---
title: Errore del compilatore C2728 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2728
dev_langs:
- C++
helpviewer_keywords:
- C2728
ms.assetid: 65635f91-1cd1-46e4-9ad7-14726d0546af
caps.latest.revision: 17
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 4e28f463dffeda0bc1b44da4d4e228771f59cc4c
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2728"></a>Errore del compilatore C2728
'type': una matrice nativa non può contenere questo tipo  
  
 La sintassi di creazione della matrice è stata usata per creare una matrice di oggetti gestiti o WinRT. Non è possibile creare una matrice di oggetti gestiti o WinRT usando la sintassi di matrice nativa.  
  
 Per ulteriori informazioni, vedere [matrice](../../windows/arrays-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C2728 e mostra come risolverlo:  
  
```  
// C2728.cpp  
// compile with: /clr  
  
int main() {  
   int^ arr[5];   // C2728  
  
   // try the following line instead  
   array<int>^arr2;  
}  
```  

