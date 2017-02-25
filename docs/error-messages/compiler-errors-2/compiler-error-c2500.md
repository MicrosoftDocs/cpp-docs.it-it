---
title: "Errore del compilatore C2500 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2500"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2500"
ms.assetid: 6bff8161-dc9a-48ca-91f1-fd2eefdbbc93
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2500
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore1': 'identificatore2' è già una classe base diretta  
  
 Una classe o una struttura compare più volte in un elenco di classi base.  
  
 Una classe base diretta è presente nell'elenco di classi base.  Una classe base indiretta è una classe base di una delle classi dell'elenco di classi base.  
  
 Una classe non può essere specificata più volte come classe base diretta,  mentre può essere utilizzata più volte come classe base indiretta.  
  
 Il seguente codice di esempio genera l'errore C2500:  
  
```  
// C2500.cpp  
// compile with: /c  
class A {};  
class B : public A, public A {};    // C2500  
  
// OK  
class C : public A {};  
class D : public A {};  
class E : public C, public D {};  
```