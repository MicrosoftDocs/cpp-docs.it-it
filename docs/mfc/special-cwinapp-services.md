---
title: "Servizi CWinApp speciali | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "LoadStdProfileSettings"
  - "EnableShellOpen"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetti applicazione [C++], servizi"
  - "CWinApp (classe), trascinamento della selezione in File Manager"
  - "CWinApp (classe), inizializzazione di GDI+"
  - "CWinApp (classe), documenti utilizzati di recente"
  - "CWinApp (classe), servizi"
  - "CWinApp (classe), registrazione shell"
  - "trascinamento della selezione [C++], file"
  - "DragAcceptFiles (metodo)"
  - "EnableShellOpen (metodo)"
  - "file [C++], trascinamento della selezione"
  - "file [C++], utilizzati più di recente"
  - "GDI+, inizializzazione per MFC"
  - "GDI+, eliminazione di thread in background [MFC]"
  - "LoadStdProfileSettings (metodo)"
  - "MFC [C++], operazioni sui file"
  - "MFC [C++], elenco dei file utilizzati più di recente"
  - "MFC [C++], registrazione shell"
  - "MRU (elenchi)"
  - "registrazione dei tipi di file"
  - "RegisterShellFileTypes (metodo)"
  - "registrazione [C++], shell"
  - "Registro di sistema [C++], elenco dei file utilizzati più di recente"
  - "servizi, forniti da CWinApp"
  - "Shell, registrazione dei tipi di file"
ms.assetid: 0480cd01-f629-4249-b221-93432d95b431
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Servizi CWinApp speciali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Oltre a eseguire il ciclo di messaggi e fornire una possibilità di inizializzare l'applicazione e pulirla successivamente, [CWinApp](../mfc/reference/cwinapp-class.md) fornisce molti altri servizi.  
  
##  <a name="_core_shell_registration"></a> Registrazione Shell  
 Per impostazione predefinita, la Creazione guidata di applicazione MFC consente all'utente di aprire file di dati che l'applicazione ha creato facendo doppio clic nell'Esplora file o nel File Manager.  Se l'applicazione è un'applicazione MDI e si specifica un'estensione per i file creati dall'applicazione, la Creazione guidata applicazione MFC aggiunge le chiamate alle funzioni membro [RegisterShellFileTypes](../Topic/CWinApp::RegisterShellFileTypes.md) e [EnableShellOpen](../Topic/CWinApp::EnableShellOpen.md) di [CWinApp](../mfc/reference/cwinapp-class.md) all'override `InitInstance` che scrive automaticamente.  
  
 `RegisterShellFileTypes` registra i tipi di documenti dell'applicazione tramite l'Esplora File o il File Manager.  La funzione aggiunge voci al database di registrazione che Windows gestisce.  Le voci registrano ogni tipo di documento, associano un'estensione di file al tipo di file, specificano una riga di comando per aprire l'applicazione e specificano un comando di scambio dinamico di dati \(DDE\) per aprire un documento di quel tipo.  
  
 `EnableShellOpen` completa il processo consentendo all'applicazione di ricevere i comandi DDE dal'Esplora file o dal File Manager per aprire il file scelto dall'utente.  
  
 Questo supporto automatico di registrazione in `CWinApp` elimina la necessità di fornire un file con estensione reg con l'applicazione o di eseguire operazioni di installazione speciali.  
  
 Se si desidera inizializzare GDI\+ per l'applicazione \(chiamando [GdiplusStartup](_gdiplus_FUNC_GdiplusStartup_token_input_output_) nella funzione [InitInstance](../Topic/CWinApp::InitInstance.md) \), è necessario eliminare il thread in background di GDI\+.  
  
 Si può fare ciò impostando il membro **SuppressBackgroundThread** della struttura [GdiplusStartupInput](_gdiplus_STRUC_GdiplusStartupInput) a **TRUE**.  Quando si elimina il thread in background di GDI\+, le chiamate **NotificationUnhook** e **NotificationHook** \(vedere [GdiplusStartupOutput](_gdiplus_STRUC_GdiplusStartupOutput)\) devono essere eseguite prima di entrare e uscire dal ciclo di messaggio dell'applicazione.  Di conseguenza, si consiglia di chiamare **GdiplusStartup** e le funzioni di notifica hook in un override della funzione virtuale [CWinApp::Run](../Topic/CWinApp::Run.md), come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCDocView#6](../mfc/codesnippet/CPP/special-cwinapp-services_1.cpp)]  
  
 Se non si sopprime il thread di background GDI\+, i comandi DDE possono essere rilasciati prematuramente all'applicazione prima che la finestra principale sia stata creata.  I comandi DDE rilasciati dalla shell possono essere interrotti prematuramente, con conseguenti messaggi di errore.  
  
##  <a name="_core_file_manager_drag_and_drop"></a> Trascinamento della selezione in File Manager  
 I file possono essere trascinati dalla finestra visualizzazione del file del File Manager o dell'Esplora file ad una finestra nell'applicazione.  È possibile, ad esempio, abilitare uno o più file ad essere trascinati alla finestra principale di un'applicazione MDI, in cui l'applicazione può recuperare i nomi dei file e aprire finestre figlio MDI per tali file.  
  
 Per abilitar il trascinare e il rilascio file nell'applicazione, la Creazione guidata applicazione MFC scrive una chiamata alla funzione membro [CWnd](../mfc/reference/cwnd-class.md) di [DragAcceptFiles](../Topic/CWnd::DragAcceptFiles.md) per la finestra principale in `InitInstance`.  È possibile rimuovere quella chiamata se non si desidera implementare la funzionalità di trascinamento della selezione.  
  
> [!NOTE]
>  È anche possibile implementare un trascinamento della selezione più generale trascinando i dati tra o nei documenti tramite OLE.  Per informazioni, vedere l'articolo [Trascinamento della selezione \(OLE\)](../mfc/drag-and-drop-ole.md).  
  
##  <a name="_core_keeping_track_of_the_most_recently_used_documents"></a> Tenere traccia dei documenti utilizzati di recente  
 Poiché l'utente apre e chiudere i file, l'oggetto applicazione tiene traccia dei quattro file utilizzati di recente.  I nomi di questi file vengono aggiunti al menu File e vengono aggiornati quando vengono modificati.  Il framework archivia questi nomi file nel Registro di sistema o nei file .ini, con lo stesso nome del progetto e li legge dal file quando l'applicazione viene avviata.  L'override di `InitInstance` che la Creazione guidata applicazione MFC crea automaticamente include una chiamata alla funzione membro [CWinApp](../mfc/reference/cwinapp-class.md) di [LoadStdProfileSettings](../Topic/CWinApp::LoadStdProfileSettings.md), che carica le informazioni dal registro o dal file .ini, includendo i nomi dei file utilizzati di recente.  
  
 Queste voci vengono archiviate come segue:  
  
-   In Windows NT, Windows 2000 e versioni successive, il valore viene memorizzato in una chiave del Registro.  
  
-   In windows 3.x, il valore viene memorizzato nel file WIN.INI.  
  
-   In Windows 95 e versioni successive, il valore viene memorizzato in una versione memorizzata nella cache di WIN.INI.  
  
## Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)