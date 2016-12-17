---
title: "Errore del compilatore C2906 | Microsoft Docs"
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
  - "C2906"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2906"
ms.assetid: 30f652f1-6af6-4a2f-a69e-a1a4876cc8c6
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2906
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'specialization': per la specializzazione esplicita è necessario 'template \<\>'  
  
 Per la specializzazione esplicita di template è necessario utilizzare la nuova sintassi.  
  
 Il seguente codice di esempio genera l'errore C2906:  
  
```  
// C2906.cpp  
// compile with: /c  
template<class T> class X{};   // primary template  
class X<int> { }   // C2906  
template<> class X<int> { };   // new syntax  
```