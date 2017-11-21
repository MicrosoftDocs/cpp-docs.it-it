---
title: Compilatore avviso (livello 1) C4835 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4835
dev_langs: C++
helpviewer_keywords: C4835
ms.assetid: d2e44c62-7b0e-4a45-943d-97903e27ed9d
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c1b01a84313d2d04e927420d1462dd8d5c2c495b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4835"></a>Avviso del compilatore (livello 1) C4835
'variabile': l'inizializzatore dei dati esportati non verrà eseguita fino a quando il codice gestito viene eseguito per prima nell'assembly su host  
  
 Quando si accede ai dati tra i componenti gestiti, è consigliabile non usare l'importazione in C++ nativo e meccanismi di esportazione. In alternativa, dichiarare i membri di dati all'interno di un tipo gestito e fare riferimento ai metadati con `#using` nel client. Per ulteriori informazioni, vedere [# direttiva using](../../preprocessor/hash-using-directive-cpp.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4835.  
  
```  
// C4835.cpp  
// compile with: /W1 /clr /LD  
int f() { return 1; }  
int n = 9;  
  
__declspec(dllexport) int m = f();   // C4835  
__declspec(dllexport) int *p = &n;   // C4835  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzato il componente compilato nell'esempio precedente, che indica che il valore delle variabili è di tipo non è quello previsto.  
  
```  
// C4835_b.cpp  
// compile with: /clr C4835.lib  
#include <stdio.h>  
__declspec(dllimport) int m;  
__declspec(dllimport) int *p;  
  
int main() {  
   printf("%d\n", m);  
   printf("%d\n", p);  
}  
```  
  
```Output  
0  
268456008  
```