---
title: "Errore del compilatore C3852 | Microsoft Docs"
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
  - "C3852"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3852"
ms.assetid: 194e5c5e-0dfb-414e-86db-791c11eb610c
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3852
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro' è di tipo 'tipo': impossibile inizializzare il membro con un'inizializzazione aggregata  
  
 Si è tentato di assegnare un'inizializzazione predefinita come parte di un'inizializzazione aggregata a un membro dati che non può ricevere un'inizializzazione predefinita in un'inizializzazione aggregata.  
  
 Negli esempi seguenti viene generato l'errore C3852:  
  
```  
// C3852.cpp  
struct S  
{  
   short s;  
};  
  
struct S1  
{  
   int i;  
   const S s;  
};  
  
struct S2  
{  
   int i;  
   char & rc;  
};  
  
int main()  
{  
   S1 s1 = { 1 };   // C3852 const member   
   // try the following line instead  
   // S1 s1 = { 1, 2 };  
  
   S2 s2 = { 2 };   // C3852 reference member  
   // try the following line instead  
   // char c = 'a';  
   S2 s2 = { 2, c };  
}  
```