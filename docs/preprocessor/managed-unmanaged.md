---
title: "managed, unmanaged | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.unmanaged"
  - "managed_CPP"
  - "unmanaged_CPP"
  - "vc-pragma.managed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "managed (pragma)"
  - "pragma, gestito"
  - "pragma, non gestiti"
  - "unmanaged (pragma)"
ms.assetid: f072ddcc-e1ec-408a-8ce1-326ddb60e4a4
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# managed, unmanaged
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Abilitare il controllo a livello di funzione per la compilazione di funzioni come gestite o non gestite.  
  
## Sintassi  
  
```  
  
        #pragma managed  
#pragma unmanaged  
#pragma managed([push,] on | off)  
#pragma managed(pop)  
```  
  
## Note  
 L'opzione del compilatore [\/clr](../build/reference/clr-common-language-runtime-compilation.md) fornisce il controllo a livello di modulo per la compilazione di funzioni come gestite o non gestite.  
  
 Una funzione non gestita verrà compilata per la piattaforma nativa e l'esecuzione di tale parte del programma verrà passata alla piattaforma nativa da Common Language Runtime.  
  
 Le funzioni vengono compilate come gestite per impostazione predefinita quando **\/clr** viene usato.  
  
 Quando si applicano questi pragma:  
  
-   Aggiungere il pragma che precede una funzione ma non all'interno del corpo di una funzione.  
  
-   Aggiungere il pragma dopo le istruzioni `#include`.  Non usare questi pragma prima delle istruzioni `#include`.  
  
 Il compilatore ignora i pragma `managed` e `unmanaged` se **\/clr** non è usato nella compilazione.  
  
 Quando viene creata un'istanza di una funzione di modello, lo stato del pragma al momento della definizione del modello determina se è gestita o non gestita.  
  
 Per altre informazioni, vedere [Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md).  
  
## Esempio  
  
```  
// pragma_directives_managed_unmanaged.cpp  
// compile with: /clr  
#include <stdio.h>  
  
// func1 is managed  
void func1() {  
   System::Console::WriteLine("In managed function.");  
}  
  
// #pragma unmanaged  
// push managed state on to stack and set unmanaged state  
#pragma managed(push, off)  
  
// func2 is unmanaged  
void func2() {  
   printf("In unmanaged function.\n");  
}  
  
// #pragma managed  
#pragma managed(pop)  
  
// main is managed  
int main() {  
   func1();  
   func2();  
}  
```  
  
  **Nella funzione gestita.  Nella funzione non gestita.**    
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)