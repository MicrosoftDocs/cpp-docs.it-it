---
title: Pagine delle proprietà (MFC) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- property page data transfer functions in MFC
- property pages [MFC], global MFC functions
ms.assetid: 734f88bc-c776-4136-9b0e-f45c761a45c1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d6d72a6dbe8480e37751b760961f466db02c0c0d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46403078"
---
# <a name="property-pages-mfc"></a>Pagine delle proprietà (MFC)

Pagine delle proprietà di visualizzare i valori correnti delle proprietà specifiche del controllo OLE in un'interfaccia personalizzabile, con interfaccia grafica per la visualizzazione e modifica supportando un meccanismo di mapping dei dati basato su dialog data exchange (DDX).

Questo meccanismo di mapping dei dati esegue il mapping per le singole proprietà del controllo OLE controlli di pagina delle proprietà. Il valore della proprietà del controllo riflette lo stato o il contenuto del controllo pagina proprietà. Il mapping tra le proprietà e i controlli di pagina di proprietà specificato da **DDP** chiamate di funzioni nella pagina delle proprietà `DoDataExchange` funzione membro. Di seguito è riportato un elenco delle **DDP** funzioni che scambiano dati immessi utilizzando la pagina delle proprietà del controllo:

### <a name="property-page-data-transfer"></a>Trasferimento di dati della pagina proprietà

|||
|-|-|
|[DDP_CBIndex](#ddp_cbindex)|Collega l'indice della stringa selezionati in una casella combinata con una proprietà del controllo.|
|[DDP_CBString](#ddp_cbstring)|Collega la stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere il valore della proprietà, ma non è necessario associarla completamente.|
|[DDP_CBStringExact](#ddp_cbstringexact)|Collega la stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata e il valore della proprietà stringa devono corrispondere esattamente.|
|[DDP_Check](#ddp_check)|Collega una casella di controllo nella pagina delle proprietà del controllo con una proprietà del controllo.|
|[DDP_LBIndex](#ddp_lbindex)|Collega l'indice della stringa selezionata nella casella di riepilogo con una proprietà del controllo.|
|[DDP_LBString](#ddp_lbstring)|Collega la stringa selezionata nella casella di riepilogo con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere il valore della proprietà, ma non deve necessariamente corrispondere completamente.|
|[DDP_LBStringExact](#ddp_lbstringexact)|Collega la stringa selezionata nella casella di riepilogo con una proprietà del controllo. La stringa selezionata e il valore della proprietà stringa devono corrispondere esattamente.|
|[DDP_PostProcessing](#ddp_postprocessing)|Termina il trasferimento dei valori delle proprietà dal controllo.|
|[DDP_Radio](#ddp_radio)|Un gruppo di pulsanti di opzione nella pagina delle proprietà del controllo con proprietà di un controllo collegamenti.|
|[DDP_TEXT](#ddp_text)|Collega un controllo nella pagina delle proprietà del controllo con una proprietà del controllo. Questa funzione gestisce diversi tipi di proprietà, ad esempio **doppie**, **breve**, BSTR, e **long**.|

Per altre informazioni sul `DoDataExchange` pagine di funzione e proprietà, vedere l'articolo [controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).

Di seguito è riportato un elenco delle macro utilizzate per creare e gestire pagine delle proprietà per un controllo OLE:

### <a name="property-pages"></a>Pagine delle proprietà

|||
|-|-|
|[BEGIN_PROPPAGEIDS](#begin_proppageids)|Inizia l'elenco di ID di pagina delle proprietà.|
|[END_PROPPAGEIDS](#end_proppageids)|Termina l'elenco di ID di pagina delle proprietà.|
|[PROPPAGEID](#proppageid)|Dichiara una pagina delle proprietà della classe del controllo.|

##  <a name="ddp_cbindex"></a>  DDP_CBIndex

Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà per sincronizzare il valore di una proprietà integer con l'indice della selezione corrente di una casella combinata nella pagina delle proprietà.

```
void AFXAPI DDP_CBIndex(
    CDataExchange* pDX,
    int id,
    int& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*ID*<br/>
L'ID risorsa della casella combinata finestra controllo associato alla proprietà del controllo specificata dalla *pszPropName*.

*Membro*<br/>
La variabile membro associata al controllo di pagina di proprietà specificato da *id* e la proprietà specificata dal *pszPropName*.

*pszPropName*<br/>
Il nome della proprietà della proprietà del controllo da scambiare con il controllo casella combinata specificato da *id*.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_CBIndex`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="ddp_cbstring"></a>  DDP_CBString

Chiamare questa funzione della pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà di stringa con la selezione corrente in una casella combinata nella pagina delle proprietà.

```
void AFXAPI DDP_CBString(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*ID*<br/>
L'ID risorsa della casella combinata finestra controllo associato alla proprietà del controllo specificata dalla *pszPropName*.

*Membro*<br/>
La variabile membro associata al controllo di pagina di proprietà specificato da *id* e la proprietà specificata dal *pszPropName*.

*pszPropName*<br/>
Il nome della proprietà della proprietà del controllo da scambiare con la stringa di casella combinata specificata da *id*.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_CBString`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="ddp_cbstringexact"></a>  DDP_CBStringExact

Chiamare questa funzione della pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà stringa che corrisponde esattamente alla selezione corrente in una casella combinata nella pagina delle proprietà.

```
void AFXAPI DDP_CBStringExact(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*ID*<br/>
L'ID risorsa della casella combinata finestra controllo associato alla proprietà del controllo specificata dalla *pszPropName*.

*Membro*<br/>
La variabile membro associata al controllo di pagina di proprietà specificato da *id* e la proprietà specificata dal *pszPropName*.

*pszPropName*<br/>
Il nome della proprietà della proprietà del controllo da scambiare con la stringa di casella combinata specificata da *id*.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_CBStringExact`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="ddp_check"></a>  DDP_Check

Chiamare questa funzione della pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore della proprietà con il controllo casella di controllo pagina proprietà associata.

```
void AFXAPI DDP_Check(
    CDataExchange* pDX,
    int id,
    int & member,
    LPCSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*ID*<br/>
L'ID risorsa del controllo casella di controllo associato con la proprietà del controllo specificata dalla *pszPropName*.

*Membro*<br/>
La variabile membro associata al controllo di pagina di proprietà specificato da *id* e la proprietà specificata dal *pszPropName*.

*pszPropName*<br/>
Il nome della proprietà della proprietà del controllo da scambiare con il controllo casella di controllo specificato dalla *id*.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_Check`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="ddp_lbindex"></a>  DDP_LBIndex

Chiamare questa funzione della pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà integer con l'indice della selezione corrente in una casella di riepilogo nella pagina delle proprietà.

```
void AFXAPI DDP_LBIndex(
    CDataExchange* pDX,
    int id,
    int& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*ID*<br/>
L'ID risorsa dell'elenco di controllo associato con la proprietà del controllo specificata dalla casella *pszPropName*.

*Membro*<br/>
La variabile membro associata al controllo di pagina di proprietà specificato da *id* e la proprietà specificata dal *pszPropName*.

*pszPropName*<br/>
Il nome della proprietà della proprietà del controllo da scambiare con la stringa di casella di elenco specificata da *id*.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_LBIndex`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="ddp_lbstring"></a>  DDP_LBString

Chiamare questa funzione della pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà di stringa con la selezione corrente in una casella di riepilogo nella pagina delle proprietà.

```
void AFXAPI DDP_LBString(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*ID*<br/>
L'ID risorsa dell'elenco di controllo associato con la proprietà del controllo specificata dalla casella *pszPropName*.

*Membro*<br/>
La variabile membro associata al controllo di pagina di proprietà specificato da *id* e la proprietà specificata dal *pszPropName*.

*pszPropName*<br/>
Il nome della proprietà della proprietà del controllo da scambiare con la stringa di casella di elenco specificata da *id*.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_LBString`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="ddp_lbstringexact"></a>  DDP_LBStringExact

Chiamare questa funzione della pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà stringa che corrisponde esattamente alla selezione corrente in una casella di riepilogo nella pagina delle proprietà.

```
void AFXAPI DDP_LBStringExact(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*ID*<br/>
L'ID risorsa dell'elenco di controllo associato con la proprietà del controllo specificata dalla casella *pszPropName*.

*Membro*<br/>
La variabile membro associata al controllo di pagina di proprietà specificato da *id* e la proprietà specificata dal *pszPropName*.

*pszPropName*<br/>
Il nome della proprietà della proprietà del controllo da scambiare con la stringa di casella di elenco specificata da *id*.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_LBStringExact`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="ddp_postprocessing"></a>  DDP_PostProcessing

Chiamare questa funzione della pagina delle proprietà `DoDataExchange` (funzione), per completare il trasferimento dei valori delle proprietà dalla pagina delle proprietà al controllo quando vengono salvati i valori delle proprietà.

```
void AFXAPI DDP_PostProcessing(CDataExchange * pDX);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata dopo il completamento di tutte le funzioni di scambio di dati. Ad esempio:

[!code-cpp[NVC_MFCAxCtl#15](../../mfc/reference/codesnippet/cpp/property-pages-mfc_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="ddp_radio"></a>  DDP_Radio

Chiamare questa funzione del controllo `DoPropExchange` (funzione) per sincronizzare il valore della proprietà con il controllo pulsante di opzione pagina proprietà associata.

```
void AFXAPI DDP_Radio(
    CDataExchange* pDX,
    int id,
    int & member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*ID*<br/>
L'ID risorsa dell'opzione pulsante controllo associato alla proprietà del controllo specificata dalla *pszPropName*.

*Membro*<br/>
La variabile membro associata al controllo di pagina di proprietà specificato da *id* e la proprietà specificata dal *pszPropName*.

*pszPropName*<br/>
Il nome della proprietà della proprietà del controllo da scambiare con il controllo pulsante di opzione specificato da *id*.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_Radio`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="ddp_text"></a>  DDP_TEXT

Chiamare questa funzione del controllo `DoDataExchange` (funzione) per sincronizzare il valore della proprietà con il controllo della pagina proprietà associata.

```
void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    BYTE & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    int & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    UINT & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    long & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    DWORD & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    float & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    double & member,
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,
    int id,
    CString & member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*ID*<br/>
L'ID risorsa del controllo associato con la proprietà del controllo specificata dalla *pszPropName*.

*Membro*<br/>
La variabile membro associata al controllo di pagina di proprietà specificato da *id* e la proprietà specificata dal *pszPropName*.

*pszPropName*<br/>
Il nome della proprietà della proprietà del controllo da scambiare con il controllo specificato dalla *id*.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_Text`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="begin_proppageids"></a>  BEGIN_PROPPAGEIDS

Inizia la definizione di elenco del controllo della pagina delle proprietà ID.

```
BEGIN_PROPPAGEIDS(class_name,  count)
```

### <a name="parameters"></a>Parametri

*CLASS_NAME*<br/>
Il nome della classe del controllo per la cui proprietà vengono specificate le pagine.

*count*<br/>
Il numero di pagine delle proprietà utilizzate dalla classe control.

### <a name="remarks"></a>Note

Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare l'elenco di pagine di proprietà con BEGIN_PROPPAGEIDS (macro), quindi aggiungere le voci di macro per ognuna delle pagine delle proprietà e completare l'elenco delle pagine proprietà con il END_PROPPAGEIDS macro.

Per altre informazioni sulle pagine delle proprietà, vedere l'articolo [controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="end_proppageids"></a>  END_PROPPAGEIDS

Termina la definizione dell'elenco di ID di pagina di proprietà.

```
END_PROPPAGEIDS(class_name)
```

### <a name="parameters"></a>Parametri

*CLASS_NAME*<br/>
Il nome della classe del controllo cui appartiene la pagina delle proprietà.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="proppageid"></a>  PROPPAGEID

Aggiunge una pagina delle proprietà per l'utilizzo dal controllo OLE.

```
PROPPAGEID(clsid)
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
L'ID univoco della classe pagina delle proprietà.

### <a name="remarks"></a>Note

Tutte le macro PROPPAGEID devono essere racchiuse tra le macro BEGIN_PROPPAGEIDS ed END_PROPPAGEIDS nel file di implementazione del controllo.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
