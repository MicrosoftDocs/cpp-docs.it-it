---
title: Compilatore avviso (livello 1) C4342 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4342
dev_langs:
- C++
helpviewer_keywords:
- C4342
ms.assetid: 47d4d5ab-069f-4cdc-98c3-10d649577a37
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7d2a3550a3d1b7333412b7828809120db89c60b2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4342"></a>Avviso del compilatore (livello 1) C4342
modifica del comportamento: '*funzione*' chiamato, ma in versioni precedenti è stato chiamato un operatore membro  
  
 Nelle versioni di Visual C++ 2002 di Visual Studio prima di, è stato chiamato un membro, ma questo comportamento è stato modificato e il compilatore ora rileva la migliore corrispondenza nell'ambito dello spazio dei nomi.  
  
 Se è stato trovato un operatore membro, il compilatore in precedenza non considerare qualsiasi spazio dei nomi degli operatori di ambito. Se è presente una corrispondenza migliore nell'ambito dello spazio dei nomi, il compilatore corrente chiama correttamente, mentre non viene considerano compilatori precedenti.  
  
 Dopo aver aggiornato il codice per la versione corrente, è necessario disabilitare questo avviso.  Il compilatore può generare falsi positivi, la generazione di questo avviso per il codice in cui è presente alcuna modifica del comportamento.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
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