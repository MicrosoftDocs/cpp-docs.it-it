---
title: Gestione degli errori e notifica | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- error handling, and notification
ms.assetid: b621cf60-d869-451a-b05e-dc86d78addaa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e2edec23da89766a45545566b0a689001d3ca75f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="error-handling-and-notification"></a>Gestione e notifica degli errori
Per ulteriori informazioni sulla gestione degli errori e la notifica, vedere [informazioni sulla funzione di supporto](understanding-the-helper-function.md).  
  
 Per ulteriori informazioni sulle funzioni hook, vedere [struttura e definizioni di costanti](../../build/reference/structure-and-constant-definitions.md).  
  
 Se il programma utilizza una DLL a caricamento ritardato, deve gestire gli errori in modo affidabile poiché gli errori che si verificano durante l'esecuzione del programma verranno comportare eccezioni non gestite. Gestione degli errori è costituita da due parti:  
  
 Ripristino tramite un hook.  
 Se il codice deve recuperare o fornire un libreria alternativa e/o una routine in caso di errore, è possibile specificare una funzione hook per la funzione di supporto che può fornire o correggere l'errore. La routine di hook deve restituire un valore appropriato, in modo che l'elaborazione può continuare (HINSTANCE o FARPROC) oppure 0 per indicare che deve essere generata un'eccezione. Può anche generare la propria eccezione o **longjmp** fuori l'hook. Sono disponibili hook di notifica e hook di errore.  
  
 Creazione di report mediante un'eccezione.  
 Se è sufficiente per gestire l'errore deve interrompere la procedura, non hook è necessaria, purché il codice utente può gestire l'eccezione.  
  
 Gli argomenti seguenti descrivono la notifica e la gestione degli errori:  
  
-   [Hook di notifica](../../build/reference/notification-hooks.md)  
  
-   [Hook di errore](../../build/reference/failure-hooks.md)  
  
-   [Eccezioni](../../build/reference/exceptions-c-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)