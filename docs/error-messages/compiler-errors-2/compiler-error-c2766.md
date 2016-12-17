---
title: "Errore del compilatore C2766 | Microsoft Docs"
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
  - "C2766"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2766"
ms.assetid: 8032f4ca-6827-4f04-9c61-c44643c85cc4
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2766
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

specializzazione esplicita; 'specializzazione' è già stato definito  
  
 Le specializzazioni esplicite duplicate non sono consentite.  Per ulteriori informazioni, vedere [Specializzazione esplicita di modelli di funzione](../../cpp/explicit-specialization-of-function-templates.md).  
  
 Il seguente codice di esempio genera l'errore C2766:  
  
```  
// C2766.cpp  
// compile with: /c  
template<class T>   
struct A {};  
  
template<>   
struct A<int> {};  
  
template<>   
struct A<int> {};   // C2766  
// try the following line instead  
// struct A<char> {};  
```