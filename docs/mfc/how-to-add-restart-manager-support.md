---
title: 'Procedura: Aggiungere il supporto di Gestione riavvio'
ms.date: 11/04/2016
helpviewer_keywords:
- Restart manager [MFC]
- C++, application crash support
ms.assetid: 7f3f5867-d4bc-4ba8-b3c9-dc1e7be93642
ms.openlocfilehash: 848cb3bb52ae13eb1b7798126becd13384fddeb6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625658"
---
# <a name="how-to-add-restart-manager-support"></a>Procedura: Aggiungere il supporto di Gestione riavvio

Gestione riavvio è una funzionalità aggiunta a Visual Studio per Windows Vista o sistemi operativi successivi. che consente di riavviare l'applicazione in caso di chiusure o riavvii imprevisti. Il funzionamento di Gestione riavvio dipende dal tipo di applicazione Se l'applicazione è un editor di documenti, Gestione riavvio consente all'applicazione di salvare automaticamente lo stato e il contenuto di qualsiasi documento aperto e riavvia l'applicazione dopo una chiusura imprevista. Se l'applicazione non è un editor di documenti, Gestione riavvio riavvierà l'applicazione, ma per impostazione predefinita non potrà salvare lo stato dell'applicazione.

Dopo il riavvio, se l'applicazione è di tipo Unicode verrà visualizzata una finestra di dialogo delle attività. Se l'applicazione è di tipo ANSI, verrà visualizzata una finestra di messaggio di Windows. In questa fase, l'utente sceglie se ripristinare i documenti automaticamente salvati. Se l'utente non ripristina i documenti automaticamente salvati, Gestione riavvio rimuove i file temporanei.

> [!NOTE]
> È possibile eseguire l'override del comportamento predefinito di Gestione riavvio per il salvataggio dei dati e il riavvio dell'applicazione.

Per impostazione predefinita, le applicazioni MFC create tramite la creazione guidata progetto in Visual Studio supportano Gestione riavvio quando le applicazioni vengono eseguite in un computer che dispone di un sistema operativo Windows Vista o versioni successive. Se non si vuole che l'applicazione supporti Gestione riavvio, è possibile disabilitare Gestione riavvio nella creazione guidata nuovo progetto.

### <a name="to-add-support-for-the-restart-manager-to-an-existing-application"></a>Per aggiungere il supporto di Gestione riavvio a un'applicazione esistente

1. Aprire un'applicazione MFC esistente in Visual Studio.

1. Aprire il file sorgente dell'applicazione principale. Per impostazione predefinita si tratta del file con estensione cpp che ha lo stesso nome dell'applicazione. Ad esempio, il file sorgente dell'applicazione principale per MyProject è MyProject.cpp.

1. Trovare il costruttore dell'applicazione principale. Ad esempio, se il progetto è MyProject, il costruttore sarà `CMyProjectApp::CMyProjectApp()`.

1. Aggiungere al costruttore eventi la seguente riga di codice.

```
    m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;
```

1. Verificare che il metodo `InitInstance` dell'applicazione chiami il metodo `InitInstance` padre: [CWinApp::InitInstance](reference/cwinapp-class.md#initinstance) o `CWinAppEx::InitInstance`. Il `InitInstance` metodo è responsabile della verifica del parametro *m_dwRestartManagerSupportFlags* .

1. Compilare ed eseguire l'applicazione.

## <a name="see-also"></a>Vedere anche

[Classe CDataRecoveryHandler](reference/cdatarecoveryhandler-class.md)<br/>
[CWinApp:: m_dwRestartManagerSupportFlags](reference/cwinapp-class.md#m_dwrestartmanagersupportflags)<br/>
[Classe CWinApp](reference/cwinapp-class.md)<br/>
[CWinApp:: m_nAutosaveInterval](reference/cwinapp-class.md#m_nautosaveinterval)<br/>
[CDocument:: OnDocumentEvent](reference/cdocument-class.md#ondocumentevent)
