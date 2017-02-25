---
title: "Errore del compilatore C2755 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2755"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2755"
ms.assetid: 8ee4eeb6-4757-4efe-9100-38ff4a96f1de
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2755
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'param': i parametri non di tipo delle specializzazioni parziali devono essere identificatori semplici  
  
 Il parametro non di tipo deve essere un identificatore semplice, che il compilatore possa risolvere al momento della compilazione in un identificatore singolo o in un valore costante.  
  
 Il seguente codice di esempio genera l'errore C2755:  
  
```  
// C2755.cpp  
template<int I, int J>  
struct A {};  
  
template<int I>   
struct A<I,I*5> {};   // C2755  
// try the following line instead  
// struct A<I,5> {};  
```