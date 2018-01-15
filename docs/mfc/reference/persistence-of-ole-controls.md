---
title: Persistenza di controlli OLE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.mfc.macros.ole
dev_langs: C++
helpviewer_keywords:
- OLE controls [MFC], persistence
- persistence, OLE controls
ms.assetid: 64f8dc80-f110-41af-b3ea-14948f6bfdf7
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3452bccd4bdf94c84e4549f99829aaa087e1803b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="persistence-of-ole-controls"></a>Persistenza di controlli OLE
Una funzionalità di controlli OLE, sia proprietà persistenza (serializzazione), che consente il controllo OLE leggere o scrivere i valori delle proprietà in e da un file o flusso. Un'applicazione contenitore è possibile utilizzare la serializzazione per archiviare i valori delle proprietà di un controllo anche dopo l'applicazione ha eliminato il controllo. I valori delle proprietà del controllo OLE possono essere letta dal file o flusso quando una nuova istanza del controllo viene creato in un secondo momento.  
  
### <a name="persistence-of-ole-controls"></a>Persistenza di controlli OLE  
  
|||  
|-|-|  
|[PX_Blob](#px_blob)|Scambia la proprietà di un controllo che archivia i dati oggetto binario di grandi dimensioni (BLOB).|  
|[PX_Bool](#px_bool)|Scambia una proprietà del controllo di tipo **BOOL**.|  
|[PX_Color](#px_color)|Scambia una proprietà color di un controllo.|  
|[PX_Currency](#px_currency)|Scambia una proprietà del controllo di tipo **CY**.|  
|[PX_DataPath](#px_datapath)|Scambia una proprietà del controllo di tipo `CDataPathProperty`.|  
|[PX_Double](#px_double)|Scambia una proprietà del controllo di tipo **double**.|  
|[PX_Font](#px_font)|Scambia una proprietà del carattere di un controllo.|  
|[PX_Float](#px_float)|Scambia una proprietà del controllo di tipo **float**.|  
|[PX_IUnknown](#px_iunknown)|Scambia una proprietà del controllo di tipo non definito.|  
|[PX_Long](#px_long)|Scambia una proprietà del controllo di tipo **lungo**.|  
|[PX_Picture](#px_picture)|Scambia una proprietà immagine di un controllo.|  
|[PX_Short](#px_short)|Scambia una proprietà del controllo di tipo **breve**.|  
|[PX_ULong](#px_ulong)|Scambia una proprietà del controllo di tipo **ULONG**.|  
|[PX_UShort](#px_ushort)|Scambia una proprietà del controllo di tipo **USHORT**.|  
|[PXstring](#px_string)|Scambia la proprietà di un controllo di stringa di caratteri.|  
|[PX_VBXFontConvert](#px_vbxfontconvert)|Scambia le proprietà correlate al carattere di un controllo VBX in una proprietà di tipo di carattere del controllo OLE.|  
  
 Inoltre, il `AfxOleTypeMatchGuid` funzione globale viene fornita da testare per trovare una corrispondenza tra un `TYPEDESC` e un GUID specifico.  
  
##  <a name="px_blob"></a>PX_Blob  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà che archivia i dati oggetto binario di grandi dimensioni (BLOB).  
  
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
 Il nome della proprietà da scambiare.  
  
 `hBlob`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `hBlobDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `hBlob`, a seconda dei casi. Questa variabile deve essere inizializzata su **NULL** prima di chiamare inizialmente `PX_Blob` per la prima volta (in genere, questa operazione può essere eseguita nel costruttore del controllo). Se `hBlobDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di inizializzazione o la serializzazione del controllo ha esito negativo.  
  
 Gli handle `hBlob` e `hBlobDefault` fare riferimento a un blocco di memoria che contiene quanto segue:  
  
-   Oggetto `DWORD` che contiene la lunghezza dei dati binari che segue, in byte, seguita immediatamente da  
  
-   Un blocco di memoria che contiene i dati binari reali.  
  
 Si noti che `PX_Blob` dovrà allocare memoria, con le finestre di [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) API, durante il caricamento delle proprietà di tipo BLOB. È responsabile per liberare la memoria. Pertanto, è necessario chiamare il distruttore del controllo [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579) su qualsiasi proprietà di tipo BLOB handle per liberare backup quantità di memoria allocata per il controllo.  
  
##  <a name="px_bool"></a>PX_Bool  
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
 Il nome della proprietà da scambiare.  
  
 `bValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `bDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `bValue`, a seconda dei casi. Se `bDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_color"></a>PX_Color  
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
 Il nome della proprietà da scambiare.  
  
 `clrValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `clrDefault`  
 Valore predefinito per la proprietà, come definito dallo sviluppatore del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `clrValue`, a seconda dei casi. Se `clrDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_currency"></a>PX_Currency  
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
 Il nome della proprietà da scambiare.  
  
 `cyValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `cyDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `cyValue`, a seconda dei casi. Se `cyDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_datapath"></a>PX_DataPath  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà del percorso dati di tipo [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md).  
  
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
 Il nome della proprietà da scambiare.  
  
 `dataPathProperty`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Le proprietà del percorso dati implementano proprietà di controllo asincrono. Il valore della proprietà dovrà leggere o scritto la variabile a cui fa riferimento `dataPathProperty`, a seconda dei casi.  
  
##  <a name="px_double"></a>PX_Double  
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
 Il nome della proprietà da scambiare.  
  
 `doubleValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `doubleDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `doubleValue`, a seconda dei casi. Se `doubleDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_font"></a>PX_Font  
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
 Il nome della proprietà da scambiare.  
  
 `font`  
 Un riferimento a un `CFontHolder` oggetto che contiene la proprietà del carattere.  
  
 `pFontDesc`  
 Un puntatore a un **FONTDESC** struttura che contiene i valori da utilizzare durante l'inizializzazione di stato predefinito della proprietà tipo di carattere, nel caso in cui `pFontDispAmbient` è **NULL**.  
  
 `pFontDispAmbient`  
 Un puntatore al **IFontDisp** interfaccia di un carattere da utilizzare durante l'inizializzazione di stato predefinito della proprietà font.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto da `font`, `CFontHolder` fanno riferimento, quando appropriato. Se `pFontDesc` e `pFontDispAmbient` specificato, vengono utilizzati per inizializzare il valore della proprietà predefinito, quando necessario. Questi valori vengono utilizzati se, per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo. In genere, si passa **NULL** per `pFontDesc` e il valore di ambiente restituito da `COleControl::AmbientFont` per `pFontDispAmbient`. Si noti che l'oggetto di tipo di carattere restituito dal `COleControl::AmbientFont` devono essere rilasciati da una chiamata al **IFontDisp::Release** funzione membro.  
  
##  <a name="px_float"></a>PX_Float  
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
 Il nome della proprietà da scambiare.  
  
 `floatValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `floatDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `floatValue`, a seconda dei casi. Se `floatDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_iunknown"></a>PX_IUnknown  
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
 Il nome della proprietà da scambiare.  
  
 *pUnk*  
 Riferimento a una variabile contenente l'interfaccia dell'oggetto che rappresenta il valore della proprietà.  
  
 `iid`  
 L'ID di interfaccia che indica quale interfaccia dell'oggetto di proprietà viene utilizzata dal controllo.  
  
 `pUnkDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento *pUnk*, a seconda dei casi. Se `pUnkDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_long"></a>PX_Long  
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
 Il nome della proprietà da scambiare.  
  
 `lValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `lDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `lValue`, a seconda dei casi. Se `lDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_picture"></a>PX_Picture  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro da serializzare o inizializzare una proprietà immagine del controllo.  
  
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
 Il nome della proprietà da scambiare.  
  
 `pict`  
 Riferimento a un [CPictureHolder](../../mfc/reference/cpictureholder-class.md) oggetto in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `pictDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `pict`, a seconda dei casi. Se `pictDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_short"></a>PX_Short  
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
 Il nome della proprietà da scambiare.  
  
 `sValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `sDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `sValue`, a seconda dei casi. Se `sDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_ulong"></a>PX_ULong  
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
 Nome della proprietà da scambiare.  
  
 `ulValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `ulDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `ulValue`, a seconda dei casi. Se `ulDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_ushort"></a>PX_UShort  
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
 Nome della proprietà da scambiare.  
  
 *usValue*  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 *usDefault*  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento *usValue*, a seconda dei casi. Se *usDefault* viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_string"></a>PXstring  
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
 Il nome della proprietà da scambiare.  
  
 `strValue`  
 Riferimento alla variabile in cui la proprietà viene archiviata (in genere una variabile membro della classe).  
  
 `strDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà viene letto o scritto per la variabile a cui fa riferimento `strValue`, a seconda dei casi. Se `strDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, il processo di serializzazione del controllo ha esito negativo.  
  
##  <a name="px_vbxfontconvert"></a>PX_VBXFontConvert  
 Chiamare questa funzione all'interno del controllo `DoPropExchange` funzione membro per inizializzare una proprietà di tipo di carattere mediante la conversione di proprietà relative ai caratteri di un controllo VBX.  
  
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
 La proprietà font del controllo OLE che conterrà le proprietà relative ai caratteri VBX convertite.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere utilizzata solo da un controllo OLE che è stato progettato come sostituzione per un controllo VBX. Quando l'ambiente di sviluppo di Visual Basic converte un form contenente un controllo VBX per utilizzare la sostituzione corrispondente controllo OLE, chiama il controllo **IDataObject::SetData** funzione, il passaggio di una proprietà impostata che contiene i dati della proprietà del controllo VBX. Questa operazione, di conseguenza, il controllo `DoPropExchange` funzione da richiamare. `DoPropExchange`può chiamare `PX_VBXFontConvert` per convertire le proprietà relative ai caratteri del controllo VBX (ad esempio, "tipo di carattere," "FontSize," e così via) nei componenti corrispondenti della proprietà font del controllo OLE.  
  
 `PX_VBXFontConvert`deve essere chiamato solo quando il controllo viene effettivamente viene convertito da un'applicazione di form VBX. Ad esempio:  
  
 [!code-cpp[NVC_MFCActiveXControl#14](../../mfc/codesnippet/cpp/persistence-of-ole-controls_1.cpp)]  
[!code-cpp[NVC_MFCActiveXControl#15](../../mfc/codesnippet/cpp/persistence-of-ole-controls_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
