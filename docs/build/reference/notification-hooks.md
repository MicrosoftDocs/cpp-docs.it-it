---
title: Hook di notifica | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- delayed loading of DLLs, notification hooks
ms.assetid: e9c291ed-2f2d-4319-a171-09800625256f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 31490e3bb591af6568ffecddf68219c89a25e055
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="notification-hooks"></a>Hook di notifica
Hook di notifica vengono chiamati prima nella routine di supporto vengono eseguite le seguenti operazioni:  
  
-   L'handle memorizzato nella raccolta viene controllato per verificare se è già stato caricato.  
  
-   **LoadLibrary** viene chiamato per tentare di caricare la DLL.  
  
-   **GetProcAddress** viene chiamato per tentare di ottenere l'indirizzo della routine.  
  
-   Restituisce il thunk di caricamento di importazione di ritardo.  
  
 È abilitato l'hook di notifica:  
  
-   Fornendo una nuova definizione dell'indicatore di misura **pfnDliNotifyHook2** che viene inizializzato in modo da puntare alla funzione che riceve le notifiche.  
  
     oppure  
  
-   Impostando il puntatore **pfnDliNotifyHook2** alla funzione hook prima delle chiamate alla DLL che il programma è ritardare il caricamento.  
  
 Se la notifica è **dliStartProcessing**, la funzione hook può restituire:  
  
 NULL  
 Il supporto predefinito gestisce il caricamento della DLL. Ciò è utile per essere chiamato solo per scopi informativi.  
  
 Puntatore a funzione  
 Ignorare la gestione di caricamento ritardato predefinita. Ciò consente di fornire un gestore di caricamento.  
  
 Se la notifica è **dliNotePreLoadLibrary**, la funzione hook può restituire:  
  
-   0, se desidera semplicemente notifiche informative.  
  
-   Il modulo HMODULE della DLL caricata, se è caricato la DLL.  
  
 Se la notifica è **dliNotePreGetProcAddress**, la funzione hook può restituire:  
  
-   0, se desidera semplicemente notifiche informative.  
  
-   Indirizzo della funzione importata, se la funzione hook Ottiene l'indirizzo di se stesso.  
  
 Se la notifica è **dliNoteEndProcessing**, valore restituito della funzione hook viene ignorato.  
  
 Se l'indicatore di misura viene inizializzato (diverso da zero), il caricamento ritardato richiamerà la funzione in alcune fasi di notifica durante l'esecuzione. Puntatore a funzione presenta la seguente definizione:  
  
```  
// The "notify hook" gets called for every call to the  
// delay load helper.  This allows a user to hook every call and  
// skip the delay load helper entirely.  
//  
// dliNotify == {  
//  dliStartProcessing |  
//  dliNotePreLoadLibrary  |  
//  dliNotePreGetProc |  
//  dliNoteEndProcessing}  
//  on this call.  
//  
ExternC  
PfnDliHook   __pfnDliNotifyHook2;  
  
// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}  
ExternC  
PfnDliHook   __pfnDliFailureHook2;  
```  
  
 Le notifiche di passare un **DelayLoadInfo** struttura alla funzione hook insieme al valore di notifica. Questi dati sono identici a quella usata dalla routine di supporto di caricamento ritardato. Il valore di notifica sarà uno dei valori definiti nel [struttura e definizioni di costanti](../../build/reference/structure-and-constant-definitions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)