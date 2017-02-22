---
title: "CPropertySheet Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPropertySheet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPropertySheet class"
  - "finestre di dialogo, schede"
  - "finestre delle proprietà, CPropertySheet class"
  - "finestre di dialogo a schede"
ms.assetid: 8461ccff-d14f-46e0-a746-42ad642ef94e
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CPropertySheet Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta le finestre delle proprietà, note anche come le finestre di dialogo della scheda.  
  
## Sintassi  
  
```  
class CPropertySheet : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropertySheet::CPropertySheet](../Topic/CPropertySheet::CPropertySheet.md)|Costruisce un oggetto `CPropertySheet`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropertySheet::AddPage](../Topic/CPropertySheet::AddPage.md)|Aggiunge una pagina nella finestra delle proprietà.|  
|[CPropertySheet::Construct](../Topic/CPropertySheet::Construct.md)|Costruisce un oggetto `CPropertySheet`.|  
|[CPropertySheet::Create](../Topic/CPropertySheet::Create.md)|Visualizza una finestra delle proprietà non modale.|  
|[CPropertySheet::DoModal](../Topic/CPropertySheet::DoModal.md)|Visualizza una finestra delle proprietà modale.|  
|[CPropertySheet::EnableStackedTabs](../Topic/CPropertySheet::EnableStackedTabs.md)|Indica se utilizza la finestra delle proprietà in o tabulazioni di scorrimento.|  
|[CPropertySheet::EndDialog](../Topic/CPropertySheet::EndDialog.md)|Termina la finestra delle proprietà.|  
|[CPropertySheet::GetActiveIndex](../Topic/CPropertySheet::GetActiveIndex.md)|Recupera l'indice della pagina attiva la finestra proprietà.|  
|[CPropertySheet::GetActivePage](../Topic/CPropertySheet::GetActivePage.md)|Restituisce l'oggetto della pagina attiva.|  
|[CPropertySheet::GetPage](../Topic/CPropertySheet::GetPage.md)|Recupera un puntatore alla pagina specificata.|  
|[CPropertySheet::GetPageCount](../Topic/CPropertySheet::GetPageCount.md)|Recupera il numero di pagine nella finestra delle proprietà.|  
|[CPropertySheet::GetPageIndex](../Topic/CPropertySheet::GetPageIndex.md)|Recupera l'indice della pagina specificata la finestra proprietà.|  
|[CPropertySheet::GetTabControl](../Topic/CPropertySheet::GetTabControl.md)|Recupera un puntatore a un controllo tab.|  
|[CPropertySheet::MapDialogRect](../Topic/CPropertySheet::MapDialogRect.md)|Converte le unità della finestra di dialogo del rettangolo in schermare unità.|  
|[CPropertySheet::OnInitDialog](../Topic/CPropertySheet::OnInitDialog.md)|Override per aumentare inizializzazione della finestra delle proprietà.|  
|[CPropertySheet::PressButton](../Topic/CPropertySheet::PressButton.md)|Simula la scelta del pulsante specificato in una finestra delle proprietà.|  
|[CPropertySheet::RemovePage](../Topic/CPropertySheet::RemovePage.md)|Rimuove una pagina della finestra delle proprietà.|  
|[CPropertySheet::SetActivePage](../Topic/CPropertySheet::SetActivePage.md)|Imposta a livello di codice l'oggetto della pagina attiva.|  
|[CPropertySheet::SetFinishText](../Topic/CPropertySheet::SetFinishText.md)|Imposta il testo del pulsante fine.|  
|[CPropertySheet::SetTitle](../Topic/CPropertySheet::SetTitle.md)|Imposta la barra del titolo della finestra delle proprietà.|  
|[CPropertySheet::SetWizardButtons](../Topic/CPropertySheet::SetWizardButtons.md)|Abilita i pulsanti della procedura guidata.|  
|[CPropertySheet::SetWizardMode](../Topic/CPropertySheet::SetWizardMode.md)|Attiva la modalità guidata.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropertySheet::m\_psh](../Topic/CPropertySheet::m_psh.md)|La struttura di Windows [PROPSHEETHEADER](http://msdn.microsoft.com/library/windows/desktop/bb774546).  Fornisce l'accesso ai parametri di base della finestra delle proprietà.|  
  
## Note  
 Una finestra delle proprietà è costituito da un oggetto `CPropertySheet` e uno o più oggetti [CPropertyPage](../../mfc/reference/cpropertypage-class.md).  Il framework viene visualizzata una finestra delle proprietà come finestra con un set di indici della scheda e di area contenente la pagina selezionata.  L'utente passa a una pagina specifica utilizzando la scheda appropriata.  
  
 `CPropertySheet` fornisce il supporto per la struttura espansa [PROPSHEETHEADER](http://msdn.microsoft.com/library/windows/desktop/bb774546) introdotta in [!INCLUDE[Win98](../../mfc/reference/includes/win98_md.md)] e Windows NT 2000.  La struttura contiene i flag aggiuntivi e i membri che supportano l'utilizzo di una bitmap di sfondo di "filigrana".  
  
 Per visualizzare queste nuove immagini automaticamente nell'oggetto finestra delle proprietà, passare i valori validi per le immagini della tavolozza e della bitmap nella chiamata a [CPropertySheet::Construct](../Topic/CPropertySheet::Construct.md) o a [CPropertySheet::CPropertySheet](../Topic/CPropertySheet::CPropertySheet.md).  
  
 Anche se `CPropertySheet` non deriva da [CDialog](../../mfc/reference/cdialog-class.md), gestire un oggetto `CPropertySheet` viene illustrato come gestire un oggetto `CDialog`.  Ad esempio, la creazione di una finestra delle proprietà richiede la costruzione in due parti: chiamare il costruttore e quindi chiamare [DoModal](../Topic/CPropertySheet::DoModal.md) per una finestra delle proprietà modale o [Crea](../Topic/CPropertySheet::Create.md) per una finestra delle proprietà non modale.  `CPropertySheet` ha due tipi di costruttori: [CPropertySheet::Construct](../Topic/CPropertySheet::Construct.md) e [CPropertySheet::CPropertySheet](../Topic/CPropertySheet::CPropertySheet.md).  
  
 Quando si costruisce un oggetto `CPropertySheet`, il [Stili finestra](../../mfc/reference/window-styles.md) può causare un'eccezione first\-chance di verificare.  Ciò deriva dal sistema che tenta di modificare lo stile della finestra delle proprietà prima che il foglio venga creato.  Per evitare questa eccezione, assicurarsi di impostare gli stili quando si crea il `CPropertySheet`:  
  
-   DS\_3DLOOK  
  
-   DS\_CONTROL  
  
-   WS\_CHILD  
  
-   WS\_TABSTOP  
  
 Gli stili sono facoltativi e non comporta il eccezioni first\-chance:  
  
-   DS\_SHELLFONT  
  
-   DS\_LOCALEDIT  
  
-   WS\_CLIPCHILDREN  
  
 Qualsiasi altro `Window Styles` è vietato e non è necessario attivarlo.  
  
 I scambiano dati tra un oggetto `CPropertySheet` e un oggetto esterno sono simili per scambiare dati a un oggetto `CDialog`.  La differenza importante è che le impostazioni di una finestra delle proprietà sono in genere variabili membro degli oggetti `CPropertyPage` anziché dell'oggetto `CPropertySheet`.  
  
 È possibile creare un tipo di finestra di dialogo della scheda chiamato una procedura guidata, costituito da una finestra delle proprietà a una sequenza di pagine delle proprietà che guidano l'utente nei passaggi di un'operazione, come l'impostazione del dispositivo o creare un informazioni.  In una finestra di dialogo della scheda della procedura guidata\- tipo, pagine delle proprietà non sono schede e una sola pagina delle proprietà è visibile per volta.  Inoltre, anziché essere **OK** e pulsanti **Applica ora**, una finestra di dialogo della scheda della procedura guidata\- tipo dispone di un pulsante **Indietro**, un pulsante **Fine** o **Avanti**, un pulsante **Annulla** e un pulsante **Guida**.  
  
 Per creare una finestra di dialogo procedura guidata\- tipo, seguire la stessa procedura utilizzata a per creare una finestra delle proprietà standard, ma la chiamata [SetWizardMode](../Topic/CPropertySheet::SetWizardMode.md) prima di chiamare [DoModal](../Topic/CPropertySheet::DoModal.md).  Per abilitare i pulsanti della procedura guidata, chiamare [SetWizardButtons](../Topic/CPropertySheet::SetWizardButtons.md), utilizzando i flag per personalizzare la funzione e l'aspetto.  Per attivare il pulsante **Fine**, chiamata [SetFinishText](../Topic/CPropertySheet::SetFinishText.md) dopo che l'utente ha intrapreso un'azione in relazione all'ultima pagina della procedura guidata.  
  
 Per ulteriori informazioni su come utilizzare gli oggetti `CPropertySheet`, vedere l'articolo [Finestre e le pagine delle proprietà](../../mfc/property-sheets-and-property-pages-in-mfc.md).  Inoltre, vedere l'articolo della Knowledge Base Q146916: HOWTO: Creare un CPropertySheet non modale con pulsanti e l'articolo standard Q300606: HOWTO: Progetti una finestra delle proprietà ridimensionabile MFC.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CPropertySheet`  
  
## Requisiti  
 **intestazione:** afxdlgs.h  
  
## Vedere anche  
 [MFC campione CMNCTRL1](../../top/visual-cpp-samples.md)   
 [Esempio CMNCTRL2 MFC](../../top/visual-cpp-samples.md)   
 [Esempio PROPDLG MFC](../../top/visual-cpp-samples.md)   
 [Esempio SNAPVW MFC](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)