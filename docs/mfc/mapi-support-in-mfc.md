---
title: Supporto MAPI in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, MAPI support
- MAPI support in MFC
- CDocument class [MFC], and MAPI
- OnUpdateFileSendMail method [MFC]
- MAPI, MFC
- OnFileSendMail method [MFC]
ms.assetid: cafbecb1-0427-4077-b4b8-159bae5b49b8
ms.openlocfilehash: 564ce185758d25682a88f18a23b0b11afc84a4d0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50567146"
---
# <a name="mapi-support-in-mfc"></a>Supporto MAPI in MFC

MFC fornisce supporto per un subset del Microsoft programma interfaccia MAPI (Messaging Application) nella classe `CDocument`. In particolare, `CDocument` ha funzioni membro che determinano se il supporto di posta elettronica è presente nel computer dell'utente finale e, in questo caso, attivare un comando Invia messaggi con ID di comando standard sia ID_FILE_SEND_MAIL. La funzione del gestore MFC per questo comando consente di inviare un documento tramite posta elettronica.

> [!TIP]
>  Anche se MFC non include l'intero set MAPI (funzione), è possibile comunque chiamare MAPI funzioni direttamente, esattamente come è possibile chiamare funzioni API Win32 direttamente dai programmi MFC.

Comando nell'applicazione fornendo invia messaggi è molto semplice. MFC fornisce l'implementazione per un documento del pacchetto (vale a dire un `CDocument`-oggetto derivato) come allegato e inviarlo come messaggio di posta. L'allegato è equivalente a un comando di salvataggio File che Salva (serializza) del contenuto del documento per il messaggio di posta elettronica. Questa implementazione chiama al client di posta elettronica sul computer dell'utente per consentire all'utente l'opportunità di indirizzo del destinatario e aggiungere testo del messaggio e soggetto al messaggio di posta elettronica. Gli utenti visualizzano l'interfaccia utente della propria applicazione di posta elettronica familiare. Questa funzionalità viene fornita da due `CDocument` funzioni membro: `OnFileSendMail` e `OnUpdateFileSendMail`.

MAPI deve leggere i file per l'invio dell'allegato. Se l'applicazione mantiene il relativo file di dati aperte durante un `OnFileSendMail` chiamata di funzione, il file deve essere aperto con una modalità di condivisione che consente a più processi accedere al file.

> [!NOTE]
>  Una versione di override `OnFileSendMail` per la classe `COleDocument` correttamente gli handle composta di documenti.

#### <a name="to-implement-a-send-mail-command-with-mfc"></a>Per implementare un comando Invia messaggi con MFC

1. Usare l'editor di menu di Visual C++ per aggiungere una voce di menu con ID di comando sia ID_FILE_SEND_MAIL.

   Questo ID di comando viene fornito dal framework in AFXRES. H. Il comando può essere aggiunto a un menu di scelta, ma in genere viene aggiunto per il **File** menu.

1. Aggiungere manualmente quanto segue alla mappa messaggi del documento:

   [!code-cpp[NVC_MFCDocView#9](../mfc/codesnippet/cpp/mapi-support-in-mfc_1.cpp)]

    > [!NOTE]
    >  Questa mappa di messaggio funziona per un documento derivato da una `CDocument` o `COleDocument` , ovvero lo preleva la classe di base corretta in entrambi i casi, anche se la mappa messaggi nella classe derivata di documento.

1. Compilare l'applicazione.

Se è disponibile il supporto di posta elettronica, MFC consente la voce di menu `OnUpdateFileSendMail` e successivamente li elabora il comando con `OnFileSendMail`. Se non è disponibile il supporto di posta elettronica, MFC rimuove la voce di menu automaticamente in modo che l'utente non potrà vedere.

> [!TIP]
>  Invece di aggiungere manualmente le voci della mappa dei messaggi come descritte in precedenza, è possibile usare la finestra proprietà di classe per eseguire il mapping dei messaggi a funzioni. Per altre informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

Per informazioni correlate, vedere la [MAPI](../mfc/mapi.md) Panoramica.

Per altre informazioni sul `CDocument` funzioni membro che consentono a MAPI, vedere:

- [CDocument:: OnFileSendMail](../mfc/reference/cdocument-class.md#onfilesendmail)

- [CDocument:: OnUpdateFileSendMail](../mfc/reference/cdocument-class.md#onupdatefilesendmail)

- [COleDocument::OnFileSendMail](../mfc/reference/coledocument-class.md#onfilesendmail)

## <a name="see-also"></a>Vedere anche

[MAPI](../mfc/mapi.md)

