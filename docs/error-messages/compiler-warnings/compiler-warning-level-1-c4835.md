---
title: "Avviso del compilatore (livello 1) C4835 | Microsoft Docs"
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
  - "C4835"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4835"
ms.assetid: d2e44c62-7b0e-4a45-943d-97903e27ed9d
caps.latest.revision: 11
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4835
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile': l'inizializzatore dei dati esportati verrà eseguito solo dopo la prima esecuzione del codice gestito nell'assembly su host  
  
 Quando si accede ai dati tra componenti gestiti, si consiglia di non utilizzare i meccanismi di importazione ed esportazione di C\+\+ nativo.  È invece possibile dichiarare i membri dati all'interno di un tipo gestito e fare riferimento ai metadati con `#using` nel client.  Per ulteriori informazioni, vedere [Direttiva \#using](../../preprocessor/hash-using-directive-cpp.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4835:  
  
```  
// C4835.cpp  
// compile with: /W1 /clr /LD  
int f() { return 1; }  
int n = 9;  
  
__declspec(dllexport) int m = f();   // C4835  
__declspec(dllexport) int *p = &n;   // C4835  
```  
  
## Esempio  
 Nell'esempio riportato di seguito viene utilizzato il componente compilato nell'esempio precedente e viene dimostrato che il valore delle variabili non è quello previsto.  
  
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
  
  **0**  
**268456008**