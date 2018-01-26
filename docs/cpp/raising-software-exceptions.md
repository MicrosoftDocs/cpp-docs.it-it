---
title: Generazione di eccezioni Software | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- run-time errors, treating as exceptions
- exception handling [C++], errors as exceptions
- exceptions [C++], flagging errors as exceptions
- errors [C++], treating as exceptions
- exception handling [C++], detecting errors
- structured exception handling [C++], errors as exceptions
- exceptions [C++], software
- RaiseException function
- software exceptions [C++]
- formats [C++], exception codes
ms.assetid: be1376c3-c46a-4f52-ad1d-c2362840746a
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4eb616945a831502077066bdf306bef306f543eb
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="raising-software-exceptions"></a>Generazione di eccezioni software
Alcuni degli errori di programma più comuni non sono contrassegnati come eccezioni dal sistema. Ad esempio, se si tenta di allocare un blocco di memoria ma non vi è memoria sufficiente, il runtime o la funzione API non genera un'eccezione ma restituisce un codice di errore.  
  
 Tuttavia, è possibile trattare eventuali condizioni come un'eccezione rilevando la condizione nel codice e quindi segnalandola chiamando il [RaiseException](http://msdn.microsoft.com/library/windows/desktop/ms680552) (funzione). Contrassegnando gli errori in questo modo, è possibile offrire i vantaggi di gestione delle eccezioni strutturate a qualsiasi tipo di errore di runtime.  
  
 Per utilizzare la gestione delle eccezioni strutturata con errori:  
  
-   Definire il proprio codice di eccezione per l'evento.  
  
-   Chiamare **RaiseException** quando viene rilevato un problema.  
  
-   Utilizzare i filtri per la gestione delle eccezioni per esegue il test del codice di eccezione definito.  
  
 Il \<Winerror. h > file Mostra il formato per i codici di eccezione. Per assicurarsi di non definire un codice che sia in conflitto con il codice di eccezione esistente, impostare il terzo bit più significativo su 1. I quattro bit più significativi dovrebbe essere impostati come illustrato nella tabella seguente.  
  
|BITS|Impostazione binaria consigliata|Descrizione|  
|----------|--------------------------------|-----------------|  
|31-30|11|Questi due bit descrivono lo stato di base del codice: 11 = errore, 00 = esito positivo, 01 = messaggio informativo, 10 = avviso.|  
|29|1|Bit client. Impostare su 1 per i codici definiti dall'utente.|  
|28|0|Bit riservati. Lasciare impostato su 0.|  
  
 È possibile impostare i primi due bit su un'impostazione diversa dall'11 binario se si desidera, sebbene l'impostazione "errore" sia appropriata per la maggior parte delle eccezioni. È importante ricordare che è possibile impostare i bit 29 e 28 come illustrato nella tabella precedente.  
  
 Il codice di errore risultante deve pertanto contenere i quattro bit più elevato impostato su esadecimale E. Ad esempio, le seguenti definizioni definiscono i codici di eccezione che non siano in conflitto con gli eventuali codici di eccezione di Windows. È possibile, tuttavia, che sia necessario verificare quali codici vengono utilizzati dalle DLL di terze parti.  
  
```  
#define STATUS_INSUFFICIENT_MEM       0xE0000001  
#define STATUS_FILE_BAD_FORMAT        0xE0000002  
```  
  
 Dopo aver definito un codice di eccezione, è possibile utilizzarlo per generare un'eccezione. Ad esempio, il codice seguente genera l'eccezione STATUS_INSUFFICIENT_MEM in risposta a un problema di allocazione della memoria:  
  
```  
lpstr = _malloc( nBufferSize );  
if (lpstr == NULL)  
    RaiseException( STATUS_INSUFFICIENT_MEM, 0, 0, 0);  
```  
  
 Se si desidera semplicemente generare un'eccezione, è possibile impostare gli ultimi tre parametri su 0. Gli ultimi tre parametri sono utili per comunicare le informazioni aggiuntive e impostare un contrassegno che impedisce ai gestori di proseguire l'esecuzione. Vedere il [RaiseException](http://msdn.microsoft.com/library/windows/desktop/ms680552) funzionare nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)] per ulteriori informazioni.  
  
 Nei filtri di gestione delle eccezioni, è quindi possibile eseguire il test dei codici definiti. Ad esempio:  
  
```  
__try {  
    ...  
}  
__except (GetExceptionCode() == STATUS_INSUFFICIENT_MEM ||  
        GetExceptionCode() == STATUS_FILE_BAD_FORMAT )  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)   
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)