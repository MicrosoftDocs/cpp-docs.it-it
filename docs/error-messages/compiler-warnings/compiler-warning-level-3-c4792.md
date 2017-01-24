---
title: "Avviso del compilatore (livello 3) C4792 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4792"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4792"
ms.assetid: c047ce69-a622-44e1-9425-d41aa9261c61
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4792
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la funzione 'function' è stata dichiarata utilizzando sysimport e vi si è fatto riferimento dal codice nativo; richiesto collegamento alla libreria di importazione  
  
 Una funzione nativa che è stata importata nel programma con DllImport è stata chiamata da una funzione non gestita. È quindi necessario un collegamento alla libreria di importazione per la DLL.  
  
 Questo avviso non può essere risolto nel codice o modificando la modalità di compilazione. Usare il pragma [warning](../../preprocessor/warning.md) per disabilitare l'avviso.  
  
 L'esempio seguente genera l'errore C4792:  
  
```  
// C4792.cpp // compile with: /clr /W3 // C4792 expected using namespace System::Runtime::InteropServices; [DllImport("msvcrt")] extern "C" int __cdecl puts(const char *); int main() {} // Uncomment the following line to resolve. // #pragma warning(disable : 4792) #pragma unmanaged void func(void){ puts("test"); }  
```