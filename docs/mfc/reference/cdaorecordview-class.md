---
title: CDaoRecordView (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- CDaoRecordView class
- data-bound controls [C++], DAO controls
- data binding [C++], DAO views
- bound controls [C++], displaying database data
- application wizards [C++], creating record views
- controls [MFC], data binding
ms.assetid: 5aa7d0e2-bd05-413e-b216-80c404ce18ac
caps.latest.revision: 23
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
ms.openlocfilehash: 11aa318e84e89835ceb710725590f3c3e6387fcd
ms.lasthandoff: 02/24/2017

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
|[CDaoRecordView::IsOnFirstRecord](#isonfirstrecord)|Restituisce zero se il record corrente è il primo record del recordset associato.|  
|[CDaoRecordView::IsOnLastRecord](#isonlastrecord)|Restituisce zero se il record corrente è l'ultimo record del recordset associato.|  
|[CDaoRecordView::OnGetRecordset](#ongetrecordset)|Restituisce un puntatore a un oggetto di una classe derivata da `CDaoRecordset`. ClassWizard esegue l'override di questa funzione per l'utente e crea il recordset, se necessario.|  
|[CDaoRecordView::OnMove](#onmove)|Se il record corrente è stato modificato, viene aggiornato nell'origine dati, quindi passa al record specificato (successivo, precedente, primo o ultimo).|  
  
## <a name="remarks"></a>Note  
 La visualizzazione è una visualizzazione form connessa direttamente a un `CDaoRecordset` oggetto. La vista viene creata da una risorsa modello di finestra di dialogo e visualizza i campi di `CDaoRecordset` oggetto nei controlli del modello di finestra di dialogo. Il `CDaoRecordView` oggetto utilizza dialog data exchange (DDX) e campi di record DAO (DFX) per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del recordset. `CDaoRecordView`fornisce inoltre un'implementazione predefinita per lo spostamento al primo, successivo, precedente o l'ultimo record e un'interfaccia per aggiornare il record attualmente nella visualizzazione.  
  
> [!NOTE]
>  Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO; le classi DAO offrono in genere funzionalità superiori in quanto utilizzano il motore di database Microsoft Jet.  
  
 Il modo più comune per creare una visualizzazione di record è con la creazione guidata applicazione. La creazione guidata applicazione crea la classe di visualizzazione di record e la classe del recordset associato come parte dell'applicazione starter scheletro.  
  
 Se è sufficiente un solo form, l'approccio di creazione guidata applicazione è più semplice. ClassWizard consente di decidere di utilizzare una visualizzazione di record in un secondo momento nel processo di sviluppo. Se non si crea la classe di visualizzazione di record con la creazione guidata applicazione, è possibile crearlo in un secondo momento con ClassWizard. Utilizzando la creazione guidata classe per creare una visualizzazione di record e un oggetto recordset separatamente e quindi collegarli è l'approccio più flessibile perché consente di configurare la denominazione della classe recordset maggiore controllo e il relativo. H /. File CPP. Questo approccio consente inoltre di disporre di più visualizzazioni di record nella stessa classe recordset.  
  
 Per rendere più semplice per gli utenti finali per spostarsi da un record a altro nella visualizzazione dei record, la creazione guidata applicazione crea menu (e, facoltativamente, sulla barra degli strumenti) per lo spostamento di risorse per la prima, successivo, precedente o l'ultimo record. Se si crea una classe di visualizzazione di record con ClassWizard, è necessario creare queste risorse familiarità con i menu e bitmap editor.  
  
 Per informazioni sull'implementazione predefinita per lo spostamento da un record a altro, vedere `IsOnFirstRecord` e `IsOnLastRecord` e l'articolo [utilizzando una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md), che si applica a entrambi `CRecordView` e `CDaoRecordView`.  
  
 `CDaoRecordView`tiene traccia della posizione dell'utente nell'oggetto recordset in modo che la visualizzazione di record può aggiornare l'interfaccia utente. Quando l'utente passa a un'estremità del recordset, la visualizzazione di record Disabilita oggetti dell'interfaccia utente, ad esempio voci di menu o i pulsanti della barra degli strumenti, per lo spostamento nella stessa direzione.  
  
 Per ulteriori informazioni sulla dichiarazione e utilizzo di visualizzazione di record e le classi del recordset, vedere "Progettazione e creazione di una visualizzazione di Record" nell'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md). Per ulteriori informazioni su come record Visualizza lavoro e sul loro utilizzo, vedere l'articolo [utilizzando una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md). Tutti gli articoli indicati in precedenza si applicano a entrambi `CRecordView` e `CDaoRecordView`.  
  
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
  
##  <a name="cdaorecordview"></a>CDaoRecordView::CDaoRecordView  
 Quando si crea un oggetto di un tipo derivato da `CDaoRecordView`, chiamare il costruttore per inizializzare l'oggetto visualizzazione e identificare la risorsa finestra di dialogo in cui si basa la visualizzazione form.  
  
```  
explicit CDaoRecordView(LPCTSTR lpszTemplateName);  
explicit CDaoRecordView(UINT nIDTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTemplateName`  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 `nIDTemplate`  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 È possibile identificare la risorsa sia dal nome (passare una stringa come argomento al costruttore) o dal relativo ID (passare un intero senza segno come argomento). ID è consigliabile utilizzare una risorsa.  
  
> [!NOTE]
>  La classe derivata deve fornire il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CDaoRecordView::CDaoRecordView` con il nome della risorsa o l'ID come argomento.  
  
 **CDaoRecordView::OnInitialUpdate** chiamate `CWnd::UpdateData`, che chiama `CWnd::DoDataExchange`. Questa chiamata iniziale a `DoDataExchange` connette `CDaoRecordView` controlla (indirettamente) a `CDaoRecordset` campo ai membri di dati creati da ClassWizard. Questi membri dati non può essere utilizzati prima che si chiama la classe di base **CFormView::OnInitialUpdate** funzione membro.  
  
> [!NOTE]
>  Se si utilizza la creazione guidata classe, la procedura guidata definisce un `enum` valore `CDaoRecordView::IDD` nella dichiarazione di classe e che l'inizializzazione membro elenco viene utilizzato per il costruttore.  
  
 [!code-cpp[NVC_MFCDatabase&#35;](../../mfc/codesnippet/cpp/cdaorecordview-class_1.cpp)]  
  
##  <a name="isonfirstrecord"></a>CDaoRecordView::IsOnFirstRecord  
 Chiamare questa funzione membro per determinare se il record corrente è il primo record nell'oggetto recordset associato alla visualizzazione di record.  
  
```  
BOOL IsOnFirstRecord();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il record corrente è il primo record del recordset. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per la scrittura di gestori aggiornamento comandi scritti da ClassWizard implementazioni personalizzate del valore predefinito.  
  
 Se l'utente passa al primo record, disabilita il framework oggetti l'interfaccia utente (ad esempio, le voci di menu o i pulsanti della barra degli strumenti) è necessario per lo spostamento al primo o del record precedente.  
  
##  <a name="isonlastrecord"></a>CDaoRecordView::IsOnLastRecord  
 Chiamare questa funzione membro per determinare se il record corrente è l'ultimo record nell'oggetto recordset associato alla visualizzazione di record.  
  
```  
BOOL IsOnLastRecord();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il record corrente è l'ultimo record del recordset. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per la scrittura di gestori aggiornamento comandi che ClassWizard scrive per supportano un'interfaccia utente per lo spostamento tra record implementazioni personalizzate del valore predefinito.  
  
> [!CAUTION]
>  Il risultato di questa funzione è affidabile, ad eccezione del fatto che la visualizzazione potrebbe non essere in grado di rilevare la fine del recordset fino a quando l'utente ha spostato passa oltre. L'utente potrebbe essere necessario andare oltre l'ultimo record prima di visualizzazione di record può indicare che è necessario disabilitare qualsiasi oggetto di interfaccia utente per lo spostamento al record successivo o ultimo. Se l'utente si sposta dopo l'ultimo record e quindi passa nuovamente all'ultimo record, o prima, la visualizzazione di record può tenere traccia della posizione dell'utente nell'oggetto recordset e disattivare correttamente gli oggetti dell'interfaccia utente.  
  
##  <a name="ongetrecordset"></a>CDaoRecordView::OnGetRecordset  
 Restituisce un puntatore per il `CDaoRecordset`-oggetto associato alla visualizzazione di record derivato.  
  
```  
virtual CDaoRecordset* OnGetRecordset() = 0;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CDaoRecordset`-se l'oggetto è stato creato correttamente; in caso contrario l'oggetto derivato un **NULL** puntatore.  
  
### <a name="remarks"></a>Note  
 È necessario eseguire l'override di questa funzione membro per creare o ottenere un oggetto recordset e restituire un puntatore ad esso. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive un override del valore predefinito per l'utente. Implementazione predefinita di ClassWizard restituisce il puntatore di recordset archiviato nella visualizzazione dei record, se presente. Se non, costruisce un oggetto recordset del tipo specificato con la creazione guidata classe e viene chiamato il relativo **aprire** membro funzione per aprire la tabella o eseguire la query e quindi restituisce un puntatore all'oggetto.  
  
 Per ulteriori informazioni ed esempi, vedere l'articolo [visualizzazioni di Record: utilizzo di una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md).  
  
##  <a name="onmove"></a>CDaoRecordView::OnMove  
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
 L'implementazione predefinita chiama la funzione membro Move appropriata di `CDaoRecordset` oggetto associato alla visualizzazione di record.  
  
 Per impostazione predefinita, `OnMove` consente di aggiornare il record corrente nell'origine dati se l'utente ha modificato nella visualizzazione dei record.  
  
 La creazione guidata applicazione crea una risorsa di menu con voci di menu di primo Record, ultimo Record, Record successivo e Record precedente. Se si seleziona l'opzione iniziale sulla barra degli strumenti, la creazione guidata applicazione crea inoltre una barra degli strumenti con pulsanti che corrispondono a questi comandi.  
  
 Se si sposta dopo l'ultimo record del recordset, la visualizzazione di record continua a visualizzare l'ultimo record. Se si sposta all'indietro oltre il primo record, la visualizzazione di record continua a visualizzare il primo record.  
  
> [!CAUTION]
>  La chiamata `OnMove` genera un'eccezione se il recordset non contiene record. Chiamare la funzione di gestore aggiornamento dell'interfaccia utente appropriato, ovvero **OnUpdateRecordFirst**, **OnUpdateRecordLast**, **OnUpdateRecordNext**, o **OnUpdateRecordPrev** , prima della corrispondente operazione per determinare se il recordset contiene tutti i record di spostamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CFormView](../../mfc/reference/cformview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)   
 [Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoQueryDef (classe)](../../mfc/reference/cdaoquerydef-class.md)   
 [CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoWorkspace (classe)](../../mfc/reference/cdaoworkspace-class.md)   
 [Classe CFormView](../../mfc/reference/cformview-class.md)

