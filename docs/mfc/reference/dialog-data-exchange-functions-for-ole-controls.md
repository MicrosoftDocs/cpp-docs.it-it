---
title: Funzioni di scambio di dati di finestra di dialogo per OLE (controlli) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- AFXDISP/DDX_OCBool
- AFXDISP/DDX_OCBoolRO
- AFXDISP/DDX_OCColor
- AFXDISP/DDX_OCColorRO
- AFXDISP/DDX_OCFloat
- AFXDISP/DDX_OCFloatRO
- AFXDISP/DDX_OCInt
- AFXDISP/DDX_OCIntRO
- AFXDISP/DDX_OCShort
- AFXDISP/DDX_OCShortRO
- AFXDISP/DDX_OCText
- AFXDISP/DDX_OCTextRO
dev_langs:
- C++
helpviewer_keywords:
- OLE controls [MFC], DDX functions
- DDX (dialog data exchange), OLE support
ms.assetid: 7ef1f288-ff65-40d4-aad2-5497bc00bb27
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5dd7e1b9b18e8478cfa4e61a22806cf067cb3699
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="dialog-data-exchange-functions-for-ole-controls"></a>Funzioni DDX (Dialog Data Exchange) per controlli OLE
In questo argomento elenca le funzioni DDX_OC utilizzate per scambiare dati tra una proprietà di un controllo OLE in una finestra di dialogo, la visualizzazione di form o oggetto visualizzazione controllo e un membro dati di oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
### <a name="ddxoc-functions"></a>Funzioni DDX_OC  
  
|||  
|-|-|  
|[DDX_OCBool](#ddx_ocbool)|Gestisce il trasferimento di **BOOL** dati tra una proprietà di un controllo OLE e **BOOL** (membro dati).|  
|[DDX_OCBoolRO](#ddx_ocboolro)|Gestisce il trasferimento di **BOOL** dati tra una proprietà di sola lettura di un controllo OLE e **BOOL** (membro dati).|  
|[DDX_OCColor](#ddx_occolor)|Gestisce il trasferimento di **OLE_COLOR** dati tra una proprietà di un controllo OLE e un **OLE_COLOR** (membro dati).|  
|[DDX_OCColorRO](#ddx_occolorro)|Gestisce il trasferimento di **OLE_COLOR** dati tra una proprietà di sola lettura di un controllo OLE e un **OLE_COLOR** (membro dati).|  
|[DDX_OCFloat](#ddx_ocfloat)|Gestisce il trasferimento di **float** (o **doppie**) dei dati tra una proprietà di un controllo OLE e un **float** (o **doppie**) (membro dati).|  
|[DDX_OCFloatRO](#ddx_ocfloatro)|Gestisce il trasferimento di **float** (o **doppie**) dei dati tra una proprietà di sola lettura di un controllo OLE e un **float** (o **doppie**) dei dati membro.|  
|[DDX_OCInt](#ddx_ocint)|Gestisce il trasferimento di `int` (o **lungo**) dei dati tra una proprietà di un controllo OLE e un `int` (o **lungo**) (membro dati).|  
|[DDX_OCIntRO](#ddx_ocintro)|Gestisce il trasferimento di `int` (o **lungo**) dei dati tra una proprietà di sola lettura di un controllo OLE e un `int` (o **lungo**) (membro dati).|  
|[DDX_OCShort](#ddx_ocshort)|Gestisce il trasferimento di **breve** dati tra una proprietà di un controllo OLE e **breve** (membro dati).|  
|[DDX_OCShortRO](#ddx_ocshortro)|Gestisce il trasferimento di **breve** dati tra una proprietà di sola lettura di un controllo OLE e **breve** (membro dati).|  
|[DDX_OCText](#ddx_octext)|Gestisce il trasferimento di **CString** dati tra una proprietà di un controllo OLE e **CString** (membro dati).|  
|[DDX_OCTextRO](#ddx_octextro)|Gestisce il trasferimento di **CString** dati tra una proprietà di sola lettura di un controllo OLE e **CString** (membro dati).|  
  
##  <a name="ddx_ocbool"></a>  DDX_OCBool  
 Il `DDX_OCBool` funzione gestisce il trasferimento di **BOOL** dati tra una proprietà di un controllo OLE in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un **BOOL** membro dati nella finestra di dialogo, la visualizzazione di form, o oggetto visualizzazione controllo.  
  
```   
void AFXAPI DDX_OCBool(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    BOOL& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione:** afxdisp.h  
  
##  <a name="ddx_ocboolro"></a>  DDX_OCBoolRO  
 Il `DDX_OCBoolRO` funzione gestisce il trasferimento di **BOOL** dati tra una proprietà di sola lettura di un controllo OLE in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un **BOOL** membro dati nella finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo.  
  
```   
void AFXAPI DDX_OCBoolRO(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    BOOL& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_occolor"></a>  DDX_OCColor  
 Il `DDX_OCColor` funzione gestisce il trasferimento di **OLE_COLOR** dati tra una proprietà di un controllo OLE in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un **OLE_COLOR** membro dati nella finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo.  
  
```   
void AFXAPI DDX_OCColor(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    OLE_COLOR& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_occolorro"></a>  DDX_OCColorRO  
 Il `DDX_OCColorRO` funzione gestisce il trasferimento di **OLE_COLOR** dati tra una proprietà di sola lettura di un controllo OLE in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un **OLE_COLOR** membro dati di la finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo.  
  
```   
void AFXAPI DDX_OCColorRO(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    OLE_COLOR& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_ocfloat"></a>  DDX_OCFloat  
 Il `DDX_OCFloat` funzione gestisce il trasferimento di **float** (o **doppie**) dei dati tra una proprietà di un controllo OLE in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un **float** (o **doppie**) membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```   
void AFXAPI DDX_OCFloat(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    float& value);

void AFXAPI DDX_OCFloat(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    double& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_ocfloatro"></a>  DDX_OCFloatRO  
 Il `DDX_OCFloatRO` funzione gestisce il trasferimento di **float** (o **doppie**) dei dati tra una proprietà di sola lettura di un controllo OLE in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un  **float** (o **doppie**) membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```   
void AFXAPI DDX_OCFloatRO(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    float& value);

void AFXAPI DDX_OCFloatRO(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    double& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_ocint"></a>  DDX_OCInt  
 Il `DDX_OCInt` funzione gestisce il trasferimento di `int` (o **lungo**) dei dati tra una proprietà di un controllo OLE in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `int` (o **prolungata**) membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```   
void AFXAPI DDX_OCInt(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    int& value);

void AFXAPI DDX_OCInt(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    long& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_ocintro"></a>  DDX_OCIntRO  
 Il `DDX_OCIntRO` funzione gestisce il trasferimento di `int` (o **lungo**) dei dati tra una proprietà di sola lettura di un controllo OLE in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un `int` (o **lungo** ) membro dati dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```   
void AFXAPI DDX_OCIntRO(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    int& value);

void AFXAPI DDX_OCIntRO(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    long& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_ocshort"></a>  DDX_OCShort  
 Il `DDX_OCShort` funzione gestisce il trasferimento di dati short tra una proprietà di un controllo OLE nella finestra di dialogo, la visualizzazione di form, o oggetto visualizzazione controllo e un membro di dati short nella finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo.  
  
```   
void AFXAPI DDX_OCShort(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    short& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_ocshortro"></a>  DDX_OCShortRO  
 Il `DDX_OCShortRO` funzione gestisce il trasferimento di dati short tra una proprietà di sola lettura di un controllo OLE nella finestra di dialogo, la visualizzazione di form, o oggetto visualizzazione controllo e un membro di dati short nella finestra di dialogo, visualizzazione form o oggetto visualizzazione controllo.  
  
```   
void AFXAPI DDX_OCShortRO(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    short& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_octext"></a>  DDX_OCText  
 Il **DDX_OCText** funzione gestisce il trasferimento di **CString** dati tra una proprietà di un controllo OLE in una finestra di dialogo visualizzazione form o un oggetto visualizzazione controllo e un **CString** dati membro dell'oggetto visualizzazione controllo, la finestra di dialogo o visualizzazione form.  
  
```   
void AFXAPI DDX_OCText(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    CString& value); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un **CDataExchange** oggetto. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="ddx_octextro"></a>  DDX_OCTextRO  
 La funzione `DDX_OCTextRO` gestisce il trasferimento dei dati `CString` tra una proprietà di sola lettura di un controllo OLE in una finestra di dialogo, una visualizzazione form o un oggetto visualizzazione controllo e un membro dati `CString` della finestra di dialogo, della visualizzazione form o dell'oggetto visualizzazione controllo.  
  
```  
void AFXAPI DDX_OCTextRO(
    CDataExchange* pDX,  
    int nIDC,  
    DISPID dispid,  
    CString& value); 
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange` . Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `nIDC`  
 L'ID di un controllo OLE nella finestra di dialogo, nella visualizzazione form o nell'oggetto visualizzazione controllo.  
  
 `dispid`  
 L'ID di invio di una proprietà del controllo.  
  
 *valore*  
 Riferimento a una variabile membro della finestra di dialogo, alla visualizzazione form o all'oggetto visualizzazione controllo con cui vengono scambiati dati.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su DDX, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md).  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
