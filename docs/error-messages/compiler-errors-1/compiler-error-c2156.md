---
title: Errore del compilatore C2156 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2156
dev_langs:
- C++
helpviewer_keywords:
- C2156
ms.assetid: 136f9c67-2c27-4f61-b7e6-ccd202eca697
caps.latest.revision: 8
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
ms.openlocfilehash: 1a9c36e0465d0a32eeb85e10e283c37dce659e2d
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2156"></a>Errore del compilatore C2156
pragma deve trovarsi all'esterno della funzione  
  
 Un pragma che deve essere specificato a livello globale (all'esterno del corpo di una funzione) si trova all'interno di una funzione.  
  
 L'esempio seguente genera l'errore C2156:  
  
```  
// C2156.cpp  
#pragma optimize( "l", on )   // OK  
int main() {  
   #pragma optimize( "l", on )   // C2156  
}  
```
