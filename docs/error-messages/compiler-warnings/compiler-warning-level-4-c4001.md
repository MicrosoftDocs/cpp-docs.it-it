---
title: "Avviso del compilatore (livello 4) C4001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4001"
ms.assetid: 414a47fe-d597-425e-9374-6a569231dc0a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 4) C4001
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata l'estensione non standard 'commento a riga singola'  
  
 I commenti a riga singola sono standard in C\+\+ e non standard in C.  In base alla rigida compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\), i file di C contenenti commenti a riga singola generano l'avviso C4001 dovuto all'utilizzo di un'estensione non standard.  Poiché i commenti a riga singola sono standard in C\+\+, i file di C contenenti tali commenti non producono l'avviso C4001 nella compilazione con le estensioni Microsoft \(\/Ze\).  
  
## Esempio  
 Per disabilitare l'avviso, rimuovere il commento da [\#pragma warning\(disable:4001\)](../../preprocessor/warning.md).  
  
```  
// C4001.cpp  
// compile with: /W4 /Za /TC  
// #pragma warning(disable:4001)  
int main()  
{  
   // single-line comment in main  
   // C4001  
}  
```