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
ms.openlocfilehash: 667725a60fb0c907a9c2d017674f9d097d1f4946
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62394676"
---
# <a name="application-and-thread-support-classes"></a>Classi di supporto per applicazioni e thread

Ogni applicazione dispone di un unico oggetto applicazione. questo oggetto coordina altri oggetti nel programma in esecuzione ed è derivato da `CWinApp`.

La libreria di classi MFC (Microsoft Foundation) supporta più thread di esecuzione all'interno di un'applicazione. Tutte le applicazioni devono avere almeno un thread. il thread utilizzato per il `CWinApp` oggetto è il thread primario.

`CWinThread` Incapsula una parte della funzionalità di threading del sistema operativo. Per rendere più semplice l'uso di più thread, MFC fornisce anche la sincronizzazione le classi di oggetti per fornire un'interfaccia di C++ per gli oggetti di sincronizzazione Win32.

## <a name="application-and-thread-classes"></a>Classi per applicazioni e Thread

[CWinApp](../mfc/reference/cwinapp-class.md)<br/>
Incapsula il codice per inizializzare, eseguire e terminare l'applicazione. È l'oggetto applicazione deriverà da questa classe.

[CWinThread](../mfc/reference/cwinthread-class.md)<br/>
La classe base per tutti i thread. Usare direttamente o derivare una classe da `CWinThread` se il thread esegue le funzioni dell'interfaccia utente. L'oggetto `CWinApp` è derivato da `CWinThread`.

## <a name="synchronization-object-classes"></a>Classi di oggetti di sincronizzazione

[CSyncObject](../mfc/reference/csyncobject-class.md)<br/>
Classe di base di classi di oggetti di sincronizzazione.

[CCriticalSection](../mfc/reference/ccriticalsection-class.md)<br/>
Una classe di sincronizzazione che consente solo un thread all'interno di un singolo processo per accedere a un oggetto.

[CSemaphore](../mfc/reference/csemaphore-class.md)<br/>
Una classe di sincronizzazione che consente compreso tra uno e un numero massimo di accessi simultanei per un oggetto specificato.

[CMutex](../mfc/reference/cmutex-class.md)<br/>
Una classe di sincronizzazione che consente solo un thread all'interno di un numero qualsiasi di processi di accedere a un oggetto.

[CEvent](../mfc/reference/cevent-class.md)<br/>
Una classe di sincronizzazione che informa un'applicazione quando si è verificato un evento.

[CSingleLock](../mfc/reference/csinglelock-class.md)<br/>
Utilizzato nelle funzioni membro delle classi thread-safe per bloccare su un oggetto di sincronizzazione.

[CMultiLock](../mfc/reference/cmultilock-class.md)<br/>
Utilizzato nelle funzioni membro delle classi thread-safe per bloccare uno o più oggetti di sincronizzazione da una matrice di oggetti di sincronizzazione.

## <a name="related-classes"></a>Classi correlate

[CCommandLineInfo](../mfc/reference/ccommandlineinfo-class.md)<br/>
Analizza la riga di comando con cui è stato avviato il programma.

[CWaitCursor](../mfc/reference/cwaitcursor-class.md)<br/>
Inserisce un cursore di attesa sullo schermo. Usato durante le operazioni di lunga durate.

[CDockState](../mfc/reference/cdockstate-class.md)<br/>
Gestisce l'archiviazione permanente dei dati di stato per le barre di controllo di ancoraggio.

[CRecentFileList](../mfc/reference/crecentfilelist-class.md)<br/>
Gestisce più recente (MRU) elenco file usati.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
