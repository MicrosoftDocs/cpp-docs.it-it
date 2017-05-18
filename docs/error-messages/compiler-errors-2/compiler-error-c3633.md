---
title: Errore del compilatore C3633 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3633
dev_langs:
- C++
helpviewer_keywords:
- C3633
ms.assetid: 7d65babf-2191-4d67-a69f-f5c4c2ddf946
caps.latest.revision: 14
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
ms.openlocfilehash: 76b98ae31e8d8416360415fd5989975533d6fb66
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3633"></a>Errore del compilatore C3633
Impossibile definire 'membro' come membro di 'tipo' gestito  
  
Membri dati della classe di riferimento CLR non possono essere di tipo non POD C++.  È possibile creare solo un'istanza di un tipo POD nativo in un tipo CLR.  Ad esempio, un tipo POD non può contenere un costruttore di copia o un operatore di assegnazione.  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente viene generato l'errore C3633.  
  
```  
// C3633.cpp  
// compile with: /clr /c  
#pragma warning( disable : 4368 )  
  
class A1 {  
public:  
   A1() { II = 0; }  
   int II;  
};  
  
ref class B {  
public:  
   A1 a1;   // C3633  
   A1 * a2;   // OK  
   B() : a2( new A1 ) {}  
    ~B() { delete a2; }  
};  
```  

