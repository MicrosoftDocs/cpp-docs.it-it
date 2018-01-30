---
title: Servizi CWinApp speciali | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 28a12d9553e1519c158c0a0e9d2fcec6365b65fe
ms.sourcegitcommit: 185e11ab93af56ffc650fe42fb5ccdf1683e3847
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2018
---
# <a name="special-cwinapp-services"></a>Servizi CWinApp speciali
Oltre a eseguire il ciclo di messaggi e fornire la possibilità di inizializzare l'applicazione e pulirla successivamente, [CWinApp](../mfc/reference/cwinapp-class.md) fornisce molti altri servizi.  
  
##  <a name="_core_shell_registration"></a>Registrazione shell  
 Per impostazione predefinita, la Creazione guidata applicazione MFC consente all'utente di aprire file di dati creati dall'applicazione facendo doppio clic su tali file in Esplora file o File Manager. Se l'applicazione è un'applicazione MDI e si specifica un'estensione per i file viene creato dall'applicazione, creazione guidata applicazione MFC vengono aggiunte chiamate al [RegisterShellFileTypes](../mfc/reference/cwinapp-class.md#registershellfiletypes) e [EnableShellOpen](../mfc/reference/cwinapp-class.md#enableshellopen)funzioni membro di [CWinApp](../mfc/reference/cwinapp-class.md) per il `InitInstance` override scritto automaticamente.  
  
 `RegisterShellFileTypes` registra i tipi di documenti dell'applicazione tramite Esplora File o File Manager. La funzione aggiunge voci al database di registrazione gestito da Windows. Le voci registrano ogni tipo di documento, associano un'estensione di file al tipo di file, specificano una riga di comando per aprire l'applicazione e specificano un comando di scambio dinamico di dati (DDE) per aprire un documento di quel tipo.  
  
 `EnableShellOpen` completa il processo consentendo all'applicazione di ricevere i comandi DDE da Esplora file o File Manager per aprire il file scelto dall'utente.  
  
 Questo supporto di registrazione automatica in `CWinApp` elimina la necessità di fornire un file con estensione reg insieme all'applicazione o di eseguire operazioni di installazione speciali.  
  
 Se si desidera inizializzare GDI+ per l'applicazione (chiamando [GdiplusStartup](https://msdn.microsoft.com/library/ms534077) nel [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) funzione), è necessario eliminare il thread in background di GDI+.  
  
 È possibile farlo impostando la **SuppressBackgroundThread** appartenente il [GdiplusStartupInput](https://msdn.microsoft.com/library/ms534067) struttura per **TRUE**. Quando l'eliminazione di GDI+, thread in background di **Notificationunhook** e **Notificationhook** chiamate devono essere eseguite prima di entrare e uscire dal ciclo di messaggi dell'applicazione. Per ulteriori informazioni su queste chiamate, vedere [GdiplusStartupOutput](https://msdn.microsoft.com/library/ms534068). Pertanto, si consiglia di chiamare **GdiplusStartup** e le funzioni hook di notifica in un override della funzione virtuale [CWinApp:: Run](../mfc/reference/cwinapp-class.md#run), come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCDocView#6](../mfc/codesnippet/cpp/special-cwinapp-services_1.cpp)]  
  
 Se non si sopprime il thread di background GDI+, i comandi DDE possono essere rilasciati prematuramente all'applicazione prima che venga creata la finestra principale. I comandi DDE rilasciati dalla shell possono essere interrotti prematuramente, con conseguenti messaggi di errore.  
  
##  <a name="_core_file_manager_drag_and_drop"></a>Trascinamento della selezione di file Manager  
 I file possono essere trascinati dalla finestra di visualizzazione dei file in File Manager o Esplora file verso una finestra nell'applicazione. È possibile, ad esempio, abilitare il trascinamento di uno o più file nella finestra principale di un'applicazione MDI, dove l'applicazione può recuperare i nomi dei file e aprire finestre figlio MDI per tali file.  
  
 Per abilitare il trascinamento di file e nella propria applicazione, creazione guidata applicazione MFC viene scritta una chiamata per il [CWnd](../mfc/reference/cwnd-class.md) funzione membro [DragAcceptFiles](../mfc/reference/cwnd-class.md#dragacceptfiles) per la finestra cornice principale nel `InitInstance`. È possibile rimuovere tale chiamata se non si desidera implementare la funzionalità di trascinamento della selezione.  
  
> [!NOTE]
>  È anche possibile implementare funzionalità di trascinamento della selezione più generali tramite OLE, ad esempio il trascinamento dei dati tra documenti o all'interno di questi. Per informazioni, vedere l'articolo [trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md).  
  
##  <a name="_core_keeping_track_of_the_most_recently_used_documents"></a>Tenere traccia di più documenti usati di recente  
 Man mano che l'utente apre e chiudere i file, l'oggetto applicazione tiene traccia degli ultimi quattro file utilizzati. I nomi di questi file vengono aggiunti al menu File e tale elenco viene aggiornato ad ogni cambiamento. Questi nomi file vengono archiviati dal framework nel Registro di sistema o nel file con nome del progetto ed estensione ini e vengono letti dal framework all'avvio dell'applicazione. Il `InitInstance` che la creazione guidata applicazione MFC crea includono una chiamata a eseguire l'override di [CWinApp](../mfc/reference/cwinapp-class.md) funzione membro [LoadStdProfileSettings](../mfc/reference/cwinapp-class.md#loadstdprofilesettings), che carica le informazioni dal Registro di sistema o file ini file, compreso degli ultimi utilizzati nomi di file.  
  
 Queste voci vengono archiviate come segue:  
  
-   In Windows NT, Windows 2000 e versioni successive, il valore viene memorizzato in una chiave del Registro di sistema.  
  
-   In Windows 3.x, il valore viene memorizzato nel file WIN.INI.  
  
-   In Windows 95 e versioni successive, il valore viene memorizzato in una versione memorizzata nella cache di WIN.INI.  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)