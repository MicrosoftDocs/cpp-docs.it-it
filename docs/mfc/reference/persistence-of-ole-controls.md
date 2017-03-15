---
title: Persistenza di controlli OLE | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.ole
dev_langs:
- C++
helpviewer_keywords:
- OLE controls, persistence
- persistence, OLE controls
ms.assetid: 64f8dc80-f110-41af-b3ea-14948f6bfdf7
caps.latest.revision: 17
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
ms.openlocfilehash: b8bbf72a1ea16b37dabf88c5d41a34b1a03ba0d1
ms.lasthandoff: 02/24/2017

---
# <a name="persistence-of-ole-controls"></a>Persistenza di controlli OLE
Una funzionalità di controlli OLE, sia proprietà persistenza (serializzazione), che consente il controllo OLE leggere o scrivere i valori delle proprietà da e verso un flusso o file. Un'applicazione contenitore può utilizzare la serializzazione per archiviare valori di proprietà del controllo anche dopo che l'applicazione ha eliminato il controllo. I valori delle proprietà del controllo OLE possono essere letta dal file o flusso quando una nuova istanza del controllo viene creato in un secondo momento.  
  
### <a name="persistence-of-ole-controls"></a>Persistenza di controlli OLE  
  
|||  
|-|-|  
|[PX_Blob](#px_blob)|Scambia la proprietà di un controllo che archivia i dati dell'oggetto binario di grandi dimensioni (BLOB).|  
|[PX_Bool](#px_bool)|Scambia una proprietà del controllo di tipo **BOOL**.|  
|[PX_Color](#px_color)|Scambia una proprietà del colore di un controllo.|  
|[PX_Currency](#px_currency)|Scambia una proprietà del controllo di tipo **CY**.|  
|[PX_DataPath](#px_datapath)|Scambia una proprietà del controllo di tipo `CDataPathProperty`.|  
|[PX_Double](#px_double)|Scambia una proprietà del controllo di tipo **double**.|  
|[PX_Font](#px_font)|Scambia una font (proprietà) di un controllo.|  
|[PX_Float](#px_float)|Scambia una proprietà del controllo di tipo **float**.|  
|[PX_IUnknown](#px_iunknown)|Scambia una proprietà del controllo di tipo non definito.|  
|[PX_Long](#px_long)|Scambia una proprietà del controllo di tipo **lungo**.|  
|[PX_Picture](#px_picture)|Scambia una proprietà di un controllo immagine.|  
|[PX_Short](#px_short)|Scambia una proprietà del controllo di tipo **breve**.|  
|[PX_ULong](#px_ulong)|Scambia una proprietà del controllo di tipo **ULONG**.|  
|[PX_UShort](#px_ushort)|Scambia una proprietà del controllo di tipo **USHORT**.|  
|[PXstring](#px_string)|Scambia la proprietà di un controllo di stringa di caratteri.|  
|[PX_VBXFontConvert](#px_vbxfontconvert)|Scambia le proprietà relative ai caratteri di un controllo VBX in una proprietà di tipo di carattere del controllo OLE.|  
  
 Inoltre, il `AfxOleTypeMatchGuid` funzione globale viene fornito per individuare una corrispondenza tra un `TYPEDESC` e un GUID specifico.  
  
##  <a name="a-namepxbloba--pxblob"></a><a name="px_blob"></a>PX_Blob  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà che archivia i dati dell'oggetto binario di grandi dimensioni (BLOB).  
  
```  
 
BOOL  
PX_Blob(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    HGLOBAL& 
hBlob  ,  
    HGLOBAL 
hBlobDefault  
= NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `hBlob`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `hBlobDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `hBlob`, come appropriato. Questa variabile deve essere inizializzata a **NULL** prima di chiamare inizialmente `PX_Blob` per la prima volta (in genere, questa operazione può essere eseguita nel costruttore del controllo). Se `hBlobDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di inizializzazione o la serializzazione del controllo ha esito negativo.  
  
 Gli handle `hBlob` e `hBlobDefault` fare riferimento a un blocco di memoria che contiene gli elementi seguenti:  
  
-   Oggetto `DWORD` che contiene la lunghezza dei dati binari che segue, in byte, seguita immediatamente da  
  
-   Un blocco di memoria che contiene i dati binari reali.  
  
 Si noti che `PX_Blob` comporta l'allocazione memoria, utilizzando le finestre di [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) API, quando il caricamento delle proprietà di tipo BLOB. È responsabilità dell'utente per liberare la memoria. Pertanto, è necessario chiamare il distruttore del controllo [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579) su qualsiasi proprietà di tipo BLOB handle per liberare fino quantità di memoria allocata per il controllo.  
  
##  <a name="a-namepxboola--pxbool"></a><a name="px_bool"></a>PX_Bool  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo **BOOL**.  
  
```  
 
BOOL  
PX_Bool(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    BOOL& bValue);

BOOL  
PX_Bool(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    BOOL& 
bValue  ,  
    BOOL bDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `bValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `bDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `bValue`, come appropriato. Se `bDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxcolora--pxcolor"></a><a name="px_color"></a>PX_Color  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo **OLE_COLOR**.  
  
```  
 
BOOL PX_Color(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    OLE_COLOR& clrValue);

BOOL PX_Color(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    OLE_COLOR& 
clrValue  ,  
    OLE_COLOR 
clrDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `clrValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `clrDefault`  
 Valore predefinito per la proprietà, come definito dallo sviluppatore del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `clrValue`, come appropriato. Se `clrDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxcurrencya--pxcurrency"></a><a name="px_currency"></a>PX_Currency  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo **valuta**.  
  
```  
 
BOOL  
PX_Currency(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CY& cyValue);

BOOL  
PX_Currency(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CY& 
cyValue  ,  
    CY cyDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `cyValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `cyDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `cyValue`, come appropriato. Se `cyDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxdatapatha--pxdatapath"></a><a name="px_datapath"></a>PX_DataPath  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di percorso dati di tipo [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md).  
  
```  
 
BOOL  
PX_DataPath(
    CPropExchange* 
pPX,  
    LPCTSTR 
pszPropName,  
    CDataPathProperty& dataPathProperty);

BOOL  
PX_DataPath(
    CPropExchange* 
pPX,  
    CDataPathProperty& dataPathProperty);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `dataPathProperty`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Le proprietà del percorso dati implementano le proprietà di controllo asincrono. Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `dataPathProperty`, come appropriato.  
  
##  <a name="a-namepxdoublea--pxdouble"></a><a name="px_double"></a>PX_Double  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo **double**.  
  
```  
 
BOOL  
PX_Double(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    double& doubleValue);

BOOL  
PX_Double(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    double& 
doubleValue  ,  
    double doubleDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `doubleValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `doubleDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `doubleValue`, come appropriato. Se `doubleDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxfonta--pxfont"></a><a name="px_font"></a>PX_Font  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo di carattere.  
  
```  
 
BOOL  
PX_Font(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CFontHolder& 
font  ,  
    const 
FONTDESC  
FAR* 
pFontDesc  
= 
NULL,  
    LPFONTDISP 
pFontDispAmbient  
= NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `font`  
 Un riferimento a un `CFontHolder` oggetto che contiene la proprietà font.  
  
 `pFontDesc`  
 Un puntatore a un **FONTDESC** struttura contenente i valori da utilizzare durante l'inizializzazione di stato predefinito della proprietà font, nel caso in cui `pFontDispAmbient` è **NULL**.  
  
 `pFontDispAmbient`  
 Un puntatore per il **IFontDisp** interfaccia del tipo di carattere da utilizzare durante l'inizializzazione di stato predefinito della proprietà font.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per `font`, `CFontHolder` di riferimento, quando appropriato. Se `pFontDesc` e `pFontDispAmbient` sono specificati, vengono utilizzati per inizializzare il valore della proprietà predefinita, quando necessario. Questi valori vengono utilizzati se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo. In genere, si passa **NULL** per `pFontDesc` e il valore di ambiente restituito da `COleControl::AmbientFont` per `pFontDispAmbient`. Si noti che l'oggetto tipo di carattere restituito da `COleControl::AmbientFont` deve essere rilasciato da una chiamata al **IFontDisp::Release** funzione membro.  
  
##  <a name="a-namepxfloata--pxfloat"></a><a name="px_float"></a>PX_Float  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo **float**.  
  
```  
 
BOOL  
PX_Float(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    float& floatValue);

BOOL  
PX_Float(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    float& 
floatValue  ,  
    float floatDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `floatValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `floatDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `floatValue`, come appropriato. Se `floatDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxiunknowna--pxiunknown"></a><a name="px_iunknown"></a>PX_IUnknown  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà rappresentata da un oggetto con un **IUnknown**-interfaccia derivata.  
  
```  
 
BOOL  
PX_IUnknown(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    LPUNKNOWN& 
pUnk  ,  
    REFIID 
iid  ,  
    LPUNKNOWN 
pUnkDefault  
= NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 *pUnk*  
 Riferimento a una variabile che contiene l'interfaccia dell'oggetto che rappresenta il valore della proprietà.  
  
 `iid`  
 L'ID di interfaccia che indica quale interfaccia dell'oggetto di proprietà viene utilizzata dal controllo.  
  
 `pUnkDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento *pUnk*, come appropriato. Se `pUnkDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxlonga--pxlong"></a><a name="px_long"></a>PX_Long  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo **lungo**.  
  
```  
 
BOOL  
PX_Long(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    long& lValue);

BOOL  
PX_Long(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    long& 
lValue  ,  
    long lDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `lValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `lDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `lValue`, come appropriato. Se `lDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxpicturea--pxpicture"></a><a name="px_picture"></a>PX_Picture  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di immagine del controllo.  
  
```  
 
BOOL  
PX_Picture(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CPictureHolder& pict);

BOOL  
PX_Picture(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CPictureHolder& 
pict  ,  
    CPictureHolder& pictDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `pict`  
 Fare riferimento a un [CPictureHolder](../../mfc/reference/cpictureholder-class.md) oggetto in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `pictDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `pict`, come appropriato. Se `pictDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxshorta--pxshort"></a><a name="px_short"></a>PX_Short  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo **breve**.  
  
```  
 
BOOL  
PX_Short(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    short& sValue);

BOOL  
PX_Short(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    short& 
sValue  ,  
    short sDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `sValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `sDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `sValue`, come appropriato. Se `sDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxulonga--pxulong"></a><a name="px_ulong"></a>PX_ULong  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo **ULONG**.  
  
```  
 
BOOL  
PX_ULong(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    ULONG& ulValue);

BOOL  
PX_ULong(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    ULONG& 
ulValue  ,  
    long ulDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Nome della proprietà scambiate.  
  
 `ulValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `ulDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `ulValue`, come appropriato. Se `ulDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxushorta--pxushort"></a><a name="px_ushort"></a>PX_UShort  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà di tipo `unsigned` **breve**.  
  
```  
 
BOOL  
PX_UShort(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    USHORT& usValue);

BOOL  
PX_UShort(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    USHORT& 
usValue  ,  
    USHORT usDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Nome della proprietà scambiate.  
  
 *usValue*  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 *usDefault*  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento *usValue*, come appropriato. Se *usDefault* viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxstringa--pxstring"></a><a name="px_string"></a>PXstring  
 Chiamare questa funzione all'interno del controllo **DoPropExchange** funzione membro da serializzare o inizializzare una proprietà di stringa di caratteri.  
  
```  
 
BOOL  
PXstring(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CString& strValue);

BOOL  
PXstring(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CString& 
strValue  ,  
    CString strDefault);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `strValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `strDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `strValue`, come appropriato. Se `strDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="a-namepxvbxfontconverta--pxvbxfontconvert"></a><a name="px_vbxfontconvert"></a>PX_VBXFontConvert  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro per inizializzare una proprietà font convertendo le proprietà relative ai caratteri di un controllo VBX.  
  
```  
 
BOOL  
PX_VBXFontConvert(
    CPropExchange* 
pPX  ,  
    CFontHolder& font);  
```  
  
### <a name="parameters"></a>Parametri  
 `pPX`  
 Puntatore al [CPropExchange](../../mfc/reference/cpropexchange-class.md) oggetto (in genere passato come parametro a `DoPropExchange`).  
  
 `font`  
 La proprietà del controllo OLE che conterrà le proprietà relative ai caratteri VBX convertite.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere utilizzata solo da un controllo OLE che è stato progettato come una sostituzione diretta per un controllo VBX. Quando l'ambiente di sviluppo di Visual Basic converte un form contenente un controllo VBX per utilizzare la sostituzione corrispondente controllo OLE, chiama il controllo **IDataObject::SetData** funzione, passando un set di proprietà che contiene i dati della proprietà del controllo VBX. Questa operazione, di conseguenza, il controllo `DoPropExchange` funzione da richiamare. `DoPropExchange`può chiamare `PX_VBXFontConvert` per convertire le proprietà correlate al tipo di carattere del controllo VBX (ad esempio, "FontName," "FontSize", e così via) nei componenti corrispondenti della proprietà di tipo di carattere del controllo OLE.  
  
 `PX_VBXFontConvert`deve essere chiamato solo quando il controllo viene effettivamente convertito da un'applicazione form VBX. Ad esempio:  
  
 [!code-cpp[NVC_MFCActiveXControl&#14;](../../mfc/codesnippet/cpp/persistence-of-ole-controls_1.cpp)]  
[!code-cpp[NVC_MFCActiveXControl&#15;](../../mfc/codesnippet/cpp/persistence-of-ole-controls_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

