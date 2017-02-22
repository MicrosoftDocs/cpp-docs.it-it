---
title: "Errore del compilatore C2518 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2518"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2518"
ms.assetid: a7895b47-da90-4851-ac97-18e81479595a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2518
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

parola chiave 'parola chiave' non valida nell'elenco delle classi base. Ignorata.  
  
 Le parole chiave `class` e `struct` non devono essere visualizzate in un elenco di classi base.  
  
 Il seguente codice di esempio genera l'errore C2518:  
  
```  
// C2518.cpp  
// compile with: /c  
class B {};  
class C : public class B {};   // C2518  
class D: public B {};   // OK  
```