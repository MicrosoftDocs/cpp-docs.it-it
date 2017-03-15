---
title: "Errore degli strumenti del linker LNK1306 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1306"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1306"
ms.assetid: fad1df6a-0bd9-412f-b0d1-7c9bc749c584
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore degli strumenti del linker LNK1306
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il punto di ingresso della DLL funzione non può essere gestito; compilare in nativo  
  
 Non è possibile compilare DllMain in MSIL. Deve essere compilata in codice nativo.  
  
 Per correggere l'errore:  
  
-   Compilare il file che contiene il punto di ingresso senza utilizzare **\/clr**.  
  
-   Inserire il punto di ingresso in una sezione `#pragma unmanaged`.  
  
-   Per ulteriori informazioni, vedere  
  
-   [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [managed, unmanaged](../../preprocessor/managed-unmanaged.md)  
  
-   [Inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md)  
  
-   [Funzionamento della libreria di runtime](../../build/run-time-library-behavior.md)  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore LNK1306.  
  
```  
// LNK1306.cpp  
// compile with: /clr /link /dll /entry:NewDllMain  
// LNK1306 error expected  
#include <windows.h>  
int __stdcall NewDllMain( HINSTANCE h, ULONG ulReason, PVOID pvReserved ) {  
   return 1;  
}  
```