---
title: Classe CMFCPropertyGridColorProperty
ms.date: 11/04/2016
f1_keywords:
- CMFCPropertyGridColorProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::EnableAutomaticButton
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::EnableOtherButton
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::GetColor
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::SetColor
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::SetColumnsNumber
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridColorProperty::SetOriginalValue
helpviewer_keywords:
- CMFCPropertyGridColorProperty [MFC], CMFCPropertyGridColorProperty
- CMFCPropertyGridColorProperty [MFC], EnableAutomaticButton
- CMFCPropertyGridColorProperty [MFC], EnableOtherButton
- CMFCPropertyGridColorProperty [MFC], GetColor
- CMFCPropertyGridColorProperty [MFC], SetColor
- CMFCPropertyGridColorProperty [MFC], SetColumnsNumber
- CMFCPropertyGridColorProperty [MFC], SetOriginalValue
ms.assetid: af37be93-a91e-40a2-9a65-0f3412c6f0f8
ms.openlocfilehash: 95dcbbc2b445e2ff67979b90816daed0fb0c0fba
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58767717"
---
# <a name="cmfcpropertygridcolorproperty-class"></a>Classe CMFCPropertyGridColorProperty

La classe `CMFCPropertyGridColorProperty` supporta un elemento controllo elenco delle proprietà che apre una finestra di dialogo di selezione colore.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyGridColorProperty : public CMFCPropertyGridProperty
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty](#cmfcpropertygridcolorproperty)|Costruisce un oggetto `CMFCPropertyGridColorProperty`.|
|`CMFCPropertyGridColorProperty::~CMFCPropertyGridColorProperty`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPropertyGridColorProperty::EnableAutomaticButton](#enableautomaticbutton)|Abilita il *automatica* pulsante nella finestra di dialogo di selezione colore. (Il pulsante automatico standard viene etichettato **automatica**.)|
|[CMFCPropertyGridColorProperty::EnableOtherButton](#enableotherbutton)|Abilita il *altri* pulsante nella finestra di dialogo di selezione colore. (Lo standard altro pulsante viene denominato **altri colori**.)|
|`CMFCPropertyGridColorProperty::FormatProperty`|Formatta la rappresentazione di testo di un valore della proprietà. (Esegue l'override [cmfcpropertygridproperty:: Formatproperty](../../mfc/reference/cmfcpropertygridproperty-class.md#formatproperty).)|
|[CMFCPropertyGridColorProperty::GetColor](#getcolor)|Ottiene il colore corrente della proprietà.|
|`CMFCPropertyGridColorProperty::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|`CMFCPropertyGridColorProperty::OnClickButton`|Chiamato dal framework quando l'utente fa clic su un pulsante contenuto in una proprietà. (Esegue l'override [cmfcpropertygridproperty:: Onclickbutton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).)|
|`CMFCPropertyGridColorProperty::OnDrawValue`|Chiamato dal framework per visualizzare il valore della proprietà. (Esegue l'override [cmfcpropertygridproperty:: Ondrawvalue](../../mfc/reference/cmfcpropertygridproperty-class.md#ondrawvalue).)|
|`CMFCPropertyGridColorProperty::OnEdit`|Chiamato dal framework quando l'utente sta per modificare il valore di una proprietà. (Esegue l'override [cmfcpropertygridproperty:: Onedit](../../mfc/reference/cmfcpropertygridproperty-class.md#onedit).)|
|`CMFCPropertyGridColorProperty::OnUpdateValue`|Chiamato dal framework quando viene modificato il valore di una proprietà modificabile. (Esegue l'override [cmfcpropertygridproperty:: Onupdatevalue](../../mfc/reference/cmfcpropertygridproperty-class.md#onupdatevalue).)|
|[CMFCPropertyGridColorProperty::SetColor](#setcolor)|Imposta un nuovo colore per la proprietà.|
|[CMFCPropertyGridColorProperty::SetColumnsNumber](#setcolumnsnumber)|Specifica il numero di colonne nella griglia delle proprietà del colore corrente.|
|[CMFCPropertyGridColorProperty::SetOriginalValue](#setoriginalvalue)|Imposta il valore originale di una proprietà modificabile.|

## <a name="remarks"></a>Note

La classe `CMFCPropertyGridColorProperty` supporta una proprietà Color che è possibile aggiungere a un controllo elenco delle proprietà. Per altre informazioni, vedere la [classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra come costruire un oggetto della classe `CMFCPropertyGridColorProperty` e configurare tale oggetto usando diversi metodi della classe `CMFCPropertyGridColorProperty`. Il codice illustra come abilitare i pulsanti "automatico" (Automatic) e "altro" (Other) e come impostare il colore e il numero di colonne. In questo esempio fa parte il [esempio di nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#13](../../mfc/reference/codesnippet/cpp/cmfcpropertygridcolorproperty-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

[CMFCPropertyGridColorProperty](../../mfc/reference/cmfcpropertygridcolorproperty-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertygridctrl. h

##  <a name="cmfcpropertygridcolorproperty"></a>  CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty

Costruisce un oggetto `CMFCPropertyGridColorProperty`.

```
CMFCPropertyGridColorProperty(
    const CString& strName,
    const COLORREF& color,
    CPalette* pPalette = NULL,
    LPCTSTR lpszDescr = NULL,
    DWORD_PTR dwData = 0);
```

### <a name="parameters"></a>Parametri

*strName*<br/>
[in] Il nome della proprietà.

*color*<br/>
[in] Il valore di colore della proprietà.

*pPalette*<br/>
[in] Puntatore a una tavolozza dei colori. Il valore predefinito è NULL.

*lpszDescr*<br/>
[in] La descrizione della proprietà. Il valore predefinito è NULL.

*dwData*<br/>
[in] Dati specifici dell'applicazione, ad esempio un numero intero o un puntatore a altri dati che sono associati alla proprietà. Il valore predefinito è 0.

##  <a name="enableautomaticbutton"></a>  CMFCPropertyGridColorProperty::EnableAutomaticButton

Abilita il *automatica* pulsante nella finestra di dialogo di selezione colore. (Il pulsante automatico standard viene etichettato **automatica**.)

```
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
[in] Il testo dell'etichetta del pulsante automatico.

*colorAutomatic*<br/>
[in] Il valore di colore RGB del colore automatico (predefinito).

*bEnable*<br/>
[in] TRUE per abilitare il pulsante automatico; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Note

##  <a name="enableotherbutton"></a>  CMFCPropertyGridColorProperty::EnableOtherButton

Abilita il *altri* pulsante nella finestra di dialogo di selezione colore. (Lo standard altro pulsante viene denominato **altri colori**.)

```
void EnableOtherButton(
    LPCTSTR lpszLabel,
    BOOL bAltColorDlg = TRUE,
    BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
[in] Il testo dell'etichetta del pulsante.

*bAltColorDlg*<br/>
[in] True per visualizzare il `CMFCColorDialog` finestra di dialogo. FALSE per visualizzare la finestra di dialogo di selezione colori standard. Il valore predefinito è TRUE.

*bEnable*<br/>
[in] TRUE per visualizzare il pulsante; in caso contrario, FALSE.  Il valore predefinito è TRUE.

### <a name="remarks"></a>Note

##  <a name="getcolor"></a>  CMFCPropertyGridColorProperty::GetColor

Ottiene il colore corrente della proprietà.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Un valore di colore RGB.

### <a name="remarks"></a>Note

##  <a name="setcolor"></a>  CMFCPropertyGridColorProperty::SetColor

Imposta un nuovo colore per la proprietà.

```
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
[in] Un valore di colore RGB.

### <a name="remarks"></a>Note

##  <a name="setcolumnsnumber"></a>  CMFCPropertyGridColorProperty::SetColumnsNumber

Specifica il numero di colonne nella griglia delle proprietà del colore corrente.

```
void SetColumnsNumber(int nColumnsNumber);
```

### <a name="parameters"></a>Parametri

*nColumnsNumber*<br/>
[in] Il numero di colonne nella griglia delle proprietà di colore preferito.

### <a name="remarks"></a>Note

Questo metodo imposta il valore della `m_nColumnsNumber` protetto (membro dati).

##  <a name="setoriginalvalue"></a>  CMFCPropertyGridColorProperty::SetOriginalValue

Imposta il valore originale di una proprietà modificabile.

```
virtual void SetOriginalValue(const COleVariant& varValue);
```

### <a name="parameters"></a>Parametri

*varValue*<br/>
[in] Un valore.

### <a name="remarks"></a>Note

Usare la [cmfcpropertygridproperty:: Resetoriginalvalue](../../mfc/reference/cmfcpropertygridproperty-class.md#resetoriginalvalue) per reimpostare il valore originale di una proprietà modificata.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)<br/>
[Classe CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)
