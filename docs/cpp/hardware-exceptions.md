---
title: "Eccezioni hardware | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "errori [C++], hardware"
  - "errori [C++], basso livello"
  - "eccezioni, hardware"
  - "eccezioni hardware"
  - "errori di basso livello"
ms.assetid: 06ac6f01-a8cf-4426-bb12-1688315ae1cd
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Eccezioni hardware
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La maggior parte delle eccezioni standard riconosciute dal sistema operativo sono quelle definite a livello hardware.  In Windows vengono riconosciute alcune eccezioni software di basso livello, ma queste sono generalmente gestite meglio dal sistema operativo.  
  
 In Windows il mapping degli errori hardware di processori diversi ai codici di eccezione viene eseguito in questa sezione.  In alcuni casi, un processore può generare solo un subset di tali eccezioni.  Le informazioni vengono sull'eccezione vengono pre\-elaborate e viene generato il codice di eccezione appropriato.  
  
 Le eccezioni hardware riconosciute da Windows sono riepilogate nella tabella seguente:  
  
|Codice eccezione|Causa dell'eccezione|  
|----------------------|--------------------------|  
|**STATUS\_ACCESS\_VIOLATION**|Lettura o scrittura in una posizione di memoria inaccessibile.|  
|**STATUS\_BREAKPOINT**|Rilevamento di punti di interruzione definiti a livello hardware; utilizzato solo dai debugger.|  
|**STATUS\_DATATYPE\_MISALIGNMENT**|Lettura o scrittura nei dati in un indirizzo allineato in modo non corretto. Le entità a 16 bit devono ad esempio essere allineate su limiti di 2 byte. Non applicabile a processori Intel 80*x*86.|  
|**STATUS\_FLOAT\_DIVIDE\_BY\_ZERO**|Divisione del tipo a virgola mobile per 0,0.|  
|**STATUS\_FLOAT\_OVERFLOW**|Superamento del massimo esponente positivo del tipo a virgola mobile.|  
|**STATUS\_FLOAT\_UNDERFLOW**|Superamento del minimo esponente negativo del tipo a virgola mobile.|  
|**STATUS\_FLOATING\_RESEVERED\_OPERAND**|Utilizzo di un formato a virgola mobile riservato \(utilizzo non valido del formato\).|  
|**STATUS\_ILLEGAL\_INSTRUCTION**|Tentativo di eseguire un codice di istruzione non definito dal processore.|  
|**STATUS\_PRIVILEGED\_INSTRUCTION**|Esecuzione di un'istruzione non consentita nella modalità del computer corrente.|  
|**STATUS\_INTEGER\_DIVIDE\_BY\_ZERO**|Divisione di un tipo Integer per 0.|  
|**STATUS\_INTEGER\_OVERFLOW**|Tentativo di eseguire un'operazione che supera l'intervallo dei numeri interi.|  
|**STATUS\_SINGLE\_STEP**|Esecuzione di un'istruzione in modalità di istruzione singola; utilizzato solo dai debugger.|  
  
 Molte eccezioni presenti nella tabella precedente devono essere gestite dai debugger, dal sistema operativo o da altro codice di basso livello.  Ad eccezione degli errori correlati ai tipi Integer e a virgola mobile, tali errori non devono essere gestiti nel codice.  Di conseguenza, in genere è necessario utilizzare il filtro di gestione delle eccezioni per ignorarle \(valutandole 0\).  In caso contrario, è possibile impedire ai meccanismi di livello più basso di rispondere in modo appropriato.  È possibile, tuttavia, prendere le precauzioni necessarie per ridurre l'impatto potenziale di questi errori di basso livello tramite la [scrittura di gestori di terminazione](../cpp/writing-a-termination-handler.md).  
  
## Vedere anche  
 [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)   
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)