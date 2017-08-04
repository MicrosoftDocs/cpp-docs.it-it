---
title: Funzioni ricorsive | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- functions [C], recursive
- function calls, recursive
- functions [C], calling recursively
- recursive function calls
ms.assetid: 59739040-3081-4006-abbc-9d8423992bce
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 38d98e568b88d8b26be2a04a9b643fb0d99a9712
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="recursive-functions"></a>Funzioni ricorsive
Qualsiasi funzione in un programma C può essere chiamata in modo ricorsivo, vale a dire che può chiamare se stessa. Il numero di chiamate ricorsive è limitato alla dimensione dello stack. Per informazioni sulle opzioni del linker che impostano la dimensione dello stack, vedere l'opzione del linker /STACK in [/STACK (Stack Allocations)](../build/reference/stack-stack-allocations.md) (/STACK (allocazioni di stack)). Ogni volta che la funzione viene chiamata, viene allocata altra memoria per i parametri e per le variabili **auto** e **register**, in modo da non sovrascrivere i valori di queste nelle chiamate precedenti non completate. I parametri sono solo accessibili direttamente all'istanza della funzione in cui vengono creati. I parametri precedenti non sono accessibili direttamente a istanze che seguono la funzione.  
  
 Tenere presente che le variabili dichiarate con memoria **statica** non richiedono nuova memoria per ogni chiamata ricorsiva. La relativa archiviazione disponibile esiste per la durata del programma. Ogni riferimento a tale variabile accede alla stessa area di archiviazione.  
  
## <a name="example"></a>Esempio  
 In questo esempio sono illustrate le chiamate ricorsive:  
  
```  
int factorial( int num );      /* Function prototype */  
  
int main()  
{  
    int result, number;  
    .  
    .  
    .  
    result = factorial( number );  
}  
  
int factorial( int num )      /* Function definition */  
{  
    .  
    .  
    .  
    if ( ( num > 0 ) || ( num <= 10 ) )  
        return( num * factorial( num - 1 ) );  
}  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamate di funzione](../c-language/function-calls.md)
