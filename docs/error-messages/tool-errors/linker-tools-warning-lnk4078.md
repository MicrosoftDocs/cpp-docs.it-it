---
title: "Avviso degli strumenti del linker LNK4078 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4078"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4078"
ms.assetid: 5a16796d-6caf-42d9-8f65-b042843eafb8
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Avviso degli strumenti del linker LNK4078
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

rilevate più sezioni 'nome sezione' con attributi diversi  
  
 Sono state rilevate due o più sezioni con lo stesso nome e attributi diversi.  
  
 Questo avviso può venire visualizzato a seguito della creazione di una libreria di importazione o un file di esportazione tramite una versione precedente di LINK o LIB.  
  
 Ricreare il file e ripetere il collegamento.  
  
## Esempio  
 La visualizzazione dell'avviso LNK4078 può essere anche causata da un'importante modifica, ad esempio quando la sezione denominata da[init\_seg](../../preprocessor/init-seg.md) nella piattaforma x86, precedentemente di lettura\/scrittura, diventa di sola lettura.  
  
 Nell'esempio seguente viene generato l'errore LNK4078:  
  
```  
// LNK4078.cpp  
// compile with: /W1  
// LNK4078 expected  
#include <stdio.h>  
#pragma warning(disable : 4075)  
typedef void (__cdecl *PF)(void);  
int cxpf = 0;   // number of destructors to call  
PF pfx[200];   // pointers to destructors.  
  
struct A { A() {} };  
  
int myexit (PF pf) { return 0; }  
  
#pragma section(".mine$a", read, write)  
// try the following line instead  
// #pragma section(".mine$a", read)  
__declspec(allocate(".mine$a")) int ii = 1;  
  
#pragma section(".mine$z", read, write)  
// try the following line instead  
// #pragma section(".mine$z", read)  
__declspec(allocate(".mine$z")) int i = 1;  
  
#pragma data_seg()  
#pragma init_seg(".mine$m", myexit)  
A bbbb;   
A cccc;  
int main() {}  
```