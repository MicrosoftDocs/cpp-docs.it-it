---
description: 'Altre informazioni su: classe CD2DTextLayout'
title: Classe CD2DTextLayout
ms.date: 03/27/2019
f1_keywords:
- CD2DTextLayout
- AFXRENDERTARGET/CD2DTextLayout
- AFXRENDERTARGET/CD2DTextLayout::CD2DTextLayout
- AFXRENDERTARGET/CD2DTextLayout::Create
- AFXRENDERTARGET/CD2DTextLayout::Destroy
- AFXRENDERTARGET/CD2DTextLayout::Get
- AFXRENDERTARGET/CD2DTextLayout::GetFontFamilyName
- AFXRENDERTARGET/CD2DTextLayout::GetLocaleName
- AFXRENDERTARGET/CD2DTextLayout::IsValid
- AFXRENDERTARGET/CD2DTextLayout::ReCreate
- AFXRENDERTARGET/CD2DTextLayout::SetFontFamilyName
- AFXRENDERTARGET/CD2DTextLayout::SetLocaleName
- AFXRENDERTARGET/CD2DTextLayout::m_pTextLayout
helpviewer_keywords:
- CD2DTextLayout [MFC], CD2DTextLayout
- CD2DTextLayout [MFC], Create
- CD2DTextLayout [MFC], Destroy
- CD2DTextLayout [MFC], Get
- CD2DTextLayout [MFC], GetFontFamilyName
- CD2DTextLayout [MFC], GetLocaleName
- CD2DTextLayout [MFC], IsValid
- CD2DTextLayout [MFC], ReCreate
- CD2DTextLayout [MFC], SetFontFamilyName
- CD2DTextLayout [MFC], SetLocaleName
- CD2DTextLayout [MFC], m_pTextLayout
ms.assetid: 724bd13c-f2ef-4e55-a775-8cb04b7b7908
ms.openlocfilehash: 164c8ed5561be6e8f9ee59b07d0aecaced5f7c81
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97240546"
---
# <a name="cd2dtextlayout-class"></a>Classe CD2DTextLayout

Wrapper per IDWriteTextLayout.

## <a name="syntax"></a>Sintassi

```
class CD2DTextLayout : public CD2DResource;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DTextLayout:: CD2DTextLayout](#cd2dtextlayout)|Costruisce un oggetto CD2DTextLayout.|
|[CD2DTextLayout:: ~ CD2DTextLayout](#_dtorcd2dtextlayout)|Distruttore. Chiamato quando un oggetto layout di testo D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DTextLayout:: create](#create)|Crea un CD2DTextLayout. Esegue l'override di [CD2DResource:: create](../../mfc/reference/cd2dresource-class.md#create).|
|[CD2DTextLayout::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DTextLayout. Esegue l'override di [CD2DResource::D estroy](../../mfc/reference/cd2dresource-class.md#destroy).|
|[CD2DTextLayout:: Get](#get)|Restituisce l'interfaccia IDWriteTextLayout|
|[CD2DTextLayout:: GetFontFamilyName](#getfontfamilyname)|Copia il nome della famiglia di caratteri del testo in corrispondenza della posizione specificata.|
|[CD2DTextLayout:: GetLocaleName](#getlocalename)|Ottiene il nome delle impostazioni locali del testo in corrispondenza della posizione specificata.|
|[CD2DTextLayout:: IsValid](#isvalid)|Verifica la validità delle risorse (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DTextLayout:: ricrea](#recreate)|Ricrea un CD2DTextLayout. Esegue l'override di [CD2DResource:: recreate](../../mfc/reference/cd2dresource-class.md#recreate).|
|[CD2DTextLayout:: sefontfamilyname](#setfontfamilyname)|Imposta il nome della famiglia di caratteri con terminazione null per il testo all'interno di un intervallo di testo specificato|
|[CD2DTextLayout:: SetLocaleName](#setlocalename)|Imposta il nome delle impostazioni locali per il testo all'interno di un intervallo di testo specificato|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DTextLayout:: operator IDWriteTextLayout *](#operator_idwritetextlayout_star)|Restituisce l'interfaccia IDWriteTextLayout|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DTextLayout:: m_pTextLayout](#m_ptextlayout)|Puntatore a un IDWriteTextLayout.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DTextLayout](../../mfc/reference/cd2dtextlayout-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dtextlayoutcd2dtextlayout"></a><a name="_dtorcd2dtextlayout"></a> CD2DTextLayout:: ~ CD2DTextLayout

Distruttore. Chiamato quando un oggetto layout di testo D2D viene eliminato definitivamente.

```
virtual ~CD2DTextLayout();
```

## <a name="cd2dtextlayoutcd2dtextlayout"></a><a name="cd2dtextlayout"></a> CD2DTextLayout:: CD2DTextLayout

Costruisce un oggetto CD2DTextLayout.

```
CD2DTextLayout(
    CRenderTarget* pParentTarget,
    const CString& strText,
    CD2DTextFormat& textFormat,
    const CD2DSizeF& sizeMax,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*strText*<br/>
Oggetto CString che contiene la stringa da cui creare un nuovo oggetto CD2DTextLayout.

*textFormat*<br/>
Oggetto CString che contiene il formato da applicare alla stringa.

*sizeMax*<br/>
Dimensione della casella di layout.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dtextlayoutcreate"></a><a name="create"></a> CD2DTextLayout:: create

Crea un CD2DTextLayout.

```
virtual HRESULT Create(CRenderTarget* */);
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dtextlayoutdestroy"></a><a name="destroy"></a> CD2DTextLayout::D estroy

Elimina definitivamente un oggetto CD2DTextLayout.

```
virtual void Destroy();
```

## <a name="cd2dtextlayoutget"></a><a name="get"></a> CD2DTextLayout:: Get

Restituisce l'interfaccia IDWriteTextLayout

```
IDWriteTextLayout* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia IDWriteTextLayout o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dtextlayoutgetfontfamilyname"></a><a name="getfontfamilyname"></a> CD2DTextLayout:: GetFontFamilyName

Copia il nome della famiglia di caratteri del testo in corrispondenza della posizione specificata.

```
CString GetFontFamilyName(
    UINT32 currentPosition,
    DWRITE_TEXT_RANGE* textRange = NULL) const;
```

### <a name="parameters"></a>Parametri

*currentPosition*<br/>
Posizione del testo da esaminare.

*textRange*<br/>
Intervallo di testo con la stessa formattazione del testo in corrispondenza della posizione specificata da currentPosition. Ciò significa che l'esecuzione ha la formattazione esatta come la posizione specificata, incluso, a titolo esemplificativo, il nome della famiglia di caratteri.

### <a name="return-value"></a>Valore restituito

Oggetto CString che contiene il nome della famiglia di caratteri corrente.

## <a name="cd2dtextlayoutgetlocalename"></a><a name="getlocalename"></a> CD2DTextLayout:: GetLocaleName

Ottiene il nome delle impostazioni locali del testo in corrispondenza della posizione specificata.

```
CString GetLocaleName(
    UINT32 currentPosition,
    DWRITE_TEXT_RANGE* textRange = NULL) const;
```

### <a name="parameters"></a>Parametri

*currentPosition*<br/>
Posizione del testo da ispezionare.

*textRange*<br/>
Intervallo di testo con la stessa formattazione del testo in corrispondenza della posizione specificata da currentPosition. Ciò significa che l'esecuzione ha la formattazione esatta come la posizione specificata, incluso ma non limitato al nome delle impostazioni locali.

### <a name="return-value"></a>Valore restituito

Oggetto CString che contiene il nome delle impostazioni locali corrente.

## <a name="cd2dtextlayoutisvalid"></a><a name="isvalid"></a> CD2DTextLayout:: IsValid

Verifica la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dtextlayoutm_ptextlayout"></a><a name="m_ptextlayout"></a> CD2DTextLayout:: m_pTextLayout

Puntatore a un IDWriteTextLayout.

```
IDWriteTextLayout* m_pTextLayout;
```

## <a name="cd2dtextlayoutoperator-idwritetextlayout"></a><a name="operator_idwritetextlayout_star"></a> CD2DTextLayout:: operator IDWriteTextLayout *

Restituisce l'interfaccia IDWriteTextLayout

```
operator IDWriteTextLayout*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia IDWriteTextLayout o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dtextlayoutrecreate"></a><a name="recreate"></a> CD2DTextLayout:: ricrea

Ricrea un CD2DTextLayout.

```
virtual HRESULT ReCreate(CRenderTarget* */);
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dtextlayoutsetfontfamilyname"></a><a name="setfontfamilyname"></a> CD2DTextLayout:: sefontfamilyname

Imposta il nome della famiglia di caratteri con terminazione null per il testo all'interno di un intervallo di testo specificato

```
BOOL SetFontFamilyName(
    LPCWSTR pwzFontFamilyName,
    DWRITE_TEXT_RANGE textRange);
```

### <a name="parameters"></a>Parametri

*pwzFontFamilyName*<br/>
Nome della famiglia di caratteri che si applica all'intera stringa di testo all'interno dell'intervallo specificato da TextRange

*textRange*<br/>
Intervallo di testo a cui si applica questa modifica

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dtextlayoutsetlocalename"></a><a name="setlocalename"></a> CD2DTextLayout:: SetLocaleName

Imposta il nome delle impostazioni locali per il testo all'interno di un intervallo di testo specificato

```
BOOL SetLocaleName(
    LPCWSTR pwzLocaleName,
    DWRITE_TEXT_RANGE textRange);
```

### <a name="parameters"></a>Parametri

*pwzLocaleName*<br/>
Stringa del nome delle impostazioni locali con terminazione null

*textRange*<br/>
Intervallo di testo a cui si applica questa modifica

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
