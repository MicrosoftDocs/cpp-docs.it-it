---
title: "Avviso del compilatore (livello 3) C4823 | Microsoft Docs"
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
  - "C4823"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4823"
ms.assetid: 8a77560d-dcea-4cae-aebb-8ebf1b4cef85
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4823
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': utilizza puntatori di blocco ma la semantica di rimozione non è attivata.Utilizzare eventualmente \/EHa  
  
 Per sbloccare un oggetto nell'heap gestito a cui fa riferimento un puntatore di blocco dichiarato in un ambito blocco, il compilatore simula il comportamento di distruttori di classi locali che annullino il puntatore.  Per attivare una chiamata a un distruttore dopo la generazione di un'eccezione, è necessario attivare la rimozione dell'oggetto, operazione che è possibile eseguire mediante [\/EHsc](../../build/reference/eh-exception-handling-model.md).  
  
 È anche possibile sbloccare manualmente l'oggetto e ignorare l'avviso.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4823.  
  
```  
// C4823.cpp  
// compile with: /clr /W3 /EHa-  
using namespace System;  
  
ref struct G {  
   int m;  
};  
  
void f(G ^ pG) {  
   try {  
      pin_ptr<int> p = &pG->m;  
      // manually unpin, ignore warning  
      // p = nullptr;  
      throw gcnew Exception;  
   }  
   catch(Exception ^) {}  
}   // C4823 warning  
  
int main() {  
   f( gcnew G );  
}  
```  
  
## Esempio  
 L'avviso C4823 può essere generato anche utilizzando **\/clr:oldSyntax**.  Nell'esempio seguente viene generato l'errore C4823.  
  
```  
// C4823_b.cpp  
// compile with: /clr:oldSyntax /W3 /EHa-  
using namespace System;  
  
__gc struct G {  
   int m;  
};  
  
void f(G* pG) {  
   try {  
      int __pin* p = &pG->m;  
      // manually unpin, ignore warning  
      // p = 0;  
      throw new Exception;  
   }  
   catch(Exception*) {}  
}   // C4823  
  
int main() {  
   f( new G );  
}  
```