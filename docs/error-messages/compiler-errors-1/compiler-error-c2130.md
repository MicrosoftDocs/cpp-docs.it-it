---
title: "Errore del compilatore C2130 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2130"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2130"
ms.assetid: c6fd5a7e-8f28-4f67-99d1-95a13b0dff90
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2130
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

prevista una stringa contenente il nome del file dopo \#line. Trovato 'token'  
  
 Il token del nome file facoltativo che segue [\#line](../../preprocessor/hash-line-directive-c-cpp.md) `linenumber` deve essere una stringa.  
  
 L'esempio seguente genera l'errore C2130:  
  
```  
// C2130.cpp int main() { #line 1000 test   // C2130 #line 1000 "test"   // OK }  
```