---
title: "Errore del compilatore C2912 | Microsoft Docs"
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
  - "C2912"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2912"
ms.assetid: bd55cecd-ab1a-4636-ab8a-a00393fe7b3d
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2912
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la specializzazione esplicita 'declaration' non è una specializzazione di un modello di funzione.  
  
 Non è possibile specializzare una funzione non modello.  
  
 L'esempio seguente genera l'errore C2912:  
  
```  
// C2912.cpp  
// compile with: /c  
void f(char);  
template<> void f(char);   // C2912  
template<class T> void f(T);   // OK  
```  
  
 Questo errore verrà generato anche in seguito alle operazioni di conformità del compilatore eseguite in Visual Studio .NET 2003: è necessario scegliere i parametri di ogni specializzazione esplicita in modo che corrispondano ai parametri del modello principale.  
  
```  
// C2912b.cpp  
class CF {  
public:  
   template <class A> CF(const A& a) {}   // primary template  
  
   // attempted explicit specialization  
   template <> CF(const char* p) {}   // C2912  
  
   // try the following line instead  
   // template <> CF(const char& p) {}  
};  
```