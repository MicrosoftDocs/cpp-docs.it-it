---
title: "Funzionalità di sicurezza in CRT | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _CRT_SECURE_NO_DEPRECATE
- _CRT_NONSTDC_NO_WARNINGS
- _CRT_SECURE_NO_WARNINGS
dev_langs:
- C++
helpviewer_keywords:
- security deprecation warnings [C++]
- CRT_NONSTDC_NO_DEPRECATE
- buffers [C++], buffer overruns
- deprecation warnings (security-related), disabling
- _CRT_NONSTDC_NO_WARNINGS
- security [CRT]
- _CRT_SECURE_NO_WARNINGS
- _CRT_NONSTDC_NO_DEPRECATE
- _CRT_SECURE_NO_DEPRECATE
- security-enhanced CRT
- CRT_SECURE_NO_WARNINGS
- CRT_SECURE_NO_DEPRECATE
- deprecation warnings (security-related)
- buffer overruns
- CRT_NONSTDC_NO_WARNINGS
- CRT, security enhancements
- parameters [C++], validation
ms.assetid: d9568b08-9514-49cd-b3dc-2454ded195a3
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
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: c197434fceff8920cd501a64131c3e0816c9594d
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="security-features-in-the-crt"></a>Funzionalità di sicurezza in CRT
Molte funzioni CRT precedenti hanno versioni più sicure e recenti. Se esiste una funzione sicura, la precedente versione, meno sicura, è contrassegnata come deprecata e la nuova versione ha il suffisso `_s` ("sicura").  
  
 In questo contesto, "deprecata" significa semplicemente che l'utilizzo di una funzione non è consigliato; non indica che è in programma la rimozione della funzione dal CRT.  
  
 Le funzioni sicure non impediscono o non correggono gli errori di sicurezza; piuttosto, rilevano gli errori quando si verificano. Eseguono controlli aggiuntivi per le condizioni di errore e, in caso di errore, chiamano un gestore errori (vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md)).  
  
 Ad esempio, la funzione `strcpy` non consente di stabilire se la stringa che si sta copiando è troppo grande per il suo buffer di destinazione. Tuttavia, la relativa controparte sicura, `strcpy_s`, accetta la dimensione del buffer come parametro, pertanto può determinare se si verifica un sovraccarico del buffer. Se si utilizza `strcpy_s` per copiare undici caratteri in un buffer di dieci caratteri, è un errore da parte dell'utente; `strcpy_s` non può correggere l'errore, ma può rilevare l'errore e notificare richiamando il gestore di parametro non valido.  
  
## <a name="eliminating-deprecation-warnings"></a>Eliminazione degli avvisi di deprecazione  
 Esistono diversi modi per eliminare gli avvisi di deprecazione per le funzioni precedenti, meno sicure. Il più semplice è quello di definire `_CRT_SECURE_NO_WARNINGS` o di usare il pragma [warning](../preprocessor/warning.md). Disabilita gli avvisi di deprecazione, ma i problemi di sicurezza che hanno causato gli avvisi persistono. È preferibile lasciare gli avvisi di deprecazione abilitati e usufruire delle nuove funzionalità di sicurezza CRT.  
  
 In C++, il modo più semplice per farlo prevede l'uso di [overload di modelli sicuri](../c-runtime-library/secure-template-overloads.md), che in molti casi eliminerà gli avvisi di deprecazione sostituendo le chiamate alle funzioni deprecate con chiamate alle nuove versioni sicure di tali funzioni. Ad esempio, considerare la chiamata deprecata a `strcpy`:  
  
```  
char szBuf[10];   
strcpy(szBuf, "test"); // warning: deprecated   
```  
  
 Definendo `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` come 1, viene eliminato l'avviso modificando la chiamata `strcpy` a `strcpy_s`, che evita sovraccarichi del buffer. Per altre informazioni, vedere [Secure Template Overloads](../c-runtime-library/secure-template-overloads.md).  
  
 Per queste funzioni deprecate senza overload dei modelli sicuri, è necessario considerare la possibilità di aggiornare manualmente il codice per utilizzare le versioni sicure.  
  
 Un'altra origine degli avvisi di deprecazione, indipendente dalla sicurezza, sono le funzioni POSIX. Sostituire i nomi delle funzioni POSIX con i relativi equivalenti standard. Ad esempio, modificare [access](../c-runtime-library/reference/access-crt.md) in [_access](../c-runtime-library/reference/access-waccess.md) o disabilitare gli avvisi di deprecazione correlati a POSIX definendo `_CRT_NONSTDC_NO_WARNINGS`. Per altre informazioni, vedere [Deprecated CRT Functions](http://msdn.microsoft.com/en-us/7e259932-c6c8-4c1a-9637-639e591681a5) (Funzioni CRT deprecate).  
  
## <a name="additional-security-features"></a>Funzionalità di sicurezza aggiuntive  
 Alcune delle funzionalità di sicurezza includono quanto segue:  
  
-   `Parameter Validation`. I parametri passati alle funzioni CRT vengono convalidati, nelle funzioni sicure e in molte versioni preesistenti di funzioni. Le convalide includono:  
  
    -   Verifica dei valori `NULL` passati alle funzioni.  
  
    -   Verifica dei valori enumerati per la validità.  
  
    -   Verifica che i valori integrali siano in intervalli validi.  
  
-   Per altre informazioni, vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md).  
  
-   Un gestore per i parametri non validi è accessibile anche allo sviluppatore. Quando si riscontra un parametro non valido, anziché interrompere ed uscire dall'applicazione, CRT fornisce un modo per controllare questi problemi con la funzione [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).  
  
-   `Sized Buffers`. Le funzioni sicure richiedono che le dimensioni del buffer siano passate a qualsiasi funzione che scrive in un buffer. Le versioni sicure verificano che il buffer sia sufficientemente grande prima di scriverci dentro, contribuendo ad evitare pericolosi sovraccarichi del buffer che potrebbero consentire l'esecuzione di codice dannoso. Queste funzioni in genere restituiscono un tipo `errno` di codice di errore e richiamano il gestore di parametro non valido se la dimensione del buffer è troppo piccola. Le funzioni che leggono da buffer di input, come `gets`, dispongono di versioni sicure che richiedono di specificare una dimensione massima.  
  
-   `Null termination`. Alcune funzioni che accettavano stringhe potenzialmente non terminate hanno versioni sicure che garantiscono che le stringhe abbiano terminazione null.  
  
-   `Enhanced error reporting`. Le funzioni sicure restituiscono codici di errore con più informazioni sugli errori rispetto a quelle disponibili con le funzioni preesistenti. Le funzioni sicure e molte delle funzioni preesistenti ora impostano `errno` e spesso restituiscono un tipo di codice `errno`, per fornire una segnalazione di errori migliore.  
  
-   `Filesystem security`. Le API di I/O di file sicuri supportano l'accesso sicuro ai file nel caso predefinito.  
  
-   `Windows security`. Le API di processo sicuro rafforzano i criteri di sicurezza e consentono agli ACL di essere specificati.  
  
-   `Format string syntax checking`. Le stringhe non valide vengono rilevate, ad esempio, usando dei caratteri di campo di tipo non corretto nelle stringhe di formato `printf`.  
  
## <a name="see-also"></a>Vedere anche  
 [Convalida dei parametri](../c-runtime-library/parameter-validation.md)   
 [Overload di modelli sicuri](../c-runtime-library/secure-template-overloads.md)   
 [CRT Library Features](../c-runtime-library/crt-library-features.md) (Funzionalità della libreria CRT)
