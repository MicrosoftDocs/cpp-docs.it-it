---
title: "CPrintDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPrintDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPrintDialog class"
  - "Stampa (finestra di dialogo)"
  - "Print Setup dialog box"
ms.assetid: 5bdb2424-adf8-433d-a97c-df11a83bc4e4
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPrintDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula i servizi forniti dalla finestra di dialogo comuni di Windows per stampare.  
  
## Sintassi  
  
```  
class CPrintDialog : public CCommonDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintDialog::CPrintDialog](../Topic/CPrintDialog::CPrintDialog.md)|Costruisce un oggetto `CPrintDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintDialog::CreatePrinterDC](../Topic/CPrintDialog::CreatePrinterDC.md)|Crea un contesto di dispositivo della stampante senza visualizzare la finestra di dialogo stampa.|  
|[CPrintDialog::DoModal](../Topic/CPrintDialog::DoModal.md)|Visualizzare la finestra di dialogo e sarà all'utente di effettuare una selezione.|  
|[CPrintDialog::GetCopies](../Topic/CPrintDialog::GetCopies.md)|Recupera il numero di copie richieste.|  
|[CPrintDialog::GetDefaults](../Topic/CPrintDialog::GetDefaults.md)|Recupera le impostazioni predefinite del dispositivo senza visualizzare una finestra di dialogo.|  
|[CPrintDialog::GetDeviceName](../Topic/CPrintDialog::GetDeviceName.md)|Recupera il nome di dispositivo di stampa attualmente selezionato.|  
|[CPrintDialog::GetDevMode](../Topic/CPrintDialog::GetDevMode.md)|Recuperare la struttura `DEVMODE`.|  
|[CPrintDialog::GetDriverName](../Topic/CPrintDialog::GetDriverName.md)|Recupera il nome del driver della stampante attualmente selezionato.|  
|[CPrintDialog::GetFromPage](../Topic/CPrintDialog::GetFromPage.md)|Recupera la pagina iniziale del timeout di stampa.|  
|[CPrintDialog::GetPortName](../Topic/CPrintDialog::GetPortName.md)|Recupera il nome della porta della stampante selezionata.|  
|[CPrintDialog::GetPrinterDC](../Topic/CPrintDialog::GetPrinterDC.md)|Recupera l'handle al contesto di dispositivo della stampante.|  
|[CPrintDialog::GetToPage](../Topic/CPrintDialog::GetToPage.md)|Recupera la pagina finale di un intervallo di stampa.|  
|[CPrintDialog::PrintAll](../Topic/CPrintDialog::PrintAll.md)|Determina se visualizzare tutte le pagine del documento.|  
|[CPrintDialog::PrintCollate](../Topic/CPrintDialog::PrintCollate.md)|Determina se le copie confrontate sono necessarie.|  
|[CPrintDialog::PrintRange](../Topic/CPrintDialog::PrintRange.md)|Determina se stampare solo un determinato intervallo di pagine.|  
|[CPrintDialog::PrintSelection](../Topic/CPrintDialog::PrintSelection.md)|Determina se stampare solo gli elementi attualmente selezionato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintDialog::m\_pd](../Topic/CPrintDialog::m_pd.md)|Una struttura utilizzata per personalizzare un oggetto `CPrintDialog`.|  
  
## Note  
 Le finestre di dialogo comuni di stampa offrono un modo semplice per distribuire le finestre di dialogo stampa e di stampa in modo coerente con gli standard di Windows.  
  
> [!NOTE]
>  La classe `CPrintDialogEx` incapsula i servizi forniti dalla finestra delle proprietà di stampa di Windows 2000.  Per ulteriori informazioni vedere i cenni preliminari su [CPrintDialogEx](../../mfc/reference/cprintdialogex-class.md).  
  
 La funzionalità di `CPrintDialog` viene sostituita da una [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md), progettato per fornire a una finestra di dialogo comuni sia per l'impostazione di stampa che l'impostazione di pagina.  
  
 È possibile utilizzare il framework per gestire molti aspetti del processo di stampa per l'applicazione.  In questo caso, il framework automaticamente visualizzata la finestra di dialogo comuni di Windows per stampare.  È inoltre possibile premere l'handle del framework per l'applicazione ma eseguire l'override della finestra di dialogo stampa comune con la finestra di dialogo stampa.  Per ulteriori informazioni sull'utilizzo del framework per gestire le attività di stampa, vedere l'articolo [stampa](../../mfc/printing.md).  
  
 Se si desidera che l'applicazione per gestire la stampa senza la partecipazione del framework, è possibile utilizzare la classe `CPrintDialog` "come è" con il costruttore fornito, oppure è possibile derivare la classe della finestra di dialogo da `CPrintDialog` e scrivere un costruttore per esigenze.  In entrambi i casi, queste finestre di dialogo e un comportamento simili a finestre di dialogo standard di MFC poiché derivano dalla classe `CCommonDialog`.  
  
 Per utilizzare un oggetto `CPrintDialog`, creare innanzitutto l'oggetto utilizzando il costruttore `CPrintDialog`.  Una volta che la finestra di dialogo è stata creata, è possibile impostare o modificare i valori nella struttura [m\_pd](../Topic/CPrintDialog::m_pd.md) per inizializzare i valori dei controlli della finestra di dialogo.  La struttura `m_pd` è di tipo [PRINTDLG](http://msdn.microsoft.com/library/windows/desktop/ms646843).  Per ulteriori informazioni sulla struttura, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Se non si forniscono le proprie handle in `m_pd` per i membri **hDevNames** e **hDevMode**, è opportuno chiamare la funzione Windows **GlobalFree** per queste handle al termine della finestra di dialogo.  Quando si utilizza l'implementazione di installazione di stampa del framework fornita da `CWinApp::OnFilePrintSetup`, non è necessario liberare queste handle.  Handle vengono gestite da `CWinApp` e vengono liberati in distruttore di `CWinApp`.  È necessario solo liberare queste handle `CPrintDialog` autonomo.  
  
 Dopo aver inizializzato i controlli finestra di dialogo, chiamare la funzione membro `DoModal` per visualizzare la finestra di dialogo e per consentire di selezionare le opzioni di stampa.  `DoModal` restituisce se l'utente ha scelto del pulsante OK \(**IDOK**\) o annulla \(**IDCANCEL**\).  
  
 Se `DoModal` restituisce **IDOK**, è possibile utilizzare una delle funzioni membro di `CPrintDialog` per recuperare l'input di informazioni dall'utente.  
  
 La funzione membro `CPrintDialog::GetDefaults` è utile per recuperare le impostazioni predefinite correnti della stampante senza visualizzare una finestra di dialogo.  Questa funzione membro non richiede interazione utente.  
  
 È possibile utilizzare la funzione di Windows **CommDlgExtendedError** per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore.  Per ulteriori informazioni su questa funzione, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `CPrintDialog` si basa sul file di COMMDLG.DLL fornito con le versioni di Windows 3,1 e successive.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CPrintDialog`, fornire un modello personalizzato di una finestra di dialogo e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi.  Tutti i messaggi non elaborati devono essere passati alla classe di base.  Personalizzare la funzione hook non è obbligatorio.  
  
 Per elaborare lo stesso messaggio in modo diverso a seconda che la finestra di dialogo di stampa o installazione di stampa, è necessario derivare una classe per ogni finestra di dialogo.  È anche necessario eseguire l'override della funzione di Windows **AttachOnSetup**, che gestisce la creazione di una nuova finestra di dialogo quando il pulsante di installazione di stampa è selezionato di una finestra di dialogo di stampa.  
  
 Per ulteriori informazioni su l `CPrintDialog`, vedere [Classi comuni della finestra di dialogo](../../mfc/common-dialog-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CPrintDialog`  
  
## Requisiti  
 **Header:** afxdlgs.h  
  
## Vedere anche  
 [MFC campione DIBLOOK](../../top/visual-cpp-samples.md)   
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPrintInfo Structure](../../mfc/reference/cprintinfo-structure.md)