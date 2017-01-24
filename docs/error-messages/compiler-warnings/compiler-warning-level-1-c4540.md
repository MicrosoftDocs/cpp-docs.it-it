---
title: "Avviso del compilatore (livello 1) C4540 | Microsoft Docs"
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
  - "C4540"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4540"
ms.assetid: 8085e748-5f4d-43c2-b06d-eaf794edbf72
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4540
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

dynamic\_cast utilizzato per conversione in base ambigua o inaccessibile. I test della fase di esecuzione avranno esito negativo \('tipo1' in 'tipo2'\)  
  
 È stato utilizzato `dynamic_cast` per la conversione da un tipo a un altro.  È stato determinato che il cast avrà sempre esito negativo \(**NULL**\) poiché una classe base non è accessibile \(ad esempio, è `private`\) o è ambigua \(ad esempio, viene visualizzata più volte nella gerarchia delle classi\).  
  
 Di seguito è riportato un esempio dell'avviso.  La classe **B** è derivata dalla classe **A**.  Il programma utilizza `dynamic_cast` per eseguire il cast dalla classe **B** \(la classe derivata\) alla classe **A**. Questa operazione avrà sempre esito negativo poiché la classe **B** è `private` ed è quindi inaccessibile.  È possibile risolvere il problema rendendo **public** la classe **A**.  
  
```  
// C4540.cpp  
// compile with: /W1  
  
struct A {   
   virtual void g() {}  
};  
  
struct B : private A {  
   virtual void g() {}  
};  
  
int main() {  
   B b;  
   A * ap = dynamic_cast<A*>(&b);   // C4540  
}  
```