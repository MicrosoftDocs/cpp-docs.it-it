---
title: once | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc-pragma.once
- once_CPP
dev_langs:
- C++
helpviewer_keywords:
- once pragma
- pragmas, once
ms.assetid: c7517556-6403-4b16-8898-f2aa0a6f685f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9f0aea1700feaad1c286386f17a5008514282d52
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="once"></a>once
Specifica che il file verrà incluso (aperto) solo una volta dal compilatore durante la compilazione di un file di codice sorgente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma once  
  
```  
  
## <a name="remarks"></a>Note  
 L'uso di `#pragma once` consente di ridurre i tempi di compilazione poiché il compilatore non aprirà e leggerà il file dopo il primo #include del file nell'unità di conversione. Ciò è detto *ottimizzazione dell'inclusione multipla*. Ha un effetto simile a quello di *#include guard* linguaggio, che utilizza le definizioni di macro del preprocessore per evitare l'inclusione multipla del contenuto del file. Contribuisce inoltre a evitare violazioni del *regola di unica definizione*, ovvero il requisito che tutti i modelli, tipi, funzioni e gli oggetti non più di una definizione nel codice.  
  
 Ad esempio:  
  
```  
// header.h  
#pragma once  
// Code placed here is included only once per translation unit  
  
```  
  
 È consigliabile usare la direttiva `#pragma once` per il nuovo codice, in quanto non inquina lo spazio dei nomi globale con un simbolo del preprocessore. Richiede meno digitazione, è causa di minore distrazione e non può causare conflitti di simboli, ovvero errori generati quando file di intestazione diversi usano come valore di protezione lo stesso simbolo del preprocessore. Non fa parte dello Standard C++, ma viene implementato in modo portabile da svariati compilatori comuni.  
  
 L'uso combinato di #include guard e `#pragma once` nello stesso file non offre alcun vantaggio. Il compilatore riconosce l'espressione idiomatica #include guard e, se prima o dopo la forma standard dell'espressione idiomatica non compaiono direttive per il preprocessore o codice non di commento, implementa l'ottimizzazione dell'inclusione multipla esattamente come la direttiva `#pragma once`:  
  
```  
// header.h  
// Demonstration of the #include guard idiom.  
// Note that the defined symbol can be arbitrary.  
#ifndef HEADER_H_     // equivalently, #if !defined HEADER_H_  
#define HEADER_H_  
// Code placed here is included only once per translation unit  
#endif // HEADER_H_  
  
```  
  
 È consigliabile usare l'espressione idiomatica #include guard quando il codice deve essere portabile per i compilatori che non implementano la direttiva `#pragma once`, per mantenere la coerenza con il codice esistente o quando l'ottimizzazione dell'inclusione multipla non è possibile. Questa situazione può verificarsi nei progetti complessi, quando l'aliasing del file system o i percorsi di inclusione con alias impediscono al compilatore di identificare i file di inclusione dal percorso canonico.  
  
 Prestare attenzione a non usare `#pragma once` o l'espressione idiomatica #include nei file di intestazione progettati per essere inclusi più volte, usando simboli del preprocessore per controllarne gli effetti. Per un esempio di questa struttura, vedere il \<Assert > file di intestazione. Prestare inoltre attenzione a gestire i percorsi di inclusione in modo da evitare di creare più percorsi per i file inclusi. Questo infatti può annullare gli effetti dell'ottimizzazione dell'inclusione multipla sia per #include guard che per `#pragma once`.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)