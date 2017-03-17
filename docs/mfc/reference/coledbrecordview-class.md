---
title: COleDBRecordView (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleDBRecordView
- AFXOLEDB/COleDBRecordView
- AFXOLEDB/COleDBRecordView::COleDBRecordView
- AFXOLEDB/COleDBRecordView::OnGetRowset
- AFXOLEDB/COleDBRecordView::OnMove
dev_langs:
- C++
helpviewer_keywords:
- MFC, OLE DB
- COleDBRecordView class
ms.assetid: 98612427-c4c9-4760-b7e1-85b17448add9
caps.latest.revision: 20
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
ms.openlocfilehash: 89b5cb175900d11854dcad03440a1ef0bfb8cff9
ms.lasthandoff: 02/24/2017

---
# <a name="coledbrecordview-class"></a>COleDBRecordView (classe)
Visualizzazione che mostra i record del database nei controlli.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDBRecordView : public CFormView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDBRecordView::COleDBRecordView](#coledbrecordview)|Costruisce un oggetto `COleDBRecordView`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDBRecordView::OnGetRowset](#ongetrowset)|Restituisce uno standard `HRESULT` valore.|  
|[COleDBRecordView::OnMove](#onmove)|Aggiorna il record corrente (se dirty) nell'origine dati e viene spostato il record specificato (successivo, precedente, primo o ultimo).|  
  
## <a name="remarks"></a>Note  
 La visualizzazione è una visualizzazione form connessa direttamente a un `CRowset` oggetto. La vista viene creata da una risorsa modello di finestra di dialogo e visualizza i campi di `CRowset` oggetto nei controlli del modello di finestra di dialogo. Il `COleDBRecordView` oggetto utilizza DDX (DDX) e la funzionalità di navigazione incorporata `CRowset`per automatizzare lo spostamento dei dati tra i controlli nel form e i campi del set di righe. `COleDBRecordView`fornisce inoltre un'implementazione predefinita per lo spostamento al primo, successivo, precedente o l'ultimo record e un'interfaccia per aggiornare il record attualmente sulla vista.  
  
 È possibile utilizzare le funzioni DDX con **COleDbRecordView** per ottenere i dati direttamente dal recordset del database e visualizzarli in un controllo finestra di dialogo. Si consiglia di utilizzare il **DDX _\* ** metodi (ad esempio `DDX_Text`), non il **DDX_Field\* ** funzioni (ad esempio `DDX_FieldText`) con **COleDbRecordView**. `DDX_FieldText`non funzionerà con **COleDbRecordView** poiché `DDX_FieldText` accetta un argomento supplementare di tipo **CRecordset\* ** (per `CRecordView`) o **CDaoRecordset\* ** (per `CDaoRecordView`).  
  
> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access) anziché le classi di modelli Consumer OLE DB, utilizzare una classe [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) invece. Per ulteriori informazioni, vedere l'articolo [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
 `COleDBRecordView`tiene traccia della posizione dell'utente nel set di righe in modo che la visualizzazione di record può aggiornare l'interfaccia utente. Quando l'utente passa a un'estremità del set di righe, la visualizzazione di record disabilita utente interfaccia oggetti â €", ad esempio voci di menu o sulla barra degli strumenti pulsanti â €" per lo spostamento nella stessa direzione.  
  
 Per ulteriori informazioni sulle classi di set di righe, vedere il [utilizzando Consumer dei modelli OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md) articolo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 `COleDBRecordView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxoledb.h  
  
##  <a name="coledbrecordview"></a>COleDBRecordView::COleDBRecordView  
 Costruisce un oggetto `COleDBRecordView`.  
  
```  
COleDBRecordView(LPCTSTR lpszTemplateName);  
COleDBRecordView(UINT nIDTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTemplateName`  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 `nIDTemplate`  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Quando si crea un oggetto di un tipo derivato da `COleDBRecordView`, richiamare uno dei costruttori per creare l'oggetto di visualizzazione e identificare la risorsa finestra di dialogo in cui si basa la visualizzazione. È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o dal relativo ID (passare un intero senza segno come argomento).  
  
> [!NOTE]
>  La classe derivata *deve* fornire il proprio costruttore. Nel costruttore, richiamare il costruttore, `COleDBRecordView::COleDBRecordView`, con il nome della risorsa o l'ID come argomento.  
  
##  <a name="ongetrowset"></a>COleDBRecordView::OnGetRowset  
 Restituisce un handle per il **CRowset<> </> ** oggetto associato alla visualizzazione di record.  
  
```  
virtual CRowset<>* OnGetRowset(Â) = 0;  
 
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 È necessario eseguire l'override di questa funzione membro per creare o ottenere un oggetto set di righe e restituire un handle a esso. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive un override del valore predefinito per l'utente. Implementazione predefinita di ClassWizard restituisce l'handle di set di righe archiviata nella visualizzazione dei record, se presente. Se non, costruisce un oggetto set di righe del tipo specificato con la creazione guidata classe e viene chiamato il relativo **aprire** membro funzione per aprire la tabella o eseguire la query e quindi restituisce un handle all'oggetto.  
  
> [!NOTE]
>  Prima di MFC 7.0, `OnGetRowset` ha restituito un puntatore a `CRowset`. Se si dispone di codice che chiama `OnGetRowset`, è necessario modificare il tipo restituito per la classe modello **CRowset<>**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase&#38;](../../mfc/codesnippet/cpp/coledbrecordview-class_1.cpp)]  
  
 Per ulteriori informazioni ed esempi, vedere l'articolo [visualizzazioni di Record: utilizzo di una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md).  
  
##  <a name="onmove"></a>COleDBRecordView::OnMove  
 Passa a un altro record nel set di righe e visualizzazione consente di visualizzare i campi nei controlli del record.  
  
```  
virtual BOOL OnMove(UINT nIDMoveCommand);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDMoveCommand`  
 Uno dei valori di ID di comando standard seguenti:  
  
- `ID_RECORD_FIRST`Â Â Â spostare al primo record del recordset.  
  
- `ID_RECORD_LAST`Â contenevano spostarsi all'ultimo record del recordset.  
  
- `ID_RECORD_NEXT`Â Â Â passare al record successivo nell'oggetto recordset.  
  
- `ID_RECORD_PREV`Â Â Â passare al record precedente nell'oggetto recordset.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo spostamento non ha esito positivo. in caso contrario 0 se la richiesta di spostamento è stata negata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama appropriato **spostare** funzione membro di `CRowset` oggetto associato alla visualizzazione di record.  
  
 Per impostazione predefinita, `OnMove` consente di aggiornare il record corrente nell'origine dati se l'utente ha modificato nella visualizzazione dei record.  
  
 La creazione guidata applicazione crea una risorsa di menu con voci di menu di primo Record, ultimo Record, Record successivo e Record precedente. Se si seleziona l'opzione della barra degli strumenti ancorabile, la creazione guidata applicazione crea inoltre una barra degli strumenti con pulsanti che corrispondono a questi comandi.  
  
 Se si sposta dopo l'ultimo record del recordset, la visualizzazione di record continua a visualizzare l'ultimo record. Se si sposta all'indietro oltre il primo record, la visualizzazione di record continua a visualizzare il primo record.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




