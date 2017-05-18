---
title: Precedenza e ordine di valutazione | Microsoft Docs
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
- associativity of operators [C++]
- precedence [C++], operators
- data binding [C++], operator precedence
- operators [C++], precedence
ms.assetid: 201f7864-0c51-4c55-9d6f-39c5d013bcb0
caps.latest.revision: 8
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
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: b6b455077861557bcdba03d0b9bd714d475961f5
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="precedence-and-order-of-evaluation"></a>Precedenza e ordine di valutazione
La precedenza e l'associatività degli operatori C influiscono sul raggruppamento e sulla valutazione degli operandi nelle espressioni. La precedenza d un operatore è significativa solo se sono presenti altri operatori con precedenza più alta o più bassa. Le espressioni con operatori con precedenza più alta vengono valutate per prime. La precedenza può essere descritta anche con la parola "associazione". Gli operatori con precedenza maggiore vengono definiti con associazione più forte.  
  
 Nella tabella seguente vengono riepilogati la precedenza e l'associatività (l'ordine in cui gli operandi vengono valutati) degli operatori C, elencandoli in ordine di precedenza a partire da quella più alta. Quando più operatori vengono visualizzati insieme, hanno precedenza uguale e vengono valutati in base all'associatività. Gli operatori nella tabella sono descritti nelle sezioni a partire da [Forma suffissa degli operatori](../c-language/postfix-operators.md). Nella parte rimanente della sezione vengono fornite informazioni generali sulla precedenza e sull'associatività.  
  
### <a name="precedence-and-associativity-of-c-operators"></a>Precedenza e associatività degli operatori C  
  
|Simbolo1|Tipo di operazione|associatività|  
|-------------|-----------------------|-------------------|  
|**[ ] ( ) . ->** suffisso `++` e suffisso **--**|Espressione|Da sinistra a destra|  
|prefisso `++` e prefisso **-- sizeof &   \*   + - ~ !**|Unario|Da destra a sinistra|  
|*cast di tipo*|Unario|Da destra a sinistra|  
|**\* / %**|Moltiplicazione|Da sinistra a destra|  
|**+ -**|Addizione|Da sinistra a destra|  
|**<\< >>**|Spostamento bit per bit|Da sinistra a destra|  
|**\< > \<= >=**|Relazionale|Da sinistra a destra|  
|**== !=**|Uguaglianza|Da sinistra a destra|  
|**&**|AND bit per bit|Da sinistra a destra|  
|**^**|OR esclusivo bit per bit|Da sinistra a destra|  
|**&#124;**|OR inclusivo bit per bit|Da sinistra a destra|  
|**&&**|AND logico|Da sinistra a destra|  
|`&#124;&#124;`|OR logico|Da sinistra a destra|  
|**? :**|Espressione condizionale|Da destra a sinistra|  
|**= \*= /= %=**<br /><br /> **+= -= <\<= >>=&=**<br /><br /> **^= &#124;=**|Assegnazione semplice e composta2|Da destra a sinistra|  
|**,**|Valutazione sequenziale|Da sinistra a destra|  
  
 1. Gli operatori sono elencati in ordine decrescente di precedenza. Se alcuni operatori sono nella stessa riga o in un gruppo, hanno uguale precedenza.  
  
 2. Tutti gli operatori di assegnazione semplice e composta hanno uguale precedenza.  
  
 Un'espressione può contenere numerosi operatori con uguale precedenza. Quando più operatori sono allo stesso livello in un'espressione, la valutazione continua in base all'associatività dell'operatore, sia da destra a sinistra che da sinistra a destra. La direzione della valutazione non influisce sui risultati delle espressioni che includono più di un operatore di moltiplicazione (**\***), di addizione (**+**) o binario bit per bit (**& &#124; ^**) allo stesso livello. L'ordine delle operazioni non è definito dal linguaggio. Il compilatore è libero di valutare tali espressioni in qualsiasi ordine, se può garantire un risultato coerente.  
  
 Solo gli operatori di valutazione sequenziale (**,**), AND logico (**&&**), OR logico (`||`), espressione condizionale (**? :**) e di chiamata di funzione costituiscono punti di sequenza e pertanto garantiscono un determinato ordine di valutazione per i relativi operandi. L'operatore di chiamata di funzione è un set di parentesi che seguono l'identificatore della funzione. L'operatore di valutazione sequenziale (**,**) garantisce la valutazione dei propri operandi da sinistra a destra. Si noti che l'operatore virgola in una chiamata di funzione non equivale all'operatore di valutazione sequenziale e non fornisce una garanzia analoga. Per alte informazioni, vedere [Punti di sequenza](../c-language/c-sequence-points.md).  
  
 Anche gli operatori logici garantiscono la valutazione dei propri operandi da sinistra a destra. Tali operatori valutano tuttavia il minor numero di operandi necessari per determinare il risultato dell'espressione. Questa condizione viene denominata anche "valutazione short circuit". Alcuni operandi dell'espressione potrebbero pertanto non essere valutati. Ad esempio, nell'espressione  
  
```  
x && y++  
```  
  
 il secondo operando, `y++`, viene valutato solo se `x` è true (diverso da zero). Di conseguenza, `y` non viene incrementato se `x` è false (0).  
  
 **Esempi**  
  
 Nell'elenco seguente viene mostrato il modo in cui il compilatore associa automaticamente diverse espressioni di esempio:  
  
|Espressione|Associazione automatica|  
|----------------|-----------------------|  
|`a & b &#124;&#124; c`|`(a & b) &#124;&#124; c`|  
|`a = b &#124;&#124; c`|`a = (b &#124;&#124; c)`|  
|`q && r &#124;&#124; s--`|`(q && r) &#124;&#124; s--`|  
  
 Nella prima espressione l'operatore AND bit per bit (`&`) ha precedenza più alta rispetto all'operatore OR logico (`||`), quindi `a & b` forma il primo operando dell'operazione di OR logico.  
  
 Nella seconda espressione l'operatore OR logico (`||`) ha precedenza più alta rispetto all'operatore di assegnazione semplice (`=`), quindi `b || c` viene raggruppato come operando destro nell'assegnazione. Si noti che il valore assegnato a `a` è 0 o 1.  
  
 La terza espressione mostra un'espressione formata correttamente che può restituire un risultato imprevisto. L'operatore AND logico (`&&`) ha precedenza più alta rispetto all'operatore OR logico (`||`), quindi `q && r` viene raggruppato come operando. Poiché gli operatori logici garantiscono la valutazione degli operandi da sinistra a destra, `q && r` viene valutato prima di `s--`. Tuttavia, se `q && r` restituisce un valore diverso da zero, `s--` non viene valutato e `s` non viene decrementato. Se la mancata diminuzione di `s` causa un problema nel programma, `s--` deve essere visualizzato come primo operando dell'espressione o `s` deve essere decrementato in un'operazione separata.  
  
 La seguente espressione non è valida e restituisce un messaggio di diagnostica in fase di compilazione:  
  
|Espressione non valida|Raggruppamento predefinito|  
|------------------------|----------------------|  
|`p == 0 ? p += 1: p += 2`|`( p == 0 ? p += 1 : p ) += 2`|  
  
 In questa espressione, l'operatore di uguaglianza (`==`) ha la precedenza più alta, pertanto `p == 0` viene raggruppato come operando. L'operatore di espressione condizionale (`? :`) è quello con il valore di precedenza successivo. In questo caso, il primo operando è `p == 0`, mentre il secondo è `p += 1`. Tuttavia, il secondo operando dell'operatore di espressione condizionale è considerato `p` anziché `p += 2`, poiché questa occorrenza di `p` esegue l'associazione in modo più forte all'operatore di espressione condizionale rispetto a quello di assegnazione composta. Si verifica un errore di sintassi verifica perché in `+= 2` non è presente un operando sinistro. Per evitare errori di questo tipo e produrre codice più leggibile, è necessario utilizzare le parentesi. È ad esempio possibile utilizzare le parentesi come illustrato di seguito per correggere e chiarire l'esempio precedente:  
  
```  
( p == 0 ) ? ( p += 1 ) : ( p += 2 )  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori C](../c-language/c-operators.md)
