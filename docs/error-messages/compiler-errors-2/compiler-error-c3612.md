---
title: Errore del compilatore C3612 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3612
dev_langs:
- C++
helpviewer_keywords:
- C3612
ms.assetid: aa6e3a2b-4afa-481c-98c1-1b6d1f82f869
caps.latest.revision: 11
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
ms.openlocfilehash: fa36c033cf311538e1d77ce37b2d3e4a3936b7d7
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3612"></a>Errore del compilatore C3612
'tipo': una classe sealed non può essere astratta  
  
Tipi definiti tramite `value` sono sealed per impostazione predefinita, e una classe è astratta, a meno che non implementa tutti i metodi di base. Una classe astratta sealed non può essere una classe di base né può essere creata.  
  
Per ulteriori informazioni, vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente viene generato l'errore C3612:  
  
```  
// C3612.cpp  
// compile with: /clr /c  
value struct V: public System::ICloneable {};   // C3612  
  
// OK  
value struct V2: public System::ICloneable {  
   Object^ Clone();  
};  
```
