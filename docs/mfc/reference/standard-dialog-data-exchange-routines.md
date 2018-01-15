---
title: Routine di scambio di dati di finestra di dialogo standard | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: standard dialog, data exchange routines
ms.assetid: c6adb7f3-f9af-4cc5-a9ea-315c5b60ad1a
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ca598a9ac6a146457d24bcc80e54d003123d7dd4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="standard-dialog-data-exchange-routines"></a>Routine DDX (Dialog Data Exchange) standard
Questo argomento elenca le routine di exchange (DDX) di dati di finestra di dialogo standard utilizzate per i controlli di finestra di dialogo comuni MFC.  
  
> [!NOTE]
>  Le routine di finestra di dialogo standard dati exchange sono definite in afxdd_.h di file di intestazione. Tuttavia, le applicazioni devono includere AFXWIN. h.  
  
### <a name="ddx-functions"></a>Funzioni DDX  
  
|||  
|-|-|  
|[DDX_CBIndex](#ddx_cbindex)|Inizializza o recupera l'indice della selezione corrente di un controllo casella combinata.|  
|[DDX_CBString](#ddx_cbstring)|Inizializza o recupera il contenuto corrente del campo della modifica di un controllo casella combinata.|  
|[DDX_CBStringExact](#ddx_cbstringexact)|Inizializza o recupera il contenuto corrente del campo della modifica di un controllo casella combinata.|  
|[DDX_Check](#ddx_check)|Inizializza o recupera lo stato corrente di un controllo casella di controllo.|  
|[DDX_Control](#ddx_control)|Le sottoclassi un determinato controllo all'interno di una finestra di dialogo.|  
|[DDX_DateTimeCtrl](#ddx_datetimectrl)|Inizializza o recupera i dati di data o ora di un controllo selezione data e ora.|  
|[DDX_IPAddress](#ddx_ipaddress)|Inizializza o recupera il valore corrente di un controllo indirizzo IP.|  
|[DDX_LBIndex](#ddx_lbindex)|Inizializza o recupera l'indice della selezione corrente di un controllo casella di riepilogo.|  
|[DDX_LBString](#ddx_lbstring)|Inizializza o recupera la selezione corrente all'interno di un controllo casella di riepilogo.|  
|[DDX_LBStringExact](#ddx_lbstringexact)|Inizializza o recupera la selezione corrente all'interno di un controllo casella di riepilogo.|
|[DDX_ManagedControl](#ddx_managedcontrol)|Crea un controllo .NET corrispondente di ID di risorsa. del controllo|  
|[DDX_MonthCalCtrl](#ddx_monthcalctrl)|Inizializza o recupera il valore corrente di un controllo calendario mensile.|  
|[DDX_Radio](#ddx_radio)|Inizializza o recupera l'indice in base 0 del controllo di opzione che è attualmente selezionato all'interno di un gruppo di controllo di opzione.|  
|[DDX_Scroll](#ddx_scroll)|Inizializza o recupera la posizione corrente del cursore di un controllo di scorrimento.|  
|[DDX_Slider](#ddx_slider)|Inizializza o recupera la posizione corrente del cursore di un controllo dispositivo di scorrimento.|  
|[DDX_Text](#ddx_text)|Inizializza o recupera il valore corrente di un controllo di modifica.|  
  
##  <a name="ddx_cbindex"></a>DDX_CBIndex  
 Il `DDX_CBIndex` funzione gestisce il trasferimento di `int` dati tra un controllo casella combinata in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `int` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_CBIndex(
    CDataExchange* pDX,  
    int nIDC,  
    int& index);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo casella combinata associato alla proprietà del controllo.  
  
 *indice*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_CBIndex` viene chiamato, *indice* è impostato per l'indice della selezione corrente casella combinata. Se è selezionato alcun elemento, *indice* è impostato su 0.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_cbstring"></a>DDX_CBString  
 Il `DDX_CBString` funzione gestisce il trasferimento di `CString` dati tra il controllo di modifica di un controllo casella combinata in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `CString` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_CBString(
    CDataExchange* pDX,  
    int nIDC,  
    CString& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo casella combinata associato alla proprietà del controllo.  
  
 *valore*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_CBString` viene chiamato, *valore* è impostato per la selezione corrente della casella combinata. Se è selezionato alcun elemento, *valore* è impostata su una stringa di lunghezza zero.  
  
> [!NOTE]
>  Se la casella combinata è una casella di riepilogo a discesa, il valore scambiato è limitato a 255 caratteri.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_cbstringexact"></a>DDX_CBStringExact  
 Il `DDX_CBStringExact` funzione gestisce il trasferimento di `CString` dati tra il controllo di modifica di un controllo casella combinata in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `CString` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_CBStringExact(
    CDataExchange* pDX,  
    int nIDC,  
    CString& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo casella combinata associato alla proprietà del controllo.  
  
 *valore*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_CBStringExact` viene chiamato, *valore* è impostato per la selezione corrente della casella combinata. Se è selezionato alcun elemento, *valore* è impostata su una stringa di lunghezza zero.  
  
> [!NOTE]
>  Se la casella combinata è una casella di riepilogo a discesa, il valore scambiato è limitato a 255 caratteri.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_check"></a>DDX_Check  
 Il `DDX_Check` funzione gestisce il trasferimento di `int` dati tra un controllo casella di controllo in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `int` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_Check(
    CDataExchange* pDX,  
    int nIDC,  
    int& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo casella di controllo associato alla proprietà del controllo.  
  
 *valore*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_Check` viene chiamato, *valore* è impostato sullo stato corrente del controllo casella di controllo. Per un elenco dei valori di stato possibili, vedere [BM_GETCHECK](http://msdn.microsoft.com/library/windows/desktop/bb775986) in Windows SDK.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_control"></a>DDX_Control  
 Il `DDX_Control` funzione sottoclassi di controllo, specificato da `nIDC`, dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_Control(
    CDataExchange* pDX,  
    int nIDC,  
    CWnd& rControl);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `nIDC`  
 L'ID di risorsa del controllo da sottoclassare.  
  
 *rControl*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo correlate al controllo specificato, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
 Il `pDX` oggetto viene fornito dal framework quando il `DoDataExchange` funzione viene chiamata. Pertanto, `DDX_Control` deve essere chiamato solo all'interno dell'override di `DoDataExchange`.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_datetimectrl"></a>DDX_DateTimeCtrl  
 Il `DDX_DateTimeCtrl` funzione gestisce il trasferimento dei dati di data o ora tra un controllo selezione data e ora ( [CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)) in un oggetto visualizzazione finestra di dialogo casella o di modulo e un [CTime](../../atl-mfc-shared/reference/ctime-class.md) o un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) membro dati dell'oggetto visualizzazione di casella o modulo di finestra di dialogo.  
  
```  
void AFXAPI DDX_DateTimeCtrl(
    CDataExchange* pDX,  
    int nIDC,  
    CTime& value);

void AFXAPI DDX_DateTimeCtrl(
    CDataExchange* pDX,  
    int nIDC,  
    COleDateTime& value);

void AFXAPI DDX_DateTimeCtrl(
    CDataExchange* pDX,  
    int nIDC,  
    CString& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare l'oggetto.  
  
 `nIDC`  
 L'ID di risorsa del controllo selezione data e ora associato alla variabile membro.  
  
 *valore*  
 Nelle prime due versioni, un riferimento a un `CTime` o `COleDateTime` variabile membro, la finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo con cui i dati vengono scambiati. Nella terza versione, un riferimento a un `CString` oggetto visualizzazione controllo membro di dati.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_DateTimeCtrl` viene chiamato, *valore* è impostato su corrente dello stato di controllo e controllo selezione ora o la data è impostato su *valore*, a seconda della direzione dello scambio.  
  
 Nella terza versione precedente, `DDX_DateTimeCtrl` gestisce il trasferimento di `CString` controllo dati tra una data e ora e un [CString](../../atl-mfc-shared/reference/cstringt-class.md) membro dati dell'oggetto visualizzazione controllo. La stringa viene formattata utilizzando le regole di impostazioni locali correnti per la formattazione di date e ore.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  

   

 
## <a name="ddx_managedcontrol"></a>DDX_ManagedControl
Crea un controllo .NET corrispondente di ID di risorsa. del controllo  
   
### <a name="syntax"></a>Sintassi  
  ```  
template <typename T>  
void DDX_ManagedControl(  
     CDataExchange* pDX,   
     int nIDC,   
     CWinFormsControl<T>& control );  
```
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange (classe)](cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo associato alla proprietà del controllo.  
  
 `control`  
 Un riferimento a un [classe CWinFormsControl](cwinformscontrol-class.md) oggetto.  
   
### <a name="remarks"></a>Note  
 `DDX_ManagedControl`chiamate [CWinFormsControl::CreateManagedControl](cwinformscontrol-class.md#createmanagedcontrol) per creare un controllo che corrisponde all'ID di controllo di risorsa. Utilizzare `DDX_ManagedControl` per creare controlli da ID risorsa [CDialog](cdialog-class.md#oninitdialog). Per lo scambio di dati, non è necessario utilizzare le funzioni DDX/DDV con controlli Windows Form.  
  
 Per ulteriori informazioni, vedere [procedura: eseguire associazione dati DDX/DDV con Windows Form](../../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h  
   
### <a name="see-also"></a>Vedere anche  
 [CWinFormsControl::CreateManagedControl](cwinformscontrol-class.md#createmanagedcontrol)   
 [CDialog](cdialog-class.md#oninitdialog)
 

  
##  <a name="ddx_ipaddress"></a>DDX_IPAddress  
 Il `DDX_IPAddress` funzione gestisce il trasferimento dei dati tra un controllo indirizzo IP e un membro di dati dell'oggetto visualizzazione controllo.  
  
```  
void AFXAPI DDX_IPAddress(
    CDataExchange* pDX,  
    int nIDC,  
    DWORD& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo indirizzo IP associato alla proprietà del controllo.  
  
 *valore*  
 Un riferimento di `DWORD` contenente il valore del campo di quattro del controllo indirizzo IP. I campi vengono riempiti o letto come segue.  
  
|Campo|Contenente il valore del campo di bit|  
|-----------|-------------------------------------|  
|3|da 0 a 7|  
|2|8 e 15|  
|1|16 e 23|  
|0|24 a 31|  
  
 Utilizzare Win32 [IPM_GETADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb761378) per leggere il valore oppure usare [IPM_SETADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb761380) per riempire il valore. Questi messaggi sono descritti in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_IPAddress` viene chiamato, *valore* viene letto dal controllo indirizzo IP, o *valore* viene scritto il controllo, a seconda della direzione dello scambio.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_lbindex"></a>DDX_LBIndex  
 Il `DDX_LBIndex` funzione gestisce il trasferimento di `int` dati tra un controllo casella di riepilogo in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `int` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_LBIndex(
    CDataExchange* pDX,  
    int nIDC,  
    int& index);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa di controllo della casella di riepilogo associato alla proprietà del controllo.  
  
 *indice*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_LBIndex` viene chiamato, *indice* è impostato per l'indice della selezione di casella di elenco corrente. Se è selezionato alcun elemento, *indice* è impostato su -1.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_lbstring"></a>DDX_LBString  
 Il `DDX_LBString` funzione gestisce il trasferimento di `CString` dati tra un controllo casella di riepilogo in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `CString` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_LBString(
    CDataExchange* pDX,  
    int nIDC,  
    CString& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa di controllo della casella di riepilogo associato alla proprietà del controllo.  
  
 *valore*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_LBString` viene chiamato per trasferire i dati in un controllo casella di riepilogo, il primo elemento nel controllo il cui inizio corrisponde *valore* è selezionata. (In modo che corrisponda all'intero elemento, piuttosto che solo un prefisso, utilizzare [DDX_LBStringExact](#ddx_lbstringexact).) Se non sono presenti corrispondenze, è selezionato alcun elemento. La corrispondenza è tra maiuscole e minuscole.  
  
 Quando `DDX_LBString` viene chiamato per trasferire dati da un controllo casella di riepilogo, *valore* è impostato per la selezione della casella elenco corrente. Se è selezionato alcun elemento, *valore* è impostata su una stringa di lunghezza zero.  
  
> [!NOTE]
>  Se la casella di riepilogo è una casella di riepilogo a discesa, il valore scambiato è limitato a 255 caratteri.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_lbstringexact"></a>DDX_LBStringExact  
 Il `DDX_CBStringExact` funzione gestisce il trasferimento di `CString` dati tra il controllo di modifica di un controllo casella di riepilogo in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `CString` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_LBStringExact(
    CDataExchange* pDX,  
    int nIDC,  
    CString& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa di controllo della casella di riepilogo associato alla proprietà del controllo.  
  
 *valore*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_LBStringExact` viene chiamato per trasferire i dati in un controllo casella di riepilogo, il primo elemento nel controllo che corrisponde a *valore* è selezionata. (Per corrispondere solo un prefisso anziché l'intero elemento, utilizzare [DDX_LBString](#ddx_lbstring).) Se non sono presenti corrispondenze, è selezionato alcun elemento. La corrispondenza è tra maiuscole e minuscole.  
  
 Quando `DDX_CBStringExact` viene chiamato per trasferire dati da un controllo casella di riepilogo, *valore* è impostato per la selezione della casella elenco corrente. Se è selezionato alcun elemento, *valore* è impostata su una stringa di lunghezza zero.  
  
> [!NOTE]
>  Se la casella di riepilogo è una casella di riepilogo a discesa, il valore scambiato è limitato a 255 caratteri.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_monthcalctrl"></a>DDX_MonthCalCtrl  
 Il `DDX_MonthCalCtrl` funzione gestisce il trasferimento dei dati di data tra un controllo calendario mensile ( [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)) in una finestra di dialogo, la visualizzazione di form, o oggetto visualizzazione controllo e un [CTime](../../atl-mfc-shared/reference/ctime-class.md) o un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_MonthCalCtrl(
    CDataExchange* pDX,  
    int nIDC,  
    CTime& value);

void AFXAPI DDX_MonthCalCtrl(
    CDataExchange* pDX,  
    int nIDC,  
    COleDateTime& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare l'oggetto.  
  
 `nIDC`  
 L'ID di risorsa del controllo calendario mensile associati con la variabile membro.  
  
 *valore*  
 Un riferimento a un `CTime` o `COleDateTime` variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il controllo gestisce solo un valore di Data. I campi dell'ora nell'oggetto ora sono set in modo da riflettere l'ora di creazione della finestra del controllo o tutto il tempo è stato impostato nel controllo con una chiamata a `CMonthCalCtrl::SetCurSel`.  
  
 Quando `DDX_MonthCalCtrl` viene chiamato, *valore* è impostato sullo stato corrente del controllo calendario mensile.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_radio"></a>DDX_Radio  
 Il `DDX_Radio` funzione gestisce il trasferimento di `int` dati tra un gruppo di controllo di opzione in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `int` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form. Il valore di `int` membro dati viene determinato in base alla quale pulsante di opzione è selezionata pulsante all'interno del gruppo.  
  
```  
void AFXAPI DDX_Radio(
    CDataExchange* pDX,  
    int nIDC,  
    int& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 ID del primo controllo radio nel gruppo di risorse.  
  
 *valore*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui vengono scambiati i dati, la finestra di dialogo o visualizzazione form.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_Radio` viene chiamato, *valore* è impostato sullo stato corrente del gruppo di controllo di opzione. Il valore è impostato su un indice in base 0 del controllo di opzione che è attualmente in corso o -1 se i controlli di opzione non vengono controllate.  
  
 Ad esempio, nel caso in cui è il primo pulsante di opzione nel gruppo selezionato (il pulsante con lo stile WS_GROUP) il valore della `int` membro è 0 e così via.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_scroll"></a>DDX_Scroll  
 Il `DDX_Scroll` funzione gestisce il trasferimento di `int` dati tra un controllo barra di scorrimento in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `int` il membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_Scroll(
    CDataExchange* pDX,  
    int nIDC,  
    int& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo barra di scorrimento associato alla proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_Scroll` viene chiamato, *valore* è impostato per la posizione corrente del cursore del controllo. Per ulteriori informazioni sui valori associato alla posizione corrente del cursore del controllo, vedere [GetScrollPos](http://msdn.microsoft.com/library/windows/desktop/bb787585) in Windows SDK.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_slider"></a>DDX_Slider  
 Il `DDX_Slider` funzione gestisce il trasferimento di `int` dati tra un controllo dispositivo di scorrimento in una vista nella casella o modulo di finestra di dialogo e un `int` membro dati dell'oggetto visualizzazione di casella o modulo di finestra di dialogo.  
  
```  
void AFXAPI DDX_Slider(
    CDataExchange* pDX,  
    int nIDC,  
    int& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di risorsa del controllo dispositivo di scorrimento.  
  
 *valore*  
 Un riferimento al valore da scambiare. Questo parametro contiene o imposta la posizione corrente del controllo dispositivo di scorrimento.  
  
### <a name="remarks"></a>Note  
 Quando `DDX_Slider` viene chiamato, *valore* è impostato per la posizione corrente del cursore del controllo, o il valore riceve la posizione, a seconda della direzione dello scambio.  
  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [CSliderCtrl utilizzando](../../mfc/using-csliderctrl.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="ddx_text"></a>DDX_Text  
 Il `DDX_Text` funzione gestisce il trasferimento di `int`, **UINT**, **lungo**, `DWORD`, `CString`, **float**, o  **Double** dati tra un controllo di modifica in una finestra di dialogo visualizzazione form o controllo di visualizzazione e un [CString](../../atl-mfc-shared/reference/cstringt-class.md) membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```  
void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    BYTE& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    short& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    int& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    UINT& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    long& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    DWORD& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    CString& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    float& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    double& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    COleCurrency& value);

void AFXAPI DDX_Text(
    CDataExchange* pDX,  
    int nIDC,  
    COleDateTime& value);  
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo di modifica nell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
 *valore*  
 Un riferimento a un membro dati nell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form. Il tipo di dati *valore* varia a seconda di quale delle versioni di overload del `DDX_Text` utilizzare.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  

## <a name="see-also"></a>Vedere anche  
 [Finestra di dialogo standard routine di convalida dei dati](../../mfc/reference/standard-dialog-data-validation-routines.md)   
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
