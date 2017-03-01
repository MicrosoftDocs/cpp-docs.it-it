---
title: Funzioni di scambio di dati di finestra di dialogo per CRecordView e CDaoRecordView | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.data
dev_langs:
- C++
helpviewer_keywords:
- DDX_Field functions
- ODBC [C++], dialog data exchange (DDX) support
- DDX (dialog data exchange) [C++], database support
- DDX (dialog data exchange) [C++], functions
- databases [C++], dialog data exchange (DDX) support
- DAO [C++], dialog data exchange (DDX) support
ms.assetid: 0d8cde38-3a2c-4100-9589-ac80a7b1ce91
caps.latest.revision: 13
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
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 682c845aa2c915be69aee0d5e95f820573cd6084
ms.lasthandoff: 02/24/2017

---
# <a name="dialog-data-exchange-functions-for-crecordview-and-cdaorecordview"></a>Funzioni DDX (Dialog Data Exchange) per CRecordView e CDaoRecordView
In questo argomento vengono elencate le funzioni DDX_Field usate per scambiare dati tra un [CRecordset](../../mfc/reference/crecordset-class.md) e un [CRecordView](../../mfc/reference/crecordview-class.md) form o un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) form.  
  
> [!NOTE]
>  Funzioni DDX_Field sono come le funzioni DDX dello scambio dei dati con controlli in un form. Ma a differenza di DDX, dello scambio dei dati con i campi dell'oggetto recordset associato della vista anziché con i campi di visualizzazione dei record stesso. Per ulteriori informazioni, vedere le classi `CRecordView` e `CDaoRecordView`.  
  
### <a name="ddxfield-functions"></a>Funzioni DDX_Field  
  
|||  
|-|-|  
|[DDX_FieldCBIndex](#ddx_fieldcbindex)|I trasferimenti di dati integer tra un membro dati di campo del recordset e l'indice della selezione corrente in una casella combinata in un [CRecordView](../../mfc/reference/crecordview-class.md) o [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md).|  
|[DDX_FieldCBString](#ddx_fieldcbstring)|I trasferimenti `CString` nella casella dati tra un membro dati di campo del recordset e il controllo di modifica di una casella combinata un `CRecordView` o `CDaoRecordView`. Quando si spostano dati dell'oggetto Recordset al controllo, questa funzione consente di selezionare l'elemento nella casella combinata che inizia con i caratteri nella stringa specificata.|  
|[DDX_FieldCBStringExact](#ddx_fieldcbstringexact)|I trasferimenti `CString` nella casella dati tra un membro dati di campo del recordset e il controllo di modifica di una casella combinata un `CRecordView` o `CDaoRecordView`. Quando si spostano dati dell'oggetto Recordset al controllo, questa funzione consente di selezionare l'elemento nella casella combinata che corrisponde esattamente alla stringa specificata.|  
|[DDX_FieldCheck](#ddx_fieldcheck)|I trasferimenti di dati Boolean tra un membro dati di campo del recordset e una casella di controllo in un `CRecordView` o `CDaoRecordView`.|  
|[DDX_FieldLBIndex](#ddx_fieldlbindex)|I trasferimenti di dati integer tra un membro dati di campo del recordset e l'indice della selezione corrente in una casella di riepilogo in un `CRecordView` o `CDaoRecordView`.|  
|[DDX_FieldLBString](#ddx_fieldlbstring)|Gestisce il trasferimento di [CString](../../atl-mfc-shared/reference/cstringt-class.md) dati tra un controllo casella di riepilogo e i membri dati di campo di un recordset. Quando si spostano dati dell'oggetto Recordset al controllo, questa funzione consente di selezionare l'elemento nella casella di riepilogo che inizia con i caratteri nella stringa specificata.|  
|[DDX_FieldLBStringExact](#ddx_fieldlbstringexact)|Gestisce il trasferimento di `CString` dati tra un controllo casella di riepilogo e i membri dati di campo di un recordset. Quando si spostano dati dell'oggetto Recordset al controllo, questa funzione consente di selezionare il primo elemento che corrisponde esattamente alla stringa specificata.|  
|[DDX_FieldRadio](#ddx_fieldradio)|I trasferimenti di dati integer tra un membro dati di campo del recordset e un gruppo di pulsanti di opzione in un `CRecordView` o `CDaoRecordView`.|  
|[DDX_FieldScroll](#ddx_fieldscroll)|Imposta o ottiene la posizione di scorrimento di un controllo barra di scorrimento in una `CRecordView` o `CDaoRecordView`. Chiamare da di [DoFieldExchange](../../mfc/reference/cdaorecordset-class.md#dofieldexchange) (funzione).|  
|[DDX_FieldText](#ddx_fieldtext)|Versioni di overload disponibili per il trasferimento di `int`, **UINT**, **lungo**, `DWORD`, [CString](../../atl-mfc-shared/reference/cstringt-class.md), **float**, **double**, **breve**, [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md), e [COleCurrency](../../mfc/reference/colecurrency-class.md) dati tra un membro dati di campo del recordset e una modifica nella casella un `CRecordView` o `CDaoRecordView`.|  
  
##  <a name="a-nameddxfieldcbindexa--ddxfieldcbindex"></a><a name="ddx_fieldcbindex"></a>DDX_FieldCBIndex  
 Il `DDX_FieldCBIndex` funzione Sincronizza l'indice dell'elemento selezionato nel controllo casella di riepilogo di un controllo casella combinata in una visualizzazione di record e un `int` membro dati del campo di un oggetto recordset associato alla visualizzazione di record.  
  
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
 Un riferimento a un membro dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano dati dell'oggetto Recordset al controllo, la funzione imposta la selezione nel controllo in base al valore specificato in *indice*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, MFC imposta il valore dell'indice 0. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto o se è selezionato alcun elemento, il campo del recordset è impostato su 0.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio DDX_Field generale. L'esempio sarebbe simile per `DDX_FieldCBIndex`.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  

##  <a name="a-nameddxfieldcbstringa--ddxfieldcbstring"></a><a name="ddx_fieldcbstring"></a>DDX_FieldCBString  
 Il `DDX_FieldCBString` funzione gestisce il trasferimento di [CString](../../atl-mfc-shared/reference/cstringt-class.md) dati tra il controllo di modifica di un controllo casella combinata in una visualizzazione di record e un `CString` membro dati del campo di un oggetto recordset associato alla visualizzazione di record.  
  
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
  
 *value*  
 Un riferimento a un membro dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano dati dell'oggetto Recordset al controllo, la funzione imposta la selezione corrente nella casella combinata per la prima riga che inizia con i caratteri nella stringa specificata *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, viene rimosso qualsiasi selezione dalla casella combinata e il controllo di modifica della casella combinata è impostato su un valore vuoto. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo recordset è impostato su Null se il campo consente.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio DDX_Field generale. L'esempio include una chiamata a `DDX_FieldCBString`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
## <a name="a-nameddxfieldcbstringexacta--ddxfieldcbstringexact"></a><a name="ddx_fieldcbstringexact"></a>DDX_FieldCBStringExact  
 Il `DDX_FieldCBStringExact` funzione gestisce il trasferimento di [CString](../../atl-mfc-shared/reference/cstringt-class.md) dati tra il controllo di modifica di un controllo casella combinata in una visualizzazione di record e un `CString` membro dati del campo di un oggetto recordset associato alla visualizzazione di record.  
  
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
  
 *value*  
 Un riferimento a un membro dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano dati dell'oggetto Recordset al controllo, la funzione imposta la selezione corrente nella casella combinata per la prima riga che corrisponde esattamente alla stringa specificata *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è NULL, viene rimosso qualsiasi selezione dalla casella combinata e la casella di modifica della casella combinata è impostata su un valore vuoto. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo del recordset è impostato su NULL.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio DDX_Field generale. Le chiamate a `DDX_FieldCBStringExact` sono simili.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="a-nameddxfieldchecka--ddxfieldcheck"></a><a name="ddx_fieldcheck"></a>DDX_FieldCheck  
 Il `DDX_FieldCheck` funzione gestisce il trasferimento di `int` form di dati tra un controllo casella di controllo in una finestra di dialogo, vista o un oggetto visualizzazione controllo e un `int` membro dati di oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
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
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_FieldCheck` viene chiamato, *valore* è impostato sullo stato corrente del controllo casella di controllo, o lo stato del controllo è impostato su *valore*, a seconda della direzione del trasferimento.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="a-nameddxfieldlbindexa--ddxfieldlbindex"></a><a name="ddx_fieldlbindex"></a>DDX_FieldLBIndex  
 Il `DDX_FieldLBIndex` funzione Sincronizza l'indice dell'elemento selezionato nel controllo casella di riepilogo in una visualizzazione di record e un `int` membro dati del campo di un oggetto recordset associato alla visualizzazione di record.  
  
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
 Un riferimento a un membro dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano dati dell'oggetto Recordset al controllo, la funzione imposta la selezione nel controllo in base al valore specificato in *indice*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, MFC imposta il valore dell'indice 0. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo recordset è impostato su 0.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio DDX_Field generale.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="a-nameddxfieldlbstringa--ddxfieldlbstring"></a><a name="ddx_fieldlbstring"></a>DDX_FieldLBString  
 Il `DDX_FieldLBString` copia la selezione corrente di un controllo casella di riepilogo in una visualizzazione di record per un [CString](../../atl-mfc-shared/reference/cstringt-class.md) membro dati del campo di un oggetto recordset associato alla visualizzazione di record.  
  
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
  
 *value*  
 Un riferimento a un membro dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati.  
  
### <a name="remarks"></a>Note  
 Nella direzione inversa, questa funzione imposta la selezione corrente nella casella di riepilogo per la prima riga che inizia con i caratteri nella stringa specificata da *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, viene rimosso qualsiasi selezione dalla casella di riepilogo. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo del recordset è impostato su Null.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio DDX_Field generale. Le chiamate a `DDX_FieldLBString` sono simili.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="a-nameddxfieldlbstringexacta--ddxfieldlbstringexact"></a><a name="ddx_fieldlbstringexact"></a>DDX_FieldLBStringExact  
 Il `DDX_FieldLBStringExact` funzione Copia la selezione corrente di un controllo casella di riepilogo in una visualizzazione di record per un [CString](../../atl-mfc-shared/reference/cstringt-class.md) membro dati del campo di un oggetto recordset associato alla visualizzazione di record.  
  
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
  
 *value*  
 Un riferimento a un membro dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati.  
  
### <a name="remarks"></a>Note  
 Nella direzione inversa, questa funzione imposta la selezione corrente nella casella di riepilogo per la prima riga che corrisponde esattamente alla stringa specificata *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, viene rimosso qualsiasi selezione dalla casella di riepilogo. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo del recordset è impostato su Null.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio DDX_Field generale. Le chiamate a `DDX_FieldLBStringExact` sono simili.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="a-nameddxfieldradioa--ddxfieldradio"></a><a name="ddx_fieldradio"></a>DDX_FieldRadio  
 Il `DDX_FieldRadio` funzione associa in base zero `int` variabile membro dell'oggetto recordset di una visualizzazione di record con il pulsante di opzione attualmente selezionato in un gruppo di pulsanti di opzione nella visualizzazione dei record.  
  
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
  
 *value*  
 Un riferimento a un membro dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati.  
  
### <a name="remarks"></a>Note  
 Durante il trasferimento dal campo del recordset alla visualizzazione, questa funzione consente di attivare il *ennesima* pulsante di opzione (in base zero) e disattiva gli altri pulsanti. Nella direzione inversa, questa funzione imposta il campo del recordset per il numero ordinale del pulsante di opzione che si trova attualmente su (selezionata). In un trasferimento dal recordset al controllo, se il campo del recordset è Null, non viene selezionato alcun pulsante. In un trasferimento dal controllo del codice al recordset, se nessun controllo è selezionato, il campo recordset è impostato su Null se il campo consente di.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio DDX_Field generale. Le chiamate a `DDX_FieldRadio` sono simili.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="a-nameddxfieldscrolla--ddxfieldscroll"></a><a name="ddx_fieldscroll"></a>DDX_FieldScroll  
 Il `DDX_FieldScroll` funzione Sincronizza la posizione di scorrimento di un controllo barra di scorrimento in una visualizzazione di record e un `int` membro dati del campo di un oggetto recordset associato con la visualizzazione dei record (o qualsiasi variabile di tipo integer è possibile eseguirne il mapping a).  
  
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
  
 *value*  
 Un riferimento a un membro dati del campo associato `CRecordset` o `CDaoRecordset` oggetto.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati.  
  
### <a name="remarks"></a>Note  
 Quando si spostano dati dell'oggetto Recordset al controllo, la funzione imposta la posizione di scorrimento della barra di scorrimento sul valore specificato *valore*. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, controllo barra di scorrimento è impostato su 0. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il valore del campo dell'oggetto recordset è 0.  
  
 Se si lavora con le classi basate su ODBC, utilizzare la prima versione. Utilizzare la seconda versione se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Vedere [DDX_FieldText](#ddx_fieldtext) per un esempio DDX_Field generale. Le chiamate a `DDX_FieldScroll` sono simili.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="a-nameddxfieldtexta--ddxfieldtext"></a><a name="ddx_fieldtext"></a>DDX_FieldText  
 Il `DDX_FieldText` funzione gestisce il trasferimento di `int`, **breve**, **lungo**, `DWORD`, [CString](../../atl-mfc-shared/reference/cstringt-class.md), **float**, **double**, **BOOL**, o **BYTE** dati tra un controllo casella di modifica e i membri dati di campo di un recordset.  
  
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
  
 *value*  
 Un riferimento a un membro dati del campo associato `CRecordset` o `CDaoRecordset` oggetto. Il tipo di dati del valore dipende da quali versioni di overload `DDX_FieldText` utilizzare.  
  
 `pRecordset`  
 Un puntatore per il [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto con cui vengono scambiati i dati. Questo puntatore consente `DDX_FieldText` per rilevare e impostare i valori Null.  
  
### <a name="remarks"></a>Note  
 Per [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetti, `DDX_FieldText` gestisce inoltre il trasferimento di [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md), e [COleCurrency](../../mfc/reference/colecurrency-class.md) valori. Un controllo casella di modifica vuoto indica un valore Null. In un trasferimento dal recordset al controllo, se il campo del recordset è Null, la casella di modifica viene impostata su un valore vuoto. In un trasferimento dal controllo del codice al recordset, se il controllo è vuoto, il campo del recordset è impostato su Null.  
  
 Utilizzare le versioni con [CRecordset](../../mfc/reference/crecordset-class.md) parametri se si lavora con le classi basate su ODBC. Utilizzare le versioni con [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) parametri se si lavora con le classi basate su DAO.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per esempi e ulteriori informazioni su DDX per [CRecordView](../../mfc/reference/crecordview-class.md) e [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) campi, vedere l'articolo [visualizzazioni di Record](../../data/record-views-mfc-data-access.md).  
  
### <a name="example"></a>Esempio  
 Nell'esempio `DoDataExchange` funzionare per un [CRecordView](../../mfc/reference/crecordview-class.md) contiene `DDX_FieldText` funzione chiama per tre tipi di dati: `IDC_COURSELIST` è una casella combinata; altri due controlli sono caselle di modifica. Per la programmazione DAO, il *m_pSet* parametro è un puntatore a un [CRecordset](../../mfc/reference/crecordset-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).  
  
 [!code-cpp[NVC_MFCDatabase&#43;](../../mfc/codesnippet/cpp/dialog-data-exchange-functions-for-crecordview-and-cdaorecordview_1.cpp)]  

  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

