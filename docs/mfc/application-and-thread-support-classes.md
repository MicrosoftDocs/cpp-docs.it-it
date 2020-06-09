---
title: Classi di supporto per applicazioni e thread
ms.date: 11/04/2016
f1_keywords:
- vc.classes.support
helpviewer_keywords:
- application objects [MFC], thread support classes
- lock classes [MFC]
- thread support classes [MFC]
- threading [MFC]
- synchronization classes [MFC], multithreading
- application support classes [MFC]
ms.assetid: 3c1d14fd-c35c-48f1-86ce-1e0f9a32c36d
ms.openlocfilehash: 7e64cc50a121f457b7e32e0ed549db2fa9950843
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619442"
---
# <a name="application-and-thread-support-classes"></a>Classi di supporto per applicazioni e thread

Ogni applicazione dispone di un solo oggetto applicazione. Questo oggetto coordina gli altri oggetti del programma in esecuzione ed è derivato da `CWinApp` .

La libreria MFC (Microsoft Foundation Class) supporta più thread di esecuzione all'interno di un'applicazione. Tutte le applicazioni devono avere almeno un thread. il thread usato dall' `CWinApp` oggetto è il thread principale.

`CWinThread`Incapsula una parte delle funzionalità di threading del sistema operativo. Per semplificare l'uso di più thread, MFC fornisce anche le classi di oggetti di sincronizzazione per fornire un'interfaccia C++ agli oggetti di sincronizzazione Win32.

## <a name="application-and-thread-classes"></a>Classi dell'applicazione e del thread

[CWinApp](reference/cwinapp-class.md)<br/>
Incapsula il codice per inizializzare, eseguire e terminare l'applicazione. L'oggetto applicazione verrà derivato da questa classe.

[CWinThread](reference/cwinthread-class.md)<br/>
Classe base per tutti i thread. Usare direttamente o derivare una classe da `CWinThread` se il thread esegue funzioni dell'interfaccia utente. L'oggetto `CWinApp` è derivato da `CWinThread`.

## <a name="synchronization-object-classes"></a>Classi di oggetti di sincronizzazione

[CSyncObject](reference/csyncobject-class.md)<br/>
Classe di base delle classi di oggetti di sincronizzazione.

[CCriticalSection](reference/ccriticalsection-class.md)<br/>
Classe di sincronizzazione che consente a un solo thread all'interno di un singolo processo di accedere a un oggetto.

[CSemaphore](reference/csemaphore-class.md)<br/>
Classe di sincronizzazione che consente tra uno e un numero massimo specificato di accessi simultanei a un oggetto.

[CMutex](reference/cmutex-class.md)<br/>
Classe di sincronizzazione che consente a un solo thread all'interno di un numero qualsiasi di processi di accedere a un oggetto.

[CEvent](reference/cevent-class.md)<br/>
Classe di sincronizzazione che notifica A un'applicazione quando si è verificato un evento.

[CSingleLock](reference/csinglelock-class.md)<br/>
Utilizzato nelle funzioni membro delle classi thread-safe per il blocco su un oggetto di sincronizzazione.

[CMultiLock](reference/cmultilock-class.md)<br/>
Utilizzato nelle funzioni membro delle classi thread-safe per bloccare uno o più oggetti di sincronizzazione da una matrice di oggetti di sincronizzazione.

## <a name="related-classes"></a>Classi correlate

[CCommandLineInfo](reference/ccommandlineinfo-class.md)<br/>
Analizza la riga di comando con cui è stato avviato il programma.

[CWaitCursor](reference/cwaitcursor-class.md)<br/>
Inserisce un cursore di attesa sullo schermo. Utilizzato durante le operazioni di lunga durata.

[CDockState](reference/cdockstate-class.md)<br/>
Gestisce l'archiviazione persistente dei dati dello stato di ancoraggio per le barre di controllo.

[CRecentFileList](reference/crecentfilelist-class.md)<br/>
Gestisce l'elenco dei file utilizzati più di recente (MRU).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)
