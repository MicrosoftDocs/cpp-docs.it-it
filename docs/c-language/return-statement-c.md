---
title: Istruzione return (C) | Microsoft Docs
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
- ( ) parentheses in return statements
ms.assetid: 18cd82cf-f899-4b28-83ad-4eff353ddcb4
caps.latest.revision: 12
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
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 214bca780d3ffe508d9e5e3bd9d78392df2f35b9
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="return-statement-c"></a>Istruzione return (C)
L'istruzione `return` viene utilizzata per terminare l'esecuzione di una funzione e restituire il controllo alla funzione chiamante. Nella funzione chiamante, l'esecuzione riprende dal punto immediatamente successivo alla chiamata. Un'istruzione `return` può inoltre restituire un valore alla funzione chiamante. Per altre informazioni, vedere [Tipo restituito](../c-language/return-type.md).  
  
## <a name="syntax"></a>Sintassi  
 *jump-statement*:  
 **return** *expression* opt**;**  
  
 Il valore di *expression*, se presente, viene restituito alla funzione chiamante. Se *expression* non è presente, il valore restituito della funzione è indefinito. L'espressione, se presente, viene valutata e viene quindi convertita nel tipo restituito dalla funzione. Se la funzione è dichiarata con tipo restituito `void`, un'istruzione `return` che contiene un'espressione genera un avviso e l'espressione non viene valutata.  
  
 Se nessuna istruzione `return` viene visualizzata in una definizione di funzione, il controllo ritorna automaticamente alla funzione chiamante dopo che l'ultima istruzione della funzione chiamata viene eseguita. In questo caso, il valore restituito della funzione chiamata è indefinito. Se il valore restituito non è necessario, dichiarare la funzione per avere un tipo restituito `void`; in caso contrario, il tipo restituito predefinito è `int`.  
  
 Molti programmatori usano le parentesi per racchiudere l'argomento *expression* dell'istruzione `return`. Per il linguaggio C, tuttavia, non sono necessarie le parentesi.  
  
 In questo esempio viene illustrata l'istruzione `return`:  
  
```  
#include <limits.h>  
#include <stdio.h>  
  
void draw( int i, long long ll );  
long long sq( int s );  
  
int main()  
{  
    long long y;  
    int x = INT_MAX;  
  
    y = sq( x );  
    draw( x, y );  
    return x;  
}  
  
long long sq( int s )  
{  
    // Note that parentheses around the return expression   
    // are allowed but not required here.  
    return( s * (long long)s );  
}  
  
void draw( int i, long long ll )  
{  
    printf( "i = %d, ll = %lld\n", i, ll );  
    return;  
}  
  
```  
  
 In questo esempio, la funzione `main` chiama due funzioni: `sq` e `draw`. La funzione `sq` restituisce il valore di `x * x` a `main`, dove il valore restituito viene assegnato a `y`. Le parentesi attorno all'espressione restituita in `sq` vengono valutate come parte dell'espressione e non sono richieste dall'istruzione return. Poiché l'espressione restituita viene valutata prima di essere convertita nel tipo restituito, `sq` forza il tipo di espressione sul tipo restituito tramite un cast per impedire un possibile errore di overflow di intero che potrebbe provocare risultati imprevisti. La funzione `draw` viene dichiarata come funzione `void`. Visualizza i valori dei parametri e quindi l'istruzione return vuota termina la funzione e non restituisce un valore. Un tentativo di assegnare il valore restituito da `draw` provocherebbe la stampa di un messaggio di diagnostica. La funzione `main` restituisce quindi il valore `x` al sistema operativo.  
  
 L'output dell'esempio è analogo al seguente:  
  
```Output  
i = 2147483647, ll = 4611686014132420609  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni](../c-language/statements-c.md)
