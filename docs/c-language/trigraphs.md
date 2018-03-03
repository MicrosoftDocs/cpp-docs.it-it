---
title: Trigrammi | Microsoft Docs
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
- ??) trigraph
- ??- trigraph
- question mark, in trigraphs
- ??= trigraph
- ?? trigraph
- ??< trigraph
- ??/ trigraph
- trigraphs
- '? symbol, trigraph'
- ??> trigraph
- ??! trigraph
- ??' trigraph
ms.assetid: 617f76ec-b8e8-4cfe-916c-4bc32cbd9aeb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d96088102cafe1b3bbdb7222cec33fc313774f41
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="trigraphs"></a>Trigrammi
Il set di caratteri di origine dei programmi di origine C è contenuto nel set di caratteri ASCII a 7 bit, ma è un superset del set di codice invariante ISO 646-1983. Le sequenze di trigramma consentono la scrittura di programmi C utilizzando solo il set di codice invariante ISO (International Standards Organization). I trigrammi sono sequenze di tre caratteri (introdotti da due punti interrogativi consecutivi) che il compilatore sostituisce con i relativi caratteri di punteggiatura corrispondenti. È possibile utilizzare i trigrammi in file di origine C con un set di caratteri che non contiene rappresentazioni grafiche adeguate per alcuni caratteri di punteggiatura.  
  
 C + + 17 rimuove i trigrammi dal linguaggio. Le implementazioni possono continuare a supportare trigrammi come parte del mapping definito dall'implementazione tra il file di origine fisico e il *set di caratteri di origine di base*, anche se lo standard invita e evitarlo. Tramite C++ 14, i trigrammi sono supportati come in C.  
  
 Visual C++ continua a supportare la sostituzione dei trigrammi, ma è disabilitata per impostazione predefinita. Per informazioni su come abilitare la sostituzione dei trigrammi, vedere [/Zc: trigraphs (sostituzione trigrammi)](../build/reference/zc-trigraphs-trigraphs-substitution.md).  
  
 Nella tabella seguente sono illustrate le nove sequenze di trigramma. Tutte le occorrenze in un file di origine dei caratteri di punteggiatura nella prima colonna vengono sostituite con il carattere corrispondente nella seconda colonna.  
  
### <a name="trigraph-sequences"></a>Sequenze di trigramma  
  
|Trigramma|Carattere di punteggiatura.|  
|--------------|---------------------------|  
|??=|#|  
|??(|[|  
|??/|\|  
|??)|]|  
|??'|^|  
|??\<|{|  
|??!|&#124;|  
|??>|}|  
|??-|~|  
  
 Un trigramma è sempre considerato come un singolo carattere di origine. La conversione dei trigrammi avviene nella prima [fase di conversione](../preprocessor/phases-of-translation.md), prima del riconoscimento dei caratteri di escape nei valori letterali stringa e nelle costanti carattere. Sono riconosciuti solo i nove trigrammi riportati nella tabella precedente. Tutte le altre sequenze di caratteri non vengono convertite.  
  
 La sequenza di caratteri di escape **\\?** impedisce l'errata interpretazione delle sequenze di caratteri simili a un trigramma. Per informazioni sulle sequenze di escape, vedere [Sequenze di escape](../c-language/escape-sequences.md). Ad esempio, se si tenta di stampare la stringa `What??!` con questa istruzione `printf`  
  
```  
printf( "What??!\n" );  
```  
  
 la stringa stampata sarà `What|` poiché `??!` è una sequenza di trigramma che viene sostituita con il carattere `|`. Scrivere l'istruzione come riportata di seguito per stampare correttamente la stringa:  
  
```  
printf( "What?\?!\n" );  
```  
  
 In questa istruzione `printf` un carattere di escape barra rovesciata prima del secondo punto interrogativo impedisce l'errata interpretazione di `??!` come trigramma.  
  
## <a name="see-also"></a>Vedere anche  
 [/Zc:trigraphs (sostituzione trigrammi)](../build/reference/zc-trigraphs-trigraphs-substitution.md)   
 [Identificatori C](../c-language/c-identifiers.md)