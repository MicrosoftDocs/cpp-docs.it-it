---
title: Operatori address-of e di riferimento indiretto | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- address-of operator (&)
- '* operator'
- operators [C++], address-of
- ampersand operator (&)
- '* operator, indirection operator'
- addresses [C++], indirection
- addresses [C++]
- indirection operator
- '& operator, address-of operator'
- null pointers [C++]
- '* operator, address-of operator'
- operators [C++], indirection
ms.assetid: 10d62b00-12ba-4ea9-a2d5-09ac29ca2232
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 715221da8ea960f19e9c4ab0e386afc61c3439fc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="indirection-and-address-of-operators"></a>Operatori address-of e di riferimento indiretto
L'operatore di riferimento indiretto (**\***) accede indirettamente a un valore tramite un puntatore. L'operando deve essere un valore del puntatore. Il risultato dell'operazione è il valore indicato dall'operando, ovvero il valore al cui indirizzo punta l'operando. Il tipo del risultato corrisponde al tipo indirizzato dall'operando.  
  
 Se l'operando punta a una funzione, il risultato è un indicatore di funzione. Se invece punta a un percorso di archiviazione, il risultato è un valore l-value che definisce il percorso di archiviazione.  
  
 Se il valore del puntatore non è valido, il risultato sarà indefinito. Nell'elenco seguente sono incluse alcune delle situazioni più comuni che invalidano un valore del puntatore.  
  
-   Il puntatore è un puntatore null.  
  
-   Il puntatore specifica l'indirizzo di un elemento locale non visibile al momento del riferimento.  
  
-   Il puntatore specifica un indirizzo allineato in modo non appropriato per il tipo di oggetto cui fa riferimento.  
  
-   Il puntatore specifica un indirizzo non utilizzato dal programma di esecuzione.  
  
 L'operatore address-of (**&**) restituisce l'indirizzo del proprio operando. L'operando dell'operatore address-of può essere un indicatore di funzione o un valore l-value che definisce un oggetto che non è un campo di bit e non è dichiarato con l'identificatore della classe di archiviazione **register**.  
  
 Il risultato dell'operazione di indirizzamento è un puntatore all'operando. Il tipo indirizzato dal puntatore è il tipo dell'operando.  
  
 L'operatore address-of può essere applicato solo a variabili di tipo fondamentale, struttura o unione dichiarate a livello di file oppure a riferimenti a matrice con indice. In queste espressioni, un'espressione costante che non include l'operatore address-of può essere aggiunta o sottratta dall'espressione di indirizzo.  
  
## <a name="examples"></a>Esempi  
 Negli esempi seguenti vengono utilizzate queste dichiarazioni:  
  
```  
int *pa, x;  
int a[20];  
double d;  
```  
  
 Questa istruzione utilizza l'operatore address-of:  
  
```  
pa = &a[5];  
```  
  
 L'operatore address-of (**&**) accetta l'indirizzo del sesto elemento della matrice `a`. Il risultato viene archiviato nella variabile del puntatore `pa`.  
  
```  
x = *pa;  
```  
  
 L'operatore di riferimento indiretto (**\***) viene usato in questo esempio per accedere al valore `int` all'indirizzo archiviato in `pa`. Il valore viene assegnato alla variabile Integer `x`.  
  
```  
if( x == *&x )  
    printf( "True\n" );  
```  
  
 L'esempio stampa la parola `True`, dimostrando che il risultato dell'applicazione dell'operatore di riferimento indiretto all'indirizzo di `x` è lo stesso `x`.  
  
```  
int roundup( void );     /* Function declaration */  
  
int  *proundup  = roundup;  
int  *pround  = &roundup;  
```  
  
 Dopo che la funzione `roundup` è stata dichiarata, vengono dichiarati e inizializzati due puntatori a `roundup`. Il primo puntatore, `proundup`, viene inizializzata utilizzando solo il nome della funzione, mentre il secondo, `pround`, utilizza l'operatore address-of nell'inizializzazione. Le inizializzazioni sono equivalenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore di riferimento indiretto: *](../cpp/indirection-operator-star.md)   
 [Operatore address-of: &](../cpp/address-of-operator-amp.md)