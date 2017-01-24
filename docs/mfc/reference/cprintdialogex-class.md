---
title: "CPrintDialogEx Class | Microsoft Docs"
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
  - "CPrintDialogEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPrintDialogEx class"
  - "Stampa (finestra di dialogo)"
  - "Print Setup dialog box"
ms.assetid: 1d506703-ee1c-44cc-b4ce-4e778fec26b8
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPrintDialogEx Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula i servizi forniti dalla finestra delle proprietà di stampa di Windows 2000.  
  
## Sintassi  
  
```  
class CPrintDialogEx : public CCommonDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintDialogEx::CPrintDialogEx](../Topic/CPrintDialogEx::CPrintDialogEx.md)|Costruisce un oggetto `CPrintDialogEx`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintDialogEx::CreatePrinterDC](../Topic/CPrintDialogEx::CreatePrinterDC.md)|Crea un contesto di dispositivo della stampante senza visualizzare la finestra di dialogo stampa.|  
|[CPrintDialogEx::DoModal](../Topic/CPrintDialogEx::DoModal.md)|Visualizzare la finestra di dialogo e sarà che l'utente disponga delle selezioni.|  
|[CPrintDialogEx::GetCopies](../Topic/CPrintDialogEx::GetCopies.md)|Recupera il numero di copie richieste.|  
|[CPrintDialogEx::GetDefaults](../Topic/CPrintDialogEx::GetDefaults.md)|Recupera le impostazioni predefinite del dispositivo senza visualizzare una finestra di dialogo.|  
|[CPrintDialogEx::GetDeviceName](../Topic/CPrintDialogEx::GetDeviceName.md)|Recupera il nome di dispositivo di stampa attualmente selezionato.|  
|[CPrintDialogEx::GetDevMode](../Topic/CPrintDialogEx::GetDevMode.md)|Recuperare la struttura `DEVMODE`.|  
|[CPrintDialogEx::GetDriverName](../Topic/CPrintDialogEx::GetDriverName.md)|Recupera il nome del driver di dispositivo definito dal sistema della stampante.|  
|[CPrintDialogEx::GetPortName](../Topic/CPrintDialogEx::GetPortName.md)|Recupera il nome della porta della stampante selezionata.|  
|[CPrintDialogEx::GetPrinterDC](../Topic/CPrintDialogEx::GetPrinterDC.md)|Recupera l'handle al contesto di dispositivo della stampante.|  
|[CPrintDialogEx::PrintAll](../Topic/CPrintDialogEx::PrintAll.md)|Determina se visualizzare tutte le pagine del documento.|  
|[CPrintDialogEx::PrintCollate](../Topic/CPrintDialogEx::PrintCollate.md)|Determina se le copie confrontate sono necessarie.|  
|[CPrintDialogEx::PrintCurrentPage](../Topic/CPrintDialogEx::PrintCurrentPage.md)|Determina se stampare la pagina corrente del documento.|  
|[CPrintDialogEx::PrintRange](../Topic/CPrintDialogEx::PrintRange.md)|Determina se stampare solo un determinato intervallo di pagine.|  
|[CPrintDialogEx::PrintSelection](../Topic/CPrintDialogEx::PrintSelection.md)|Determina se stampare solo gli elementi attualmente selezionato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintDialogEx::m\_pdex](../Topic/CPrintDialogEx::m_pdex.md)|Una struttura utilizzata per personalizzare un oggetto `CPrintDialogEx`.|  
  
## Note  
 È possibile utilizzare il framework per gestire molti aspetti del processo di stampa per l'applicazione.  Per ulteriori informazioni sull'utilizzo del framework per gestire le attività di stampa, vedere l'articolo [stampa](../../mfc/printing.md).  
  
 Se si desidera che l'applicazione per gestire la stampa senza la partecipazione del framework, è possibile utilizzare la classe `CPrintDialogEx` "come è" con il costruttore fornito, oppure è possibile derivare la classe della finestra di dialogo da `CPrintDialogEx` e scrivere un costruttore per esigenze.  In entrambi i casi, queste finestre di dialogo e un comportamento simili a finestre di dialogo standard di MFC poiché derivano dalla classe `CCommonDialog`.  
  
 Per utilizzare un oggetto `CPrintDialogEx`, creare innanzitutto l'oggetto utilizzando il costruttore `CPrintDialogEx`.  Una volta che la finestra di dialogo è stata creata, è possibile impostare o modificare i valori nella struttura [m\_pdex](../Topic/CPrintDialogEx::m_pdex.md) per inizializzare i valori dei controlli della finestra di dialogo.  La struttura `m_pdex` è di tipo [PRINTDLGEX](http://msdn.microsoft.com/library/windows/desktop/ms646844).  Per ulteriori informazioni sulla struttura, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Se non si forniscono le proprie handle in `m_pdex` per i membri **hDevNames** e **hDevMode**, è opportuno chiamare la funzione Windows **GlobalFree** per queste handle al termine della finestra di dialogo.  
  
 Dopo aver inizializzato i controlli finestra di dialogo, chiamare la funzione membro `DoModal` per visualizzare la finestra di dialogo e per consentire di selezionare le opzioni di stampa.  Al termine `DoModal`, è possibile determinare se l'utente ha scelto OK, applicare, oppure pulsante Annulla.  
  
 Se l'utente premesse OK, è possibile utilizzare le funzioni membro di `CPrintDialogEx` per recuperare l'input di informazioni dall'utente.  
  
 La funzione membro `CPrintDialogEx::GetDefaults` è utile per recuperare le impostazioni predefinite correnti della stampante senza visualizzare una finestra di dialogo.  Questo metodo non richiede interazione utente.  
  
 È possibile utilizzare la funzione di Windows **CommDlgExtendedError** per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore.  Per ulteriori informazioni su questa funzione, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni su l `CPrintDialogEx`, vedere [Classi comuni della finestra di dialogo](../../mfc/common-dialog-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `IObjectWithSite`  
  
 `IPrintDialogCallback`  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CPrintDialogEx`  
  
## Requisiti  
 **Header:** afxdlgs.h  
  
## Vedere anche  
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPrintInfo Structure](../../mfc/reference/cprintinfo-structure.md)