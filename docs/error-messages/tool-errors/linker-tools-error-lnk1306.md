---
title: Strumenti del linker LNK1306 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1306
dev_langs:
- C++
helpviewer_keywords:
- LNK1306
ms.assetid: fad1df6a-0bd9-412f-b0d1-7c9bc749c584
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bb340a4c28f94f18e0c4b65bea8749394e002bd3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33300498"
---
# <a name="linker-tools-error-lnk1306"></a>Errore degli strumenti del linker LNK1306  
  
> Funzione di punto di ingresso DLL non può essere gestito; compilare in nativo  
  
`DllMain` non possono essere compilate in MSIL. deve essere compilato in codice nativo.  
  
Per risolvere questo problema,  
  
-   Compilare il file che contiene il punto di ingresso senza **/clr**.  
  
-   Inserire il punto di ingresso in un `#pragma unmanaged` sezione.  
  
Per altre informazioni, vedere:  
  
-   [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
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
