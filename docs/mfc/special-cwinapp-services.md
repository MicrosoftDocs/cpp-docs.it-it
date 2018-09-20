---
title: Servizi CWinApp speciali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- LoadStdProfileSettings
- EnableShellOpen
dev_langs:
- C++
helpviewer_keywords:
- files [MFC], most recently used
- DragAcceptFiles method [MFC]
- MRU lists
- GDI+, initializing for MFC
- GDI+, suppressing background thread [MFC]
- CWinApp class [MFC], shell registration
- application objects [MFC], services
- CWinApp class [MFC], initializing GDI+
- MFC, shell registration
- CWinApp class [MFC], File Manager drag and drop
- LoadStdProfileSettings method [MFC]
- MFC, most-recently-used file list
- RegisterShellFileTypes method [MFC]
- drag and drop [MFC], files
- registering file types
- Shell, registering file types
- services, provided by CWinApp
- CWinApp class [MFC], recently used documents
- CWinApp class [MFC], services
- files [MFC], drag and drop
- EnableShellOpen method [MFC]
- registry [MFC], most recently used files
- MFC, file operations
- registration [MFC], shell
ms.assetid: 0480cd01-f629-4249-b221-93432d95b431
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 79d3744b5accf9b1ab45f6881afb4683dfc967fd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431527"
---
# <a name="special-cwinapp-services"></a>Servizi CWinApp speciali

Oltre alle operazioni che esegue il ciclo di messaggi e offrendo la possibilità di inizializzare l'applicazione e pulirla successivamente, [CWinApp](../mfc/reference/cwinapp-class.md) fornisce molti altri servizi.

##  <a name="_core_shell_registration"></a> Registrazione shell

Per impostazione predefinita, la Creazione guidata applicazione MFC consente all'utente di aprire file di dati creati dall'applicazione facendo doppio clic su tali file in Esplora file o File Manager. Se l'applicazione è un'applicazione MDI e si specifica un'estensione per i file create dall'applicazione, la creazione guidata applicazione MFC aggiunge le chiamate per il [RegisterShellFileTypes](../mfc/reference/cwinapp-class.md#registershellfiletypes) e [EnableShellOpen](../mfc/reference/cwinapp-class.md#enableshellopen)le funzioni membro della [CWinApp](../mfc/reference/cwinapp-class.md) per il `InitInstance` sostituzione che scrive automaticamente.

`RegisterShellFileTypes` registra i tipi di documenti dell'applicazione tramite Esplora File o File Manager. La funzione aggiunge voci al database di registrazione gestito da Windows. Le voci registrano ogni tipo di documento, associano un'estensione di file al tipo di file, specificano una riga di comando per aprire l'applicazione e specificano un comando di scambio dinamico di dati (DDE) per aprire un documento di quel tipo.

`EnableShellOpen` completa il processo consentendo all'applicazione di ricevere i comandi DDE da Esplora file o File Manager per aprire il file scelto dall'utente.

Questo supporto di registrazione automatica in `CWinApp` elimina la necessità di fornire un file con estensione reg insieme all'applicazione o di eseguire operazioni di installazione speciali.

Se si desidera inizializzare GDI+ per l'applicazione (chiamando [GdiplusStartup](/windows/desktop/api/gdiplusinit/nf-gdiplusinit-gdiplusstartup) nel [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) funzione), è necessario eliminare il thread in background di GDI+.

È possibile farlo impostando il `SuppressBackgroundThread` membro del [GdiplusStartupInput](/windows/desktop/api/gdiplusinit/ns-gdiplusinit-gdiplusstartupinput) struttura per **TRUE**. Quando l'eliminazione di GDI+ in background thread, il `NotificationHook` e `NotificationUnhook` le chiamate devono essere eseguite prima di entrare e uscire dal ciclo di messaggi dell'applicazione. Per altre informazioni su queste chiamate, vedere [GdiplusStartupOutput](/windows/desktop/api/gdiplusinit/ns-gdiplusinit-gdiplusstartupoutput). Pertanto, un buon punto di chiamata `GdiplusStartup` e le funzioni di notifica hook sarebbe un override della funzione virtuale [CWinApp:: Run](../mfc/reference/cwinapp-class.md#run), come illustrato di seguito:

[!code-cpp[NVC_MFCDocView#6](../mfc/codesnippet/cpp/special-cwinapp-services_1.cpp)]

Se non si sopprime il thread di background GDI+, i comandi DDE possono essere rilasciati prematuramente all'applicazione prima che venga creata la finestra principale. I comandi DDE rilasciati dalla shell possono essere interrotti prematuramente, con conseguenti messaggi di errore.

##  <a name="_core_file_manager_drag_and_drop"></a> Gestione file trascinamento della selezione

I file possono essere trascinati dalla finestra di visualizzazione dei file in File Manager o Esplora file verso una finestra nell'applicazione. È possibile, ad esempio, abilitare il trascinamento di uno o più file nella finestra principale di un'applicazione MDI, dove l'applicazione può recuperare i nomi dei file e aprire finestre figlio MDI per tali file.

Per abilitare il trascinamento di file ed eliminare nell'applicazione, la creazione guidata applicazione MFC viene scritta una chiamata per il [CWnd](../mfc/reference/cwnd-class.md) funzione membro [DragAcceptFiles](../mfc/reference/cwnd-class.md#dragacceptfiles) per la finestra cornice principale nella `InitInstance`. È possibile rimuovere tale chiamata se non si desidera implementare la funzionalità di trascinamento della selezione.

> [!NOTE]
>  È anche possibile implementare funzionalità di trascinamento della selezione più generali tramite OLE, ad esempio il trascinamento dei dati tra documenti o all'interno di questi. Per informazioni, vedere l'articolo [Drag and Drop (OLE)](../mfc/drag-and-drop-ole.md).

##  <a name="_core_keeping_track_of_the_most_recently_used_documents"></a> Tenere traccia di più documenti usati di recente

Man mano che l'utente apre e chiudere i file, l'oggetto applicazione tiene traccia degli ultimi quattro file utilizzati. I nomi di questi file vengono aggiunti al menu File e tale elenco viene aggiornato ad ogni cambiamento. Questi nomi file vengono archiviati dal framework nel Registro di sistema o nel file con nome del progetto ed estensione ini e vengono letti dal framework all'avvio dell'applicazione. Il `InitInstance` eseguire l'override che consente di creare la creazione guidata applicazione MFC include una chiamata per il [CWinApp](../mfc/reference/cwinapp-class.md) funzione membro [LoadStdProfileSettings](../mfc/reference/cwinapp-class.md#loadstdprofilesettings), che carica le informazioni dal Registro di sistema o con estensione ini file, inclusi più di recente usato i nomi di file.

Queste voci vengono archiviate come segue:

- In Windows NT, Windows 2000 e versioni successive, il valore viene memorizzato in una chiave del Registro di sistema.

- In Windows 3.x, il valore viene memorizzato nel file WIN.INI.

- In Windows 95 e versioni successive, il valore viene memorizzato in una versione memorizzata nella cache di WIN.INI.

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)