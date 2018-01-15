---
title: Classi di supporto dell'applicazione e Thread | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.classes.support
dev_langs: C++
helpviewer_keywords:
- application objects [MFC], thread support classes
- lock classes [MFC]
- thread support classes [MFC]
- threading [MFC]
- synchronization classes [MFC], multithreading
- application support classes [MFC]
ms.assetid: 3c1d14fd-c35c-48f1-86ce-1e0f9a32c36d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e443c2393d9d3a8a0f61df6adddb2c83e7672723
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="application-and-thread-support-classes"></a>Classi di supporto per applicazioni e thread
Ogni applicazione dispone di un unico oggetto applicazione. questo oggetto le coordinate di altri oggetti nel programma in esecuzione ed è derivato dalla `CWinApp`.  
  
 La libreria Microsoft Foundation classe (MFC) supporta più thread di esecuzione all'interno di un'applicazione. Tutte le applicazioni devono contenere almeno un thread. il thread utilizzato per il `CWinApp` oggetto è il thread principale.  
  
 `CWinThread`Incapsula una parte delle funzionalità di threading del sistema operativo. Per rendere più semplice l'utilizzo di più thread, MFC fornisce anche la sincronizzazione le classi di oggetti per fornire un'interfaccia di C++ agli oggetti di sincronizzazione di Win32.  
  
## <a name="application-and-thread-classes"></a>Classi per applicazioni e Thread  
 [CWinApp](../mfc/reference/cwinapp-class.md)  
 Incapsula il codice per inizializzare, eseguire e terminare l'applicazione. Oggetto applicazione è verrà derivare da questa classe.  
  
 [CWinThread](../mfc/reference/cwinthread-class.md)  
 La classe base per tutti i thread. Utilizzare direttamente o derivare una classe da `CWinThread` se il thread esegue le funzioni dell'interfaccia utente. L'oggetto `CWinApp` è derivato da `CWinThread`.  
  
## <a name="synchronization-object-classes"></a>Classi di oggetti di sincronizzazione  
 [CSyncObject](../mfc/reference/csyncobject-class.md)  
 Classe di base di classi di oggetto di sincronizzazione.  
  
 [CCriticalSection](../mfc/reference/ccriticalsection-class.md)  
 Una classe di sincronizzazione che consente un solo thread all'interno di un singolo processo per accedere a un oggetto.  
  
 [CSemaphore](../mfc/reference/csemaphore-class.md)  
 Classe di sincronizzazione che consente compreso tra uno e un numero massimo specificato di accessi simultanei a un oggetto.  
  
 [CMutex](../mfc/reference/cmutex-class.md)  
 Una classe di sincronizzazione che consente un solo thread all'interno di un numero qualsiasi di processi di accedere a un oggetto.  
  
 [CEvent](../mfc/reference/cevent-class.md)  
 Classe di sincronizzazione che invia una notifica di un'applicazione quando si è verificato un evento.  
  
 [CSingleLock](../mfc/reference/csinglelock-class.md)  
 Utilizzato nelle funzioni membro delle classi thread-safe per bloccare un oggetto di sincronizzazione.  
  
 [CMultiLock](../mfc/reference/cmultilock-class.md)  
 Utilizzato nelle funzioni membro delle classi thread-safe per bloccare uno o più oggetti di sincronizzazione da una matrice di oggetti di sincronizzazione.  
  
## <a name="related-classes"></a>Classi correlate  
 [CCommandLineInfo](../mfc/reference/ccommandlineinfo-class.md)  
 Analizza la riga di comando con cui è stato avviato il programma.  
  
 [CWaitCursor](../mfc/reference/cwaitcursor-class.md)  
 Inserisce un cursore di attesa sullo schermo. Utilizzato durante le operazioni di lunga durate.  
  
 [CDockState](../mfc/reference/cdockstate-class.md)  
 Gestisce l'archiviazione permanente dei dati sullo stato per le barre di controllo di ancoraggio.  
  
 [CRecentFileList](../mfc/reference/crecentfilelist-class.md)  
 Mantiene più recente (MRU) elenco dei file usati.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

