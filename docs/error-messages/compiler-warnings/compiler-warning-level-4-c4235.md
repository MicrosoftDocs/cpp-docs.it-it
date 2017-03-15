---
title: "Avviso del compilatore (livello 4) C4235 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4235"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4235"
ms.assetid: d4214799-d62c-4674-b4e2-9e201c303303
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 4) C4235
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: parola chiave 'parolachiave' non supportata in questa architettura  
  
 La parola chiave utilizzata non è supportata dal compilatore.  
  
 Questo avviso viene automaticamente trasformato in errore.  Per modificare tale comportamento, utilizzare [\#pragma warning](../../preprocessor/warning.md).  Se, ad esempio, si desidera rendere C4235 un avviso di livello 2, utilizzare la seguente riga di codice:  
  
```  
#pragma warning(2:4235)  
```  
  
 nel file del codice sorgente.