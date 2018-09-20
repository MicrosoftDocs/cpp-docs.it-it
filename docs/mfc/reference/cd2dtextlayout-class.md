---
title: Classe CD2DTextLayout | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a699744955088ad49c0e701166cf368695354fac
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46402200"
---
# <a name="cd2dtextlayout-class"></a>Classe CD2DTextLayout

Un wrapper per IDWriteTextLayout.

## <a name="syntax"></a>Sintassi

```
class CD2DTextLayout : public CD2DResource;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DTextLayout::CD2DTextLayout](#cd2dtextlayout)|Costruisce un oggetto CD2DTextLayout.|
|[CD2DTextLayout:: ~ CD2DTextLayout](#cd2dtextlayout__~cd2dtextlayout)|Distruttore. Chiamato quando viene eliminata definitivamente un oggetto di layout di testo D2D.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DTextLayout::Create](#create)|Crea un CD2DTextLayout. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DTextLayout::Destroy](#destroy)|Elimina un oggetto CD2DTextLayout. (Esegue l'override [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DTextLayout::Get](#get)|Restituisce l'interfaccia IDWriteTextLayout|
|[CD2DTextLayout::GetFontFamilyName](#getfontfamilyname)|Copia il nome di famiglia del tipo di carattere del testo nella posizione specificata.|
|[CD2DTextLayout::GetLocaleName](#getlocalename)|Ottiene il nome delle impostazioni locali del testo nella posizione specificata.|
|[CD2DTextLayout::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DTextLayout::ReCreate](#recreate)|Ricrea un CD2DTextLayout. (Esegue l'override [CD2DResource:: ReCreate](../../mfc/reference/cd2dresource-class.md#recreate).)|
|[CD2DTextLayout::SetFontFamilyName](#setfontfamilyname)|Nome della famiglia di caratteri con terminazione null set per il testo all'interno di un intervallo di testo specificato|
|[CD2DTextLayout::SetLocaleName](#setlocalename)|Imposta il nome delle impostazioni locali per il testo all'interno di un intervallo di testo specificato|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DTextLayout::operator IDWriteTextLayout *](#operator_idwritetextlayout_star)|Restituisce l'interfaccia IDWriteTextLayout|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CD2DTextLayout::m_pTextLayout](#m_ptextlayout)|Un puntatore a un oggetto IDWriteTextLayout.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DTextLayout](../../mfc/reference/cd2dtextlayout-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="_dtorcd2dtextlayout"></a>  CD2DTextLayout:: ~ CD2DTextLayout

Distruttore. Chiamato quando viene eliminata definitivamente un oggetto di layout di testo D2D.

```
virtual ~CD2DTextLayout();
```

##  <a name="cd2dtextlayout"></a>  CD2DTextLayout::CD2DTextLayout

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
Un oggetto CString che contiene la stringa per creare un nuovo oggetto CD2DTextLayout da.

*TextFormat*<br/>
Un oggetto CString che contiene il formato da applicare alla stringa.

*sizeMax*<br/>
Le dimensioni della finestra di layout.

*flag bAutoDestroy*<br/>
Indica che l'oggetto viene distrutto dal proprietario (pParentTarget).

##  <a name="create"></a>  CD2DTextLayout::Create

Crea un CD2DTextLayout.

```
virtual HRESULT Create(CRenderTarget* */);
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="destroy"></a>  CD2DTextLayout::Destroy

Elimina un oggetto CD2DTextLayout.

```
virtual void Destroy();
```

##  <a name="get"></a>  CD2DTextLayout::Get

Restituisce l'interfaccia IDWriteTextLayout

```
IDWriteTextLayout* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia IDWriteTextLayout o NULL se l'oggetto non ancora inizializzato.

##  <a name="getfontfamilyname"></a>  CD2DTextLayout::GetFontFamilyName

Copia il nome di famiglia del tipo di carattere del testo nella posizione specificata.

```
CString GetFontFamilyName(
    UINT32 currentPosition,
    DWRITE_TEXT_RANGE* textRange = NULL) const;
```

### <a name="parameters"></a>Parametri

*currentPosition*<br/>
La posizione del testo da esaminare.

*TextRange*<br/>
L'intervallo di testo che presenta la stessa formattazione del testo in corrispondenza della posizione specificata da currentPosition. Ciò significa che l'esecuzione ha la stessa formattazione della posizione specificata, inclusi ma non solo il nome della famiglia.

### <a name="return-value"></a>Valore restituito

Oggetto CString che contiene il nome di famiglia del tipo di carattere corrente.

##  <a name="getlocalename"></a>  CD2DTextLayout::GetLocaleName

Ottiene il nome delle impostazioni locali del testo nella posizione specificata.

```
CString GetLocaleName(
    UINT32 currentPosition,
    DWRITE_TEXT_RANGE* textRange = NULL) const;
```

### <a name="parameters"></a>Parametri

*currentPosition*<br/>
Posizione del testo da analizzare.

*TextRange*<br/>
L'intervallo di testo che presenta la stessa formattazione del testo in corrispondenza della posizione specificata da currentPosition. Ciò significa che l'esecuzione ha la stessa formattazione della posizione specificata, inclusi il nome delle impostazioni locali.

### <a name="return-value"></a>Valore restituito

Oggetto CString che contiene il nome delle impostazioni locali correnti.

##  <a name="isvalid"></a>  CD2DTextLayout::IsValid

Verifica la validità della risorsa

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

##  <a name="m_ptextlayout"></a>  CD2DTextLayout::m_pTextLayout

Un puntatore a un oggetto IDWriteTextLayout.

```
IDWriteTextLayout* m_pTextLayout;
```

##  <a name="operator_idwritetextlayout_star"></a>  CD2DTextLayout::operator IDWriteTextLayout *

Restituisce l'interfaccia IDWriteTextLayout

```
operator IDWriteTextLayout*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia IDWriteTextLayout o NULL se l'oggetto non ancora inizializzato.

##  <a name="recreate"></a>  CD2DTextLayout::ReCreate

Ricrea un CD2DTextLayout.

```
virtual HRESULT ReCreate(CRenderTarget* */);
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="setfontfamilyname"></a>  CD2DTextLayout::SetFontFamilyName

Nome della famiglia di caratteri con terminazione null set per il testo all'interno di un intervallo di testo specificato

```
BOOL SetFontFamilyName(
    LPCWSTR pwzFontFamilyName,
    DWRITE_TEXT_RANGE textRange);
```

### <a name="parameters"></a>Parametri

*pwzFontFamilyName*<br/>
Il nome della famiglia che viene applicata l'intera stringa di testo all'interno dell'intervallo specificato dal textRange

*TextRange*<br/>
Intervallo di testo a cui si applica questa modifica

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE

##  <a name="setlocalename"></a>  CD2DTextLayout::SetLocaleName

Imposta il nome delle impostazioni locali per il testo all'interno di un intervallo di testo specificato

```
BOOL SetLocaleName(
    LPCWSTR pwzLocaleName,
    DWRITE_TEXT_RANGE textRange);
```

### <a name="parameters"></a>Parametri

*pwzLocaleName*<br/>
Una stringa del nome delle impostazioni locali con terminazione null

*TextRange*<br/>
Intervallo di testo a cui si applica questa modifica

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
