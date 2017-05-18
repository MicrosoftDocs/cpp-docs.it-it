---
title: Errore del compilatore C3838 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3838
dev_langs:
- C++
helpviewer_keywords:
- C3838
ms.assetid: d6f470c2-131a-4a8c-843a-254acd43da83
caps.latest.revision: 10
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
ms.openlocfilehash: 92bdc3357a9fc05b1e34a9890d66ff98129718e0
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3838"></a>Errore del compilatore C3838
Impossibile ereditare da 'tipo'  
  
 Specificato `type` non può agire come classe base in qualsiasi classe.  
  
## <a name="example"></a>Esempio
 Nell'esempio seguente viene generato l'errore C3838:  
  
```  
// C3838a.cpp  
// compile with: /clr /c  
public ref class B : public System::Enum {};   // C3838  
```  

