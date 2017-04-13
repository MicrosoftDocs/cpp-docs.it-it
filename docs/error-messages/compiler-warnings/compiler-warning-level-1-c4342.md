---
title: Compilatore avviso (livello 1) C4342 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4342
dev_langs:
- C++
helpviewer_keywords:
- C4342
ms.assetid: 47d4d5ab-069f-4cdc-98c3-10d649577a37
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
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: c4a2afbc3ced186b0db63b22b3cc5c2b27204c71
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4342"></a>Avviso del compilatore (livello 1) C4342
modifica del comportamento: '*funzione*' chiamato, ma in versioni precedenti è stato chiamato un operatore membro  
  
 Nelle versioni di Visual C++ 2002 di Visual Studio prima di, è stato chiamato un membro, ma questo comportamento è stato modificato e il compilatore ora rileva la migliore corrispondenza nell'ambito dello spazio dei nomi.  
  
 Se è stato trovato un operatore membro, il compilatore in precedenza non considerare qualsiasi spazio dei nomi degli operatori di ambito. Se è presente una corrispondenza migliore nell'ambito dello spazio dei nomi, il compilatore corrente chiama correttamente, mentre non viene considerano compilatori precedenti.  
  
 Dopo aver aggiornato il codice per la versione corrente, è necessario disabilitare questo avviso.  Il compilatore può generare falsi positivi, la generazione di questo avviso per il codice in cui è presente alcuna modifica del comportamento.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per ulteriori informazioni, vedere [gli avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 L'esempio seguente genera l'errore C4342:  
  
```cpp  
// C4342.cpp  
// compile with: /EHsc /W1  
#include <fstream>  
#pragma warning(default: 4342)  
using namespace std;  
struct X : public ofstream {  
   X();  
};  
  
X::X() {  
   open( "ofs_bug_ev.txt." );  
   if ( is_open() ) {  
      *this << "Text" << "<-should be text" << endl;   // C4342  
      *this << ' ' << "<-should be space symbol" << endl;   // C4342  
   }  
}  
  
int main() {  
   X b;  
   b << "Text" << "<-should be text" << endl;  
   b << ' ' << "<-should be space symbol" << endl;  
}  
```
