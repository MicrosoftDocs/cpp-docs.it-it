---
title: Strumenti del linker LNK1306 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1306
dev_langs: C++
helpviewer_keywords: LNK1306
ms.assetid: fad1df6a-0bd9-412f-b0d1-7c9bc749c584
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 32b6589fa5e4d7dc02ccb9a6c3157c109725b895
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1306"></a>Errore degli strumenti del linker LNK1306  
  
> Funzione di punto di ingresso DLL non può essere gestito; compilare in nativo  
  
`DllMain`non possono essere compilate in MSIL. deve essere compilato in codice nativo.  
  
Per risolvere questo problema,  
  
-   Compilare il file che contiene il punto di ingresso senza **/clr**.  
  
-   Inserire il punto di ingresso in un `#pragma unmanaged` sezione.  
  
Per altre informazioni, vedere:  
  
-   [/CLR (compilazione common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [managed, unmanaged](../../preprocessor/managed-unmanaged.md)  
  
-   [Inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md)  
  
-   [DLL e comportamento delle librerie di runtime Visual C++](../../build/run-time-library-behavior.md)  
  
## <a name="example"></a>Esempio  
  
L'esempio seguente genera l'errore LNK1306.  
  
```cpp  
// LNK1306.cpp  
// compile with: /clr /link /dll /entry:NewDllMain  
// LNK1306 error expected  
#include <windows.h>  
int __stdcall NewDllMain( HINSTANCE h, ULONG ulReason, PVOID pvReserved ) {  
   return 1;  
}  
```  
  
Per risolvere questo problema, non utilizzare l'opzione /clr per compilare il file oppure utilizzare un `#pragma` direttiva per inserire la definizione di punto di ingresso in una sezione non gestita, come illustrato in questo esempio:  
  
```cpp  
// LNK1306fix.cpp  
// compile with: /clr /link /dll /entry:NewDllMain  
#include <windows.h>  
#pragma managed(push, off)  
int __stdcall NewDllMain( HINSTANCE h, ULONG ulReason, PVOID pvReserved ) {  
   return 1;  
}  
#pragma managed(pop)  
```  
