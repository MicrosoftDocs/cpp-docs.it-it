---
title: "Avviso del compilatore (livello 1) C4311 | Microsoft Docs"
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
  - "C4311"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4311"
ms.assetid: ddc579d0-d051-47bc-915d-71ffb32323c9
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4311
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile': troncamento puntatore da 'tipo' a 'tipo'  
  
 Questo avviso rileva problemi di troncamento del puntatore a 64 bit.  Ad esempio, se il codice viene compilato per un'architettura a 64 bit, il valore di un puntatore \(64 bit\) verrà troncato se viene assegnato a un `int` \(32 bit\).  Per altre informazioni, vedere [Regole per usare i puntatori](http://msdn.microsoft.com/library/windows/desktop/aa384242).  
  
 Per altre informazioni sulle cause comuni dell'avviso C4311, vedere [Errori comuni del compilatore](http://msdn.microsoft.com/library/windows/desktop/aa384160).  
  
 L'esempio di codice seguente genera l'errore C4311 quando viene eseguita la compilazione per una destinazione a 64 bit e quindi illustra come risolverlo:  
  
```  
// C4311.cpp  
// compile by using: cl /W1 C4311.cpp  
int main() {  
   void* p = &p;  
   unsigned int i = (unsigned int) p;   // C4311 for 64-bit targets  
   unsigned long long j = (unsigned long long) p;   // OK  
}  
  
```