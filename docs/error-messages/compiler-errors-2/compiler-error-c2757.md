---
title: Errore del compilatore C2757 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2757
dev_langs:
- C++
helpviewer_keywords:
- C2757
ms.assetid: 421f102f-8a32-4d47-a109-811ddf2c909d
caps.latest.revision: 9
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
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 993b67c619cd56e4245b0195e1f8446577b7ecc8
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2757"></a>Errore del compilatore C2757
'simbolo': un simbolo con questo nome esiste già e pertanto questo nome non può essere utilizzato come nome dello spazio dei nomi  
  
 Un simbolo utilizzato nella compilazione corrente come un identificatore dello spazio dei nomi è già in uso in un assembly di riferimento.  
  
 Nell'esempio seguente viene generato l'errore C2757:  
  
```  
// C2757a.cpp  
// compile with: /clr /LD  
public ref class Nes {};  
```  
  
 E quindi,  
  
```  
// C2757b.cpp  
// compile with: /clr /c  
#using <C2757a.dll>  
  
namespace Nes {    // C2757  
// try the following line instead  
// namespace Nes2 {  
   public ref class X {};  
}  
```  

