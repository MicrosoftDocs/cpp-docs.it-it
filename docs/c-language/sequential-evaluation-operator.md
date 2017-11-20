---
title: Operatore di valutazione sequenziale | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- operators [C++], sequential-evaluation
- sequential-evaluation operator
- comma operator
ms.assetid: 587514f4-c8e2-44e9-81a8-7a553ce1453a
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: df14f32b8b51d8b74b56a697f3928ff8da485a5a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="sequential-evaluation-operator"></a>Operatore di valutazione sequenziale
L'operatore valutazione-sequenziale, noto anche come "operatore virgola," restituisce i propri due operandi in sequenza, da sinistra verso destra.  
  
## <a name="syntax"></a>Sintassi  
 *expression*:  
 *assignment-expression*  
  
 *expression*  **,**  *assignment-expression*  
  
 L'operando sinistro dell'operatore valutazione-sequenziale viene valutato come un'espressione `void`. Il risultato dell'operazione avrà lo stesso valore e lo stesso tipo dell'operando destro. Ogni operando può essere di qualsiasi tipo. L'operatore valutazione-sequenziale non esegue le conversioni di tipi tra i propri operandi e non restituisce un l-value. Esiste un punto di sequenza dopo il primo operando, che significa che tutti gli effetti collaterali derivanti dalla valutazione dell'operando sinistro vengono completati prima di iniziare la valutazione dell'operando destro. Per altre informazioni, vedere [Punti di sequenza](../c-language/c-sequence-points.md).  
  
 L'operatore valutazione-sequenziale viene in genere utilizzato per valutare due o più espressioni in contesti in cui sono consentite solo le espressioni.  
  
 In alcune situazioni è possibile utilizzare le virgole come separatori. Tuttavia, è necessario fare attenzione a non confondere l'utilizzo della virgola come separatore con il relativo utilizzo come operatore, in quanto le due situazioni sono completamente differenti.  
  
## <a name="example"></a>Esempio  
 In questo esempio è illustrato l'operatore valutazione-sequenziale:  
  
```  
for ( i = j = 1; i + j < 20; i += i, j-- );  
```  
  
 In questo esempio ogni operando della terza espressione dell'istruzione **for** viene valutato in modo indipendente. L'operando sinistro `i += i` viene valutato per primo; quindi viene valutato l'operando destro `j--`.  
  
```  
func_one( x, y + 2, z );  
func_two( (x--, y + 2), z );  
```  
  
 Nella chiamata di funzione a `func_one`, vengono passati tre argomenti, separati da virgole: `x`, `y + 2` e `z`. Nella chiamata di funzione a `func_two`, le parentesi forzano il compilatore a interpretare la prima virgola come operatore di valutazione sequenziale. Questa chiamata di funzione passa due argomenti a `func_two`. Il primo argomento è il risultato dell'operazione di valutazione sequenziale `(x--, y + 2)` che ha il valore e il tipo dell'espressione `y + 2`; il secondo argomento è `z`.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore virgola: ,](../cpp/comma-operator.md)