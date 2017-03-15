---
title: "Errore del compilatore C3020 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3020"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3020"
ms.assetid: f625c7a3-afaa-4bd8-9c1b-51891b832f36
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C3020
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': impossibile modificare la variabile di indice del ciclo 'for' OpenMP nel corpo del ciclo  
  
 Un ciclo `for` OpenMP non può modificare l'indice \(contatore di ciclo\) nel corpo del ciclo `for`.  
  
 Il seguente codice di esempio genera l'errore C3020:  
  
```  
// C3020.cpp  
// compile with: /openmp  
int main() {  
   int i = 0, n = 3;  
  
   #pragma omp parallel  
   {  
      #pragma omp for  
      for (i = 0; i < 10; i += n)  
         i *= 2;   // C3020  
         // try the following line instead  
         // n++;  
   }  
}  
```  
  
 Una variabile dichiarata con [lastprivate](../../parallel/openmp/reference/lastprivate.md) non può essere utilizzata come indice all'interno di un ciclo parallelizzato.  
  
 Nell'esempio riportato di seguito viene generato l'errore C3020 per la seconda lastprivate, poiché quest'ultima attiva la scrittura in idx\_a all'interno del ciclo for più esterno.  La prima lastprivate non dà origine a un errore perché attiva la scrittura in idx\_a al di fuori del ciclo for più esterno, tecnicamente al termine dell'ultima iterazione.  Nell'esempio seguente viene generato l'errore C3020:  
  
```  
// C3020b.cpp  
// compile with: /openmp /c  
float a[100][100];  
int idx_a, idx_b;  
void test(int first, int last)  
{  
   #pragma omp parallel for lastprivate(idx_a)  
   for (idx_a = first; idx_a <= last; ++idx_a) {  
      #pragma omp parallel for lastprivate(idx_a)   // C3020  
      for (idx_b = first; idx_b <= last; ++idx_b) {  
         a[idx_a][idx_b] += 1.0f;  
      }  
   }  
}  
```  
  
 Nell'esempio riportato di seguito viene illustrata una possibile soluzione:  
  
```  
// C3020c.cpp  
// compile with: /openmp /c  
float a[100][100];  
int idx_a, idx_b;  
void test(int first, int last)  
{  
   #pragma omp parallel for lastprivate(idx_a)  
   for (idx_a = first; idx_a <= last; ++idx_a) {  
      #pragma omp parallel for lastprivate(idx_b)  
      for (idx_b = first; idx_b <= last; ++idx_b) {  
         a[idx_a][idx_b] += 1.0f;  
      }  
   }  
}  
```