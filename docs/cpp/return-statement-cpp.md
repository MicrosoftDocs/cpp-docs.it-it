---
title: "Istruzione return (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "return"
  - "return_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "return (parola chiave) [C++]"
  - "return (parola chiave) [C++], sintassi"
ms.assetid: a498903a-056a-4df0-a6cf-72f633a62210
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione return (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene interrotta l'esecuzione di una funzione e il controllo viene restituito alla funzione chiamante \(o al sistema operativo, se il controllo viene trasferito dalla funzione `main`\).  Nella funzione chiamante, l'esecuzione riprende dal punto immediatamente successivo alla chiamata.  
  
## Sintassi  
  
```  
return [expression];  
```  
  
## Note  
 La clausola `expression`, se presente, viene convertita nel tipo specificato nella dichiarazione di funzione, come se si eseguisse un'inizializzazione.  La conversione dal tipo dell'espressione al tipo `return` della funzione può creare oggetti temporanei.  Per ulteriori informazioni su come e quando vengono creati oggetti temporanei, vedere [Oggetti temporanei](../cpp/temporary-objects.md).  
  
 Il valore della clausola `expression` viene restituito alla funzione chiamante.  Se l'espressione viene omessa, il valore restituito della funzione è indefinito.  I costruttori, i distruttori e le funzioni di tipo `void`,  `` non possono specificare un'espressione nell'istruzione `return`.  Le funzioni appartenenti a tutti gli altri tipi devono specificare un'espressione nell'istruzione `return`.  
  
 Quando il flusso di controllo esce dal blocco che include la definizione di funzione, il risultato è il medesimo che si otterrebbe se venisse eseguita un'istruzione `return` senza un'espressione.  Ciò non è valido per le funzioni che vengono dichiarate come elementi che restituiscono un valore.  
  
 Una funzione può contenere un qualsiasi numero di istruzioni `return`.  
  
 Nell'esempio seguente, viene utilizzata un'espressione con un'istruzione `return` per ottenere il più grande tra due Integer.  
  
## Esempio  
  
```  
// return_statement2.cpp  
#include <stdio.h>  
  
int max ( int a, int b )  
{  
   return ( a > b ? a : b );  
}  
  
int main()  
{  
    int nOne = 5;  
    int nTwo = 7;  
  
    printf_s("\n%d is bigger\n", max( nOne, nTwo ));  
}  
```  
  
## Vedere anche  
 [Istruzioni di spostamento](../cpp/jump-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)