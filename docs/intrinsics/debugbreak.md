---
title: "__debugbreak | Microsoft Docs"
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
  - "__debugbreak_cpp"
  - "__debugbreak"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__debugbreak intrinsic"
  - "punti di interruzione, __debugbreak intrinsic"
ms.assetid: 1d1e1c0c-891a-4613-ae4b-d790094ba830
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __debugbreak
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Genera un punto di interruzione nel codice in corrispondenza del quale all'utente verrà richiesto di eseguire il debugger.  
  
## Sintassi  
  
```  
void __debugbreak();  
```  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|-------------------------|------------------|------------|  
|`__debugbreak`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h\>|  
  
## Note  
 La funzione intrinseca del compilatore `__debugbreak`, simile a [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297.aspx), è un modo portabile disponibile in Win32 per inserire un punto di interruzione.  
  
> [!NOTE]
>  Quando si esegue la compilazione con **\/clr**, una funzione contenente `__debugbreak` verrà compilata per MSIL.  `asm int 3` determina la compilazione di una funzione per il codice nativo.  Per altre informazioni, vedere [\_\_asm](../assembler/inline/asm.md).  
  
 Ad esempio:  
  
```  
main() {  
   __debugbreak();  
}  
```  
  
 è simile a:  
  
```  
main() {  
   __asm {  
      int 3  
   }  
}  
```  
  
 in un computer x86.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)