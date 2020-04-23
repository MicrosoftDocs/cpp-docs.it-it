---
title: Pagine delle proprietà (MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- property page data transfer functions in MFC
- property pages [MFC], global MFC functions
ms.assetid: 734f88bc-c776-4136-9b0e-f45c761a45c1
ms.openlocfilehash: 6456a192a502a0fcc032eaefc667c90ecec86d42
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751147"
---
# <a name="property-pages-mfc"></a>Pagine delle proprietà (MFC)

Le pagine delle proprietà visualizzano i valori correnti di proprietà specifiche del controllo OLE in un'interfaccia grafica personalizzabile per la visualizzazione e la modifica supportando un meccanismo di mapping dei dati basato su DDX (Dialog Data Exchange).

Questo meccanismo di mapping dei dati esegue il mapping dei controlli della pagina delle proprietà alle singole proprietà del controllo OLE. Il valore della proprietà del controllo riflette lo stato o il contenuto del controllo della pagina delle proprietà. Il mapping tra le proprietà e **DDP_** i controlli della pagina `DoDataExchange` delle proprietà viene specificato da DDP_ chiamate di funzione nella funzione membro della pagina delle proprietà. Di seguito è riportato un elenco di funzioni **DDP_** che scambiano i dati immessi utilizzando la pagina delle proprietà del controllo:

### <a name="property-page-data-transfer"></a>Trasferimento dati pagina delle proprietà

|||
|-|-|
|[DDP_CBIndex](#ddp_cbindex)|Collega l'indice della stringa selezionata in una casella combinata con la proprietà di un controllo.|
|[DDP_CBString](#ddp_cbstring)|Collega la stringa selezionata in una casella combinata con la proprietà di un controllo. La stringa selezionata può iniziare con le stesse lettere del valore della proprietà, ma non è necessario che corrisponda completamente.|
|[DDP_CBStringExact](#ddp_cbstringexact)|Collega la stringa selezionata in una casella combinata con la proprietà di un controllo. La stringa selezionata e il valore stringa della proprietà devono corrispondere esattamente.|
|[DDP_Check](#ddp_check)|Collega una casella di controllo nella pagina delle proprietà del controllo con la proprietà di un controllo.|
|[DDP_LBIndex](#ddp_lbindex)|Collega l'indice della stringa selezionata in una casella di riepilogo con la proprietà di un controllo.|
|[DDP_LBString](#ddp_lbstring)|Collega la stringa selezionata in una casella di riepilogo con la proprietà di un controllo. La stringa selezionata può iniziare con le stesse lettere del valore della proprietà, ma non deve necessariamente corrispondere completamente.|
|[DDP_LBStringExact](#ddp_lbstringexact)|Collega la stringa selezionata in una casella di riepilogo con la proprietà di un controllo. La stringa selezionata e il valore stringa della proprietà devono corrispondere esattamente.|
|[DDP_PostProcessing](#ddp_postprocessing)|Termina il trasferimento dei valori delle proprietà dal controllo.|
|[DDP_Radio](#ddp_radio)|Collega un gruppo di pulsanti di opzione nella pagina delle proprietà del controllo con la proprietà di un controllo.|
|[DDP_Text](#ddp_text)|Collega un controllo nella pagina delle proprietà del controllo con la proprietà di un controllo. Questa funzione gestisce diversi tipi di proprietà, ad esempio **double**, **short**, BSTR e **long**.|

Per ulteriori informazioni `DoDataExchange` sulle pagine delle funzioni e delle proprietà, vedere l'articolo [Controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).

Di seguito è riportato un elenco delle macro utilizzate per creare e gestire le pagine delle proprietà per un controllo OLE:

### <a name="property-pages"></a>Pagine delle proprietà

|||
|-|-|
|[BEGIN_PROPPAGEIDS](#begin_proppageids)|Avvia l'elenco degli ID pagina delle proprietà.|
|[END_PROPPAGEIDS](#end_proppageids)|Termina l'elenco degli ID delle pagine delle proprietà.|
|[PROPPAGEID](#proppageid)|Dichiara una pagina delle proprietà della classe del controllo.|

## <a name="ddp_cbindex"></a><a name="ddp_cbindex"></a>DDP_CBIndex

Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà per sincronizzare il valore di una proprietà integer con l'indice della selezione corrente di una casella combinata nella pagina delle proprietà.

```cpp
void AFXAPI DDP_CBIndex(
    CDataExchange* pDX,
    int id,
    int& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*id*<br/>
ID risorsa del controllo casella combinata associato alla proprietà del controllo specificata da *pszPropName*.

*Membro*<br/>
Variabile membro associata al controllo della pagina delle proprietà specificato *dall'ID* e dalla proprietà specificata da *pszPropName*.

*pszPropName (nome spannima)*<br/>
Nome della proprietà del controllo da scambiare con il controllo casella combinata specificato da *id*.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_CBIndex`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="ddp_cbstring"></a><a name="ddp_cbstring"></a>DDP_CBString

Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà per sincronizzare il valore di una proprietà stringa con la selezione corrente in una casella combinata nella pagina delle proprietà.

```cpp
void AFXAPI DDP_CBString(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*id*<br/>
ID risorsa del controllo casella combinata associato alla proprietà del controllo specificata da *pszPropName*.

*Membro*<br/>
Variabile membro associata al controllo della pagina delle proprietà specificato *dall'ID* e dalla proprietà specificata da *pszPropName*.

*pszPropName (nome spannima)*<br/>
Nome della proprietà del controllo da scambiare con la stringa della casella combinata specificata da *id*.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_CBString`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="ddp_cbstringexact"></a><a name="ddp_cbstringexact"></a>DDP_CBStringExact

Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà per sincronizzare il valore di una proprietà stringa che corrisponde esattamente alla selezione corrente in una casella combinata nella pagina delle proprietà.

```cpp
void AFXAPI DDP_CBStringExact(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*id*<br/>
ID risorsa del controllo casella combinata associato alla proprietà del controllo specificata da *pszPropName*.

*Membro*<br/>
Variabile membro associata al controllo della pagina delle proprietà specificato *dall'ID* e dalla proprietà specificata da *pszPropName*.

*pszPropName (nome spannima)*<br/>
Nome della proprietà del controllo da scambiare con la stringa della casella combinata specificata da *id*.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_CBStringExact`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="ddp_check"></a><a name="ddp_check"></a>DDP_Check

Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà per sincronizzare il valore della proprietà con il controllo casella di controllo della pagina delle proprietà associata.

```cpp
void AFXAPI DDP_Check(
    CDataExchange* pDX,
    int id,
    int & member,
    LPCSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*id*<br/>
ID risorsa del controllo casella di controllo associato alla proprietà del controllo specificata da *pszPropName*.

*Membro*<br/>
Variabile membro associata al controllo della pagina delle proprietà specificato *dall'ID* e dalla proprietà specificata da *pszPropName*.

*pszPropName (nome spannima)*<br/>
Nome della proprietà del controllo da scambiare con il controllo casella di controllo specificato da *id*.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_Check`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="ddp_lbindex"></a><a name="ddp_lbindex"></a>DDP_LBIndex

Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà per sincronizzare il valore di una proprietà integer con l'indice della selezione corrente in una casella di riepilogo nella pagina delle proprietà.

```cpp
void AFXAPI DDP_LBIndex(
    CDataExchange* pDX,
    int id,
    int& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*id*<br/>
ID risorsa del controllo casella di riepilogo associato alla proprietà del controllo specificata da *pszPropName*.

*Membro*<br/>
Variabile membro associata al controllo della pagina delle proprietà specificato *dall'ID* e dalla proprietà specificata da *pszPropName*.

*pszPropName (nome spannima)*<br/>
Nome della proprietà del controllo da scambiare con la stringa della casella di riepilogo specificata da *id*.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_LBIndex`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="ddp_lbstring"></a><a name="ddp_lbstring"></a>DDP_LBString

Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà per sincronizzare il valore di una proprietà stringa con la selezione corrente in una casella di riepilogo nella pagina delle proprietà.

```cpp
void AFXAPI DDP_LBString(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*id*<br/>
ID risorsa del controllo casella di riepilogo associato alla proprietà del controllo specificata da *pszPropName*.

*Membro*<br/>
Variabile membro associata al controllo della pagina delle proprietà specificato *dall'ID* e dalla proprietà specificata da *pszPropName*.

*pszPropName (nome spannima)*<br/>
Nome della proprietà del controllo da scambiare con la stringa della casella di riepilogo specificata da *id*.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_LBString`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="ddp_lbstringexact"></a><a name="ddp_lbstringexact"></a>DDP_LBStringExact

Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà per sincronizzare il valore di una proprietà stringa che corrisponde esattamente alla selezione corrente in una casella di riepilogo nella pagina delle proprietà.

```cpp
void AFXAPI DDP_LBStringExact(
    CDataExchange* pDX,
    int id,
    CString& member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*id*<br/>
ID risorsa del controllo casella di riepilogo associato alla proprietà del controllo specificata da *pszPropName*.

*Membro*<br/>
Variabile membro associata al controllo della pagina delle proprietà specificato *dall'ID* e dalla proprietà specificata da *pszPropName*.

*pszPropName (nome spannima)*<br/>
Nome della proprietà del controllo da scambiare con la stringa della casella di riepilogo specificata da *id*.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_LBStringExact`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="ddp_postprocessing"></a><a name="ddp_postprocessing"></a>DDP_PostProcessing

Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà, per completare il trasferimento dei valori delle proprietà dalla pagina delle proprietà al controllo quando vengono salvati i valori delle proprietà.

```cpp
void AFXAPI DDP_PostProcessing(CDataExchange * pDX);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata dopo il completamento di tutte le funzioni di scambio dati. Ad esempio:

[!code-cpp[NVC_MFCAxCtl#15](../../mfc/reference/codesnippet/cpp/property-pages-mfc_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="ddp_radio"></a><a name="ddp_radio"></a>DDP_Radio

Chiamare questa funzione nella `DoPropExchange` funzione del controllo per sincronizzare il valore della proprietà con il controllo pulsante di opzione della pagina delle proprietà associato.

```cpp
void AFXAPI DDP_Radio(
    CDataExchange* pDX,
    int id,
    int & member,
    LPCTSTR pszPropName);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.

*id*<br/>
ID risorsa del controllo pulsante di opzione associato alla proprietà del controllo specificato da *pszPropName*.

*Membro*<br/>
Variabile membro associata al controllo della pagina delle proprietà specificato *dall'ID* e dalla proprietà specificata da *pszPropName*.

*pszPropName (nome spannima)*<br/>
Nome della proprietà del controllo da scambiare con il controllo pulsante di opzione specificato da *id*.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_Radio`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="ddp_text"></a><a name="ddp_text"></a>DDP_Text

Chiamare questa funzione nella `DoDataExchange` funzione del controllo per sincronizzare il valore della proprietà con il controllo della pagina delle proprietà associato.

```cpp
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

*id*<br/>
ID risorsa del controllo associato alla proprietà del controllo specificata da *pszPropName*.

*Membro*<br/>
Variabile membro associata al controllo della pagina delle proprietà specificato *dall'ID* e dalla proprietà specificata da *pszPropName*.

*pszPropName (nome spannima)*<br/>
Nome della proprietà del controllo da scambiare con il controllo specificato da *id*.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_Text`.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="begin_proppageids"></a><a name="begin_proppageids"></a>BEGIN_PROPPAGEIDS

Avvia la definizione dell'elenco di ID pagina delle proprietà del controllo.

```
BEGIN_PROPPAGEIDS(class_name,  count)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe del controllo per la quale vengono specificate le pagine delle proprietà.

*count*<br/>
Numero di pagine delle proprietà utilizzate dalla classe del controllo.

### <a name="remarks"></a>Osservazioni

Nel file di implementazione (cpp) che definisce le funzioni membro per la classe, avviare l'elenco delle pagine delle proprietà con la macro BEGIN_PROPPAGEIDS, quindi aggiungere voci di macro per ogni pagina delle proprietà e completare l'elenco delle pagine delle proprietà con la macro END_PROPPAGEIDS.

Per ulteriori informazioni sulle pagine delle proprietà, vedere l'articolo [Controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="end_proppageids"></a><a name="end_proppageids"></a>END_PROPPAGEIDS

Termina la definizione dell'elenco di ID della pagina delle proprietà.

```
END_PROPPAGEIDS(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe del controllo proprietaria della pagina delle proprietà.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="proppageid"></a><a name="proppageid"></a>PROPPAGEID

Aggiunge una pagina delle proprietà per l'utilizzo da parte del controllo OLE.

```
PROPPAGEID(clsid)
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
ID di classe univoco di una pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

Tutte le macro PROPPAGEID devono essere inserite tra le macro BEGIN_PROPPAGEIDS e END_PROPPAGEIDS nel file di implementazione del controllo.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
