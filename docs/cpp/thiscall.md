---
title: "__thiscall | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__thiscall"
  - "__thiscall_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__thiscall (parola chiave) [C++]"
ms.assetid: a6a22dd2-0101-4885-b33b-22f6057965df
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __thiscall
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Specifici di Microsoft  
 La convenzione di chiamata `__thiscall` viene utilizzata nelle funzioni ed è la convenzione di chiamata predefinita utilizzata dalle funzioni di C\+\+ che non utilizzano argomenti variabili.  In `__thiscall`, la chiamata pulisce lo stack, il che è impossibile per funzioni `vararg`.  Gli argomenti vengono inseriti nello stack da destra a sinistra, con il puntatore `this` passato tramite il registro ECX, e non nello stack, sull'architettura x86.  
  
 Un motivo per utilizzare `__thiscall` è che nelle classi le funzioni utilizzano `__clrcall` per impostazione predefinita.  In tal caso, è possibile utilizzare `__thiscall` per rendere specifiche funzioni chiamabili da codice nativo.  
  
 Durante la compilazione con [\/clr:pure](../build/reference/clr-common-language-runtime-compilation.md), tutte le funzioni e i puntatori alle funzioni sono `__clrcall` se non specificato diversamente.  
  
 Nelle versioni precedenti di Visual C\+\+ 2005, la convenzione della chiamata di thiscall non può essere specificata in modo esplicito in un programma, perché `thiscall` non era una parola chiave.  
  
 Le funzioni `vararg` utilizzano la convenzione di chiamata `__cdecl`.  Tutti gli argomenti della funzione vengono inseriti nello stack, con il puntatore `this` posizionato in fondo allo stack  
  
 Poiché questa convenzione di chiamata si applica solo a C\+\+, non esiste alcuna combinazione della decorazione di C.  
  
 Sulle macchine ARM e [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)], `__thiscall` viene accettato e ignorato dal compilatore.  
  
 Per le funzioni di classe non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline.  Ovvero per i metodi membri non statici della classe, la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione.  
  
## Esempio  
  
```  
// thiscall_cc.cpp  
// compile with: /c /clr:oldSyntax  
struct CMyClass {  
   void __thiscall mymethod();  
   void __clrcall mymethod2();  
};  
```  
  
## Specifica END Microsoft  
  
## Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)