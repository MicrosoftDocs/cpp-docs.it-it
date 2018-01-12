---
title: Del compilatore (livelli 3 e 4) avviso C4244 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4244
dev_langs: C++
helpviewer_keywords: C4244
ms.assetid: f116bb09-c479-4b4e-a647-fe629a1383f6
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cc5fdcbced4da3fc4f40a6cbdfa319e026a0f1f5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-levels-3-and-4-c4244"></a>Avviso del compilatore (livelli 3 e 4) C4244
'conversion': conversione da 'type1' a 'type2'. Possibile perdita di dati  
  
 Un tipo integer viene convertito in un tipo integer di dimensioni minori. Si tratta di un avviso di livello 4 se *type1* è `int` e *type2* inferiori `int`. In caso contrario, è un livello 3 (assegnato un valore di tipo [Int64](../../cpp/int8-int16-int32-int64.md) a una variabile di tipo `unsigned int`). Potrebbe essersi verificata una perdita di dati.  
  
 Se viene visualizzato l'errore C4244, è consigliabile modificare il programma per poter usare tipi compatibili o aggiungere al codice la logica, per assicurarsi che l'intervallo di valori possibili sia sempre compatibili con i tipi usati.  
  
 L'avviso C4244 può venire generato anche a livello 2. vedere [avviso del compilatore (livello 2) C4244](../../error-messages/compiler-warnings/compiler-warning-level-2-c4244.md) per ulteriori informazioni.  
  
 La conversione potrebbe presentare un problema dovuto alle conversioni implicite.  
  
 L'esempio seguente genera l'errore C4244:  
  
```  
// C4244_level4.cpp  
// compile with: /W4  
int aa;  
unsigned short bb;  
int main() {  
   int b = 0, c = 0;  
   short a = b + c;   // C4244  
  
   bb += c;   // C4244  
   bb = bb + c;   // C4244  
   bb += (unsigned short)aa;   // C4244  
   bb = bb + (unsigned short)aa;   // OK  
}  
```  
  
 Per ulteriori informazioni, vedere [conversioni aritmetiche comuni](../../c-language/usual-arithmetic-conversions.md).  
  
```  
// C4244_level3.cpp  
// compile with: /W3  
int main() {  
   __int64 i = 8;  
   unsigned int ii = i;   // C4244  
}  
```  
  
 L'avviso C4244 può verificarsi quando si compila un codice per destinazioni a 64 bit, che non genera l'avviso quando si esegue la compilazione per destinazioni a 32 bit. Ad esempio, una differenza tra i puntatori è una quantità a 32 bit su piattaforme a 32 bit e invece una quantità a 64 bit su piattaforme a 64 bit.  
  
 L'esempio seguente genera l'errore C4244 quando viene compilato per destinazioni a 64 bit:  
  
```  
// C4244_level3_b.cpp  
// compile with: /W3   
int main() {  
   char* p1 = 0;  
   char* p2 = 0;  
   int x = p2 - p1;   // C4244  
}  
```