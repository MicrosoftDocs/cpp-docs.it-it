---
title: "Supporto del multithreading per il codice precedente (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "programmazione simultanea [C++]"
  - "più thread simultanei"
  - "thread multipli"
  - "multithreading [C++]"
  - "multithreading [C++], informazioni sul multithreading"
  - "programmazione [C++], multithreading"
  - "threading [C++]"
ms.assetid: 24425b1f-5031-4c6b-aac7-017115a40e7c
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto del multithreading per il codice precedente (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In Visual C\+\+ è possibile utilizzare contemporaneamente più thread di esecuzione.  Tramite il multithreading è possibile demandare le attività in background, gestire flussi di input simultanei, gestire un'interfaccia utente ed eseguire altre operazioni.  
  
## Argomenti della sezione  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)  
 Viene fornito il supporto per la creazione di applicazioni multithread con Microsoft Windows  
  
 [Multithreading con C\+\+ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)  
 Vengono descritti i concetti di processo e thread e l'approccio MFC al multithreading.  
  
 [Multithreading e impostazioni locali](../parallel/multithreading-and-locales.md)  
 Vengono illustrati i problemi che si verificano durante l'utilizzo della funzionalità relativa alle impostazioni locali della libreria di runtime C e della libreria di C\+\+ standard in un'applicazione multithreading.  
  
## Sezioni correlate  
 [CWinThread](../mfc/reference/cwinthread-class.md)  
 Rappresenta un thread di esecuzione all'interno di un'applicazione.  
  
 [CSyncObject](../mfc/reference/csyncobject-class.md)  
 Viene descritta una classe virtuale pura con la quale viene fornita la funzionalità comune agli oggetti di sincronizzazione in Win32.  
  
 [CSemaphore](../mfc/reference/csemaphore-class.md)  
 Questo oggetto di sincronizzazione rappresenta un semaforo che consente solo a un numero limitato di thread di uno o più processi di accedere a una risorsa.  
  
 [CMutex](../mfc/reference/cmutex-class.md)  
 Questo oggetto di sincronizzazione rappresenta un mutex, che consente l'accesso ad esclusione reciproca di un solo thread a una risorsa.  
  
 [CCriticalSection](../mfc/reference/ccriticalsection-class.md)  
 Questo oggetto di sincronizzazione rappresenta una sezione critica, che consente l'accesso a una risorsa o a una sezione di codice da parte di un solo thread alla volta.  
  
 [CEvent](../mfc/reference/cevent-class.md)  
 Questo oggetto di sincronizzazione rappresenta un evento, che consente a un thread di notificare a un altro thread il verificarsi di un evento.  
  
 [CMultiLock](../mfc/reference/cmultilock-class.md)  
 Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso alle risorse di un programma multithread.  
  
 [CSingleLock](../mfc/reference/csinglelock-class.md)  
 Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso a una risorsa di un programma multithread.  
  
 [\(NOTINBUILD\)Visual C\+\+ Programming Methodologies](http://msdn.microsoft.com/it-it/0822f806-fa81-4b65-bf0f-1e2921f30c95)  
 Vengono forniti collegamenti ad argomenti in cui sono disponibili informazioni sulle librerie di Visual C\+\+ e ad argomenti in cui vengono discusse le varie tecnologie e tecniche di programmazione.