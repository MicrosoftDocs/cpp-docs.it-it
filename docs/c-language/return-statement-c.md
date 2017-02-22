---
title: "Istruzione return (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "parentesi ( ) nelle istruzioni return"
ms.assetid: 18cd82cf-f899-4b28-83ad-4eff353ddcb4
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Istruzione return (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione `return` viene utilizzata per terminare l'esecuzione di una funzione e restituire il controllo alla funzione chiamante.  L'esecuzione riprende dalla funzione chiamante al punto immediatamente dopo la chiamata.  Un'istruzione `return` può inoltre restituire un valore alla funzione chiamante.  Per ulteriori informazioni, vedere [Tipo Ritornato](../c-language/return-type.md).  
  
## Sintassi  
 *Istruzioni di spostamento*:  
 **ritorno**  *espressione*  op **;**  
  
 Il valore dell'*espressione*, se presente, viene restituito alla funzione chiamante.  Se *l'espressione* viene omessa, il valore restituito della funzione è indefinito.  L'espressione, se presente, viene valutata e viene quindi convertita nel tipo restituito dalla funzione.  Se la funzione è dichiarata con tipo restituito `void`, un'istruzione `return` che contiene un'espressione genera un avviso e l'espressione non viene valutata.  
  
 Se nessuna istruzione `return` viene visualizzata in una definizione di funzione, il controllo ritorna automaticamente alla funzione chiamante dopo che l'ultima istruzione della funzione chiamata viene eseguita.  In questo caso, il valore restituito della funzione chiamata è indefinito.  Se il valore restituito non è necessario, dichiarare la funzione per avere un tipo restituito `void`; in caso contrario, il tipo restituito predefinito è `int`.  
  
 Molti programmatori utilizzano le parentesi per racchiudere l'argomento dell'*espressione* dell'istruzione `return`.  Tuttavia, il C non richiede le parentesi.  
  
 Nell'esempio seguente viene mostrato l'utilizzo dell'istruzione `return`:  
  
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
  
 In questo esempio, la funzione `main` chiama due funzioni: `sq` e `draw`.  La funzione `sq` restituisce il valore di `x * x` al `main`, dove il valore restituito viene assegnato a `y`.  Le parentesi attorno all'espressione di ritorno in `sq` vengono valutate come parte dell'espressione e non sono richieste dall'istruzione return.  Poiché l'espressione di ritorno viene valutata prima di essere convertita nel tipo restituito, `sq` forza il tipo di espressione ad essere il tipo restituito tramite un cast per impedire un possibile overflow di intero, in grado di produrre risultati imprevisti.  La funzione `draw` viene dichiarata come funzione `void`.  Visualizza i valori dei parametri e quindi l'istruzione return vuota termina la funzione e non restituisce un valore.  Un tentativo di assegnare il valore restituito da `draw` provocherebbe la stampa di un messaggio di diagnostica.  La funzione `main` quindi restituisce il valore `x` al sistema operativo.  
  
 L'output dell'esempio è analogo al seguente:  
  
  **i \= 2147483647, ll \= 4611686014132420609**   
## Vedere anche  
 [Istruzioni](../c-language/statements-c.md)