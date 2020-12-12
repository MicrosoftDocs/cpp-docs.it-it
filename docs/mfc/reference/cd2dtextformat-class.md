---
description: 'Altre informazioni su: Classe CD2DTextFormat'
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
ms.openlocfilehash: fc87aec6acb0e1eae0211555f1bdc943079081f4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338328"
---
# <a name="cd2dtextformat-class"></a>Classe CD2DTextFormat

Wrapper per IDWriteTextFormat.

## <a name="syntax"></a>Sintassi

```
class CD2DTextFormat : public CD2DResource;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DTextFormat:: CD2DTextFormat](#cd2dtextformat)|Costruisce un oggetto CD2DTextFormat.|
|[CD2DTextFormat:: ~ CD2DTextFormat](#_dtorcd2dtextformat)|Distruttore. Chiamato quando un oggetto in formato testo D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DTextFormat:: create](#create)|Crea un CD2DTextFormat. Esegue l'override di [CD2DResource:: create](../../mfc/reference/cd2dresource-class.md#create).|
|[CD2DTextFormat::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DTextFormat. Esegue l'override di [CD2DResource::D estroy](../../mfc/reference/cd2dresource-class.md#destroy).|
|[CD2DTextFormat:: Get](#get)|Restituisce l'interfaccia IDWriteTextFormat|
|[CD2DTextFormat:: GetFontFamilyName](#getfontfamilyname)|Ottiene una copia del nome della famiglia di caratteri.|
|[CD2DTextFormat:: GetLocaleName](#getlocalename)|Ottiene una copia del nome delle impostazioni locali.|
|[CD2DTextFormat:: IsValid](#isvalid)|Verifica la validità delle risorse (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DTextFormat:: ricrea](#recreate)|Ricrea un CD2DTextFormat. Esegue l'override di [CD2DResource:: recreate](../../mfc/reference/cd2dresource-class.md#recreate).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DTextFormat:: operator IDWriteTextFormat *](#operator_idwritetextformat_star)|Restituisce l'interfaccia IDWriteTextFormat|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DTextFormat:: m_pTextFormat](#m_ptextformat)|Puntatore a un IDWriteTextFormat.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DTextFormat](../../mfc/reference/cd2dtextformat-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dtextformatcd2dtextformat"></a><a name="_dtorcd2dtextformat"></a> CD2DTextFormat:: ~ CD2DTextFormat

Distruttore. Chiamato quando un oggetto in formato testo D2D viene eliminato definitivamente.

```
virtual ~CD2DTextFormat();
```

## <a name="cd2dtextformatcd2dtextformat"></a><a name="cd2dtextformat"></a> CD2DTextFormat:: CD2DTextFormat

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

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*strFontFamilyName*<br/>
Oggetto CString che contiene il nome della famiglia di caratteri.

*fontSize*<br/>
Dimensioni logiche del tipo di carattere nelle unità DIP ("pixel indipendenti dal dispositivo"). Un DIPequals di 1/96 pollice.

*fontWeight*<br/>
Valore che indica lo spessore del carattere per l'oggetto testo.

*fontStyle*<br/>
Valore che indica lo stile del carattere per l'oggetto testo.

*fontStretch*<br/>
Valore che indica l'estensione del carattere per l'oggetto testo.

*strFontLocale*<br/>
Oggetto CString che contiene il nome delle impostazioni locali.

*pFontCollection*<br/>
Puntatore a un oggetto della raccolta di tipi di carattere. Se è NULL, indica la raccolta di tipi di carattere di sistema.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dtextformatcreate"></a><a name="create"></a> CD2DTextFormat:: create

Crea un CD2DTextFormat.

```
virtual HRESULT Create(CRenderTarget* */);
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dtextformatdestroy"></a><a name="destroy"></a> CD2DTextFormat::D estroy

Elimina definitivamente un oggetto CD2DTextFormat.

```
virtual void Destroy();
```

## <a name="cd2dtextformatget"></a><a name="get"></a> CD2DTextFormat:: Get

Restituisce l'interfaccia IDWriteTextFormat

```
IDWriteTextFormat* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia IDWriteTextFormat o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dtextformatgetfontfamilyname"></a><a name="getfontfamilyname"></a> CD2DTextFormat:: GetFontFamilyName

Ottiene una copia del nome della famiglia di caratteri.

```
CString GetFontFamilyName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto CString che contiene il nome della famiglia di caratteri corrente.

## <a name="cd2dtextformatgetlocalename"></a><a name="getlocalename"></a> CD2DTextFormat:: GetLocaleName

Ottiene una copia del nome delle impostazioni locali.

```
CString GetLocaleName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto CString che contiene il nome delle impostazioni locali corrente.

## <a name="cd2dtextformatisvalid"></a><a name="isvalid"></a> CD2DTextFormat:: IsValid

Verifica la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dtextformatm_ptextformat"></a><a name="m_ptextformat"></a> CD2DTextFormat:: m_pTextFormat

Puntatore a un IDWriteTextFormat.

```
IDWriteTextFormat* m_pTextFormat;
```

## <a name="cd2dtextformatoperator-idwritetextformat"></a><a name="operator_idwritetextformat_star"></a> CD2DTextFormat:: operator IDWriteTextFormat *

Restituisce l'interfaccia IDWriteTextFormat

```
operator IDWriteTextFormat*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia IDWriteTextFormat o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dtextformatrecreate"></a><a name="recreate"></a> CD2DTextFormat:: ricrea

Ricrea un CD2DTextFormat.

```
virtual HRESULT ReCreate(CRenderTarget* */);
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
