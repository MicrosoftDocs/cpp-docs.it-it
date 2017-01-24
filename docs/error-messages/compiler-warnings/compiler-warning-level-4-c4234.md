---
title: "Avviso del compilatore (livello 4) C4234 | Microsoft Docs"
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
  - "C4234"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4234"
ms.assetid: f7fecd5c-8248-4fde-8446-502aedc357ca
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4234
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: parola chiave 'parolachiave' riservata per un utilizzo futuro  
  
 La parola chiave utilizzata non viene ancora implementata dal compilatore.  
  
 Questo avviso viene automaticamente trasformato in errore.  Per modificare tale comportamento, utilizzare [\#pragma warning](../../preprocessor/warning.md).  Se, ad esempio, si desidera rendere C4234 un avviso di livello 4, utilizzare la seguente riga di codice:  
  
```  
#pragma warning(2:4234)  
```  
  
 nel file del codice sorgente.