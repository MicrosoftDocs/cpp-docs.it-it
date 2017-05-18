---
title: Errore del compilatore C2165 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2165
dev_langs:
- C++
helpviewer_keywords:
- C2165
ms.assetid: b108313b-b8cb-4dce-b2ec-f2b31c9cdc87
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
ms.openlocfilehash: ee59793f6101f8afa6b55ddaf7d860487c99fc34
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2165"></a>Errore del compilatore C2165
'keyword': impossibile modificare i puntatori ai dati  
  
 La parola chiave `__stdcall`, `__cdecl`o `__fastcall` tenta di modificare un puntatore dati.  
  
 L'esempio seguente genera l'errore C2165:  
  
```  
// C2165.cpp  
// compile with: /c  
char __cdecl *p;   // C2165  
char *p;   // OK  
```
