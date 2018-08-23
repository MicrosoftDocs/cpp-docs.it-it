---
title: Supporto del multithreading per il codice precedente (Visual C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- threading [C++]
- multiple threads
- concurrent programming [C++]
- programming [C++], multithreaded
- multithreading [C++], about multithreading
- multiple concurrent threads
- multithreading [C++]
ms.assetid: 24425b1f-5031-4c6b-aac7-017115a40e7c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c911ff2f0dcd43a6f07144f893b91f3a97c6708b
ms.sourcegitcommit: e9ce38decc9f986edab5543de3464b11ebccb123
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2018
ms.locfileid: "42539612"
---
# <a name="multithreading-support-for-older-code-visual-c"></a>Supporto del multithreading per il codice precedente (Visual C++)
Visual C++ consente di disporre di più thread simultanei di esecuzione in esecuzione contemporaneamente. Con multithreading, è possibile demandare le attività in background, gestire flussi di input simultanei, gestire un'interfaccia utente e molto altro ancora.  
  
## <a name="in-this-section"></a>In questa sezione  
 
[Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)  
Fornisce il supporto per la creazione di applicazioni multithread con Microsoft Windows  
  
[Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)  
Vengono descritti i processi e thread e l'approccio MFC al multithreading è.  
  
[Multithreading e impostazioni locali](../parallel/multithreading-and-locales.md)  
Vengono illustrati i problemi che si verificano quando si usa la funzionalità delle impostazioni locali della libreria di Runtime C sia la libreria Standard C++ in un'applicazione multithreading.  
  
## <a name="related-sections"></a>Sezioni correlate  
 
[CWinThread](../mfc/reference/cwinthread-class.md)  
Rappresenta un thread di esecuzione all'interno di un'applicazione.  
  
[CSyncObject](../mfc/reference/csyncobject-class.md)  
Descrive una classe virtuale pura che fornisce la funzionalità comune agli oggetti di sincronizzazione in Win32.  
  
[CSemaphore](../mfc/reference/csemaphore-class.md)  
Rappresenta un semaforo, ovvero un oggetto di sincronizzazione che consente un numero limitato di thread in uno o più processi di accedere a una risorsa.  
  
[CMutex](../mfc/reference/cmutex-class.md)  
Questo oggetto di sincronizzazione rappresenta un mutex, che consente l'accesso ad esclusione reciproca di un solo thread a una risorsa.  
  
[CCriticalSection](../mfc/reference/ccriticalsection-class.md)  
Rappresenta una sezione critica, ovvero un oggetto di sincronizzazione che consente a un solo thread alla volta per accedere a una risorsa o una sezione di codice.  
  
[CEvent](../mfc/reference/cevent-class.md)  
Rappresenta un evento, vale a dire un oggetto di sincronizzazione che consente a un thread di notificare a un altro che si è verificato un evento.  
  
[CMultiLock](../mfc/reference/cmultilock-class.md)  
Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso alle risorse di un programma multithread.  
  
[CSingleLock](../mfc/reference/csinglelock-class.md)  
Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso a una risorsa di un programma multithread.  