---
title: "Errore del compilatore C2765 | Microsoft Docs"
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
  - "C2765"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2765"
ms.assetid: 47ad86f3-a7e0-47ad-85ff-0f5534458cb9
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2765
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': una specializzazione esplicita di un template di funzione non può avere argomenti predefiniti  
  
 Non sono consentiti argomenti predefiniti in una specializzazione esplicita di un modello di funzione.  Per ulteriori informazioni, vedere [Specializzazione esplicita di modelli di funzione](../../cpp/explicit-specialization-of-function-templates.md).  
  
 Il seguente codice di esempio genera l'errore C2765:  
  
```  
// C2765.cpp  
template<class T> void f(T t) {};  
  
template<> void f<char>(char c = 'a') {}   // C2765  
// try the following line instead  
// template<> void f<char>(char c) {}  
```