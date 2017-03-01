---
title: Finestra di dialogo standard routine di convalida dei dati | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- standard dialog, data validation routines
ms.assetid: 44dbc222-a897-4949-925e-7660e8964ccd
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
ms.openlocfilehash: 87cf0389b7b58579a8674d4075d2601186b1ae95
ms.lasthandoff: 02/24/2017

---
# <a name="standard-dialog-data-validation-routines"></a>Routine di convalida dei dati della finestra di dialogo standard
Questo argomento vengono elencate le routine di convalida (DDV) dati finestra di dialogo standard utilizzate per i controlli di finestra di dialogo comuni MFC.  
  
> [!NOTE]
>  Le routine di scambio dati finestra di dialogo standard sono definite in afxdd_.h di file di intestazione. Tuttavia, le applicazioni devono includere AFXWIN. h.  
  
### <a name="ddv-functions"></a>Funzioni DDV  
  
|||  
|-|-|  
|[DDV_MaxChars](#ddv_maxchars)|Verifica che il numero di caratteri in un valore di controllo specificato è limitato al massimo specificato.|  
|[DDV_MinMaxByte](#ddv_minmaxbyte)|Verifica di un valore di controllo specificato non superi una determinata **BYTE** intervallo.|  
|[DDV_MinMaxDateTime](#ddv_minmaxdatetime)|Verifica di che un valore di controllo specificato supera un intervallo di tempo specificato.|  
|[DDV_MinMaxDouble](#ddv_minmaxdouble)|Verifica di superare il valore di un determinato controllo un determinato **double** intervallo.|  
|[DDV_MinMaxDWord](#ddv_minmaxdword)|Verifica di un valore di controllo specificato non superi una determinata **DWORD** intervallo.|  
|[DDV_MinMaxFloat](#ddv_minmaxfloat)|Verifica di un valore di controllo specificato non superi una determinata **float** intervallo.|  
|[DDV_MinMaxInt](#ddv_minmaxint)|Verifica di un valore di controllo specificato non superi una determinata **int** intervallo.|  
|[DDV_MinMaxLong](#ddv_minmaxlong)|Verifica di superare il valore di un determinato controllo un determinato **lungo** intervallo.|  
|[DDV_MinMaxLongLong](#ddv_minmaxlonglong)|Verifica di un valore di controllo specificato non superi una determinata **LONGLONG** intervallo.|  
|[DDV_MinMaxMonth](#ddv_minmaxmonth)|Verifica di che un valore di controllo specificato supera un determinato intervallo di date.|  
|[DDV_MinMaxShort](#ddv_minmaxshort)|Verifica di superare il valore di un determinato controllo un determinato **breve** intervallo.|  
|[DDV_MinMaxSlider](#ddv_minmaxslider)|Verifica che il valore di un controllo dispositivo di scorrimento specificata rientra nell'intervallo specificato.|  
|[DDV_MinMaxUInt](#ddv_minmaxuint)|Verifica di un valore di controllo specificato non superi una determinata **UINT** intervallo.|  
|[DDV_MinMaxULongLong](#ddv_minmaxulonglong)|Verifica di superare il valore di un determinato controllo un determinato **ULONGLONG** intervallo.|  
  

  
##  <a name="a-nameddvmaxcharsa--ddvmaxchars"></a><a name="ddv_maxchars"></a>DDV_MaxChars  
 Chiamare `DDV_MaxChars` per verificare che la quantità di caratteri nel controllo associato *valore* non superi *nChars*.  
  
```   
void AFXAPI DDV_MaxChars(
    CDataExchange* pDX,  
    CString const& value,  
    int nChars); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `nChars`  
 Numero massimo di caratteri consentiti.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxbytea--ddvminmaxbyte"></a><a name="ddv_minmaxbyte"></a>DDV_MinMaxByte  
 Chiamare `DDV_MinMaxByte` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxByte(
    CDataExchange* pDX,  
    BYTE value,  
    BYTE minVal,  
    BYTE maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo **BYTE**) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo **BYTE**) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxdatetimea--ddvminmaxdatetime"></a><a name="ddv_minmaxdatetime"></a>DDV_MinMaxDateTime  
 Chiamare `DDV_MinMaxDateTime` per verificare che il valore di data e ora nella selezione data e ora di controllo ( [CDateTimeCtrl](../../mfc/reference/cdatetimectrl-class.md)) associata a *refValue* è compreso tra `refMinRange` e `refMaxRange`.  
  
```   
void AFXAPI DDV_MinMaxDateTime(
    CDataExchange* pDX,  
    CTime& refValue,  
    const CTime* refMinRange,  
    const CTime* refMaxRange);

void AFXAPI DDV_MinMaxDateTime(
    CDataExchange* pDX,  
    COleDateTime& refValue,  
    const COleDateTime* refMinRange,  
    const COleDateTime* refMaxRange); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione. Non è necessario eliminare l'oggetto.  
  
 *refValue*  
 Un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) o [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto associato a una variabile membro dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form. Questo oggetto contiene i dati da convalidare.  
  
 `refMinRange`  
 Valore minimo consentito valore data/ora.  
  
 `refMaxRange`  
 Valore di data/ora massima consentita.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxdoublea--ddvminmaxdouble"></a><a name="ddv_minmaxdouble"></a>DDV_MinMaxDouble  
 Chiamare `DDV_MinMaxDouble` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxDouble(
    CDataExchange* pDX,  
    double const& value,  
    double minVal,  
    double maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo **double**) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo **double**) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxdworda--ddvminmaxdword"></a><a name="ddv_minmaxdword"></a>DDV_MinMaxDWord  
 Chiamare `DDV_MinMaxDWord` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxDWord(
    CDataExchange* pDX,  
    DWORD const& value,  
    DWORD minVal,  
    DWORD maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo `DWORD`) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo `DWORD`) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxfloata--ddvminmaxfloat"></a><a name="ddv_minmaxfloat"></a>DDV_MinMaxFloat  
 Chiamare `DDV_MinMaxFloat` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxFloat(
    CDataExchange* pDX,  
    float value,  
    float minVal,  
    float maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo **float**) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo **float**) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxinta--ddvminmaxint"></a><a name="ddv_minmaxint"></a>DDV_MinMaxInt  
 Chiamare `DDV_MinMaxInt` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxInt(
    CDataExchange* pDX,  
    int value,  
    int minVal,  
    int maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo `int`) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo `int`) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxlonga--ddvminmaxlong"></a><a name="ddv_minmaxlong"></a>DDV_MinMaxLong  
 Chiamare `DDV_MinMaxLong` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxLong(
    CDataExchange* pDX,  
    long value,  
    long minVal,  
    long maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo **lungo**) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo **lungo**) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxlonglonga--ddvminmaxlonglong"></a><a name="ddv_minmaxlonglong"></a>DDV_MinMaxLongLong  
 Chiamare `DDV_MinMaxLongLong` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxLongLong(
    CDataExchange* pDX,  
    LONGLONG value,  
    LONGLONG minVal,  
    LONGLONG maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo **LONGLONG**) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo **LONGLONG**) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxmontha--ddvminmaxmonth"></a><a name="ddv_minmaxmonth"></a>DDV_MinMaxMonth  
 Chiamare `DDV_MinMaxMonth` per verificare che il valore di data e ora nel calendario mensile di controllo ( [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)) associata a *refValue* è compreso tra `refMinRange` e `refMaxRange`.  
  
```   
void AFXAPI DDV_MinMaxMonth(
    CDataExchange* pDX,  
    CTime& refValue,  
    const CTime* refMinRange,  
    const CTime* refMaxRange);

void AFXAPI DDV_MinMaxMonth(
    CDataExchange* pDX,  
    COleDateTime& refValue,  
    const COleDateTime* refMinRange,  
    const COleDateTime* refMaxRange); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *refValue*  
 Un riferimento a un oggetto di tipo `CTime` o `COleDateTime` associata a una variabile membro nella finestra di dialogo, visualizzazione form o controllo oggetto visualizzazione. Questo oggetto contiene i dati da convalidare. Passa a MFC in questo riferimento quando `DDV_MinMaxMonth` viene chiamato.  
  
 `refMinRange`  
 Valore minimo consentito valore data/ora.  
  
 `refMaxRange`  
 Valore di data/ora massima consentita.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxshorta--ddvminmaxshort"></a><a name="ddv_minmaxshort"></a>DDV_MinMaxShort  
 Chiamare `DDV_MinMaxShort` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxShort(
    CDataExchange* pDX,  
    short value,  
    short minVal,  
    short maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo **breve**) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo **breve**) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxslidera--ddvminmaxslider"></a><a name="ddv_minmaxslider"></a>DDV_MinMaxSlider  
 Chiamare `DDV_MinMaxSlider` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxSlider(
    CDataExchange* pDX,  
    DWORD value,  
    DWORD minVal,  
    DWORD maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento al valore da convalidare. Questo parametro contiene oppure Imposta posizione thumb corrente del controllo dispositivo di scorrimento.  
  
 `minVal`  
 Valore minimo consentito.  
  
 `maxVal`  
 Valore massimo consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md). Per informazioni sui controlli dispositivo di scorrimento, vedere [CSliderCtrl utilizzando](../../mfc/using-csliderctrl.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxuinta--ddvminmaxuint"></a><a name="ddv_minmaxuint"></a>DDV_MinMaxUInt  
 Chiamare `DDV_MinMaxUInt` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxUInt(
    CDataExchange* pDX,  
    UINT value,  
    UINT minVal,  
    UINT maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo **UINT**) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo **UINT**) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
  
##  <a name="a-nameddvminmaxulonglonga--ddvminmaxulonglong"></a><a name="ddv_minmaxulonglong"></a>DDV_MinMaxULongLong  
 Chiamare `DDV_MinMaxULongLong` per verificare che il valore nel controllo associato *valore* è compreso tra `minVal` e `maxVal`.  
  
```   
void AFXAPI DDV_MinMaxULongLong(
    CDataExchange* pDX,  
    ULONGLONG value,  
    ULONGLONG  minVal ,  
    ULONGLONG  maxVal); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 *value*  
 Un riferimento a una variabile membro dell'oggetto visualizzazione controllo con cui i dati vengono convalidati, la finestra di dialogo o visualizzazione form.  
  
 `minVal`  
 Valore minimo (di tipo **ULONGLONG**) è consentito.  
  
 `maxVal`  
 Valore massimo (di tipo **ULONGLONG**) è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdd_.h  
    
## <a name="see-also"></a>Vedere anche  
 [Routine di scambio dati della finestra di dialogo standard](../../mfc/reference/standard-dialog-data-exchange-routines.md)   
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

