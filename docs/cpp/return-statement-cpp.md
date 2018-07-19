---
title: Istruzione return (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- return_cpp
dev_langs:
- C++
helpviewer_keywords:
- return keyword [C++], syntax
- return keyword [C++]
ms.assetid: a498903a-056a-4df0-a6cf-72f633a62210
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: aea9999adc7089499028850017a32245bba97db6
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943506"
---
# <a name="return-statement-c"></a>Istruzione return (C++)
Viene interrotta l'esecuzione di una funzione e il controllo viene restituito alla funzione chiamante (o al sistema operativo, se il controllo viene trasferito dalla funzione `main`). Nella funzione chiamante, l'esecuzione riprende dal punto immediatamente successivo alla chiamata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
return [expression];  
```  
  
## <a name="remarks"></a>Note  
 La clausola `expression`, se presente, viene convertita nel tipo specificato nella dichiarazione di funzione, come se si eseguisse un'inizializzazione. Conversione dal tipo dell'espressione per il **restituire** tipo della funzione può creare oggetti temporanei. Per altre informazioni su come e quando temporanei vengono creati, vedere [oggetti temporanei](../cpp/temporary-objects.md).  
  
 Il valore della clausola `expression` viene restituito alla funzione chiamante. Se l'espressione viene omessa, il valore restituito della funzione è indefinito. Costruttori e distruttori e funzioni di tipo **void**, non è possibile specificare un'espressione nel **restituire** istruzione. Funzioni di tutti gli altri tipi devono specificare un'espressione nel **restituire** istruzione.  
  
 Quando il flusso di controllo esce dal blocco che racchiude la definizione di funzione, il risultato è lo stesso come lo sarebbe se un **restituire** fosse stata eseguita un'istruzione senza un'espressione. Ciò non è valido per le funzioni che vengono dichiarate come elementi che restituiscono un valore.  
  
 Una funzione può avere un numero qualsiasi di **restituire** istruzioni.  
  
 L'esempio seguente usa un'espressione con un **restituire** istruzione per ottenere il più elevato tra due numeri interi.  
  
## <a name="example"></a>Esempio  
  
```cpp 
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