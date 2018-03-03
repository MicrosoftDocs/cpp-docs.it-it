---
title: Funzioni di scambio di dati di finestra di dialogo per CRecordView e CDaoRecordView | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- AFXDAO/DDX_FieldCBIndex
- AFXDAO/DDX_FieldCBString
- AFXDAO/DDX_FieldCBStringExact
- AFXDAO/DDX_FieldCheck
- AFXDAO/DDX_FieldLBIndex
- AFXDAO/DDX_FieldLBString
- AFXDAO/DDX_FieldLBStringExact
- AFXDAO/DDX_FieldRadio
- AFXDAO/DDX_FieldScroll
- AFXDAO/DDX_FieldText
dev_langs:
- C++
helpviewer_keywords:
- DDX_Field functions [MFC]
- ODBC [MFC], dialog data exchange (DDX) support
- DDX (dialog data exchange) [MFC], database support
- DDX (dialog data exchange) [MFC], functions
- databases [MFC], dialog data exchange (DDX) support
- DAO [MFC], dialog data exchange (DDX) support
ms.assetid: 0d8cde38-3a2c-4100-9589-ac80a7b1ce91
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f58b7ba7ae51c4db065cd7b30cc233128f7b7c68
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dialog-data-exchange-functions-for-crecordview-and-cdaorecordview"></a>Funzioni DDX (Dialog Data Exchange) per CRecordView e CDaoRecordView
In questo argomento elenca le funzioni DDX_Field utilizzate per scambiare dati tra un [CRecordset](../../mfc/reference/crecordset-class.md) e [CRecordView](../../mfc/reference/crecordview-class.md) modulo o un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) e un [ CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) form.  
  
> [!NOTE]
>  Funzioni DDX_Field sono come le funzioni DDX dello scambio dei dati con controlli in un form. Tuttavia, a differenza, DDX dello scambio dei dati con i campi dell'oggetto recordset associato della vista anziché con i campi di visualizzazione dei record a se stesso. Per ulteriori informazioni, vedere le classi `CRecordView` e `CDaoRecordView`.  
  
### <a name="ddxfield-functions"></a>Funzioni DDX_Field  
  
|||  
|-|-|  
|[DDX_FieldCBIndex](#ddx_fieldcbindex)|I trasferimenti di dati integer tra un membro dati di campo del recordset e l'indice della selezione corrente in una casella combinata in un [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md).|  
|[DDX_FieldCBString](#ddx_fieldcbstring)|I trasferimenti `CString` casella dei dati tra un membro dati di campo del recordset e il controllo di modifica di una casella combinata un `CRecordView` o `CDaoRecordView`. Quando si spostano i dati dal recordset al controllo, questa funzione consente di selezionare l'elemento nella casella combinata che inizia con i caratteri nella stringa specificata.|  
|[DDX_FieldCBStringExact](#ddx_fieldcbstringexact)|I trasferimenti `CString` casella dei dati tra un membro dati di campo del recordset e il controllo di modifica di una casella combinata un `CRecordView` o `CDaoRecordView`. Quando si spostano i dati dal recordset al controllo, questa funzione consente di selezionare l'elemento nella casella combinata che corrisponde esattamente alla stringa specificata.|  
|[DDX_FieldCheck](#ddx_fieldcheck)|Trasferisce dati Boolean tra un membro dati di campo del recordset e una casella di controllo in un `CRecordView` o `CDaoRecordView`.|  
|[DDX_FieldLBIndex](#ddx_fieldlbindex)|I trasferimenti di dati integer tra un membro dati di campo del recordset e l'indice della selezione corrente in una casella di riepilogo in una `CRecordView` o `CDaoRecordView`.|  
|[DDX_FieldLBString](#ddx_fieldlbstring)|Gestisce il trasferimento di [CString](../../atl-mfc-shared/reference/cstringt-class.md) dati tra un controllo casella di riepilogo e i membri di dati del campo di un oggetto recordset. Quando si spostano i dati dal recordset al controllo, questa funzione consente di selezionare l'elemento nella casella di riepilogo che inizia con i caratteri nella stringa specificata.|  
|[DDX_FieldLBStringExact](#ddx_fieldlbstringexact)|Gestisce il trasferimento di `CString` dati tra un controllo casella di riepilogo e i membri di dati del campo di un oggetto recordset. Quando si spostano i dati dal recordset al controllo, questa funzione consente di selezionare il primo elemento che corrisponde esattamente alla stringa specificata.|  
|[DDX_FieldRadio](#ddx_fieldradio)|I trasferimenti di dati integer tra un membro dati di campo del recordset e un gruppo di pulsanti di opzione in un `CRecordView` o `CDaoRecordView`.|  
|[DDX_FieldScroll](#ddx_fieldscroll)|Imposta o ottiene la posizione di scorrimento di un controllo barra di scorrimento in una `CRecordView` o `CDaoRecordView`. Chiamare dal [DoFieldExchange](../../mfc/reference/cdaorecordset-class.md#dofieldexchange) (funzione).|  
|[DDX_FieldSlider](#ddx_fieldslider)|Sincronizza la posizione del cursore di un controllo dispositivo di scorrimento in una visualizzazione di record e un `int` membro dati di campo di un oggetto recordset. |
|[DDX_FieldText](#ddx_fieldtext)|Le versioni di overload sono disponibili per il trasferimento di `int`, **UINT**, **lungo**, `DWORD`, [CString](../../atl-mfc-shared/reference/cstringt-class.md), **float** , **doppie**, **breve**, [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md), e [COleCurrency](../../mfc/reference/colecurrency-class.md) dati tra un membro dati di campo del recordset e una modifica casella un `CRecordView` o `CDaoRecordView`.|  
  
##  <a name="ddx_fieldcbindex"></a>DDX_FieldCBIndex  
 Il `DDX_FieldCBIndex` funzione Sincronizza l'indice dell'elemento selezionato nel controllo casella di riepilogo di un controllo casella combinata in una visualizzazione di record e un `int` membro dati di campo di un oggetto recordset associato alla visualizzazione di record.  
  
```  
void AFXAPI DDX_FieldCBIndex(
    CDataExchange* pDX,    
    int nIDC,   
    int& index,  
    CRecordset* pRecordset);

void AFXAPI DDX_FieldCBIndex(
    CDataExchange* pDX,    
    int nIDC,   
    int& index,  
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.  
  
 *indice*  
 Un riferimento a un membro di dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano i dati dal recordset al controllo, la funzione imposta la selezione del controllo in base al valore specificato in *indice*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, MFC imposta il valore dell'indice 0. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto o se è selezionato alcun elemento, il campo del recordset è impostato su 0.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione, se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio di DDX_Field generale. L'esempio sarebbe simile per `DDX_FieldCBIndex`.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  

##  <a name="ddx_fieldcbstring"></a>DDX_FieldCBString  
 Il `DDX_FieldCBString` funzione gestisce il trasferimento di [CString](../../atl-mfc-shared/reference/cstringt-class.md) dati tra il controllo di modifica di un controllo casella combinata in una visualizzazione di record e un `CString` membro dati di campo di un oggetto recordset associato alla visualizzazione di record.  
  
```  
void AFXAPI DDX_FieldCBString(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldCBString(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.  
  
 *valore*  
 Un riferimento a un membro di dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano i dati dal recordset al controllo, la funzione imposta la selezione corrente nella casella combinata per la prima riga che inizia con i caratteri nella stringa specificata *valore*. Un trasferimento dal recordset al controllo, se il campo del recordset è Null, viene rimosso qualsiasi selezione dalla casella combinata e il controllo di modifica della casella combinata è vuoto. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo recordset è impostato su Null se il campo consente.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione, se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio di DDX_Field generale. L'esempio include una chiamata a `DDX_FieldCBString`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
## <a name="ddx_fieldcbstringexact"></a>DDX_FieldCBStringExact  
 Il `DDX_FieldCBStringExact` funzione gestisce il trasferimento di [CString](../../atl-mfc-shared/reference/cstringt-class.md) dati tra il controllo di modifica di un controllo casella combinata in una visualizzazione di record e un `CString` membro dati di campo di un oggetto recordset associato alla visualizzazione di record.  
  
```  
void AFXAPI DDX_FieldCBStringExact(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldCBStringExact(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.  
  
 *valore*  
 Un riferimento a un membro di dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano i dati dal recordset al controllo, la funzione imposta la selezione corrente nella casella combinata per la prima riga che corrisponde esattamente alla stringa specificata *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è NULL, viene rimosso qualsiasi selezione dalla casella combinata e la casella di modifica della casella combinata è impostata su empty. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo recordset è impostato su NULL.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione, se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio di DDX_Field generale. Le chiamate a `DDX_FieldCBStringExact` saranno analoghi.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="ddx_fieldcheck"></a>DDX_FieldCheck  
 Il `DDX_FieldCheck` funzione gestisce il trasferimento di `int` dati tra un controllo casella di controllo in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `int` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_FieldCheck(
    CDataExchange* pDX,    
    int nIDC,   
    int& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldCheck(
    CDataExchange* pDX,    
    int nIDC,   
    int& value,   
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo casella di controllo associato alla proprietà del controllo.  
  
 *valore*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_FieldCheck` viene chiamato, *valore* è impostato sullo stato corrente del controllo casella di controllo, o lo stato del controllo è impostato su *valore*, a seconda della direzione del trasferimento.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="ddx_fieldlbindex"></a>DDX_FieldLBIndex  
 Il `DDX_FieldLBIndex` funzione Sincronizza l'indice dell'elemento selezionato in un controllo casella di riepilogo in una visualizzazione di record e un `int` membro dati di campo di un oggetto recordset associato alla visualizzazione di record.  
  
```  
void AFXAPI DDX_FieldLBIndex(
    CDataExchange* pDX,    
    int nIDC,   
    int& index,  
    CRecordset* pRecordset);

void AFXAPI DDX_FieldLBIndex(
    CDataExchange* pDX,    
    int nIDC,   
    int& index,  
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.  
  
 *indice*  
 Un riferimento a un membro di dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano i dati dal recordset al controllo, la funzione imposta la selezione del controllo in base al valore specificato in *indice*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, MFC imposta il valore dell'indice 0. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo recordset è impostato su 0.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione, se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio di DDX_Field generale.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="ddx_fieldlbstring"></a>DDX_FieldLBString  
 Il `DDX_FieldLBString` copia la selezione corrente di un controllo casella di riepilogo in una visualizzazione di record per un [CString](../../atl-mfc-shared/reference/cstringt-class.md) membro dati di campo di un oggetto recordset associato alla visualizzazione di record.  
  
```  
void AFXAPI DDX_FieldLBString(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldLBString(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.  
  
 *valore*  
 Un riferimento a un membro di dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati.  
  
### <a name="remarks"></a>Note  
 Nella direzione inversa, questa funzione imposta la selezione corrente nella casella di riepilogo per la prima riga che inizia con i caratteri nella stringa specificata da *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, viene rimosso qualsiasi selezione dalla casella di riepilogo. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo recordset è impostato su Null.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione, se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio di DDX_Field generale. Le chiamate a `DDX_FieldLBString` saranno analoghi.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="ddx_fieldlbstringexact"></a>DDX_FieldLBStringExact  
 Il `DDX_FieldLBStringExact` funzione Copia la selezione corrente di un controllo casella di riepilogo in una visualizzazione di record per un [CString](../../atl-mfc-shared/reference/cstringt-class.md) membro dati di campo di un oggetto recordset associato alla visualizzazione di record.  
  
```  
void AFXAPI DDX_FieldLBStringExact(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldLBStringExact(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.  
  
 *valore*  
 Un riferimento a un membro di dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati.  
  
### <a name="remarks"></a>Note  
 Nella direzione inversa, questa funzione imposta la selezione corrente nella casella di riepilogo per la prima riga che corrisponde esattamente alla stringa specificata *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, viene rimosso qualsiasi selezione dalla casella di riepilogo. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo recordset è impostato su Null.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione, se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio di DDX_Field generale. Le chiamate a `DDX_FieldLBStringExact` saranno analoghi.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="ddx_fieldradio"></a>DDX_FieldRadio  
 Il `DDX_FieldRadio` funzione associa in base zero `int` variabile membro di set di record di una visualizzazione di record con il pulsante di opzione attualmente selezionato in un gruppo di pulsanti di opzione nella visualizzazione dei record.  
  
```  
void AFXAPI DDX_FieldRadio(
    CDataExchange* pDX,    
    int nIDC,   
    int& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldRadio(
    CDataExchange* pDX,    
    int nIDC,   
    int& value,   
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID del primo in un gruppo (con stile **WS_GROUP**) adiacente controlli pulsante di opzione nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.  
  
 *valore*  
 Un riferimento a un membro di dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati.  
  
### <a name="remarks"></a>Note  
 Durante il trasferimento dal campo del recordset alla visualizzazione, questa funzione consente di attivare il *ennesima* pulsante di opzione (in base zero) e disattiva gli altri pulsanti. Nella direzione inversa, questa funzione imposta il campo del recordset per il numero ordinale del pulsante di opzione che si trova attualmente su (selezionata). In un trasferimento dal recordset al controllo, se il campo del recordset è Null, non viene selezionato alcun pulsante. In un trasferimento dal controllo del codice al recordset, se nessun controllo è selezionato, il campo recordset è impostato su Null se è sufficiente che il campo.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione, se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio di DDX_Field generale. Le chiamate a `DDX_FieldRadio` saranno analoghi.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="ddx_fieldscroll"></a>DDX_FieldScroll  
 Il `DDX_FieldScroll` funzione Sincronizza la posizione di scorrimento di un controllo barra di scorrimento in una visualizzazione di record e un `int` membro dati di campo di un oggetto recordset associato con la visualizzazione dei record (o si sceglie di eseguire il mapping a qualsiasi variabile di tipo integer).  
  
```  
void AFXAPI DDX_FieldScroll(
    CDataExchange* pDX,    
    int nIDC,   
    int& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldScroll(
    CDataExchange* pDX,    
    int nIDC,   
    int& value,   
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *nIDC\**  
 L'ID del primo in un gruppo (con stile **WS_GROUP**) adiacente controlli pulsante di opzione nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.  
  
 *valore*  
 Un riferimento a un membro di dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano i dati dal recordset al controllo, la funzione imposta la posizione di scorrimento della barra di scorrimento sul valore specificato *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, il controllo barra di scorrimento è impostato su 0. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il valore del campo recordset è 0.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione, se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio di DDX_Field generale. Le chiamate a `DDX_FieldScroll` saranno analoghi.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  

  ## <a name="nameddxfieldslidera--ddxfieldslider"></a>nome = "ddx_fieldslider" ></a> DDX_FieldSlider
Il `DDX_FieldSlider` funzione Sincronizza la posizione del cursore di un controllo dispositivo di scorrimento in una visualizzazione di record e un `int` membro dati di campo di un oggetto recordset associato con la visualizzazione dei record (o si sceglie di eseguire il mapping a qualsiasi variabile di tipo integer).  
   
### <a name="syntax"></a>Sintassi  
  ```
   void AFXAPI DDX_FieldSlider(  
       CDataExchange* pDX,  
       int nIDC,  
       int& value,  
       CRecordset* pRecordset );  

void AFXAPI DDX_FieldSlider(  
     CDataExchange* pDX,  
     int nIDC,  
     int& value,  
     CDaoRecordset* pRecordset );  
```
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo dispositivo di scorrimento.  
  
 *valore*  
 Un riferimento al valore da scambiare. Questo parametro contiene o verrà utilizzato per impostare posizione del cursore corrente del controllo dispositivo di scorrimento.  
  
 `pRecordset`  
 Un puntatore all'oggetto associato `CRecordset` o `CDaoRecordset` oggetto con cui i dati vengono scambiati.  
   
### <a name="remarks"></a>Note  
 Quando si spostano i dati dal recordset per il dispositivo di scorrimento, questa funzione imposta la posizione del dispositivo di scorrimento sul valore specificato *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, la posizione del controllo dispositivo di scorrimento viene impostata su 0. In un trasferimento dal controllo al recordset, se il controllo è vuoto, il valore del campo recordset è 0.  
  
 `DDX_FieldSlider`non scambiare informazioni di intervallo con controlli dispositivo di scorrimento in grado di impostare un intervallo anziché semplicemente una posizione.  
  
 Se si lavora con le classi basate su ODBC, utilizzare il primo override della funzione. Utilizzare il secondo override con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per `CRecordView` e `CDaoRecordView` campi, vedere [visualizzazioni di Record](../../data/record-views-mfc-data-access.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [CSliderCtrl utilizzando](../using-csliderctrl.md).  
   
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio di DDX_Field generale. Le chiamate a `DDX_FieldSlider` saranno analoghi.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
  
##  <a name="ddx_fieldtext"></a>DDX_FieldText  
 Il `DDX_FieldText` funzione gestisce il trasferimento di `int`, **breve**, **lungo**, `DWORD`, [CString](../../atl-mfc-shared/reference/cstringt-class.md), **float**, **doppie**, **BOOL**, o **BYTE** dati tra un controllo casella di modifica e i membri di dati del campo di un oggetto recordset.  
  
```  
void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    BYTE& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    int& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    UINT& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    long& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    DWORD& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    float& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    double& value,   
    CRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    short& value,   
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    BOOL& value,   
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    BYTE& value,   
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    long& value,   
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    DWORD& value,   
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    CString& value,   
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    float& value,   
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    double& value,   
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    COleDateTime& value,   
    CDaoRecordset* pRecordset);

void AFXAPI DDX_FieldText(
    CDataExchange* pDX,    
    int nIDC,   
    COleCurrency& value,   
    CDaoRecordset* pRecordset);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo nel [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) oggetto.  
  
 *valore*  
 Un riferimento a un membro di dati del campo associato `CRecordset` o `CDaoRecordset` oggetto. Il tipo di dati del valore dipende da quali versioni di overload `DDX_FieldText` utilizzare.  
  
 `pRecordset`  
 Un puntatore al [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui i dati vengono scambiati. Abilita l'indicatore di misura `DDX_FieldText` per rilevare e impostare i valori Null.  
  
### <a name="remarks"></a>Note  
 Per [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetti, `DDX_FieldText` gestisce inoltre il trasferimento [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md), e [COleCurrency](../../mfc/reference/colecurrency-class.md) valori. Un controllo casella vuota indica un valore Null. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, la casella di modifica è vuoto. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo recordset è impostato su Null.  
  
 Utilizzare le versioni con [CRecordset](../../mfc/reference/crecordset-class.md) parametri se si lavora con le classi basate su ODBC. Utilizzare le versioni con [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) parametri se si utilizzano le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e altre informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Le operazioni seguenti `DoDataExchange` funzionare per un [CRecordView](../../mfc/reference/crecordview-class.md) contiene `DDX_FieldText` funzione chiama per tre tipi di dati: `IDC_COURSELIST` è una casella combinata; i due controlli sono le caselle di modifica. Per la programmazione di DAO, il *m_pSet* parametro è un puntatore a un [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).  
  
 [!code-cpp[NVC_MFCDatabase#43](../../mfc/codesnippet/cpp/dialog-data-exchange-functions-for-crecordview-and-cdaorecordview_1.cpp)]  

  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
