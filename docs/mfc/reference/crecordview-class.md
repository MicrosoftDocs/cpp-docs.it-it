---
title: CRecordView (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
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
dev_langs: C++
helpviewer_keywords:
- CRecordView [MFC], CRecordView
- CRecordView [MFC], IsOnFirstRecord
- CRecordView [MFC], IsOnLastRecord
- CRecordView [MFC], OnGetRecordset
- CRecordView [MFC], OnMove
- CRecordView [MFC], OnMove
ms.assetid: 9b4b0897-bd50-4d48-a0b4-f3323f5ccc55
caps.latest.revision: "25"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b84680bd6a480cd7c87ced98831d97e09f4ea9c3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|[CRecordView::IsOnFirstRecord](#isonfirstrecord)|Restituisce un diverso da zero se il record corrente è il primo record del recordset associato.|  
|[CRecordView::IsOnLastRecord](#isonlastrecord)|Restituisce un diverso da zero se il record corrente è l'ultimo record del recordset associato.|  
|[CRecordView::OnGetRecordset](#ongetrecordset)|Restituisce un puntatore a un oggetto di una classe derivata da `CRecordset`. ClassWizard esegue l'override di questa funzione per l'utente e crea il recordset, se necessario.|  
|[CRecordView::OnMove](#onmove)||  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecordView::OnMove](#onmove)|Se il record corrente è stata modificata, viene aggiornato nell'origine dati, quindi passa al record specificato (successivo, precedente, primo o ultimo).|  
  
## <a name="remarks"></a>Note  
 La vista è un modulo connessi direttamente a un `CRecordset` oggetto. La vista viene creata da una risorsa modello di finestra di dialogo e visualizza i campi del `CRecordset` oggetto nei controlli del modello di finestra di dialogo. Il `CRecordView` oggetto utilizza dialog data exchange (DDX) e il trasferimento di campi di record (RFX) per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del recordset. `CRecordView`inoltre fornisce un'implementazione predefinita per lo spostamento al primo, ultimo, precedente o successiva di record e un'interfaccia per l'aggiornamento del record attualmente sulla vista.  
  
> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access), anziché le classi di Open Database Connectivity (ODBC), utilizzare una classe [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) invece. Per ulteriori informazioni, vedere l'articolo [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
 Il modo più comune per creare la visualizzazione di record è con la creazione guidata applicazione. Creazione guidata applicazione inviterà crea la classe di visualizzazione di record e la classe del recordset associato come parte dell'applicazione scheletro starter. Se non si crea la classe di visualizzazione di record con la creazione guidata applicazione, è possibile crearlo in un secondo momento con la creazione guidata classe. Se è sufficiente un singolo modulo, è più semplice l'approccio di creazione guidata applicazione. Creazione guidata classe consente di decidere di utilizzare una visualizzazione di record in un secondo momento nel processo di sviluppo. Utilizzando la creazione guidata classe per creare una visualizzazione di record e un oggetto recordset separatamente e quindi connettersi a essi è l'approccio più flessibile perché offre maggior controllo nella classe recordset di denominazione e la relativa. H /. File CPP. Questo approccio consente inoltre di disporre di più visualizzazioni di record nella stessa classe recordset.  
  
 Per facilitare agli utenti finali di un record nella visualizzazione dei record, la creazione guidata applicazione crea menu (e, facoltativamente, sulla barra degli strumenti) risorse per lo spostamento al primo, ultimo, precedente o successiva di record. Se si crea una classe di visualizzazione di record con ClassWizard, è necessario creare queste risorse personalmente con i menu e bitmap editor.  
  
 Per informazioni sull'implementazione del valore predefinito per lo spostamento da un record a altro, vedere `IsOnFirstRecord` e `IsOnLastRecord` e l'articolo [utilizzando una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md).  
  
 `CRecordView`tiene traccia della posizione dell'utente del recordset in modo che la visualizzazione di record può aggiornare l'interfaccia utente. Quando l'utente passa a delle estremità del recordset, la visualizzazione dei record Disabilita oggetti dell'interfaccia utente, ad esempio voci di menu o pulsanti della barra degli strumenti, per lo spostamento nella stessa direzione.  
  
 Per ulteriori informazioni sulla dichiarazione e utilizzando le classi di recordset e la visualizzazione di record, vedere "Progettazione e creazione di una visualizzazione di Record" nell'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md). Per ulteriori informazioni su come record viste lavoro e sul loro utilizzo, vedere l'articolo [utilizzando una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md).  
  
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
 Quando si crea un oggetto di un tipo derivato da `CRecordView`, chiamare delle forme del costruttore per inizializzare l'oggetto visualizzazione e identificare la risorsa finestra di dialogo in cui si basa la visualizzazione.  
  
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
 È possibile identificare la risorsa sia per nome (passare una stringa come argomento al costruttore) o tramite il relativo ID (passaggio di un intero senza segno come argomento). ID è consigliabile utilizzare una risorsa.  
  
> [!NOTE]
>  La classe derivata *deve* fornisce il proprio costruttore. Nel costruttore della classe derivata, chiamare il costruttore `CRecordView::CRecordView` con il nome di risorsa o l'ID come argomento, come illustrato nell'esempio riportato di seguito.  
  
 **CRecordView::OnInitialUpdate** chiamate `UpdateData`, che chiama `DoDataExchange`. Questa chiamata iniziale a `DoDataExchange` si connette `CRecordView` controlla (indirettamente) a `CRecordset` campo ai membri di dati creati da ClassWizard. Questi membri dati non può essere utilizzati fino a dopo aver chiamato la classe di base **CFormView::OnInitialUpdate** funzione membro.  
  
> [!NOTE]
>  Se si utilizza Creazione guidata classe, la procedura guidata definisce un `enum` valore `CRecordView::IDD`specificato nella dichiarazione di classe e viene utilizzato nell'elenco di inizializzazione membro per il costruttore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#32](../../mfc/codesnippet/cpp/crecordview-class_1.cpp)]  
  
##  <a name="isonfirstrecord"></a>CRecordView::IsOnFirstRecord  
 Chiamare questa funzione membro per determinare se il record corrente è il primo record nell'oggetto recordset associato alla visualizzazione di record.  
  
```  
BOOL IsOnFirstRecord();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il record corrente è il primo record del recordset. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per la scrittura di gestori aggiornamento comandi scritti da ClassWizard le implementazioni del valore predefinito.  
  
 Se l'utente passa al primo record, il framework Disabilita tutti gli oggetti dell'interfaccia utente che è per lo spostamento al primo o del record precedente.  
  
##  <a name="isonlastrecord"></a>CRecordView::IsOnLastRecord  
 Chiamare questa funzione membro per determinare se il record corrente è l'ultimo record nell'oggetto recordset associato alla visualizzazione di record.  
  
```  
BOOL IsOnLastRecord();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il record corrente è l'ultimo record del recordset. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per la scrittura di gestori aggiornamento comandi che supporta un'interfaccia utente per lo spostamento da un record a altro scrive ClassWizard le implementazioni del valore predefinito.  
  
> [!CAUTION]
>  Il risultato di questa funzione è affidabile, ad eccezione del fatto che la vista non è in grado di rilevare la fine del recordset fino a quando l'utente è andato oltre il. L'utente deve spostare oltre l'ultimo record prima che la visualizzazione di record può indicare che è necessario disabilitare tutti gli oggetti dell'interfaccia utente per lo spostamento al record successivo o l'ultimo. Se l'utente si sposta dopo l'ultimo record e quindi consente di tornare all'ultimo record oppure prima di esso, la visualizzazione dei record può tenere traccia della posizione dell'utente nel recordset e disabilitato correttamente oggetti dell'interfaccia utente. `IsOnLastRecord`è anche affidabile dopo una chiamata alla funzione implementazione **OnRecordLast**, che gestisce il `ID_RECORD_LAST` comando, o `CRecordset::MoveLast`.  
  
##  <a name="ongetrecordset"></a>CRecordView::OnGetRecordset  
 Restituisce un puntatore al `CRecordset`-oggetto associato alla visualizzazione di record derivato.  
  
```  
virtual CRecordset* OnGetRecordset() = 0;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CRecordset`-oggetto derivato se l'oggetto è stato creato correttamente; in caso contrario un **NULL** puntatore.  
  
### <a name="remarks"></a>Note  
 È necessario eseguire l'override di questa funzione membro per creare o ottenere un oggetto recordset e restituire un puntatore a esso. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive una sostituzione predefinita per l'utente. Implementazione predefinita di ClassWizard restituisce il puntatore di recordset archiviato nella vista del record, se presente. Se non, costruisce un oggetto recordset del tipo specificato con ClassWizard e viene chiamato il relativo **aprire** membro funzione per aprire la tabella o eseguire la query e quindi restituisce un puntatore all'oggetto.  
  
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
  
- `ID_RECORD_NEXT`Passare al record successivo nel recordset.  
  
- `ID_RECORD_PREV`Passare al record precedente nel recordset.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo spostamento è stato completato. in caso contrario 0 se la richiesta di spostamento è stata negata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama appropriata **spostare** funzione membro del `CRecordset` oggetto associato alla visualizzazione di record.  
  
 Per impostazione predefinita, `OnMove` aggiorna il record corrente nell'origine dati, se l'utente ha modificato nella visualizzazione dei record.  
  
 La creazione guidata applicazione crea una risorsa di menu con voci di menu di primo Record, ultimo Record, Record successivo e Record precedente. Se si seleziona l'opzione della barra degli strumenti ancorabile, la creazione guidata applicazione crea anche una barra degli strumenti con pulsanti che corrispondono a questi comandi.  
  
 Se si sposta dopo l'ultimo record del recordset, la visualizzazione dei record continua a visualizzare l'ultimo record. Se si sposta all'indietro oltre il primo record, la visualizzazione dei record continua a visualizzare il primo record.  
  
> [!CAUTION]
>  La chiamata `OnMove` genera un'eccezione se il recordset non contiene record. Chiamare la funzione di gestore aggiornamento dell'interfaccia utente appropriato, ovvero **OnUpdateRecordFirst**, **OnUpdateRecordLast**, **OnUpdateRecordNext**, o  **OnUpdateRecordPrev** , ovvero prima della corrispondente operazione di spostamento per determinare se il recordset contiene record.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CFormView](../../mfc/reference/cformview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)   
 [Classe CFormView](../../mfc/reference/cformview-class.md)