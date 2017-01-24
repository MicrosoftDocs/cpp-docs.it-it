---
title: "Avviso del compilatore (livello 1) C4747 | Microsoft Docs"
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
  - "C4747"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4747"
ms.assetid: af37befd-ba1f-4bdc-96e1-a953f7a2ad9c
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4747
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamata a 'punto di ingresso' non gestito: il codice gestito potrebbe non essere eseguito in condizioni di blocco del caricatore, inclusi il punto di ingresso delle DLL e le chiamate raggiunte dal punto di ingresso delle DLL  
  
 Il compilatore ha rilevato un \(probabile\) punto di ingresso delle DLL compilato in MSIL \(Microsoft Intermediate Language\).  A causa di potenziali problemi con il caricamento di una DLL il cui punto di ingresso è stato compilato in MSIL, evitare di compilare una funzione del punto di ingresso della DLL in MSIL.  
  
 Per ulteriori informazioni, vedere [Inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md) e [Errore degli strumenti del linker LNK1306](../../error-messages/tool-errors/linker-tools-error-lnk1306.md).  
  
### Per correggere l'errore  
  
1.  Non compilare il modulo con **\/clr**.  
  
2.  Contrassegnare la funzione del punto di ingresso con `#pragma unmanaged`.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4747:  
  
```  
// C4747.cpp  
// compile with: /clr /c /W1  
// C4747 expected  
#include <windows.h>  
  
// Uncomment the following line to resolve.  
// #pragma unmanaged  
  
BOOL WINAPI DllMain(HANDLE hInstance, ULONG Command, LPVOID Reserved) {  
   return TRUE;  
};  
```