---
description: 'Altre informazioni su: supporto MAPI in MFC'
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
ms.openlocfilehash: 289ad61894efd5c08d3a50d8c50e3ac6ee518a25
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97280755"
---
# <a name="mapi-support-in-mfc"></a>Supporto MAPI in MFC

MFC fornisce supporto per un subset di Microsoft Messaging Application Program Interface (MAPI) nella classe `CDocument` . In particolare, `CDocument` dispone di funzioni membro che determinano se il supporto della posta elettronica è presente nel computer dell'utente finale e, in caso affermativo, abilitare un comando Send mail il cui ID di comando standard è ID_FILE_SEND_MAIL. La funzione del gestore MFC per questo comando consente all'utente di inviare un documento tramite posta elettronica.

> [!TIP]
> Anche se MFC non incapsula l'intero set di funzioni MAPI, è comunque possibile chiamare direttamente le funzioni MAPI, così come è possibile chiamare le funzioni API Win32 direttamente dai programmi MFC.

Fornire il comando Invia messaggi nell'applicazione è molto semplice. MFC fornisce l'implementazione di per creare un pacchetto di un documento (ovvero un `CDocument` oggetto derivato da) come allegato e inviarlo come posta elettronica. Questo allegato è equivalente a un comando Salva file che salva (serializza) il contenuto del documento nel messaggio di posta elettronica. Questa implementazione chiama il client di posta nel computer dell'utente per fornire all'utente la possibilità di indirizzare la posta elettronica e di aggiungere il testo del messaggio e del soggetto al messaggio di posta elettronica. Gli utenti visualizzano l'interfaccia utente di un'applicazione di posta elettronica familiare. Questa funzionalità viene fornita da due `CDocument` funzioni membro: `OnFileSendMail` e `OnUpdateFileSendMail` .

MAPI deve leggere il file per inviare l'allegato. Se l'applicazione mantiene il file di dati aperto durante una `OnFileSendMail` chiamata di funzione, il file deve essere aperto con una modalità di condivisione che consente a più processi di accedere al file.

> [!NOTE]
> Una versione di override di `OnFileSendMail` per la classe `COleDocument` gestisce correttamente i documenti composti.

#### <a name="to-implement-a-send-mail-command-with-mfc"></a>Per implementare un comando Invia messaggi con MFC

1. Utilizzare l'editor di menu Visual C++ per aggiungere una voce di menu il cui ID comando è ID_FILE_SEND_MAIL.

   Questo ID comando viene fornito dal Framework in AFXRES. H. Il comando può essere aggiunto a qualsiasi menu, ma in genere viene aggiunto al menu **file** .

1. Aggiungere manualmente il codice seguente alla mappa messaggi del documento:

   [!code-cpp[NVC_MFCDocView#9](codesnippet/cpp/mapi-support-in-mfc_1.cpp)]

    > [!NOTE]
    >  Questa mappa messaggi funziona per un documento derivato da `CDocument` o `COleDocument` : preleva la classe base corretta in entrambi i casi, anche se la mappa messaggi è nella classe del documento derivato.

1. Compilare l'applicazione.

Se è disponibile il supporto per la posta elettronica, MFC Abilita la voce di menu con `OnUpdateFileSendMail` e successivamente elabora il comando con `OnFileSendMail` . Se il supporto della posta elettronica non è disponibile, MFC rimuove automaticamente la voce di menu in modo che non venga visualizzata dall'utente.

> [!TIP]
> Anziché aggiungere manualmente voci della mappa messaggi come descritto in precedenza, è possibile usare la [creazione guidata classe](reference/mfc-class-wizard.md) di classi per eseguire il mapping dei messaggi alle funzioni. Per altre informazioni, vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md).

Per informazioni correlate, vedere la Panoramica di [MAPI](mapi.md) .

Per ulteriori informazioni sulle `CDocument` funzioni membro che abilitano MAPI, vedere:

- [CDocument:: OnFileSendMail](reference/cdocument-class.md#onfilesendmail)

- [CDocument:: OnUpdateFileSendMail](reference/cdocument-class.md#onupdatefilesendmail)

- [COleDocument:: OnFileSendMail](reference/coledocument-class.md#onfilesendmail)

## <a name="see-also"></a>Vedi anche

[MAPI](mapi.md)
