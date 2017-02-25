---
title: "Errore del compilatore C3747 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3747"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3747"
ms.assetid: a9a4be67-5d9c-4dcc-9ae9-baae46cbecde
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3747
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

parametro di tipo predefinito mancante: parametro param  
  
 Nell'elenco dei parametri i parametri generici o di modello con valori predefiniti non possono essere seguiti da parametri che non hanno valori predefiniti.  
  
 Il seguente codice di esempio genera l'errore C3747:  
  
```  
// C3747.cpp  
template <class T1 = int, class T2>   // C3747  
struct MyStruct {};  
```  
  
 Possibile soluzione:  
  
```  
// C3747b.cpp  
// compile with: /c  
template <class T1, class T2 = int>  
struct MyStruct {};  
```