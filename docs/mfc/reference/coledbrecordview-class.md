---
title: COleDBRecordView (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- COleDBRecordView [MFC], COleDBRecordView
- COleDBRecordView [MFC], OnGetRowset
- COleDBRecordView [MFC], OnMove
ms.assetid: 98612427-c4c9-4760-b7e1-85b17448add9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 122ceb1715323e1482b2a8a8544cbe3f6270c713
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37037857"
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
 La vista è un modulo direttamente connesso a un `CRowset` oggetto. La vista viene creata da una risorsa modello di finestra di dialogo e visualizza i campi del `CRowset` oggetto nei controlli del modello di finestra di dialogo. Il `COleDBRecordView` oggetto utilizza dati DDX (dialog exchange) e la funzionalità per la navigazione incorporata nella `CRowset`, automatizzare lo spostamento dei dati tra i controlli nel form e i campi del set di righe. `COleDBRecordView` inoltre fornisce un'implementazione predefinita per lo spostamento al primo, successivo, precedente o l'ultimo record e un'interfaccia per l'aggiornamento del record attualmente sulla vista.  
  
 È possibile utilizzare le funzioni DDX con **COleDbRecordView** per ottenere i dati direttamente dal recordset del database e visualizzarlo in un controllo di finestra di dialogo. È consigliabile utilizzare il **DDX _\***  metodi (ad esempio `DDX_Text`), non il **DDX_Field\***  funzioni (ad esempio `DDX_FieldText`) con **COleDbRecordView** . `DDX_FieldText` non funzionerà con **COleDbRecordView** poiché `DDX_FieldText` accetta un argomento supplementare di tipo **CRecordset\***  (per `CRecordView`) o **CDaoRecordset\***  (per `CDaoRecordView`).  
  
> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access) anziché le classi di modelli Consumer OLE DB, utilizzare una classe [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) invece. Per altre informazioni, vedere l'articolo [Panoramica: programmazione di Database](../../data/data-access-programming-mfc-atl.md).  
  
 `COleDBRecordView` tiene traccia della posizione dell'utente nel set di righe in modo che la visualizzazione di record può aggiornare l'interfaccia utente. Quando l'utente passa a delle estremità del set di righe, la visualizzazione dei record Disabilita oggetti dell'interfaccia utente, ad esempio voci di menu o pulsanti della barra degli strumenti, ovvero per lo spostamento di ulteriore nella stessa direzione.  
  
 Per ulteriori informazioni sulle classi di set di righe, vedere la [tramite OLE DB (modelli Consumer)](../../data/oledb/ole-db-consumer-templates-cpp.md) articolo.  
  
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
  
##  <a name="coledbrecordview"></a>  COleDBRecordView::COleDBRecordView  
 Costruisce un oggetto `COleDBRecordView`.  
  
```  
COleDBRecordView(LPCTSTR lpszTemplateName);  
COleDBRecordView(UINT nIDTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszTemplateName*  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 *nIDTemplate*  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Quando si crea un oggetto di un tipo derivato da `COleDBRecordView`, richiamare uno dei costruttori per creare l'oggetto visualizzazione e identificare le risorse di finestra di dialogo in cui si basa la vista. È possibile identificare la risorsa in base al nome (passare una stringa come argomento al costruttore) o tramite il relativo ID (passare un intero senza segno come argomento).  
  
> [!NOTE]
>  La classe derivata *necessario* fornire il proprio costruttore. Nel costruttore, richiamare il costruttore, `COleDBRecordView::COleDBRecordView`, con il nome della risorsa o l'ID come argomento.  
  
##  <a name="ongetrowset"></a>  COleDBRecordView::OnGetRowset  
 Restituisce un handle per il **CRowset <>** oggetto associato alla visualizzazione di record.  
  
```  
virtual CRowset<>* OnGetRowset() = 0;  
 
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 È necessario eseguire l'override di questa funzione membro per creare o ottenere un oggetto set di righe e restituire un handle a esso. Se si dichiara la classe di visualizzazione di record con ClassWizard, la procedura guidata scrive una sostituzione predefinita per l'utente. Implementazione predefinita di ClassWizard restituisce l'handle di set di righe archiviata nella visualizzazione dei record, se presente. Se non viene costruito un oggetto set di righe del tipo specificato con ClassWizard e viene chiamato il relativo `Open` membro funzione per aprire la tabella o eseguire la query e quindi restituisce un handle all'oggetto.  
  
> [!NOTE]
>  Precedenti a MFC 7.0 `OnGetRowset` ha restituito un puntatore a `CRowset`. Se si dispone di codice che chiama `OnGetRowset`, è necessario modificare il tipo restituito per la classe modello **<> CRowset**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDatabase#38](../../mfc/codesnippet/cpp/coledbrecordview-class_1.cpp)]  
  
 Per ulteriori informazioni ed esempi, vedere l'articolo [visualizzazioni di Record: utilizzo di una visualizzazione di Record](../../data/using-a-record-view-mfc-data-access.md).  
  
##  <a name="onmove"></a>  COleDBRecordView::OnMove  
 Passa a un record diverso i set di righe e la visualizzazione consente di visualizzare i relativi campi nei controlli del record.  
  
```  
virtual BOOL OnMove(UINT nIDMoveCommand);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDMoveCommand*  
 Uno dei valori di ID di comando standard seguenti:  
  
- `ID_RECORD_FIRST` : Spostare il primo record del recordset.  
  
- `ID_RECORD_LAST` -Sposta l'e l'ultimo record del recordset.  
  
- `ID_RECORD_NEXT` -Sposta al record successivo nel recordset.  
  
- `ID_RECORD_PREV` -Sposta al record precedente nel recordset.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo spostamento ha avuto esito positivo; in caso contrario 0 se la richiesta di spostamento è stata negata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama l'appropriato `Move` funzione membro del `CRowset` oggetto associato alla visualizzazione di record.  
  
 Per impostazione predefinita, `OnMove` aggiorna il record corrente nell'origine dati se l'utente ha modificato nella visualizzazione dei record.  
  
 La creazione guidata applicazione crea una risorsa di menu con voci di menu di primo Record, ultimo Record, Record successivo e Record precedente. Se si seleziona l'opzione della barra degli strumenti ancorabile, la creazione guidata applicazione crea anche una barra degli strumenti con pulsanti corrispondenti a questi comandi.  
  
 Se si sposta dopo l'ultimo record del recordset, la visualizzazione dei record continua a visualizzare l'ultimo record. Se si sposta all'indietro oltre il primo record, la visualizzazione dei record continua a visualizzare il primo record.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



