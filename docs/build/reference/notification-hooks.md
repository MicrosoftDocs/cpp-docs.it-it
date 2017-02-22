---
title: "Hook di notifica | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "caricamento ritardato di DLL, hook di notifica"
ms.assetid: e9c291ed-2f2d-4319-a171-09800625256f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Hook di notifica
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gli hook di notifica vengono chiamati prima che nella routine di supporto vengano effettuate le seguenti azioni:  
  
-   Verifica dell'avvenuto caricamento dell'handle memorizzato per la libreria.  
  
-   Chiamata a **LoadLibrary** per tentare di caricare la DLL.  
  
-   Chiamata a **GetProcAddress** per tentare di ottenere l'indirizzo della routine.  
  
-   Ritorno al thunk di caricamento delle importazioni ritardate.  
  
 L'hook di notifica viene attivato:  
  
-   Fornendo una nuova definizione del puntatore **\_\_pfnDliNotifyHook2**, inizializzato per puntare alla funzione dell'utente che riceve le notifiche.  
  
     \- oppure \-  
  
-   Impostando il puntatore **\_\_pfnDliNotifyHook2** sulla funzione hook prima delle chiamate alla DLL sottoposta a caricamento ritardato.  
  
 Se la notifica è **dliStartProcessing**, il valore restituito dalla funzione hook può essere:  
  
 NULL  
 La funzione di supporto predefinita consente di gestire il caricamento della DLL.  Utile da chiamare per ottenere informazioni.  
  
 Puntatore a funzione  
 Ignorare la gestione predefinita del caricamento ritardato  per poter fornire un gestore di caricamento personalizzato.  
  
 Se la notifica è **dliNotePreLoadLibrary**, il valore restituito dalla funzione hook può essere:  
  
-   0 per ricevere solo notifiche informative.  
  
-   L'HMODULE della DLL caricata, se è stata caricata la DLL.  
  
 Se la notifica è **dliNotePreGetProcAddress**, il valore restituito dalla funzione hook può essere:  
  
-   0 per ricevere solo notifiche informative.  
  
-   L'indirizzo della funzione importata, se ottenuto dalla funzione hook.  
  
 Se la notifica è **dliNoteEndProcessing**, il valore restituito della funzione hook verrà ignorato.  
  
 Se questo puntatore è inizializzato \(diverso da zero\), il supporto del caricamento ritardato consentirà di richiamare la funzione in corrispondenza di determinati punti di notifica durante l'esecuzione.  La definizione del puntatore a funzione è la seguente:  
  
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
  
 Le notifiche, con il relativo valore, vengono passate alla funzione hook in una struttura **DelayLoadInfo**.  I dati sono identici a quelli utilizzati dalla routine di supporto del caricamento ritardato.  Il valore di notifica sarà uno dei valori definiti in [Struttura e definizioni di costanti](../../build/reference/structure-and-constant-definitions.md).  
  
## Vedere anche  
 [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)