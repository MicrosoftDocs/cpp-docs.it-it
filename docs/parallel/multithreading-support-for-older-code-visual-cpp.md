---
title: Supporto del multithreading per il codice precedente (Visual C++)
ms.date: 08/27/2018
helpviewer_keywords:
- threading [C++]
- multiple threads
- concurrent programming [C++]
- programming [C++], multithreaded
- multithreading [C++], about multithreading
- multiple concurrent threads
- multithreading [C++]
ms.assetid: 24425b1f-5031-4c6b-aac7-017115a40e7c
ms.openlocfilehash: 6f76ff42d2e28afe251ce234220051111736d3c9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80215085"
---
# <a name="multithreading-support-for-older-code-visual-c"></a>Supporto del multithreading per il codice precedente (Visual C++)

L' C++ oggetti visivi consente di eseguire contemporaneamente più thread simultanei di esecuzione. Grazie al multithreading, è possibile disattivare le attività in background, gestire flussi simultanei di input, gestire un'interfaccia utente e molto altro ancora.

## <a name="in-this-section"></a>Contenuto della sezione

[Multithreading con C e Win32](multithreading-with-c-and-win32.md)<br/>
Fornisce supporto per la creazione di applicazioni multithread con Microsoft Windows

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)<br/>
Vengono descritti i processi e i thread e l'approccio di MFC al multithreading.

[Multithreading e impostazioni locali](multithreading-and-locales.md)<br/>
Vengono illustrati i problemi che si verificano quando si utilizza la funzionalità delle impostazioni locali della C++ libreria di runtime C e della libreria standard in un'applicazione multithread.

## <a name="related-sections"></a>Sezioni correlate

[CWinThread](../mfc/reference/cwinthread-class.md)<br/>
Rappresenta un thread di esecuzione all'interno di un'applicazione.

[CSyncObject](../mfc/reference/csyncobject-class.md)<br/>
Descrive una classe virtuale pura che fornisce la funzionalità comune agli oggetti di sincronizzazione in Win32.

[CSemaphore](../mfc/reference/csemaphore-class.md)<br/>
Rappresenta un semaforo, ovvero un oggetto di sincronizzazione che consente a un numero limitato di thread in uno o più processi di accedere a una risorsa.

[CMutex](../mfc/reference/cmutex-class.md)<br/>
Questo oggetto di sincronizzazione rappresenta un mutex, che consente l'accesso ad esclusione reciproca di un solo thread a una risorsa.

[CCriticalSection](../mfc/reference/ccriticalsection-class.md)<br/>
Rappresenta una sezione critica, ovvero un oggetto di sincronizzazione che consente a un thread alla volta di accedere a una risorsa o a una sezione di codice.

[CEvent](../mfc/reference/cevent-class.md)<br/>
Rappresenta un evento, ovvero un oggetto di sincronizzazione che consente a un thread di notificare a un altro che si è verificato un evento.

[CMultiLock](../mfc/reference/cmultilock-class.md)<br/>
Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso alle risorse di un programma multithread.

[CSingleLock](../mfc/reference/csinglelock-class.md)<br/>
Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso a una risorsa di un programma multithread.
