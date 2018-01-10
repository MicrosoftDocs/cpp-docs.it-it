---
title: Errore del compilatore C2728 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2728
dev_langs: C++
helpviewer_keywords: C2728
ms.assetid: 65635f91-1cd1-46e4-9ad7-14726d0546af
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4574d3ffe02ea019a758f5b776279ea042e64697
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2728"></a>Errore del compilatore C2728
'type': una matrice nativa non può contenere questo tipo  
  
 La sintassi di creazione della matrice è stata usata per creare una matrice di oggetti gestiti o WinRT. Non è possibile creare una matrice di oggetti gestiti o WinRT usando la sintassi di matrice nativa.  
  
 Per altre informazioni, vedere [matrice](../../windows/arrays-cpp-component-extensions.md).  
  
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
