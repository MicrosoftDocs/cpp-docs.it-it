---
title: Errore del compilatore C3633 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3633
dev_langs: C++
helpviewer_keywords: C3633
ms.assetid: 7d65babf-2191-4d67-a69f-f5c4c2ddf946
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6b88a5008b0703f99d7eefa3892b4ee263fea9d4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3633"></a>Errore del compilatore C3633
Impossibile definire 'membro' come membro di 'type' gestito  
  
Membri dati della classe di riferimento CLR non possono essere di un tipo non POD C++.  È possibile creare solo un'istanza di un tipo POD nativo in un tipo CLR.  Ad esempio, un tipo POD non può contenere un costruttore di copia o un operatore di assegnazione.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C3633.  
  
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
