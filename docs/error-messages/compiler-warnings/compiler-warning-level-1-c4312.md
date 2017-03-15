---
title: "Avviso del compilatore (livello 1) C4312 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4312"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4312"
ms.assetid: 541906ed-4f62-4bcb-947f-cf9ae7411bcb
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 1) C4312
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operazione': conversione da 'tipo1' a 'tipo2', di dimensioni maggiori  
  
 Questo avviso indica un tentativo di assegnare un valore a 32 bit a un tipo di puntatore a 64 bit, ad esempio eseguendo il cast di un oggetto `int` o `long` a 32 bit a un puntatore a 64 bit.  
  
 Può essere una conversione non affidabile anche per i valori dei puntatori a 32 bit quando si verifica l'estensione del segno.  Se un numero intero a 32 bit negativo viene assegnato a un tipo di puntatore a 64 bit, l'estensione del segno fa in modo che il valore del puntatore faccia riferimento a un indirizzo di memoria diverso dal valore del numero intero.  
  
 Questo avviso viene generato solo per le destinazioni di compilazione a 64 bit.  Per altre informazioni, vedere [Regole per usare i puntatori](http://msdn.microsoft.com/library/windows/desktop/aa384242).  
  
 L'esempio di codice seguente genera l'errore C4312 quando viene eseguita la compilazione per le destinazioni a 64 bit:  
  
```  
// C4312.cpp  
// compile by using: cl /W1 /LD C4312.cpp  
void* f(int i) {  
   return (void*)i;   // C4312 for 64-bit targets  
}  
  
void* f2(__int64 i) {  
   return (void*)i;   // OK  
}  
```