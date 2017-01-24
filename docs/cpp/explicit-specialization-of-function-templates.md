---
title: "Specializzazione esplicita di modelli di funzioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dichiarazione di funzioni, specializzazione di modello di funzione"
  - "specializzazione esplicita di modelli di funzioni"
  - "modelli di funzioni, specializzazione"
  - "override, funzioni"
  - "specializzazione di modelli di funzioni"
ms.assetid: eb0fcb73-eaed-42a1-9b83-14b055a34bf8
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Specializzazione esplicita di modelli di funzioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Con un modello di funzione, è possibile definire il comportamento speciale per un tipo specifico fornendo una specializzazione esplicita \(ignora\) del modello di funzione per quel tipo.  Ad esempio:  
  
```  
template<> void MySwap(double a, double b);  
```  
  
 Questa dichiarazione consente di definire una funzione diversa per le variabili **double**.  Analogamente alle funzioni non modello, vengono applicate le conversioni di tipo standard \(quali la promozione di una variabile di tipo **float** a **double**\).  
  
## Esempio  
  
```  
// explicit_specialization.cpp  
template<class T> void f(T t)  
{  
};  
  
// Explicit specialization of f with 'char' with the  
// template argument explicitly specified:  
//  
template<> void f<char>(char c)  
{  
}  
  
// Explicit specialization of f with 'double' with the  
// template argument deduced:  
//  
template<> void f(double d)  
{  
}  
int main()  
{  
}  
```  
  
## Vedere anche  
 [Modelli di funzioni](../cpp/function-templates.md)