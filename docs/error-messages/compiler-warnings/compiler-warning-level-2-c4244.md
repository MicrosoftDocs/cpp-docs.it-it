---
title: Compilatore avviso (livello 2) C4244 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4244
dev_langs:
- C++
helpviewer_keywords:
- C4244
ms.assetid: 2c19d157-21d1-42c2-a6c0-3f30f2ce3813
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6d1920fbc2ed78cf498df61c7177796645730cc2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-2-c4244"></a>Avviso del compilatore (livello 2) C4244
'argomento': conversione da 'type1' a 'type2', possibile perdita di dati  
  
 Un tipo a virgola mobile è stato convertito in un tipo integer.  Potrebbe essersi verificata una perdita di dati.  
  
 Se viene visualizzato l'errore C4244, è consigliabile modificare il programma per poter usare tipi compatibili o aggiungere al codice la logica, per assicurarsi che l'intervallo di valori possibili sia sempre compatibili con i tipi usati.  
  
 L'avviso C4244 può venire generato anche a livello 3 e 4. vedere [avviso del compilatore (livelli 3 e 4) C4244](../../error-messages/compiler-warnings/compiler-warning-levels-3-and-4-c4244.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4244:  
  
```  
// C4244_level2.cpp  
// compile with: /W2  
  
int f(int x){ return 0; }  
int main() {  
   double x = 10.1;  
   int i = 10;  
   return (f(x));   // C4244  
   // try the following line instead  
   // return (f(i));  
}  
```