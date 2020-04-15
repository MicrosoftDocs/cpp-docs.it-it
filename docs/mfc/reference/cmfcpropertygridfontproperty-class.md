---
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
ms.openlocfilehash: a1c9905d8d7f32a049496c4e164c9eaac13455d6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81361845"
---
# <a name="cmfcpropertygridfontproperty-class"></a>Classe CMFCPropertyGridFontProperty

La `CMFCPropertyGridFileProperty` classe supporta un elemento del controllo elenco proprietà che apre una finestra di dialogo di selezione del tipo di carattere.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyGridFontProperty : public CMFCPropertyGridProperty
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPropertyGridFontProperty::CMFCPropertyGridFontProperty](#cmfcpropertygridfontproperty)|Costruisce un oggetto `CMFCPropertyGridFontProperty`.|
|`CMFCPropertyGridFontProperty::~CMFCPropertyGridFontProperty`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCPropertyGridFontProperty::FormatProperty`|Formatta la rappresentazione di testo di un valore della proprietà. (Esegue l'override [di CMFCPropertyGridProperty::FormatProperty](../../mfc/reference/cmfcpropertygridproperty-class.md#formatproperty).)|
|[CMFCPropertyGridFontProperty::GetColor](#getcolor)|Recupera il colore del carattere selezionato dall'utente dalla finestra di dialogo del tipo di carattere.|
|[CMFCPropertyGridFontProperty::GetLogFont](#getlogfont)|Recupera il tipo di carattere selezionato dall'utente dalla finestra di dialogo del tipo di carattere.|
|`CMFCPropertyGridFontProperty::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|`CMFCPropertyGridFontProperty::OnClickButton`|Chiamato dal framework quando l'utente fa clic su un pulsante contenuto in una proprietà. (Esegue l'override [di CMFCPropertyGridProperty::OnClickButton.)](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton)|

## <a name="remarks"></a>Osservazioni

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

[CMFCPropertyGridFontProperty](../../mfc/reference/cmfcpropertygridfontproperty-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertygridctrl.h

## <a name="cmfcpropertygridfontpropertycmfcpropertygridfontproperty"></a><a name="cmfcpropertygridfontproperty"></a>CMFCPropertyGridFontProperty::CMFCPropertyGridFontProperty

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
[in] Struttura logica del tipo di carattere che specifica gli attributi del tipo di carattere.

*dwFontDialogFlags (dwFontDialogFlags)*<br/>
[in] Stili applicati alla finestra di dialogo del tipo di carattere visualizzata quando si fa clic sul pulsante a discesa del valore della proprietà. Il valore predefinito è la combinazione bit per bit (OR) di CF_EFFECTS e CF_SCREENFONTS. Per ulteriori informazioni, vedere il parametro *Flags* della [struttura CHOOSEFONT](/windows/win32/api/commdlg/ns-commdlg-choosefontw).

*lpszDescr*<br/>
[in] Descrizione della proprietà del tipo di carattere. Il valore predefinito è NULL.

*dwData (dati)*<br/>
[in] Dati specifici dell'applicazione, ad esempio un numero intero o un puntatore ad altri dati associati alla proprietà. Il valore predefinito è 0.

*Colore*<br/>
[in] Colore del tipo di carattere. Il valore predefinito è il colore predefinito.

### <a name="remarks"></a>Osservazioni

Un `CMFCPropertyGridFontProperty` oggetto rappresenta una proprietà del tipo di carattere in un controllo del tipo di carattere della griglia delle proprietà.

### <a name="example"></a>Esempio

Nell'esempio `CMFCPropertyGridFontProperty` seguente viene illustrato come costruire un oggetto della classe. Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#26](../../mfc/reference/codesnippet/cpp/cmfcpropertygridfontproperty-class_1.cpp)]

## <a name="cmfcpropertygridfontpropertygetcolor"></a><a name="getcolor"></a>CMFCPropertyGridFontProperty::GetColor

Recupera il colore del carattere selezionato dall'utente dalla finestra di dialogo del tipo di carattere.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore di colore RGB che rappresenta il colore del carattere selezionato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcpropertygridfontpropertygetlogfont"></a><a name="getlogfont"></a>CMFCPropertyGridFontProperty::GetLogFont

Recupera il tipo di carattere selezionato dall'utente dalla finestra di dialogo del tipo di carattere.

```
LPLOGFONT GetLogFont();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) che descrive il tipo di carattere selezionato.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)<br/>
[CMFCPropertyGridProperty (classe)](../../mfc/reference/cmfcpropertygridproperty-class.md)
