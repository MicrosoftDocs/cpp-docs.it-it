---
title: Errore del compilatore C3222 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3222
dev_langs:
- C++
helpviewer_keywords:
- C3222
ms.assetid: 5624bde8-2fd0-4b8b-92ce-5dfbaf91cf93
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
ms.openlocfilehash: bd1058f4e33bc70c9021bfb1ceff78af58d09552
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3222"></a>Errore del compilatore C3222
'parameter': impossibile dichiarare argomenti predefiniti per funzioni membro di un tipo gestito o WinRT o funzioni generiche  
  
Non è consentito dichiarare un parametro di metodo con un argomento predefinito. Un overload del metodo è un modo per ovviare al problema, vale a dire, definire un metodo con lo stesso nome senza parametri e quindi inizializzare la variabile nel corpo del metodo.  
  
L'esempio seguente genera l'errore C3222:  
  
```  
// C3222_2.cpp  
// compile with: /clr  
public ref class G {  
   void f( int n = 0 );   // C3222  
};  
```  

