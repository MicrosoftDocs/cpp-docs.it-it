---
title: Istruzione return (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: return_cpp
dev_langs: C++
helpviewer_keywords:
- return keyword [C++], syntax
- return keyword [C++]
ms.assetid: a498903a-056a-4df0-a6cf-72f633a62210
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3d6857983412b2037b8958c2b1a0bee9d9dda053
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="return-statement-c"></a>Istruzione return (C++)
Viene interrotta l'esecuzione di una funzione e il controllo viene restituito alla funzione chiamante (o al sistema operativo, se il controllo viene trasferito dalla funzione `main`). Nella funzione chiamante, l'esecuzione riprende dal punto immediatamente successivo alla chiamata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
return [expression];  
```  
  
## <a name="remarks"></a>Note  
 La clausola `expression`, se presente, viene convertita nel tipo specificato nella dichiarazione di funzione, come se si eseguisse un'inizializzazione. La conversione dal tipo dell'espressione al tipo `return` della funzione può creare oggetti temporanei. Per ulteriori informazioni su come e quando i temporanei vengono creati, vedere [oggetti temporanei](../cpp/temporary-objects.md).  
  
 Il valore della clausola `expression` viene restituito alla funzione chiamante. Se l'espressione viene omessa, il valore restituito della funzione è indefinito. Costruttori e distruttori e funzioni di tipo `void`, non è possibile specificare un'espressione di `return` istruzione. Le funzioni appartenenti a tutti gli altri tipi devono specificare un'espressione nell'istruzione `return`.  
  
 Quando il flusso di controllo esce dal blocco che include la definizione di funzione, il risultato è il medesimo che si otterrebbe se venisse eseguita un'istruzione `return` senza un'espressione. Ciò non è valido per le funzioni che vengono dichiarate come elementi che restituiscono un valore.  
  
 Una funzione può contenere un qualsiasi numero di istruzioni `return`.  
  
 Nell'esempio seguente, viene utilizzata un'espressione con un'istruzione `return` per ottenere il più grande tra due Integer.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di spostamento](../cpp/jump-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)