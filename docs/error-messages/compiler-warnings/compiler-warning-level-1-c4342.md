---
title: "Avviso del compilatore (livello 1) C4342 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4342"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4342"
ms.assetid: 47d4d5ab-069f-4cdc-98c3-10d649577a37
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4342
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

modifica del comportamento: è stato chiamato 'funzione', ma in versioni precedenti è stato chiamato un operatore membro  
  
 Nelle precedenti versioni di Visual C\+\+ veniva chiamato un membro, ma questo comportamento è stato modificato e il compilatore ora individua la corrispondenza più appropriata nell'ambito dello spazio dei nomi.  
  
 In precedenza, se veniva individuato un operatore membro, il compilatore non prendeva in considerazione alcun operatore di ambito dello spazio dei nomi.  Se esiste un operatore corrispondente migliore a livello dell'ambito dello spazio dei nomi, il compilatore corrente ne esegue correttamente la chiamata, mentre i compilatori precedenti l'avrebbero ignorato.  
  
 Si consiglia di disabilitare questo avviso dopo aver aggiornato il codice alla versione corrente.  Il compilatore può generare falsi positivi e visualizzare l'avviso anche se non è stata apportata alcuna modifica al comportamento del codice.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Il seguente codice di esempio genera l'errore C4342:  
  
```  
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