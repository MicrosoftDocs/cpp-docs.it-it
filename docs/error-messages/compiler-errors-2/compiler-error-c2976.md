---
title: "Errore del compilatore C2976 | Microsoft Docs"
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
  - "C2976"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2976"
ms.assetid: d9bf9836-325e-4f72-a7e3-a67cf19d32e7
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2976
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': argomenti di tipo insufficienti  
  
 In un tipo generico o in un modello mancano uno o più argomenti effettivi.  Controllare la dichiarazione generica o di modello per individuare il numero corretto di parametri.  
  
 Questo errore può essere causato dagli argomenti di modello mancanti nei componenti STL.  
  
 Il seguente codice di esempio genera l'errore C2976:  
  
```  
// C2976.cpp  
template <class T>   
struct TC {  
   T t;  
};  
int main() {  
   TC<>* t;   // C2976  
   TC<int>* t2;   // OK  
}  
```  
  
 L'errore C2976 può verificarsi anche quando si utilizzano i generics:  
  
```  
// C2976b.cpp  
// compile with: /clr  
generic <class T>  
ref struct GC {  
   T t;  
};  
  
int main() {  
   GC<>^ g;   // C2976  
   GC<int>^ g2;   // OK  
}  
```