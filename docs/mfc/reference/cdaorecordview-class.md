---
title: "CDaoRecordView Class | Microsoft Docs"
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
  - "CDaoRecordView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate applicazione [C++], creating record views"
  - "controlli con associazione [C++], displaying database data"
  - "CDaoRecordView (classe)"
  - "controlli [MFC], associazione dati"
  - "associazione dati [C++], DAO views"
  - "controlli con associazione a dati [C++], DAO (controlli)"
ms.assetid: 5aa7d0e2-bd05-413e-b216-80c404ce18ac
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDaoRecordView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una visualizzazione che visualizza i record di database nei controlli.  
  
## Sintassi  
  
```  
  
class AFX_NOVTABLE CDaoRecordView : public CFormView  
  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoRecordView::CDaoRecordView](../Topic/CDaoRecordView::CDaoRecordView.md)|Costruisce un oggetto `CDaoRecordView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoRecordView::IsOnFirstRecord](../Topic/CDaoRecordView::IsOnFirstRecord.md)|Restituisce diverso da zero se il record corrente è il primo record del recordset collegato.|  
|[CDaoRecordView::IsOnLastRecord](../Topic/CDaoRecordView::IsOnLastRecord.md)|Restituisce diverso da zero se il record corrente è l'ultimo record del recordset collegato.|  
|[CDaoRecordView::OnGetRecordset](../Topic/CDaoRecordView::OnGetRecordset.md)|Restituisce un puntatore a un oggetto di una classe derivata da `CDaoRecordset`.  ClassWizard esegue l'override della funzione per l'utente e crea il recordset se necessario.|  
|[CDaoRecordView::OnMove](../Topic/CDaoRecordView::OnMove.md)|Se il record corrente viene modificata, lo aggiornaorigine dati, quindi passa al record specificato \(successivamente, precedente, primo o l'ultimo\).|  
  
## Note  
 La visualizzazione è una visualizzazione form connessa direttamente a un oggetto `CDaoRecordset`.  La visualizzazione viene creata da una risorsa modello di finestra di dialogo che mostra i campi dell'oggetto `CDaoRecordset` nei controlli del modello di finestra di dialogo.  L'oggetto `CDaoRecordView` utilizza lo scambio di dati della finestra di dialogo \(DDX\) e il trasferimento di campi di record DAO \(DFX\) per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del recordset.  `CDaoRecordView` fornisce inoltre un'implementazione predefinita per lo spostamento al primo, record successivo, precedente, oppure ultimo e un'interfaccia per aggiornare il record corrente nella visualizzazione.  
  
> [!NOTE]
>  Le classi di database DAO sono differenziate dalle classi di database MFC basate su ODBC.  Tutti i nomi delle classi di database DAO dispongono del prefisso "di CDao".  È ancora possibile accedere alle origini dati ODBC con le classi DAO, le classi DAO presentano in genere le funzionalità principali in quanto utilizzano il modulo di gestione di database Microsoft Jet.  
  
 La modalità più comune per creare una visualizzazione di record è con la creazione guidata applicazione.  La procedura guidata crea sia la classe per la visualizzazione di record che la classe collegata di recordset come parte dell'applicazione di base iniziali.  
  
 Se si desidera semplicemente di un singolo form, l'approccio della procedura guidata è più semplice.  ClassWizard consente di decidere di utilizzare successivamente una visualizzazione di record nel processo di sviluppo.  Se non si crea una classe per la visualizzazione di record mediante la creazione guidata applicazione, è possibile crearlo tardi ClassWizard.  Utilizzo di ClassWizard separatamente creare una visualizzazione di record e un recordset e quindi connetterli è l'approccio più elastico poiché offre maggiore controllo nel nome della classe recordset e proprio. file di H\/.CPP.  Questo approccio consente di disporre visualizzazioni di record nella stessa classe del recordset.  
  
 Per semplificare l'individuazione degli utenti finali viene spostato da un record a un altro nella visualizzazione di record, la procedura guidata crea le risorse barra degli strumenti e facoltativamente di \(menu\) per il record spostamento al primo, quindi, precedente, o l'ultimo.  Se si crea una classe per la visualizzazione di record ClassWizard, è necessario creare queste risorse manualmente dal menu e editor di immagini bitmap.  
  
 Per informazioni sull'implementazione predefinita per lo spostamento da un record a, vedere `IsOnFirstRecord` e `IsOnLastRecord` e l'articolo [Utilizzo di una visualizzazione di record](../../data/using-a-record-view-mfc-data-access.md), che si applica sia a `CRecordView` che a `CDaoRecordView`.  
  
 `CDaoRecordView` tiene traccia del percorso dell'utente nel recordset in modo da poter aggiornare la visualizzazione di record l'interfaccia utente.  Quando l'utente passa alla fine del recordset, la visualizzazione di record disabilita gli oggetti dell'interfaccia utente quali le voci di menu e pulsanti della barra degli strumenti — per lo spostamento ulteriormente nella stessa direzione.  
  
 Per ulteriori informazioni sulla dichiarazione e l'utilizzo delle classi recordset e visualizzazioni di record, vedere "progettare e creare una visualizzazione di record" nell'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).  Per ulteriori informazioni sul funzionamento delle visualizzazioni di record e su come utilizzarle, vedere l'articolo [Utilizzo di una visualizzazione di record](../../data/using-a-record-view-mfc-data-access.md).  Tutti gli elementi menzionati sopra si applicano sia a `CRecordView` che a `CDaoRecordView`.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 `CDaoRecordView`  
  
## Requisiti  
 **Header:** afxdao.h  
  
## Vedere anche  
 [CFormView Class](../../mfc/reference/cformview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)   
 [CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)   
 [CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)   
 [CFormView Class](../../mfc/reference/cformview-class.md)