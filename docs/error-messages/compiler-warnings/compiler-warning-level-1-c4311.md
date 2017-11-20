---
title: Compilatore (livello 1) avviso C4311 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4311
dev_langs: C++
helpviewer_keywords: C4311
ms.assetid: ddc579d0-d051-47bc-915d-71ffb32323c9
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 85a07ff4477d52a2c9b60978c9f4ba00c2127906
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4311"></a>Avviso del compilatore (livello 1) C4311
'variabile': troncamento puntatore da 'tipo' a 'tipo'  
  
 Questo avviso rileva problemi di troncamento del puntatore a 64 bit. Ad esempio, se il codice viene compilato per un'architettura a 64 bit, il valore di un puntatore (64 bit) verrà troncato se viene assegnato a un `int` (32 bit). Per ulteriori informazioni, vedere [regole per usare i puntatori](http://msdn.microsoft.com/library/windows/desktop/aa384242).  
  
 Per ulteriori informazioni sulle cause comuni dell'avviso C4311, vedere [errori comuni del compilatore](http://msdn.microsoft.com/library/windows/desktop/aa384160).  
  
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