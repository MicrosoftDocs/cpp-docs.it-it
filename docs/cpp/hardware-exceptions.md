---
title: Eccezioni hardware | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- exceptions [C++], hardware
- errors [C++], low-level
- errors [C++], hardware
- hardware exceptions [C++]
- low level errors
ms.assetid: 06ac6f01-a8cf-4426-bb12-1688315ae1cd
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 36272def7cf37d53e219011bef0e5151628d2299
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hardware-exceptions"></a>Eccezioni hardware
La maggior parte delle eccezioni standard riconosciute dal sistema operativo sono quelle definite a livello hardware. In Windows vengono riconosciute alcune eccezioni software di basso livello, ma queste sono generalmente gestite meglio dal sistema operativo.  
  
 In Windows il mapping degli errori hardware di processori diversi ai codici di eccezione viene eseguito in questa sezione. In alcuni casi, un processore può generare solo un subset di tali eccezioni. Le informazioni vengono sull'eccezione vengono pre-elaborate e viene generato il codice di eccezione appropriato.  
  
 Le eccezioni hardware riconosciute da Windows sono riepilogate nella tabella seguente:  
  
|Codice eccezione|Causa dell'eccezione|  
|--------------------|------------------------|  
|**STATUS_ACCESS_VIOLATION**|Lettura o scrittura in una posizione di memoria inaccessibile.|  
|**STATUS_BREAKPOINT**|Rilevamento di punti di interruzione definiti a livello hardware; utilizzato solo dai debugger.|  
|**STATUS_DATATYPE_MISALIGNMENT**|Lettura o scrittura nei dati in un indirizzo allineato in modo non corretto. Le entità a 16 bit devono ad esempio essere allineate su limiti di 2 byte. (Non applicabile a Intel 80*x*x86 processori.)|  
|**STATUS_FLOAT_DIVIDE_BY_ZERO**|Divisione del tipo a virgola mobile per 0,0.|  
|**STATUS_FLOAT_OVERFLOW**|Superamento del massimo esponente positivo del tipo a virgola mobile.|  
|**STATUS_FLOAT_UNDERFLOW**|Superamento del minimo esponente negativo del tipo a virgola mobile.|  
|**STATUS_FLOATING_RESEVERED_OPERAND**|Utilizzo di un formato a virgola mobile riservato (utilizzo non valido del formato).|  
|**STATUS_ILLEGAL_INSTRUCTION**|Tentativo di eseguire un codice di istruzione non definito dal processore.|  
|**STATUS_PRIVILEGED_INSTRUCTION**|Esecuzione di un'istruzione non consentita nella modalità del computer corrente.|  
|**STATUS_INTEGER_DIVIDE_BY_ZERO**|Divisione di un tipo Integer per 0.|  
|**STATUS_INTEGER_OVERFLOW**|Tentativo di eseguire un'operazione che supera l'intervallo dei numeri interi.|  
|**STATUS_SINGLE_STEP**|Esecuzione di un'istruzione in modalità di istruzione singola; utilizzato solo dai debugger.|  
  
 Molte eccezioni presenti nella tabella precedente devono essere gestite dai debugger, dal sistema operativo o da altro codice di basso livello. Ad eccezione degli errori correlati ai tipi Integer e a virgola mobile, tali errori non devono essere gestiti nel codice. Di conseguenza, in genere è necessario utilizzare il filtro di gestione delle eccezioni per ignorarle (valutandole 0). In caso contrario, è possibile impedire ai meccanismi di livello più basso di rispondere in modo appropriato. È tuttavia possibile, adottare le precauzioni appropriate in relazione all'effetto potenziale di questi errori di basso livello per [la scrittura di gestori di terminazione](../cpp/writing-a-termination-handler.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)   
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)