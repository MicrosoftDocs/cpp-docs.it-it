---
title: "Avviso del compilatore (livello 1) C4810 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4810"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4810"
ms.assetid: 39e2cae0-9c1c-4ac1-aaa0-5f661d06085b
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4810
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

valore di pragma pack\(show\) \=\= n  
  
 Questo avviso viene generato quando si usa l'opzione **show** della direttiva pragma [pack](../../preprocessor/pack.md).*n* è il valore corrente di pack.  
  
 Il codice seguente, ad esempio, illustra il funzionamento dell'avviso C4810 con la direttiva pragma pack:  
  
```  
// C4810.cpp // compile with: /W1 /LD // C4810 expected #pragma pack(show) #pragma pack(4) #pragma pack(show)  
```