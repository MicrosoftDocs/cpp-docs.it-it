---
title: "/Gh (Attiva funzione hook _penter) | Microsoft Docs"
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
  - "_penter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Gh (opzione del compilatore) [C++]"
  - "_penter (funzione)"
  - "Gh (opzione del compilatore) [C++]"
  - "-Gh (opzione del compilatore) [C++]"
ms.assetid: 1510a082-8a0e-486e-a309-6add814b494f
caps.latest.revision: 18
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Gh (Attiva funzione hook _penter)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fa sì che venga chiamata la funzione `_penter` all'inizio di ogni metodo o funzione.  
  
## Sintassi  
  
```  
/Gh  
```  
  
## Note  
 La funzione `_penter` non fa parte di alcuna libreria ed è il programmatore che decide se fornirne una definizione.  
  
 Non è necessario fornire un prototipo, a meno che non si intenda chiamare `_penter` esplicitamente.  La funzione deve apparire come se avesse il seguente prototipo e deve inserire il contenuto di tutti i registri in ingresso e visualizzare il contenuto non modificato in uscita:  
  
```  
void __declspec(naked) _cdecl _penter( void );  
```  
  
 Questa dichiarazione non è disponibile per i progetti a 64 bit.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Esempio  
 Quando viene compilato con **\/Gh**, il codice riportato di seguito illustra come `_penter` venga chiamata due volte: una volta quando si entra nella funzione `main` e una volta quando si entra nella funzione `x`.  
  
```  
// Gh_compiler_option.cpp  
// compile with: /Gh  
// processor: x86  
#include <stdio.h>  
void x() {}  
  
int main() {  
   x();  
}  
  
extern "C" void __declspec(naked) _cdecl _penter( void ) {  
   _asm {  
      push eax  
      push ebx  
      push ecx  
      push edx  
      push ebp  
      push edi  
      push esi  
    }  
  
   printf_s("\nIn a function!");  
  
   _asm {  
      pop esi  
      pop edi  
      pop ebp  
      pop edx  
      pop ecx  
      pop ebx  
      pop eax  
      ret  
    }  
}  
```  
  
  **In una funzione\!**  
**In una funzione\!**   
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)