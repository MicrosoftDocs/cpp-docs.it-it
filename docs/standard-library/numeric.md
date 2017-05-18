---
title: '&lt;numeric&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std::<numeric>
- std.<numeric>
- <numeric>
dev_langs:
- C++
helpviewer_keywords:
- <numeric> header
ms.assetid: 6d6ccb94-48cc-479b-b4a9-bd9c78d4896a
caps.latest.revision: 23
author: corob-msft
ms.author: corob
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 1af103aee129eee8176d6c34754521f7c2381da7
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ltnumericgt"></a>&lt;numeric&gt;
Definisce le funzioni di modello del contenitore che eseguono algoritmi per l'elaborazione numerica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <numeric>  
```  
  
## <a name="remarks"></a>Note  
Gli algoritmi numerici sono simili agli algoritmi della libreria standard C++ in [\<algorithm>](algorithm.md) e possono operare su diverse strutture di dati. Tali strutture di dati includono le classi contenitore della libreria standard, ad esempio [vector](../standard-library/vector-class.md) e [list](../standard-library/list-class.md), le strutture di dati definite a livello di programma e le matrici di elementi che soddisfano i requisiti di un algoritmo specifico. Gli algoritmi raggiungono tale livello di generalità accedendo a e attraversando gli elementi di un contenitore indirettamente tramite gli iteratori. Gli algoritmi consentono di elaborare gli intervalli dell'iteratore che vengono in genere specificati dalle relative posizioni iniziali o finali. Gli intervalli a cui si fa riferimento devono essere validi, ovvero tutti i puntatori negli intervalli devono essere dereferenziabili e, all'interno delle sequenze di ogni intervallo, l'ultima posizione deve essere raggiungibile dalla prima per incremento.  
  
 Gli algoritmi consentono di estendere le azioni supportate dalle operazioni e dalle funzioni membro di ciascun contenitore della libreria standard C++ e consentono l'interazione con diversi tipi di oggetti contenitore contemporaneamente.  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[accumulate](../standard-library/numeric-functions.md#accumulate)|Calcola la somma di tutti gli elementi di un intervallo specificato, incluso un valore iniziale, calcolando le somme parziali successive oppure calcola il risultato dei risultati parziali successivi ottenuti utilizzando un'operazione binaria specificata anziché l'operazione di somma.|  
|[adjacent_difference](../standard-library/numeric-functions.md#adjacent_difference)|Calcola le differenze successive tra ogni elemento e il relativo predecessore in un intervallo di input e restituisce i risultati in un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di differenza viene sostituita da un'altra operazione binaria specificata.|  
|[inner_product](../standard-library/numeric-functions.md#inner_product)|Calcola la somma del prodotto tra gli elementi di due intervalli e aggiunge tale somma a un valore iniziale specificato oppure calcola il risultato di una procedura generalizzata in cui le operazioni di somma e prodotto vengono sostituite da altre operazioni binarie specificate.|  
|[iota](../standard-library/numeric-functions.md#iota)|Archivia un valore iniziale a partire dal primo elemento e inserendo gli incrementi successivi del valore (`value++`) in ciascun elemento dell'intervallo `[first, last)`.|  
|[partial_sum](../standard-library/numeric-functions.md#partial_sum)|Calcola una serie di somme in un intervallo di input dal primo elemento fino all'elemento *i*th e archivia il risultato di ciascuna somma nell'elemento *i*th di un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di somma viene sostituita da un'altra operazione binaria specificata.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)


