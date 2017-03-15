---
title: "once | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.once"
  - "once_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "once (pragma)"
  - "pragma, once"
ms.assetid: c7517556-6403-4b16-8898-f2aa0a6f685f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# once
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica che il file verrà incluso \(aperto\) solo una volta dal compilatore durante la compilazione di un file di codice sorgente.  
  
## Sintassi  
  
```  
  
#pragma once  
  
```  
  
## Note  
 L'uso di `#pragma once` consente di ridurre i tempi di compilazione poiché il compilatore non aprirà e leggerà il file dopo il primo \#include del file nell'unità di conversione.  Questo processo viene definito *ottimizzazione dell'inclusione multipla*.  Ha un effetto simile all'espressione idiomatica *\#include guard*, che usa le definizioni delle macro del preprocessore per evitare l'inclusione multipla del contenuto del file.  Contribuisce inoltre a evitare violazioni del requisito *One Definition Rule*, in base al quale modelli, tipi, funzioni e oggetti non devono avere più di una definizione nel codice.  
  
 Ad esempio:  
  
```  
// header.h  
#pragma once  
// Code placed here is included only once per translation unit  
  
```  
  
 È consigliabile usare la direttiva `#pragma once` per il nuovo codice, in quanto non inquina lo spazio dei nomi globale con un simbolo del preprocessore.  Richiede meno digitazione, è causa di minore distrazione e non può causare conflitti di simboli, ovvero errori generati quando file di intestazione diversi usano come valore di protezione lo stesso simbolo del preprocessore.  Non fa parte dello Standard C\+\+, ma viene implementato in modo portabile da svariati compilatori comuni.  
  
 L'uso combinato di \#include guard e `#pragma once` nello stesso file non offre alcun vantaggio.  Il compilatore riconosce l'espressione idiomatica \#include guard e, se prima o dopo la forma standard dell'espressione idiomatica non compaiono direttive per il preprocessore o codice non di commento, implementa l'ottimizzazione dell'inclusione multipla esattamente come la direttiva `#pragma once`:  
  
```  
// header.h  
// Demonstration of the #include guard idiom.  
// Note that the defined symbol can be arbitrary.  
#ifndef HEADER_H_     // equivalently, #if !defined HEADER_H_  
#define HEADER_H_  
// Code placed here is included only once per translation unit  
#endif // HEADER_H_  
  
```  
  
 È consigliabile usare l'espressione idiomatica \#include guard quando il codice deve essere portabile per i compilatori che non implementano la direttiva `#pragma once`, per mantenere la coerenza con il codice esistente o quando l'ottimizzazione dell'inclusione multipla non è possibile.  Questa situazione può verificarsi nei progetti complessi, quando l'aliasing del file system o i percorsi di inclusione con alias impediscono al compilatore di identificare i file di inclusione dal percorso canonico.  
  
 Prestare attenzione a non usare `#pragma once` o l'espressione idiomatica \#include nei file di intestazione progettati per essere inclusi più volte, usando simboli del preprocessore per controllarne gli effetti.  Per un esempio di questo tipo di progettazione, vedere il file di intestazione \<assert.h\>.  Prestare inoltre attenzione a gestire i percorsi di inclusione in modo da evitare di creare più percorsi per i file inclusi. Questo infatti può annullare gli effetti dell'ottimizzazione dell'inclusione multipla sia per \#include guard che per `#pragma once`.  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)