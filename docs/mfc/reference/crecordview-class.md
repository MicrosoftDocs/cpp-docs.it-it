---
title: "CRecordView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRecordView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRecordView (classe)"
  - "ODBC recordsets, viewing records"
  - "record, viewing ODBC"
  - "visualizzazioni, ODBC"
ms.assetid: 9b4b0897-bd50-4d48-a0b4-f3323f5ccc55
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CRecordView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una visualizzazione che visualizza i record di database nei controlli.  
  
## Sintassi  
  
```  
class AFX_NOVTABLE CRecordView : public CFormView  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordView::CRecordView](../Topic/CRecordView::CRecordView.md)|Costruisce un oggetto `CRecordView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordView::IsOnFirstRecord](../Topic/CRecordView::IsOnFirstRecord.md)|Restituisce diverso da zero se il record corrente è il primo record del recordset collegato.|  
|[CRecordView::IsOnLastRecord](../Topic/CRecordView::IsOnLastRecord.md)|Restituisce diverso da zero se il record corrente è l'ultimo record del recordset collegato.|  
|[CRecordView::OnGetRecordset](../Topic/CRecordView::OnGetRecordset.md)|Restituisce un puntatore a un oggetto di una classe derivata da `CRecordset`.  ClassWizard esegue l'override della funzione per l'utente e crea il recordset se necessario.|  
|[CRecordView::OnMove](../Topic/CRecordView::OnMove.md)||  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordView::OnMove](../Topic/CRecordView::OnMove.md)|Se il record corrente viene modificata, lo aggiornaorigine dati, quindi passa al record specificato \(successivamente, precedente, primo o l'ultimo\).|  
  
## Note  
 La visualizzazione è una visualizzazione form connessa direttamente a un oggetto `CRecordset`.  La visualizzazione viene creata da una risorsa modello di finestra di dialogo che mostra i campi dell'oggetto `CRecordset` nei controlli del modello di finestra di dialogo.  L'oggetto `CRecordView` utilizza lo scambio di dati della finestra di dialogo \(DDX\) e trasferimento di campi di Record per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del recordset.  `CRecordView` fornisce inoltre un'implementazione predefinita per lo spostamento al primo, record successivo, precedente, oppure ultimo e un'interfaccia per aggiornare il record simultaneamente alla visualizzazione.  
  
> [!NOTE]
>  Se si utilizzano gli oggetti di accesso ai dati che \(DAO\) classi anziché le classi ODBC \(open database connectivity\), la classe [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) di utilizzare.  Per ulteriori informazioni, vedere l'articolo [cenni preliminari: La programmazione di database](../../data/data-access-programming-mfc-atl.md).  
  
 La modalità più comune per creare una visualizzazione di record è con la creazione guidata applicazione.  La procedura guidata di Tge crea sia la classe per la visualizzazione di record che la classe collegata di recordset come parte dell'applicazione di base iniziali.  Se non si crea una classe per la visualizzazione di record mediante la creazione guidata applicazione, è possibile crearlo tardi ClassWizard.  Se si desidera semplicemente di un singolo form, l'approccio della procedura guidata è più semplice.  ClassWizard consente di decidere di utilizzare successivamente una visualizzazione di record nel processo di sviluppo.  Utilizzo di ClassWizard separatamente creare una visualizzazione di record e un recordset e quindi connetterli è l'approccio più elastico poiché offre maggiore controllo nel nome della classe recordset e proprio. file di H\/.CPP.  Questo approccio consente di disporre visualizzazioni di record nella stessa classe del recordset.  
  
 Per semplificare l'individuazione degli utenti finali viene spostato da un record a un altro nella visualizzazione di record, la procedura guidata crea le risorse barra degli strumenti e facoltativamente di \(menu\) per il record spostamento al primo, quindi, precedente, o l'ultimo.  Se si crea una classe per la visualizzazione di record ClassWizard, è necessario creare queste risorse manualmente dal menu e editor di immagini bitmap.  
  
 Per informazioni sull'implementazione predefinita per lo spostamento da un record a, vedere `IsOnFirstRecord` e `IsOnLastRecord` e l'articolo [Utilizzo di una visualizzazione di record](../../data/using-a-record-view-mfc-data-access.md).  
  
 `CRecordView` tiene traccia del percorso dell'utente nel recordset in modo da poter aggiornare la visualizzazione di record l'interfaccia utente.  Quando l'utente passa alla fine del recordset, la visualizzazione di record disabilita gli oggetti dell'interfaccia utente quali le voci di menu e pulsanti della barra degli strumenti — per lo spostamento ulteriormente nella stessa direzione.  
  
 Per ulteriori informazioni sulla dichiarazione e l'utilizzo delle classi recordset e visualizzazioni di record, vedere "progettare e creare una visualizzazione di record" nell'articolo [visualizzazioni di record](../../data/record-views-mfc-data-access.md).  Per ulteriori informazioni sul funzionamento delle visualizzazioni di record e su come utilizzarle, vedere l'articolo [Utilizzo di una visualizzazione di record](../../data/using-a-record-view-mfc-data-access.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 `CRecordView`  
  
## Requisiti  
 **Header:** afxdb.h  
  
## Vedere anche  
 [CFormView Class](../../mfc/reference/cformview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)   
 [CFormView Class](../../mfc/reference/cformview-class.md)