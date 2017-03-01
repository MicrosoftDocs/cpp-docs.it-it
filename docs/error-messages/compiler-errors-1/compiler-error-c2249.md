---
title: Errore del compilatore C2249 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2249
dev_langs:
- C++
helpviewer_keywords:
- C2249
ms.assetid: bdd6697c-e04b-49b9-8e40-d9eb6d74f2b6
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
translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 043c28c9fa11dc28425c58aea2efc6a2cefe4065
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2249"></a>Errore del compilatore C2249
'membro': nessun percorso accessibile per accedere a un membro dichiarato nella base virtuale 'classe'  
  
 Il `member` viene ereditato da un non pubblico `virtual` struttura o classe di base.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2249.  
  
```  
// C2249.cpp  
class A {  
private:  
   void privFunc( void ) {};  
public:  
   void pubFunc( void ) {};  
};  
  
class B : virtual public A {} b;  
  
int main() {  
   b.privFunc();    // C2249, private member of A  
   b.pubFunc();    // OK  
}  
```  
  
## <a name="example"></a>Esempio  
 C2249 può inoltre verificarsi se si tenta di assegnare un flusso dalla libreria C++ Standard in un altro flusso.  Nell'esempio seguente viene generato l'errore C2249.  
  
```  
// C2249_2.cpp  
#include <iostream>  
using namespace std;  
int main() {  
   cout = cerr;   // C2249  
   #define cout cerr;   // OK  
}  
```
