---
title: "Avviso del compilatore (livello 1) C4964 | Microsoft Docs"
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
  - "C4964"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4964"
ms.assetid: b89c9274-8a92-4b7c-aa30-3fbb1b68ac73
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4964
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nessuna opzione di ottimizzazione specificata; le informazioni sul profilo non verranno raccolte  
  
 Sono stati specificati [\/GL](../../build/reference/gl-whole-program-optimization.md) e [\/LTCG](../../build/reference/ltcg-link-time-code-generation.md), ma non è stata richiesta alcuna ottimizzazione. Di conseguenza, non verrà generato alcun file pgc e non sarà quindi possibile eseguire ottimizzazioni PGO.  
  
 Se si desidera che vengano generati file pgc quando si esegue l'applicazione, specificare una delle opzioni del compilatore [\/O](../../build/reference/o-options-optimize-code.md).  
  
 Il seguente codice di esempio genera l'errore C4964:  
  
```  
// C4964.cpp  
// compile with: /W1 /GL /link /ltcg:pgi  
// C4964 expected  
// Add /O2, for example, to the command line to resolve this warning.  
int main() {  
   int i;  
}  
```