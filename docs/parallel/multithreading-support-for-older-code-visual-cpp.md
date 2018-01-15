---
title: Supporto del multithreading per il codice precedente (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- threading [C++]
- multiple threads
- concurrent programming [C++]
- programming [C++], multithreaded
- multithreading [C++], about multithreading
- multiple concurrent threads
- multithreading [C++]
ms.assetid: 24425b1f-5031-4c6b-aac7-017115a40e7c
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1037b8b81c9286ac1b1dd9303294b4300e7c9309
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="multithreading-support-for-older-code-visual-c"></a>Supporto del multithreading per il codice precedente (Visual C++)
Visual C++ consente di disporre di più thread di esecuzione simultaneamente. Con multithreading, è possibile disattivare le attività in background di selezione, gestire i flussi di input simultanei, la gestione di un'interfaccia utente e molto altro ancora.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)  
 Fornisce il supporto per la creazione di applicazioni multithread con Microsoft Windows  
  
 [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)  
 Vengono descritti i processi e thread e approccio MFC al multithreading è.  
  
 [Multithreading e impostazioni locali](../parallel/multithreading-and-locales.md)  
 Vengono illustrati i problemi che si verificano quando si utilizza la funzionalità delle impostazioni locali di libreria di Runtime C e la libreria Standard C++ in un'applicazione multithreading.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [CWinThread](../mfc/reference/cwinthread-class.md)  
 Rappresenta un thread di esecuzione all'interno di un'applicazione.  
  
 [CSyncObject](../mfc/reference/csyncobject-class.md)  
 Descrive una classe virtuale pura che fornisce la funzionalità comune agli oggetti di sincronizzazione in Win32.  
  
 [CSemaphore](../mfc/reference/csemaphore-class.md)  
 Rappresenta un semaforo, ovvero un oggetto di sincronizzazione che consente un numero limitato di thread di uno o più processi di accedere a una risorsa.  
  
 [CMutex](../mfc/reference/cmutex-class.md)  
 Questo oggetto di sincronizzazione rappresenta un mutex, che consente l'accesso ad esclusione reciproca di un solo thread a una risorsa.  
  
 [CCriticalSection](../mfc/reference/ccriticalsection-class.md)  
 Rappresenta una sezione critica, ovvero un oggetto di sincronizzazione che consente un solo thread alla volta per accedere a una risorsa o una sezione di codice.  
  
 [CEvent](../mfc/reference/cevent-class.md)  
 Rappresenta un evento, ovvero un oggetto di sincronizzazione che consente a un thread di notificare a un altro che si è verificato un evento.  
  
 [CMultiLock](../mfc/reference/cmultilock-class.md)  
 Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso alle risorse di un programma multithread.  
  
 [CSingleLock](../mfc/reference/csinglelock-class.md)  
 Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso a una risorsa di un programma multithread.  
  
 [(NOTINBUILD) Metodologie di programmazione di Visual C++](http://msdn.microsoft.com/en-us/0822f806-fa81-4b65-bf0f-1e2921f30c95)  
 Vengono forniti collegamenti ad argomenti in cui sono disponibili informazioni sulle librerie di Visual C++ e ad argomenti in cui vengono discusse le varie tecnologie e tecniche di programmazione.