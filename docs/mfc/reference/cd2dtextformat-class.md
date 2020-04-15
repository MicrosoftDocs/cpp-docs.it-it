---
title: Classe CD2DTextFormat
ms.date: 03/27/2019
f1_keywords:
- CD2DTextFormat
- AFXRENDERTARGET/CD2DTextFormat
- AFXRENDERTARGET/CD2DTextFormat::CD2DTextFormat
- AFXRENDERTARGET/CD2DTextFormat::Create
- AFXRENDERTARGET/CD2DTextFormat::Destroy
- AFXRENDERTARGET/CD2DTextFormat::Get
- AFXRENDERTARGET/CD2DTextFormat::GetFontFamilyName
- AFXRENDERTARGET/CD2DTextFormat::GetLocaleName
- AFXRENDERTARGET/CD2DTextFormat::IsValid
- AFXRENDERTARGET/CD2DTextFormat::ReCreate
- AFXRENDERTARGET/CD2DTextFormat::m_pTextFormat
helpviewer_keywords:
- CD2DTextFormat [MFC], CD2DTextFormat
- CD2DTextFormat [MFC], Create
- CD2DTextFormat [MFC], Destroy
- CD2DTextFormat [MFC], Get
- CD2DTextFormat [MFC], GetFontFamilyName
- CD2DTextFormat [MFC], GetLocaleName
- CD2DTextFormat [MFC], IsValid
- CD2DTextFormat [MFC], ReCreate
- CD2DTextFormat [MFC], m_pTextFormat
ms.assetid: db194cec-9dae-4644-ab84-7c43b7164117
ms.openlocfilehash: f7310fd3ca2ac34df7cc1a99cd5527ea8ba709c4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369042"
---
# <a name="cd2dtextformat-class"></a>Classe CD2DTextFormat

Wrapper per IDWriteTextFormat.

## <a name="syntax"></a>Sintassi

```
class CD2DTextFormat : public CD2DResource;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Formato Testo CD2D:Formato CD2DTextFormat](#cd2dtextformat)|Costruisce un oggetto CD2DTextFormat.|
|[Formato DI testo di CD2D:](#_dtorcd2dtextformat)|Distruttore. Chiamato quando un oggetto formato di testo D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Formato Testo CD2D:Crea](#create)|Crea un CD2DTextFormat. (Esegue l'override di [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[Formato Testo CD2D: :Destroy](#destroy)|Elimina un oggetto CD2DTextFormat. (Esegue l'override di [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DTextFormat::Get](#get)|Restituisce l'interfaccia IDWriteTextFormat|
|[Formato testo CD2D::GetFontFamilyName](#getfontfamilyname)|Ottiene una copia del nome della famiglia di caratteri.|
|[Formato testo CD2D::NomeLocaleCD2DTextFormat::GetLocaleName](#getlocalename)|Ottiene una copia del nome delle impostazioni locali.|
|[Formato Testo CD2D:](#isvalid)|Controlla la validità delle risorse (sostituisce [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[Formato testo CD2D::Ricreare](#recreate)|Ricrea un CD2DTextFormat. [(Overridecd2DResource::ReCreate](../../mfc/reference/cd2dresource-class.md#recreate).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Formato CD2DTextFormat::operatorid IDWriteTextFormat](#operator_idwritetextformat_star)|Restituisce l'interfaccia IDWriteTextFormat|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[Formato CD2DTextFormat::m_pTextFormat](#m_ptextformat)|Puntatore a un IDWriteTextFormat.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource (informazioni in confronto a 3)](../../mfc/reference/cd2dresource-class.md)

[Formato TESTO CD2D](../../mfc/reference/cd2dtextformat-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dtextformatcd2dtextformat"></a><a name="_dtorcd2dtextformat"></a>Formato DI testo di CD2D:

Distruttore. Chiamato quando un oggetto formato di testo D2D viene eliminato definitivamente.

```
virtual ~CD2DTextFormat();
```

## <a name="cd2dtextformatcd2dtextformat"></a><a name="cd2dtextformat"></a>Formato Testo CD2D:Formato CD2DTextFormat

Costruisce un oggetto CD2DTextFormat.

```
CD2DTextFormat(
    CRenderTarget* pParentTarget,
    const CString& strFontFamilyName,
    FLOAT fontSize,
    DWRITE_FONT_WEIGHT fontWeight = DWRITE_FONT_WEIGHT_NORMAL,
    DWRITE_FONT_STYLE fontStyle = DWRITE_FONT_STYLE_NORMAL,
    DWRITE_FONT_STRETCH fontStretch = DWRITE_FONT_STRETCH_NORMAL,
    const CString& strFontLocale = _T(""),
    IDWriteFontCollection* pFontCollection = NULL,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*strFontFamilyName (nome di famiglia di strFont)*<br/>
Oggetto CString oggetto che contiene il nome della famiglia di caratteri.

*Fontsize*<br/>
Dimensione logica del tipo di carattere in unità DIP ("pixel indipendente dal dispositivo"). Un DIPuguale 1/96 pollici.

*Fontweight*<br/>
Valore che indica lo spessore del carattere per l'oggetto di testo.

*Fontstyle*<br/>
Valore che indica lo stile del carattere per l'oggetto di testo.

*Fontstretch*<br/>
Valore che indica l'estensione del carattere per l'oggetto di testo.

*strFontLocale*<br/>
Oggetto CString oggetto che contiene il nome delle impostazioni locali.

*pFontCollection (insieme)*<br/>
Puntatore a un oggetto raccolta di tipi di carattere. Quando è NULL, indica la raccolta di caratteri di sistema.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

## <a name="cd2dtextformatcreate"></a><a name="create"></a>Formato Testo CD2D:Crea

Crea un CD2DTextFormat.

```
virtual HRESULT Create(CRenderTarget* */);
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dtextformatdestroy"></a><a name="destroy"></a>Formato Testo CD2D: :Destroy

Elimina un oggetto CD2DTextFormat.

```
virtual void Destroy();
```

## <a name="cd2dtextformatget"></a><a name="get"></a>CD2DTextFormat::Get

Restituisce l'interfaccia IDWriteTextFormat

```
IDWriteTextFormat* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un IDWriteTextFormat interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dtextformatgetfontfamilyname"></a><a name="getfontfamilyname"></a>Formato testo CD2D::GetFontFamilyName

Ottiene una copia del nome della famiglia di caratteri.

```
CString GetFontFamilyName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto CString che contiene il nome della famiglia di caratteri corrente.

## <a name="cd2dtextformatgetlocalename"></a><a name="getlocalename"></a>Formato testo CD2D::NomeLocaleCD2DTextFormat::GetLocaleName

Ottiene una copia del nome delle impostazioni locali.

```
CString GetLocaleName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto CString che contiene il nome delle impostazioni locali corrente.

## <a name="cd2dtextformatisvalid"></a><a name="isvalid"></a>Formato Testo CD2D:

Controlla la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dtextformatm_ptextformat"></a><a name="m_ptextformat"></a>Formato CD2DTextFormat::m_pTextFormat

Puntatore a un IDWriteTextFormat.

```
IDWriteTextFormat* m_pTextFormat;
```

## <a name="cd2dtextformatoperator-idwritetextformat"></a><a name="operator_idwritetextformat_star"></a>Formato CD2DTextFormat::operatorid IDWriteTextFormat

Restituisce l'interfaccia IDWriteTextFormat

```
operator IDWriteTextFormat*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un IDWriteTextFormat interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dtextformatrecreate"></a><a name="recreate"></a>Formato testo CD2D::Ricreare

Ricrea un CD2DTextFormat.

```
virtual HRESULT ReCreate(CRenderTarget* */);
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
