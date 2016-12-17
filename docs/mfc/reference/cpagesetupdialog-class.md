---
title: "CPageSetupDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPageSetupDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPageSetupDialog class"
  - "OLE Page Setup dialog box"
  - "impostazione di pagina"
  - "Imposta pagina (finestra di dialogo)"
  - "Print Setup dialog box"
ms.assetid: 049c0ac8-f254-4854-9414-7a8271d1447a
caps.latest.revision: 24
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPageSetupDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula i servizi forniti dalla finestra di dialogo comune di installazione di pagina Windows OLE supporto aggiuntivo per impostare e modificare i margini di stampa.  
  
## Sintassi  
  
```  
class CPageSetupDialog : public CCommonDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPageSetupDialog::CPageSetupDialog](../Topic/CPageSetupDialog::CPageSetupDialog.md)|Costruisce un oggetto `CPageSetupDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPageSetupDialog::CreatePrinterDC](../Topic/CPageSetupDialog::CreatePrinterDC.md)|Crea un contesto di dispositivo per stampare.|  
|[CPageSetupDialog::DoModal](../Topic/CPageSetupDialog::DoModal.md)|Visualizzare la finestra di dialogo e consente all'utente esegue una selezione.|  
|[CPageSetupDialog::GetDeviceName](../Topic/CPageSetupDialog::GetDeviceName.md)|Restituisce il nome di dispositivo della stampante.|  
|[CPageSetupDialog::GetDevMode](../Topic/CPageSetupDialog::GetDevMode.md)|Restituisce `DEVMODE` corrente della stampante.|  
|[CPageSetupDialog::GetDriverName](../Topic/CPageSetupDialog::GetDriverName.md)|Restituisce il driver utilizzato dalla stampante.|  
|[CPageSetupDialog::GetMargins](../Topic/CPageSetupDialog::GetMargins.md)|Restituisce le impostazioni correnti del margine della stampante.|  
|[CPageSetupDialog::GetPaperSize](../Topic/CPageSetupDialog::GetPaperSize.md)|Restituisce il formato di carta della stampante.|  
|[CPageSetupDialog::GetPortName](../Topic/CPageSetupDialog::GetPortName.md)|Restituisce il nome della porta di output.|  
|[CPageSetupDialog::OnDrawPage](../Topic/CPageSetupDialog::OnDrawPage.md)|Chiamato dal framework per eseguire il rendering di un'immagine dello schermo di una pagina stampata.|  
|[CPageSetupDialog::PreDrawPage](../Topic/CPageSetupDialog::PreDrawPage.md)|Chiamato dal framework prima di eseguire il rendering di un'immagine dello schermo di una pagina stampata.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPageSetupDialog::m\_psd](../Topic/CPageSetupDialog::m_psd.md)|Una struttura utilizzata per personalizzare un oggetto `CPageSetupDialog`.|  
  
## Note  
 Questa classe è progettata per sostituire la finestra di dialogo stampa.  
  
 Per utilizzare un oggetto `CPageSetupDialog`, creare innanzitutto l'oggetto utilizzando il costruttore `CPageSetupDialog`.  Una volta che la finestra di dialogo è stata creata, è possibile impostare o modificare i valori nel membro dati `m_psd` per inizializzare i valori dei controlli della finestra di dialogo.  La struttura [m\_psd](../Topic/CPageSetupDialog::m_psd.md) è di tipo **PAGESETUPDLG**.  
  
 Dopo aver inizializzato i controlli finestra di dialogo, chiamare la funzione membro `DoModal` per visualizzare la finestra di dialogo e per consentire di selezionare le opzioni di stampa.  `DoModal` restituisce se l'utente ha scelto del pulsante OK \(**IDOK**\) o annulla \(**IDCANCEL**\).  
  
 Se `DoModal` restituisce **IDOK**, è possibile utilizzare molte delle funzioni membro di `CPageSetupDialog`, o accedere al membro dati `m_psd`, per recuperare l'input di informazioni dall'utente.  
  
> [!NOTE]
>  Dopo la finestra di dialogo pagina comune OLE viene chiusa, le modifiche apportate dall'utente non verranno salvate dal framework.  Spetta all'applicazione stessa salvare tutti i valori di questa finestra di dialogo in una posizione permanente, come membro di documento o della classe dell'applicazione.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CPageSetupDialog`  
  
## Requisiti  
 **Header:** afxdlgs.h  
  
## Vedere anche  
 [Esempio WORDPAD MFC](../../top/visual-cpp-samples.md)   
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)