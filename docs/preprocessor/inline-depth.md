---
title: "inline_depth | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "inline_depth_CPP"
  - "vc-pragma.inline_depth"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "inline_depth (pragma)"
  - "pragma, inline_depth"
ms.assetid: 2bba60fe-43ea-4d09-90f7-aafaba3bad07
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# inline_depth
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il livello di profondità della ricerca euristica inline, ovvero nessuna funzione verrà resa inline se si trova a un livello di profondità \(nel grafico delle chiamate\) maggiore di `n`.  
  
## Sintassi  
  
```  
  
#pragma inline_depth( [n] )  
```  
  
## Note  
 Questo pragma controlla l'incorporamento di funzioni contrassegnate con [inline](../misc/inline-inline-forceinline.md) e [\_\_inline](../misc/inline-inline-forceinline.md) o rese inline automaticamente tramite l'opzione \/Ob2.  
  
 `n` può essere un valore compreso tra 0 e 255, dove 255 indica una profondità illimitata nel grafico delle chiamate e zero inibisce l'espansione inline.  Se `n` non è specificato, viene utilizzato il valore predefinito 254.  
  
 Il pragma **inline\_depth** controlla il numero di espansioni che possono essere applicate a chiamate di funzione.  Se ad esempio il livello di profondità inline è quattro e se A chiama B e B quindi chiama C, tutte le tre chiamate verranno espanse in modalità inline.  Tuttavia, se l'espansione inline più vicina è due, vengono espanse solo A e B, mentre C rimane una chiamata di funzione.  
  
 Per utilizzare questo pragma, è necessario impostare l'opzione del compilatore \/Ob su 1 o 2.  Il livello di profondità impostata utilizzando il pragma viene applicato alla prima chiamata di funzione dopo il pragma.  
  
 Il livello di profondità inline può essere ridotto durante l'espansione, ma non aumentato.  Se il livello di profondità inline è sei e se durante l'espansione nel preprocessore viene rilevato un pragma **inline\_depth** con valore pari a otto, il livello di profondità rimane sei.  
  
 Il pragma **inline\_depth** non ha alcun effetto sulle funzioni contrassegnate con `__forceinline`.  
  
> [!NOTE]
>  Le funzioni ricorsive possono essere sostituite inline a un livello di profondità massima di 16 chiamate.  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
 [inline\_recursion](../preprocessor/inline-recursion.md)