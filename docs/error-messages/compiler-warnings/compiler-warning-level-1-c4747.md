---
title: Compilatore avviso (livello 1) C4747 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4747
dev_langs:
- C++
helpviewer_keywords:
- C4747
ms.assetid: af37befd-ba1f-4bdc-96e1-a953f7a2ad9c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 203943f3741d07e278652a7032a6dcdcb305a384
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33285824"
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