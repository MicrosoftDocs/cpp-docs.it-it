---
title: Errore del compilatore C2844 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2844
dev_langs:
- C++
helpviewer_keywords:
- C2844
ms.assetid: dcaf4cd2-21b0-4280-ae42-0a706c524d83
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: c6bfb80408e058d22977ff068c9a0c21d5353a90
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2844"></a>Errore del compilatore C2844
'membro': non può essere un membro di interfaccia 'interfaccia'  
  
 Un [classe interfaccia](../../windows/interface-class-cpp-component-extensions.md) non può contenere un membro dati, a meno che non sia anche una proprietà.  
  
 Diverso da una proprietà o una funzione membro non è consentita in un'interfaccia. Inoltre, non sono consentiti costruttori, distruttori e operatori.  
  
 Nell'esempio seguente viene generato l'errore C2844:  
  
```  
// C2844a.cpp  
// compile with: /clr /c  
public interface class IFace {  
   int i;   // C2844  
   // try the following line instead  
   // property int Size;  
};  
```  

