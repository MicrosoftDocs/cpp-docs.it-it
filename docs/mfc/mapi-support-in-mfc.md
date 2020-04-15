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
ms.openlocfilehash: 3024f744407cf33c8dfad8a6f7af736e0f8061ef
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81356992"
---
# <a name="mapi-support-in-mfc"></a>Supporto MAPI in MFC

MFC fornisce il supporto per un sottoinsieme di Microsoft Messaging `CDocument`Application Program Interface (MAPI) nella classe . In `CDocument` particolare, dispone di funzioni membro che determinano se il supporto della posta elettronica è presente nel computer dell'utente finale e, in caso affermativo, abilitare un comando Invia posta il cui ID di comando standard è ID_FILE_SEND_MAIL. La funzione del gestore MFC per questo comando consente all'utente di inviare un documento tramite posta elettronica.

> [!TIP]
> Sebbene MFC non incapsula l'intero set di funzioni MAPI, è comunque possibile chiamare direttamente le funzioni MAPI, così come è possibile chiamare le funzioni API Win32 direttamente dai programmi MFC.

Fornire il comando Invia posta nell'applicazione è molto semplice. MFC fornisce l'implementazione per creare `CDocument`un pacchetto di un documento (ovvero un oggetto derivato) come allegato e inviarlo come posta elettronica. Questo allegato equivale a un comando File Save che salva (serializza) il contenuto del documento nel messaggio di posta. Questa implementazione richiede al client di posta sul computer dell'utente la possibilità di indirizzare la posta e di aggiungere oggetto e testo del messaggio al messaggio di posta. Gli utenti vedono l'interfaccia utente dell'applicazione di posta familiare. Questa funzionalità viene fornita `CDocument` da `OnFileSendMail` due `OnUpdateFileSendMail`funzioni membro: e .

MAPI deve leggere il file per inviare l'allegato. Se l'applicazione mantiene aperto `OnFileSendMail` il file di dati durante una chiamata di funzione, il file deve essere aperto con una modalità di condivisione che consente a più processi di accedere al file.

> [!NOTE]
> Una versione di `OnFileSendMail` override `COleDocument` di per la classe gestisce correttamente i documenti composti.

#### <a name="to-implement-a-send-mail-command-with-mfc"></a>Per implementare un comando Invia posta elettronica con MFCTo implement a Send Mail command with MFC

1. Utilizzare l'editor di menu di Visual C ID_FILE_SEND_MAIL.

   Questo ID di comando viene fornito dal framework in AFXRES. H. Il comando può essere aggiunto a qualsiasi menu, ma in genere viene aggiunto al menu **File.**

1. Aggiungere manualmente quanto segue alla mappa messaggi del documento:

   [!code-cpp[NVC_MFCDocView#9](../mfc/codesnippet/cpp/mapi-support-in-mfc_1.cpp)]

    > [!NOTE]
    >  Questa mappa messaggi funziona per `CDocument` un `COleDocument` documento derivato da o: preleva la classe di base corretta in entrambi i casi, anche se la mappa messaggi si trova nella classe documento derivata.

1. Compilare l'applicazione.

Se è disponibile il supporto della `OnUpdateFileSendMail` posta, MFC abilita la `OnFileSendMail`voce di menu con e successivamente elabora il comando con . Se il supporto della posta elettronica non è disponibile, MFC rimuove automaticamente la voce di menu in modo che l'utente non verrà visualizzato.

> [!TIP]
> Anziché aggiungere manualmente le voci della mappa messaggi come descritto in precedenza, è possibile utilizzare la [Creazione guidata classe](reference/mfc-class-wizard.md) per eseguire il mapping dei messaggi alle funzioni. Per ulteriori informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

Per informazioni correlate, vedere la panoramica [MAPI.](../mfc/mapi.md)

Per ulteriori informazioni `CDocument` sulle funzioni membro che abilitano MAPI, vedere:

- [CDocumento::OnFileSendMail](../mfc/reference/cdocument-class.md#onfilesendmail)

- [CDocumento::OnUpdateFileSendMail](../mfc/reference/cdocument-class.md#onupdatefilesendmail)

- [COleDocument::OnFileSendMail](../mfc/reference/coledocument-class.md#onfilesendmail)

## <a name="see-also"></a>Vedere anche

[MAPI](../mfc/mapi.md)
