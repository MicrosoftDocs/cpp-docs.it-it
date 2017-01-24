---
title: "Chiamate di funzione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "chiamate di funzione"
  - "chiamate di funzione, informazioni su chiamate di funzione"
  - "chiamate di funzione, funzioni C"
  - "funzioni [C], chiamata"
ms.assetid: 2cfa897d-3874-4820-933c-e624f75d1712
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Chiamate di funzione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una *chiamata di funzione* è un'espressione che passa controllo e argomenti \(se presenti\) a una funzione e ha il formato seguente:  
  
 *expression* \(*expression\-list* opt\)  
  
 dove *expression* è un nome di funzione o restituisce un indirizzo della funzione e *expression\-list* è un elenco di espressioni \(separate da virgole\).  I valori di queste ultime espressioni sono gli argomenti passati alla funzione.  Se la funzione non restituisce un valore, dichiararla come funzione che restituisce `void`.  
  
 Se prima della chiamata di funzione esiste una dichiarazione, ma non viene fornita alcuna informazione relativa ai parametri, tutti gli argomenti non dichiarati subiscono semplicemente le conversioni aritmetiche normali.  
  
> [!NOTE]
>  Le espressioni nell'elenco di argomenti della funzione possono essere valutate in qualsiasi ordine, pertanto gli argomenti i cui valori possono essere modificati da effetti collaterali di un altro argomento hanno valori non definiti.  Il punto di sequenza definito dall'operatore della chiamata di funzione assicura solo che gli effetti collaterali nell'elenco di argomenti vengano valutati prima che il controllo venga passato alla funzione chiamata. Tenere presente che l'ordine in cui gli argomenti vengono inseriti nello stack è un altro aspetto diverso. Per ulteriori informazioni, vedere [Punti di sequenza](../c-language/c-sequence-points.md).  
  
 L'unico requisito per qualsiasi chiamata di funzione è rappresentato dal fatto che l'espressione prima della parentesi deve restituire un indirizzo di funzione.  Questo significa che una funzione può essere chiamata tramite qualsiasi espressione di puntatore a funzione.  
  
## Esempio  
 In questo esempio sono illustrate le chiamate di funzione definite da un'istruzione `switch`:  
  
```  
int main()  
{  
    /* Function prototypes */  
  
    long lift( int ), step( int ), drop( int );  
    void work( int number, long (*function)(int i) );  
  
    int select, count;  
    .  
    .  
    .  
    select = 1;  
    switch( select )   
    {  
        case 1: work( count, lift );  
                break;  
  
        case 2: work( count, step );  
                break;  
  
        case 3: work( count, drop );  
                /* Fall through to next case */  
        default:  
                break;  
    }  
}  
  
/* Function definition */  
  
void work( int number, long (*function)(int i) )  
{  
    int i;  
    long j;  
  
    for ( i = j = 0; i < number; i++ )  
            j += ( *function )( i );  
}  
```  
  
 In questo esempio la chiamata di funzione in `main`  
  
```  
work( count, lift );  
```  
  
 passa una variabile di tipo Integer, `count`, e l'indirizzo della funzione `lift` alla funzione `work`.  Si noti che l'indirizzo della funzione viene passato semplicemente specificando l'identificatore della funzione, che restituisce un'espressione puntatore.  Per utilizzare un identificatore di funzione in questo modo, la funzione deve essere dichiarata o definita prima che l'identificatore venga utilizzato, altrimenti l'identificatore non è riconosciuto.  In questo caso, un prototipo per `work` viene fornito all'inizio della funzione `main`.  
  
 Il parametro `function` in `work` viene dichiarato come puntatore a una funzione che accetta un argomento `int` e restituisce un valore **long**.  Le parentesi che racchiudono il nome di parametro sono necessarie perché, in caso contrario, la dichiarazione specificherebbe una funzione che restituisce un puntatore a un valore **long**.  
  
 La funzione `work` chiama la funzione selezionata all'interno del ciclo **for** tramite la chiamata di funzione seguente:  
  
```  
( *function )( i );  
```  
  
 Un argomento, `i`, viene passato alla funzione chiamata.  
  
## Vedere anche  
 [Funzioni](../c-language/functions-c.md)