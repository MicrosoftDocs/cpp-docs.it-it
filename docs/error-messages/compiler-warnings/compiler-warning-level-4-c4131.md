---
title: Compilatore avviso (livello 4) C4131 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4131
dev_langs:
- C++
helpviewer_keywords:
- C4131
ms.assetid: 7903b3e1-454f-4be2-aa9b-230992f96a2d
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
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: abe0127ba906fc52adf66b32e8530d60c9a08b2b
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-4-c4131"></a>Avviso del compilatore (livello 4) C4131
'function': utilizza un dichiaratore obsoleto  
  
 La dichiarazione di funzione specificata non è nella forma prototipo.  
  
 Le dichiarazioni di funzione obsolete devono essere convertite nella forma prototipo.  
  
 L'esempio seguente illustra una dichiarazione di funzione obsoleta:  
  
```  
// C4131.c  
// compile with: /W4 /c  
void addrec( name, id ) // C4131 expected  
char *name;  
int id;  
{ }  
```  
  
 L'esempio seguente illustra un formato prototipo:  
  
```  
void addrec( char *name, int id )  
{ }  
```
