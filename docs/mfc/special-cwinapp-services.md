---
title: Servizi CWinApp speciali
ms.date: 11/04/2016
f1_keywords:
- LoadStdProfileSettings
- EnableShellOpen
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
ms.openlocfilehash: 04c7357d67dc1a5daee4b8b8135c9a54eda8504a
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77127829"
---
# <a name="special-cwinapp-services"></a>Servizi CWinApp speciali

Oltre a eseguire il ciclo di messaggi e a fornire la possibilità di inizializzare l'applicazione e di pulirla dopo, [CWinApp](../mfc/reference/cwinapp-class.md) fornisce molti altri servizi.

##  <a name="_core_shell_registration"></a>Registrazione della shell

Per impostazione predefinita, la Creazione guidata applicazione MFC consente all'utente di aprire file di dati creati dall'applicazione facendo doppio clic su tali file in Esplora file o File Manager. Se l'applicazione è un'applicazione MDI e si specifica un'estensione per i file creati dall'applicazione, la creazione guidata applicazione MFC aggiunge le chiamate alle funzioni membro [RegisterShellFileTypes](../mfc/reference/cwinapp-class.md#registershellfiletypes) e [EnableShellOpen](../mfc/reference/cwinapp-class.md#enableshellopen) di [CWinApp](../mfc/reference/cwinapp-class.md) al `InitInstance` override che scrive automaticamente.

`RegisterShellFileTypes` registra i tipi di documenti dell'applicazione tramite Esplora File o File Manager. La funzione aggiunge voci al database di registrazione gestito da Windows. Le voci registrano ogni tipo di documento, associano un'estensione di file al tipo di file, specificano una riga di comando per aprire l'applicazione e specificano un comando di scambio dinamico di dati (DDE) per aprire un documento di quel tipo.

`EnableShellOpen` completa il processo consentendo all'applicazione di ricevere i comandi DDE da Esplora file o File Manager per aprire il file scelto dall'utente.

Questo supporto di registrazione automatica in `CWinApp` elimina la necessità di fornire un file con estensione reg insieme all'applicazione o di eseguire operazioni di installazione speciali.

Se si desidera inizializzare GDI+ per l'applicazione (chiamando [GdiplusStartup](/windows/win32/api/gdiplusinit/nf-gdiplusinit-gdiplusstartup) nella funzione [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) ), è necessario disattivare il thread in background GDI+.

Questa operazione può essere eseguita impostando il membro `SuppressBackgroundThread` della struttura [GdiplusStartupInput](/windows/win32/api/gdiplusinit/ns-gdiplusinit-gdiplusstartupinput) su **true**. Quando si disattiva il thread in background GDI+, le chiamate `NotificationHook` e `NotificationUnhook` devono essere effettuate immediatamente prima di entrare e uscire dal ciclo di messaggi dell'applicazione. Per ulteriori informazioni su queste chiamate, vedere [GdiplusStartupOutput](/windows/win32/api/gdiplusinit/ns-gdiplusinit-gdiplusstartupoutput). Pertanto, è consigliabile chiamare `GdiplusStartup` e le funzioni di notifica hook si trovino in un override della funzione virtuale [CWinApp:: Run](../mfc/reference/cwinapp-class.md#run), come illustrato di seguito:

[!code-cpp[NVC_MFCDocView#6](../mfc/codesnippet/cpp/special-cwinapp-services_1.cpp)]

Se non si sopprime il thread di background GDI+, i comandi DDE possono essere rilasciati prematuramente all'applicazione prima che venga creata la finestra principale. I comandi DDE rilasciati dalla shell possono essere interrotti prematuramente, con conseguenti messaggi di errore.

##  <a name="_core_file_manager_drag_and_drop"></a>Trascinamento della selezione file Manager

I file possono essere trascinati dalla finestra di visualizzazione dei file in File Manager o Esplora file verso una finestra nell'applicazione. È possibile, ad esempio, abilitare il trascinamento di uno o più file nella finestra principale di un'applicazione MDI, dove l'applicazione può recuperare i nomi dei file e aprire finestre figlio MDI per tali file.

Per abilitare il trascinamento della selezione di file nell'applicazione, la creazione guidata applicazione MFC scrive una chiamata alla funzione membro [CWnd](../mfc/reference/cwnd-class.md) [DragAcceptFiles](../mfc/reference/cwnd-class.md#dragacceptfiles) per la finestra cornice principale nell'`InitInstance`. È possibile rimuovere tale chiamata se non si desidera implementare la funzionalità di trascinamento della selezione.

> [!NOTE]
>  È anche possibile implementare funzionalità di trascinamento della selezione più generali tramite OLE, ad esempio il trascinamento dei dati tra documenti o all'interno di questi. Per informazioni, vedere l'articolo [trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md).

##  <a name="_core_keeping_track_of_the_most_recently_used_documents"></a>Tenere traccia dei documenti usati più di recente

Man mano che l'utente apre e chiudere i file, l'oggetto applicazione tiene traccia degli ultimi quattro file utilizzati. I nomi di questi file vengono aggiunti al menu File e tale elenco viene aggiornato ad ogni cambiamento. Questi nomi file vengono archiviati dal framework nel Registro di sistema o nel file con nome del progetto ed estensione ini e vengono letti dal framework all'avvio dell'applicazione. Il `InitInstance` override creato dalla creazione guidata applicazione MFC include una chiamata alla funzione membro [CWinApp](../mfc/reference/cwinapp-class.md) [LoadStdProfileSettings](../mfc/reference/cwinapp-class.md#loadstdprofilesettings), che carica le informazioni dal registro di sistema o dal file ini, inclusi i nomi file usati più di recente.

Queste voci vengono archiviate come segue:

- In Windows NT, Windows 2000 e versioni successive, il valore viene memorizzato in una chiave del Registro di sistema.

- In Windows 3.x, il valore viene memorizzato nel file WIN.INI.

- In Windows 95 e versioni successive, il valore viene memorizzato in una versione memorizzata nella cache di WIN.INI.

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
