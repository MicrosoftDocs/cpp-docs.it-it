---
title: "Errore del compilatore C2974 | Microsoft Docs"
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
  - "C2974"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2974"
ms.assetid: 1b444260-f2bf-48d7-ab1e-35573d8c4a0e
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2974
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

argomento di tipo non valido per 'numero'. Previsto tipo  
  
 L'argomento generico o di modello non corrisponde alla dichiarazione generica o di modello.  Un tipo deve trovarsi tra parentesi angolari.  Esaminare la definizione generica o di modello per individuare i tipi corretti.  
  
 Il seguente codice di esempio genera l'errore C2974:  
  
```  
// C2974.cpp  
// C2974 expected  
template <class T>  
struct TC {};  
  
template <typename T>  
void tf(T){}  
  
int main() {  
   // Delete the following 2 lines to resolve  
   TC<1>* tc;  
   tf<"abc">("abc");  
  
   TC<int>* tc;  
   tf<const char *>("abc");  
}  
```  
  
 L'errore C2974 può verificarsi anche quando si utilizzano i generics:  
  
```  
// C2974b.cpp  
// compile with: /clr  
// C2974 expected  
using namespace System;  
generic <class T>  
ref struct GCtype {};  
  
generic <typename T>  
void gf(T){}  
  
int main() {  
   // Delete the following 2 lines to resolve  
   GCtype<"a">^ gc;  
   gf<"a">("abc");  
  
   // OK  
   GCtype<int>^ gc;  
   gf<String ^>("abc");  
}  
```