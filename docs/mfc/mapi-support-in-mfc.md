---
title: Supporto MAPI in MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC, MAPI support
- MAPI support in MFC
- CDocument class [MFC], and MAPI
- OnUpdateFileSendMail method [MFC]
- MAPI, MFC
- OnFileSendMail method [MFC]
ms.assetid: cafbecb1-0427-4077-b4b8-159bae5b49b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e5d6498d1ecb20b47070cb26bf1a9d732340e266
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mapi-support-in-mfc"></a>Supporto MAPI in MFC
MFC fornisce supporto per un subset del Microsoft programma interfaccia MAPI (Messaging Application) nella classe **CDocument**. In particolare, **CDocument** ha funzioni membro che determinano se il supporto di posta elettronica è presente nel computer dell'utente finale e, in tal caso, attivare un comando Invia messaggi con ID di comando standard **ID_FILE_SEND_MAIL**. La funzione del gestore MFC per questo comando consente all'utente di inviare un documento tramite posta elettronica.  
  
> [!TIP]
>  Sebbene MFC non include l'intero set MAPI (funzione), è possibile comunque chiamare funzioni MAPI direttamente, così come è possibile chiamare funzioni API Win32 direttamente dai programmi MFC.  
  
 Comando nell'applicazione che invia messaggi è molto semplice. MFC fornisce l'implementazione per un documento del pacchetto (vale a dire un **CDocument**-oggetto derivato) come allegato e inviarlo tramite posta elettronica. L'allegato è equivalente a un comando File Salva che Salva (serializza) il contenuto del documento al messaggio di posta elettronica. Questa implementazione chiama il client di posta elettronica sul computer dell'utente per consentire all'utente la possibilità di indirizzo del destinatario e per aggiungere testo del messaggio e soggetto al messaggio di posta elettronica. Gli utenti di vedere interfaccia utente della propria applicazione di posta elettronica familiarità. Questa funzionalità viene fornita da due **CDocument** funzioni membro: `OnFileSendMail` e `OnUpdateFileSendMail`.  
  
 MAPI deve leggere il file per inviare l'allegato. Se l'applicazione mantiene il relativo file di dati aperti durante un `OnFileSendMail` chiamata di funzione, il file deve essere aperto con una modalità di condivisione che consente a più processi accedere al file.  
  
> [!NOTE]
>  Una versione di override `OnFileSendMail` per la classe `COleDocument` correttamente gli handle composti documenti.  
  
#### <a name="to-implement-a-send-mail-command-with-mfc"></a>Per implementare un comando Invia messaggi con MFC  
  
1.  Utilizzare l'editor di menu di Visual C++ per aggiungere una voce di menu con ID di comando **ID_FILE_SEND_MAIL**.  
  
     Questo ID di comando viene fornito dal framework in AFXRES. H. Il comando può essere aggiunto a qualsiasi menu, ma in genere viene aggiunto per il **File** menu.  
  
2.  Manualmente, aggiungere quanto segue alla mappa messaggi del documento:  
  
     [!code-cpp[NVC_MFCDocView#9](../mfc/codesnippet/cpp/mapi-support-in-mfc_1.cpp)]  
  
    > [!NOTE]
    >  La mappa messaggi funziona per un documento derivato da uno **CDocument** o **COleDocument** , ovvero prelevato da classe base corretta in entrambi i casi, anche se la mappa messaggi nella classe derivata di documento.  
  
3.  Compilare l'applicazione.  
  
 Se il supporto di posta elettronica è disponibile, MFC consente la voce di menu con `OnUpdateFileSendMail` e successivamente elabora il comando con `OnFileSendMail`. Se non è disponibile il supporto di posta elettronica, MFC rimuove automaticamente la voce di menu in modo che l'utente non verrà visualizzata.  
  
> [!TIP]
>  Invece di aggiungere manualmente le voci della mappa dei messaggi come descritte in precedenza, utilizzare la finestra proprietà di classe per eseguire il mapping di messaggi a funzioni. Per ulteriori informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
 Per informazioni correlate, vedere il [MAPI](../mfc/mapi.md) Panoramica.  
  
 Per ulteriori informazioni sul **CDocument** funzioni membro che consentono di MAPI, vedere:  
  
-   [CDocument:: OnFileSendMail](../mfc/reference/cdocument-class.md#onfilesendmail)  
  
-   [CDocument:: OnUpdateFileSendMail](../mfc/reference/cdocument-class.md#onupdatefilesendmail)  
  
-   [COleDocument::OnFileSendMail](../mfc/reference/coledocument-class.md#onfilesendmail)  
  
## <a name="see-also"></a>Vedere anche  
 [MAPI](../mfc/mapi.md)

