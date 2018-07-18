---
title: Classe CDaoRecordView | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoRecordView
- AFXDAO/CDaoRecordView
- AFXDAO/CDaoRecordView::CDaoRecordView
- AFXDAO/CDaoRecordView::IsOnFirstRecord
- AFXDAO/CDaoRecordView::IsOnLastRecord
- AFXDAO/CDaoRecordView::OnGetRecordset
- AFXDAO/CDaoRecordView::OnMove
dev_langs:
- C++
helpviewer_keywords:
- CDaoRecordView [MFC], CDaoRecordView
- CDaoRecordView [MFC], IsOnFirstRecord
- CDaoRecordView [MFC], IsOnLastRecord
- CDaoRecordView [MFC], OnGetRecordset
- CDaoRecordView [MFC], OnMove
ms.assetid: 5aa7d0e2-bd05-413e-b216-80c404ce18ac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dff05ca5ca07a5a41aa0ceaacf4161d09ab032f1
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37336702"
---
# <a name="cdaorecordview-class"></a>CDaoRecordView (classe)
Visualizzazione che mostra i record del database nei controlli.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class AFX_NOVTABLE CDaoRecordView : public CFormView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoRecordView::CDaoRecordView](#cdaorecordview)|Costruisce un oggetto `CDaoRecordView`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoRecordView::IsOnFirstRecord](#isonfirstrecord)|Restituisce diversi da zero se il record corrente è il primo record del recordset associato.|  
|[CDaoRecordView::IsOnLastRecord](#isonlastrecord)|Restituisce diversi da zero se il record corrente è l'ultimo record del recordset associato.|  
|[CDaoRecordView::OnGetRecordset](#ongetrecordset)|Restituisce un puntatore a un oggetto di una classe derivata da `CDaoRecordset`. ClassWizard eseguirà l'override di questa funzione per l'utente e, se necessario, crea il recordset.|  
|[CDaoRecordView::OnMove](#onmove)|Se il record corrente è stato modificato, lo aggiorna nell'origine dati, quindi passa al record specificato (next, previous first o last).|  
  
## <a name="remarks"></a>Note  
 La vista è una visualizzazione di form direttamente connessa a un `CDaoRecordset` oggetto. La vista viene creata da una risorsa modello di finestra di dialogo e visualizza i campi del `CDaoRecordset` oggetto nei controlli del modello di finestra di dialogo. Il `CDaoRecordView` oggetto utilizza (DDX) dialog data exchange ed exchange di campi di record DAO (DFX) per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del set di record. `CDaoRecordView` fornisce anche un'implementazione predefinita per lo spostamento al primo, successivo, precedente o gli ultimi record e un'interfaccia per l'aggiornamento del record attualmente nella visualizzazione.  
  
> [!NOTE]
>  Le classi database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO; le classi DAO offrono in genere funzionalità di livello superiore perché usano il motore di database Microsoft Jet.  
  
 Il modo più comune per creare la visualizzazione di record è con la creazione guidata applicazione. La creazione guidata applicazione crea la classe di visualizzazione di record e la classe del recordset associato come parte dell'applicazione starter scheletro.  
  
 Se è necessario semplicemente un modulo singolo, è più semplice l'approccio di creazione guidata applicazione. ClassWizard consente di decidere di usare una visualizzazione di record in un secondo momento nel processo di sviluppo. Se non si crea la classe di visualizzazione di record con la creazione guidata applicazione, è possibile creare, in un secondo momento con la creazione guidata classe. L'utilizzo di ClassWizard per creare una visualizzazione di record e un set di record separatamente e quindi connettersi a essi è l'approccio più flessibile perché offre maggior controllo nella classe recordset di denominazione e la relativa. H /. File CPP. Questo approccio consente inoltre di disporre di più visualizzazioni di record nella stessa classe recordset.  
  
 Per facilitare agli utenti finali di un record nella visualizzazione dei record, la creazione guidata applicazione crea menu (e, facoltativamente, sulla barra degli strumenti) delle risorse per lo spostamento al primo, successivo, precedente o l'ultimo record. Se si crea una classe di visualizzazione di record con ClassWizard, è necessario creare queste risorse familiarità con il menu di scelta e bitmap editor.  
  
 Per informazioni sull'implementazione predefinita per lo spostamento da un record a altro, vedere `IsOnFirstRecord` e `IsOnLastRecord` e l'articolo [usando una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md), che si applica a entrambi `CRecordView` e `CDaoRecordView`.  
  
 `CDaoRecordView` tiene traccia della posizione dell'utente nel set di record in modo che la visualizzazione di record può aggiornare l'interfaccia utente. Quando l'utente passa a un'estremità del set di record, la visualizzazione dei record Disabilita oggetti dell'interfaccia utente, ad esempio voci di menu o i pulsanti della barra degli strumenti, ovvero per lo spostamento ulteriormente nella stessa direzione.  
  
 Per altre informazioni sulla dichiarazione e utilizzo di una visualizzazione di record e recordset classi, vedere "Progettazione e creazione di una vista di Record" nell'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md). Per altre informazioni su come record viste lavoro e su come usarli, vedere l'articolo [usando una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md). Tutti gli articoli indicati in precedenza si applicano a entrambe `CRecordView` e `CDaoRecordView`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 `CDaoRecordView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="cdaorecordview"></a>  CDaoRecordView::CDaoRecordView  
 Quando si crea un oggetto di un tipo derivato da `CDaoRecordView`, chiamare qualsiasi forma di costruttore per inizializzare l'oggetto di visualizzazione e identificare la risorsa finestra di dialogo in cui si basa la visualizzazione.  
  
```  
explicit CDaoRecordView(LPCTSTR lpszTemplateName);  
explicit CDaoRecordView(UINT nIDTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszTemplateName*  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 *nIDTemplate*  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 È possibile identificare la risorsa sia in base al nome (passare una stringa come argomento al costruttore) o tramite il relativo ID (per passare un intero senza segno come argomento). ID è consigliabile usare una risorsa.  
  
> [!NOTE]
>  La classe derivata deve fornire il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CDaoRecordView::CDaoRecordView` con il nome della risorsa o l'ID come argomento.  
  
 `CDaoRecordView::OnInitialUpdate` le chiamate `CWnd::UpdateData`, che chiama `CWnd::DoDataExchange`. Questa chiamata iniziale alla `DoDataExchange` si connette `CDaoRecordView` controlla (indirettamente) a `CDaoRecordset` campo ai membri di dati creati da ClassWizard. Questi membri dati non possono essere usati fino a dopo avere chiamato la classe di base `CFormView::OnInitialUpdate` funzione membro.  
  
> [!NOTE]
>  Se si usa la creazione guidata classe, la procedura guidata definisce un **enum** valore `CDaoRecordView::IDD` nella dichiarazione di classe e utilizza elenco, l'inizializzazione membro per il costruttore.  
  
 [!code-cpp[NVC_MFCDatabase#35](../../mfc/codesnippet/cpp/cdaorecordview-class_1.cpp)]  
  
##  <a name="isonfirstrecord"></a>  CDaoRecordView::IsOnFirstRecord  
 Chiamare questa funzione membro per determinare se il record corrente è il primo record nell'oggetto recordset associato a questa visualizzazione di record.  
  
```  
BOOL IsOnFirstRecord();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il record corrente è il primo record del recordset. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per la scrittura di gestori aggiornamento comandi scritti da ClassWizard le implementazioni del valore predefinito.  
  
 Se l'utente passa a primo record, disabilita il framework oggetti alcuna interfaccia utente (ad esempio, le voci di menu o i pulsanti della barra degli strumenti) è necessario per lo spostamento al primo o il record precedente.  
  
##  <a name="isonlastrecord"></a>  CDaoRecordView::IsOnLastRecord  
 Chiamare questa funzione membro per determinare se il record corrente è l'ultimo record nell'oggetto recordset associato a questa visualizzazione di record.  
  
```  
BOOL IsOnLastRecord();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il record corrente è l'ultimo record del recordset. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per la scrittura di gestori aggiornamento comandi che ClassWizard scrive per supportare un'interfaccia utente per lo spostamento tra i vari record le implementazioni del valore predefinito.  
  
> [!CAUTION]
>  Il risultato di questa funzione è affidabile, ma potrebbe non essere in grado di rilevare la fine del set di record fino a quando l'utente è andato oltre, la visualizzazione. L'utente potrebbe essere necessario spostare oltre l'ultimo record prima che la visualizzazione di record può indicare che è necessario disabilitare eventuali oggetti dell'interfaccia utente per lo spostamento al record successivo o ultimo. Se l'utente si sposta oltre l'ultimo record e quindi passa nuovamente all'ultimo record o prima di esso, la visualizzazione di record può tenere traccia della posizione dell'utente nel set di record e disattivare correttamente gli oggetti dell'interfaccia utente.  
  
##  <a name="ongetrecordset"></a>  CDaoRecordView::OnGetRecordset  
 Restituisce un puntatore al `CDaoRecordset`-derivato l'oggetto associato alla visualizzazione di record.  
  
```  
virtual CDaoRecordset* OnGetRecordset() = 0;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CDaoRecordset`-oggetto derivato se l'oggetto è stato creato correttamente; in caso contrario un puntatore NULL.  
  
### <a name="remarks"></a>Note  
 È necessario eseguire l'override di questa funzione membro per creare o ottenere un oggetto recordset e restituire un puntatore a esso. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive una sostituzione predefinita per l'utente. Implementazione predefinita di ClassWizard restituisce il puntatore di recordset archiviato nella vista del record, se presente. Se non, costruisce un oggetto recordset del tipo specificato con la creazione guidata classe e le chiamate relative `Open` membro funzione per aprire la tabella o eseguire la query e quindi restituisce un puntatore all'oggetto.  
  
 Per altre informazioni ed esempi, vedere l'articolo [visualizzazioni di Record: uso di una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md).  
  
##  <a name="onmove"></a>  CDaoRecordView::OnMove  
 Chiamare questa funzione membro per spostare in un altro record del recordset e visualizzare i relativi campi nei controlli di visualizzazione dei record.  
  
```  
virtual BOOL OnMove(UINT nIDMoveCommand);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDMoveCommand*  
 Uno dei valori di ID di comando standard seguenti:  
  
- ID_RECORD_FIRST spostare il primo record del recordset.  
  
- ID_RECORD_LAST spostare all'ultimo record del recordset.  
  
- ID_RECORD_NEXT spostare al record successivo nel set di record.  
  
- ID_RECORD_PREV spostare il record precedente nel recordset.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha avuto esito positivo; lo spostamento in caso contrario, 0 se la richiesta di spostamento è stata negata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama la funzione di membro di spostamento appropriata del `CDaoRecordset` oggetto associato alla visualizzazione di record.  
  
 Per impostazione predefinita, `OnMove` aggiorna il record corrente nell'origine dati se l'utente ha modificato nella visualizzazione dei record.  
  
 La creazione guidata applicazione crea una risorsa di menu con voci di menu di primo Record, ultimo Record, Record successivo e Record precedente. Se si seleziona l'opzione della barra degli strumenti iniziale, la creazione guidata applicazione crea anche una barra degli strumenti con pulsanti che corrispondono a questi comandi.  
  
 Se si sposta oltre l'ultimo record del recordset, la visualizzazione dei record continua a essere visualizzato l'ultimo record. Se si sposta all'indietro oltre il primo record, la visualizzazione dei record continua a visualizzare il primo record.  
  
> [!CAUTION]
>  La chiamata a `OnMove` genera un'eccezione se il recordset non contiene record. Chiamare la funzione di gestore aggiornamento dell'interfaccia utente appropriata, ovvero `OnUpdateRecordFirst`, `OnUpdateRecordLast`, `OnUpdateRecordNext`, o `OnUpdateRecordPrev` , ovvero prima della corrispondente operazione per determinare se il set di record dispone di alcun record di spostamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CFormView](../../mfc/reference/cformview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)   
 [Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)   
 [Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)   
 [CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)   
 [Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)   
 [Classe CFormView](../../mfc/reference/cformview-class.md)
