---
title: Qualificatori di tipo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- volatile keyword [C], type qualifier
- type qualifiers
- volatile keyword [C]
- qualifiers for types
- const keyword [C]
- memory, access using volatile
- volatile keyword [C], type specifier
ms.assetid: bb4c6744-1dd7-40a8-b4eb-f5585be30908
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 74f51dfe3b0b45fb08bc30f9b0d158275112bcf9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="type-qualifiers"></a>Qualificatori di tipo
I qualificatori di tipo forniscono una delle due proprietà a un identificatore. Il qualificatore di tipo **const** dichiara un oggetto come non modificabile. Il qualificatore di tipo `volatile` dichiara un elemento il cui valore può essere modificato legittimamente da un elemento sotto il controllo del programma in cui è visualizzato, ad esempio un thread contemporaneamente in esecuzione.  
  
 I due qualificatori di tipo, **const** e `volatile`, possono apparire solo una volta in una dichiarazione. I qualificatori di tipo possono essere visualizzati con qualsiasi identificatore di tipo; tuttavia, non possono apparire dopo la prima virgola in una dichiarazione multipla dell'elemento. Ad esempio le seguenti dichiarazioni sono valide:  
  
```  
typedef volatile int VI;  
const int ci;  
```  
  
 Queste dichiarazioni non sono valide:  
  
```  
typedef int *i, volatile *vi;  
float f, const cf;     
```  
  
 I qualificatori di tipo sono rilevanti solo in caso di accesso agli identificatori come l-value nelle espressioni. Per informazioni su l-value ed espressioni, vedere [Espressioni L-Value e R-Value](../c-language/l-value-and-r-value-expressions.md).  
  
## <a name="syntax"></a>Sintassi  
 *type-qualifier*:  
 **constvolatile**  
  
 Le seguenti dichiarazioni **const** e `volatile` sono valide:  
  
```  
int const *p_ci;       /* Pointer to constant int */  
int const (*p_ci);     /* Pointer to constant int */  
int *const cp_i;       /* Constant pointer to int */  
int (*const cp_i);     /* Constant pointer to int */  
int volatile vint;     /* Volatile integer        */  
```  
  
 Se la specifica di un tipo matrice include i qualificatori di tipo, viene qualificato l'elemento, non il tipo di matrice. Se la specifica del tipo di funzione include i qualificatori, il comportamento non è definito. Né `volatile` né **const** influisce sull'intervallo di valori o proprietà aritmetiche dell'oggetto.  
  
 Questo elenco descrive come usare **const** e `volatile`.  
  
-   La parola chiave **const** può essere usata per modificare un tipo fondamentale o aggregato, un puntatore a un oggetto di qualsiasi tipo o un elemento `typedef`. Se un elemento viene dichiarato con il solo qualificatore di tipo **const**, si presuppone che il tipo sia **const int**. Una variabile **const** può essere inizializzata o può essere inserita in un'area di archiviazione di sola lettura. La parola chiave **const** è utile per la dichiarazione di puntatori a **const**, poiché richiede che la funzione non modifichi il puntatore in alcun modo.  
  
-   Il compilatore presuppone che, in un punto qualsiasi del programma, a una variabile `volatile` possa accedere un processo sconosciuto che utilizza o modifica il valore. Di conseguenza, indipendentemente dalle ottimizzazioni specificate nella riga di comando, il codice per ogni assegnazione o riferimento di una variabile `volatile` deve essere generato anche se sembra non produrre alcun effetto.  
  
     Se `volatile` viene utilizzato da solo, viene utilizzato `int`. L'identificatore di tipo `volatile` può essere utilizzato per fornire accesso affidabile a posizioni di memoria speciali. Utilizzare `volatile` con oggetti dati a cui è possibile accedere o che possono essere modificati dai gestori del segnale, mediante l'esecuzione contemporanea di programmi o mediante hardware speciale come i registri di I/O mappati alla memoria. È possibile dichiarare una variabile come `volatile` per la sua durata oppure eseguire il cast di un solo riferimento che sia `volatile`.  
  
-   Un elemento può essere sia **const** che `volatile`. In questo caso l'elemento non può essere modificato legittimamente dal programma in cui si trova, ma può essere modificato da un processo asincrono.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)