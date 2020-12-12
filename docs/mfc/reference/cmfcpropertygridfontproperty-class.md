---
description: 'Altre informazioni su: classe CMFCPropertyGridFontProperty'
title: Classe CMFCPropertyGridFontProperty
ms.date: 11/04/2016
f1_keywords:
- CMFCPropertyGridFontProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFontProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFontProperty::CMFCPropertyGridFontProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFontProperty::GetColor
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFontProperty::GetLogFont
helpviewer_keywords:
- CMFCPropertyGridFontProperty [MFC], CMFCPropertyGridFontProperty
- CMFCPropertyGridFontProperty [MFC], GetColor
- CMFCPropertyGridFontProperty [MFC], GetLogFont
ms.assetid: 83693f33-bbd3-4fcb-a9ad-fa79fcf2ca24
ms.openlocfilehash: cec809636c83ca6fa0e61044de971f9fbea145f2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97289933"
---
# <a name="cmfcpropertygridfontproperty-class"></a>Classe CMFCPropertyGridFontProperty

La `CMFCPropertyGridFileProperty` classe supporta un elemento controllo elenco di proprietà che apre una finestra di dialogo di selezione del tipo di carattere.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyGridFontProperty : public CMFCPropertyGridProperty
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCPropertyGridFontProperty:: CMFCPropertyGridFontProperty](#cmfcpropertygridfontproperty)|Costruisce un oggetto `CMFCPropertyGridFontProperty`.|
|`CMFCPropertyGridFontProperty::~CMFCPropertyGridFontProperty`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCPropertyGridFontProperty::FormatProperty`|Formatta la rappresentazione di testo di un valore della proprietà. Esegue l'override di [CMFCPropertyGridProperty:: FormatProperty](../../mfc/reference/cmfcpropertygridproperty-class.md#formatproperty).|
|[CMFCPropertyGridFontProperty:: GetColor](#getcolor)|Recupera il colore del carattere selezionato dall'utente dalla finestra di dialogo tipo di carattere.|
|[CMFCPropertyGridFontProperty:: GetLogFont](#getlogfont)|Recupera il tipo di carattere selezionato dall'utente dalla finestra di dialogo tipo di carattere.|
|`CMFCPropertyGridFontProperty::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|`CMFCPropertyGridFontProperty::OnClickButton`|Chiamato dal framework quando l'utente fa clic su un pulsante contenuto in una proprietà. Esegue l'override di [CMFCPropertyGridProperty:: OnclickButton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).|

## <a name="remarks"></a>Commenti

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

[CMFCPropertyGridFontProperty](../../mfc/reference/cmfcpropertygridfontproperty-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertygridctrl. h

## <a name="cmfcpropertygridfontpropertycmfcpropertygridfontproperty"></a><a name="cmfcpropertygridfontproperty"></a> CMFCPropertyGridFontProperty:: CMFCPropertyGridFontProperty

Costruisce un oggetto `CMFCPropertyGridFontProperty`.

```
CMFCPropertyGridFontProperty(
    const CString& strName,
    LOGFONT& lf,
    DWORD dwFontDialogFlags = CF_EFFECTS | CF_SCREENFONTS,
    LPCTSTR lpszDescr = NULL,
    DWORD_PTR dwData = 0,
    COLORREF color = (COLORREF)-1);
```

### <a name="parameters"></a>Parametri

*strName*<br/>
[in] Nome della proprietà.

*Se*<br/>
in Struttura del tipo di carattere logica che specifica gli attributi del tipo di carattere.

*dwFontDialogFlags*<br/>
in Stili applicati alla finestra di dialogo tipo di carattere visualizzata quando si fa clic sul pulsante a discesa valore proprietà. Il valore predefinito è la combinazione bit per bit (o) di CF_EFFECTS e CF_SCREENFONTS. Per ulteriori informazioni, vedere il parametro *Flags* della [struttura ChooseFont](/windows/win32/api/commdlg/ns-commdlg-choosefontw).

*lpszDescr*<br/>
in Descrizione della proprietà del tipo di carattere. Il valore predefinito è NULL.

*dwData*<br/>
in Dati specifici dell'applicazione, ad esempio un numero intero o un puntatore ad altri dati associati alla proprietà. Il valore predefinito è 0.

*color*<br/>
in Colore del tipo di carattere. Il valore predefinito è il colore predefinito.

### <a name="remarks"></a>Commenti

Un `CMFCPropertyGridFontProperty` oggetto rappresenta una proprietà del tipo di carattere in un controllo del tipo di carattere della griglia delle proprietà.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCPropertyGridFontProperty` classe. Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#26](../../mfc/reference/codesnippet/cpp/cmfcpropertygridfontproperty-class_1.cpp)]

## <a name="cmfcpropertygridfontpropertygetcolor"></a><a name="getcolor"></a> CMFCPropertyGridFontProperty:: GetColor

Recupera il colore del carattere selezionato dall'utente dalla finestra di dialogo tipo di carattere.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore di colore RGB che rappresenta il colore del tipo di carattere selezionato.

### <a name="remarks"></a>Commenti

## <a name="cmfcpropertygridfontpropertygetlogfont"></a><a name="getlogfont"></a> CMFCPropertyGridFontProperty:: GetLogFont

Recupera il tipo di carattere selezionato dall'utente dalla finestra di dialogo tipo di carattere.

```
LPLOGFONT GetLogFont();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) che descrive il tipo di carattere selezionato.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)<br/>
[Classe CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)
