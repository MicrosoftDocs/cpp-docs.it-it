---
title: Compilatore avviso (livello 1) C4747 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4747
dev_langs:
- C++
helpviewer_keywords:
- C4747
ms.assetid: af37befd-ba1f-4bdc-96e1-a953f7a2ad9c
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 094576ec19582b640ba0d4c57dfa34593177a267
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4747"></a>Avviso del compilatore (livello 1) C4747
La chiamata gestita 'punto di ingresso': il codice gestito potrebbe non essere eseguito in blocco del caricatore, inclusi il punto di ingresso DLL e le chiamate raggiunte dal punto di ingresso DLL  
  
 Il compilatore ha rilevato un punto di ingresso DLL (probabile) compilato per MSIL.  A causa di potenziali problemi con il caricamento di una DLL il cui punto di ingresso è stato compilato in MSIL, è fortemente sconsigliata la compilazione di una funzione di punto di ingresso DLL in MSIL.  
  
 Per ulteriori informazioni, vedere [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md) e [LNK1306 di errore degli strumenti del Linker](../../error-messages/tool-errors/linker-tools-error-lnk1306.md).  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Il modulo con la compilazione non **/clr**.  
  
2.  Contrassegnare la funzione di punto di ingresso con `#pragma unmanaged`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4747.  
  
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