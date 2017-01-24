---
title: "Errore del compilatore C2346 | Microsoft Docs"
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
  - "C2346"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2346"
ms.assetid: 246145be-5645-4cd6-867c-e3bc39e33dca
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2346
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile compilare 'funzione' come nativo: motivo  
  
 Non è stato possibile compilare una funzione in MSIL.  
  
 Per ulteriori informazioni, vedere [managed, unmanaged](../../preprocessor/managed-unmanaged.md) e [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
### Per correggere l'errore  
  
1.  Rimuovere il codice della funzione che non può essere compilato per MSIL.  
  
2.  Non compilare il modulo con **\/clr**, oppure contrassegnare la funzione come non gestita utilizzando il pragma unmanaged.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2346:  
  
```  
// C2346.cpp  
// processor: x86  
// compile with: /clr   
// C2346 expected  
struct S  
{  
   S()  
   {  
      { __asm { nop } }  
   }  
   virtual __clrcall ~S() { }  
};  
  
void main()  
{  
   S s;  
}  
```