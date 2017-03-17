---
title: CRecordView (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRecordView
- AFXDB/CRecordView
- AFXDB/CRecordView::CRecordView
- AFXDB/CRecordView::IsOnFirstRecord
- AFXDB/CRecordView::IsOnLastRecord
- AFXDB/CRecordView::OnGetRecordset
- AFXDB/CRecordView::OnMove
- AFXDB/CRecordView::OnMove
dev_langs:
- C++
helpviewer_keywords:
- CRecordView class
- ODBC recordsets, viewing records
- records, viewing ODBC
- views, ODBC
ms.assetid: 9b4b0897-bd50-4d48-a0b4-f3323f5ccc55
caps.latest.revision: 25
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 04ff47900037dcbaa12e2cba2c9a3e84caf54a69
ms.lasthandoff: 02/24/2017

---
# <a name="crecordview-class"></a>CRecordView (classe)
Visualizzazione che mostra i record del database nei controlli.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class AFX_NOVTABLE CRecordView : public CFormView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordView::CRecordView](#crecordview)|Costruisce un oggetto `CRecordView`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordView::IsOnFirstRecord](#isonfirstrecord)|Restituisce zero se il record corrente è il primo record del recordset associato.|  
|[CRecordView::IsOnLastRecord](#isonlastrecord)|Restituisce zero se il record corrente è l'ultimo record del recordset associato.|  
|[CRecordView::OnGetRecordset](#ongetrecordset)|Restituisce un puntatore a un oggetto di una classe derivata da `CRecordset`. ClassWizard esegue l'override di questa funzione per l'utente e crea il recordset, se necessario.|  
|[CRecordView::OnMove](#onmove)||  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordView::OnMove](#onmove)|Se il record corrente è stato modificato, viene aggiornato nell'origine dati, quindi passa al record specificato (successivo, precedente, primo o ultimo).|  
  
## <a name="remarks"></a>Note  
 La visualizzazione è una visualizzazione form connessa direttamente a un `CRecordset` oggetto. La vista viene creata da una risorsa modello di finestra di dialogo e visualizza i campi di `CRecordset` oggetto nei controlli del modello di finestra di dialogo. Il `CRecordView` oggetto utilizza dialog data exchange (DDX) e il trasferimento di campi di record (RFX) per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del recordset. `CRecordView`fornisce inoltre un'implementazione predefinita per lo spostamento al primo, successivo, precedente o l'ultimo record e un'interfaccia per aggiornare il record attualmente sulla vista.  
  
> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access) anziché le classi di Open Database Connectivity (ODBC), utilizzare una classe [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) invece. Per ulteriori informazioni, vedere l'articolo [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
 Il modo più comune per creare una visualizzazione di record è con la creazione guidata applicazione. Creazione guidata applicazione inviterà crea la classe di visualizzazione di record e la classe del recordset associato come parte dell'applicazione starter scheletro. Se non si crea la classe di visualizzazione di record con la creazione guidata applicazione, è possibile crearlo in un secondo momento con ClassWizard. Se è sufficiente un solo form, l'approccio di creazione guidata applicazione è più semplice. ClassWizard consente di decidere di utilizzare una visualizzazione di record in un secondo momento nel processo di sviluppo. Utilizzando la creazione guidata classe per creare una visualizzazione di record e un oggetto recordset separatamente e quindi collegarli è l'approccio più flessibile perché consente di configurare la denominazione della classe recordset maggiore controllo e il relativo. H /. File CPP. Questo approccio consente inoltre di disporre di più visualizzazioni di record nella stessa classe recordset.  
  
 Per rendere più semplice per gli utenti finali per spostarsi da un record a altro nella visualizzazione dei record, la creazione guidata applicazione crea menu (e, facoltativamente, sulla barra degli strumenti) per lo spostamento di risorse per la prima, successivo, precedente o l'ultimo record. Se si crea una classe di visualizzazione di record con ClassWizard, è necessario creare queste risorse familiarità con i menu e bitmap editor.  
  
 Per informazioni sull'implementazione predefinita per lo spostamento da un record a altro, vedere `IsOnFirstRecord` e `IsOnLastRecord` e l'articolo [utilizzando una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md).  
  
 `CRecordView`tiene traccia della posizione dell'utente nell'oggetto recordset in modo che la visualizzazione di record può aggiornare l'interfaccia utente. Quando l'utente passa a un'estremità del recordset, la visualizzazione di record Disabilita oggetti dell'interfaccia utente, ad esempio voci di menu o i pulsanti della barra degli strumenti, per lo spostamento nella stessa direzione.  
  
 Per ulteriori informazioni sulla dichiarazione e utilizzo di visualizzazione di record e le classi del recordset, vedere "Progettazione e creazione di una visualizzazione di Record" nell'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md). Per ulteriori informazioni su come record Visualizza lavoro e sul loro utilizzo, vedere l'articolo [utilizzando una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 `CRecordView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
##  <a name="crecordview"></a>CRecordView::CRecordView  
 Quando si crea un oggetto di un tipo derivato da `CRecordView`, chiamare il costruttore per inizializzare l'oggetto visualizzazione e identificare la risorsa finestra di dialogo in cui si basa la visualizzazione form.  
  
```  
explicit CRecordView(LPCTSTR lpszTemplateName);  
explicit CRecordView(UINT nIDTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTemplateName`  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 `nIDTemplate`  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 È possibile identificare la risorsa sia dal nome (passare una stringa come argomento al costruttore) o dal relativo ID (passare un intero senza segno come argomento). ID è consigliabile utilizzare una risorsa.  
  
> [!NOTE]
>  La classe derivata *deve* fornire il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CRecordView::CRecordView` con il nome della risorsa o l'ID come argomento, come illustrato nell'esempio riportato di seguito.  
  
 **CRecordView::OnInitialUpdate** chiamate `UpdateData`, che chiama `DoDataExchange`. Questa chiamata iniziale a `DoDataExchange` connette `CRecordView` controlla (indirettamente) a `CRecordset` campo ai membri di dati creati da ClassWizard. Questi membri dati non può essere utilizzati prima che si chiama la classe di base **CFormView::OnInitialUpdate** funzione membro.  
  
> [!NOTE]
>  Se si utilizza la creazione guidata classe, la procedura guidata definisce un `enum` valore `CRecordView::IDD`specificato nella dichiarazione di classe e viene utilizzato nell'elenco di inizializzazione dei membri per il costruttore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase n.&32;](../../mfc/codesnippet/cpp/crecordview-class_1.cpp)]  
  
##  <a name="isonfirstrecord"></a>CRecordView::IsOnFirstRecord  
 Chiamare questa funzione membro per determinare se il record corrente è il primo record nell'oggetto recordset associato alla visualizzazione di record.  
  
```  
BOOL IsOnFirstRecord();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il record corrente è il primo record del recordset. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per la scrittura di gestori aggiornamento comandi scritti da ClassWizard implementazioni personalizzate del valore predefinito.  
  
 Se l'utente passa al primo record, il framework Disabilita oggetti dell'interfaccia utente che disponibili per lo spostamento al primo o del record precedente.  
  
##  <a name="isonlastrecord"></a>CRecordView::IsOnLastRecord  
 Chiamare questa funzione membro per determinare se il record corrente è l'ultimo record nell'oggetto recordset associato alla visualizzazione di record.  
  
```  
BOOL IsOnLastRecord();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il record corrente è l'ultimo record del recordset. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per la scrittura di gestori aggiornamento comandi che supportano un'interfaccia utente per lo spostamento tra record scrive ClassWizard implementazioni personalizzate del valore predefinito.  
  
> [!CAUTION]
>  Il risultato di questa funzione è affidabile, ad eccezione del fatto che la vista non è in grado di rilevare la fine del recordset fino a quando l'utente ha spostato passa oltre. L'utente deve spostare oltre l'ultimo record prima di visualizzazione di record può indicare che è necessario disabilitare qualsiasi oggetto di interfaccia utente per lo spostamento al record successivo o ultimo. Se l'utente si sposta dopo l'ultimo record e quindi passa nuovamente all'ultimo record, o prima, la visualizzazione di record può tenere traccia della posizione dell'utente nell'oggetto recordset e disattivare correttamente gli oggetti dell'interfaccia utente. `IsOnLastRecord`è anche affidabile dopo una chiamata alla funzione implementazione **OnRecordLast**, che gestisce il `ID_RECORD_LAST` comando, o `CRecordset::MoveLast`.  
  
##  <a name="ongetrecordset"></a>CRecordView::OnGetRecordset  
 Restituisce un puntatore per il `CRecordset`-oggetto associato alla visualizzazione di record derivato.  
  
```  
virtual CRecordset* OnGetRecordset() = 0;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CRecordset`-se l'oggetto è stato creato correttamente; in caso contrario l'oggetto derivato un **NULL** puntatore.  
  
### <a name="remarks"></a>Note  
 È necessario eseguire l'override di questa funzione membro per creare o ottenere un oggetto recordset e restituire un puntatore ad esso. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive un override del valore predefinito per l'utente. Implementazione predefinita di ClassWizard restituisce il puntatore di recordset archiviato nella visualizzazione dei record, se presente. Se non, costruisce un oggetto recordset del tipo specificato con la creazione guidata classe e viene chiamato il relativo **aprire** membro funzione per aprire la tabella o eseguire la query e quindi restituisce un puntatore all'oggetto.  
  
 Per ulteriori informazioni ed esempi, vedere l'articolo [visualizzazioni di Record: utilizzo di una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md).  
  
##  <a name="onmove"></a>CRecordView::OnMove  
 Chiamare questa funzione membro per spostare in un altro record del recordset e visualizzare i relativi campi nei controlli di visualizzazione dei record.  
  
```  
virtual BOOL OnMove(UINT nIDMoveCommand);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDMoveCommand`  
 Uno dei valori di ID di comando standard seguenti:  
  
- `ID_RECORD_FIRST`Spostare il primo record del recordset.  
  
- `ID_RECORD_LAST`Spostarsi all'ultimo record del recordset.  
  
- `ID_RECORD_NEXT`Passare al record successivo nell'oggetto recordset.  
  
- `ID_RECORD_PREV`Passare al record precedente nell'oggetto recordset.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo spostamento non ha esito positivo. in caso contrario 0 se la richiesta di spostamento è stata negata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama appropriato **spostare** funzione membro di `CRecordset` oggetto associato alla visualizzazione di record.  
  
 Per impostazione predefinita, `OnMove` consente di aggiornare il record corrente nell'origine dati se l'utente ha modificato nella visualizzazione dei record.  
  
 La creazione guidata applicazione crea una risorsa di menu con voci di menu di primo Record, ultimo Record, Record successivo e Record precedente. Se si seleziona l'opzione della barra degli strumenti ancorabile, la creazione guidata applicazione crea inoltre una barra degli strumenti con pulsanti che corrispondono a questi comandi.  
  
 Se si sposta dopo l'ultimo record del recordset, la visualizzazione di record continua a visualizzare l'ultimo record. Se si sposta all'indietro oltre il primo record, la visualizzazione di record continua a visualizzare il primo record.  
  
> [!CAUTION]
>  La chiamata `OnMove` genera un'eccezione se il recordset non contiene record. Chiamare la funzione di gestore aggiornamento dell'interfaccia utente appropriato, ovvero **OnUpdateRecordFirst**, **OnUpdateRecordLast**, **OnUpdateRecordNext**, o **OnUpdateRecordPrev** , prima della corrispondente operazione per determinare se il recordset contiene tutti i record di spostamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CFormView](../../mfc/reference/cformview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)   
 [Classe CFormView](../../mfc/reference/cformview-class.md)

