---
title: Istruzione composta (C) | Microsoft Docs
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
- compound statements
- statements, compound
ms.assetid: 32d1bf86-cbbc-42a9-ba3a-1be1c6c7754c
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
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 5c576ea616bce80f86f599501370e7d88797901e
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="compound-statement-c"></a>Istruzione composta (C)
Un'istruzione composta (detta anche "blocco") viene in genere visualizzata come corpo di un'altra istruzione, ad esempio l'istruzione **if**. In [Dichiarazioni e tipi](../c-language/declarations-and-types.md) viene descritto il modulo e il significato delle dichiarazioni che possono essere visualizzate nell'intestazione di un'istruzione composta.  
  
## <a name="syntax"></a>Sintassi  
 *compound-statement*:  
 **{**  *declaration-list* opt*statement-list*opt**}**  
  
 *declaration-list*:  
 *declaration*  
  
 *declaration-list declaration*  
  
 *statement-list*:  
 s*tatement*  
  
 *statement-list statement*  
  
 Se esistono dichiarazioni, devono precedere qualsiasi istruzione. L'ambito di ogni identificatore dichiarato all'inizio di un'istruzione composta si estende dal punto di dichiarazione fino alla fine del blocco. È visibile nel blocco a meno che non esista una dichiarazione dello stesso identificatore in un blocco interno.  
  
 Si presuppone che gli identificatori in un'istruzione composta siano **auto** salvo se dichiarati esplicitamente con **register**, **static** o `extern`, mentre le funzioni possono essere solo `extern`. È possibile ignorare l'identificatore `extern` nelle dichiarazioni di funzione e la funzione sarà sempre `extern`.  
  
 L'archiviazione non viene allocata e l'inizializzazione non è consentita se una variabile o una funzione viene dichiarata in un'istruzione composta con classe di archiviazione `extern`. La dichiarazione fa riferimento a una variabile esterna o a una funzione definita altrove.  
  
 Le variabili dichiarate in un blocco con la parola chiave **auto** o **register** vengono ridistribuite e, se necessario, inizializzate ogni volta che viene inserita l'istruzione composta. Queste variabili non vengono definite quando si esce dall'istruzione composta. Se una variabile dichiarata in un blocco dispone dell'attributo **static**, la variabile viene inizializzata quando inizia l'esecuzione del programma e mantiene il suo valore nell'intero programma. Vedere [Classi di archiviazione](../c-language/c-storage-classes.md) per altre informazioni relative a **static**.  
  
 In questo esempio viene illustrata un'istruzione composta:  
  
```  
if ( i > 0 )   
{  
    line[i] = x;  
    x++;  
    i--;  
}  
```  
  
 In questo esempio, se `i` è maggiore di 0, tutte le istruzioni nell'istruzione composta vengono eseguite in ordine.  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni](../c-language/statements-c.md)
