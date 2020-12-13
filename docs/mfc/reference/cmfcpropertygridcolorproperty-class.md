---
description: 'Altre informazioni su: classe CMFCPropertyGridColorProperty'
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
ms.openlocfilehash: 7673044a149dc1b5171167ed0854918434651dc1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334706"
---
# <a name="cmfcpropertygridcolorproperty-class"></a>Classe CMFCPropertyGridColorProperty

La classe `CMFCPropertyGridColorProperty` supporta un elemento controllo elenco delle proprietà che apre una finestra di dialogo di selezione colore.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyGridColorProperty : public CMFCPropertyGridProperty
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty](#cmfcpropertygridcolorproperty)|Costruisce un oggetto `CMFCPropertyGridColorProperty`.|
|`CMFCPropertyGridColorProperty::~CMFCPropertyGridColorProperty`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCPropertyGridColorProperty::EnableAutomaticButton](#enableautomaticbutton)|Abilita il pulsante *automatico* nella finestra di dialogo Selezione colori. Il pulsante standard automatico è contrassegnato come **automatico**.|
|[CMFCPropertyGridColorProperty::EnableOtherButton](#enableotherbutton)|Abilita il pulsante *altro* nella finestra di dialogo Selezione colori. Il pulsante altro standard è contrassegnato con un **numero maggiore di colori**.|
|`CMFCPropertyGridColorProperty::FormatProperty`|Formatta la rappresentazione di testo di un valore della proprietà. Esegue l'override di [CMFCPropertyGridProperty:: FormatProperty](../../mfc/reference/cmfcpropertygridproperty-class.md#formatproperty).|
|[CMFCPropertyGridColorProperty::GetColor](#getcolor)|Ottiene il colore corrente della proprietà.|
|`CMFCPropertyGridColorProperty::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|`CMFCPropertyGridColorProperty::OnClickButton`|Chiamato dal framework quando l'utente fa clic su un pulsante contenuto in una proprietà. Esegue l'override di [CMFCPropertyGridProperty:: OnclickButton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).|
|`CMFCPropertyGridColorProperty::OnDrawValue`|Chiamato dal framework per visualizzare il valore della proprietà. Esegue l'override di [CMFCPropertyGridProperty:: OnDrawValue](../../mfc/reference/cmfcpropertygridproperty-class.md#ondrawvalue).|
|`CMFCPropertyGridColorProperty::OnEdit`|Chiamato dal framework quando l'utente sta per modificare il valore di una proprietà. Esegue l'override di [CMFCPropertyGridProperty:: OnEdit](../../mfc/reference/cmfcpropertygridproperty-class.md#onedit).|
|`CMFCPropertyGridColorProperty::OnUpdateValue`|Chiamato dal framework quando viene modificato il valore di una proprietà modificabile. Esegue l'override di [CMFCPropertyGridProperty:: OnUpdateValue](../../mfc/reference/cmfcpropertygridproperty-class.md#onupdatevalue).|
|[CMFCPropertyGridColorProperty::SetColor](#setcolor)|Imposta un nuovo colore per la proprietà.|
|[CMFCPropertyGridColorProperty::SetColumnsNumber](#setcolumnsnumber)|Specifica il numero di colonne nella griglia delle proprietà del colore corrente.|
|[CMFCPropertyGridColorProperty::SetOriginalValue](#setoriginalvalue)|Imposta il valore originale di una proprietà modificabile.|

## <a name="remarks"></a>Commenti

La classe `CMFCPropertyGridColorProperty` supporta una proprietà Color che è possibile aggiungere a un controllo elenco delle proprietà. Per ulteriori informazioni, vedere la [classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra come costruire un oggetto della classe `CMFCPropertyGridColorProperty` e configurare tale oggetto usando diversi metodi della classe `CMFCPropertyGridColorProperty`. Il codice illustra come abilitare i pulsanti "automatico" (Automatic) e "altro" (Other) e come impostare il colore e il numero di colonne. Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#13](../../mfc/reference/codesnippet/cpp/cmfcpropertygridcolorproperty-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

[CMFCPropertyGridColorProperty](../../mfc/reference/cmfcpropertygridcolorproperty-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertygridctrl. h

## <a name="cmfcpropertygridcolorpropertycmfcpropertygridcolorproperty"></a><a name="cmfcpropertygridcolorproperty"></a> CMFCPropertyGridColorProperty:: CMFCPropertyGridColorProperty

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
[in] Nome della proprietà.

*color*<br/>
in Valore del colore della proprietà.

*pPalette*<br/>
in Puntatore a una tavolozza di colori. Il valore predefinito è NULL.

*lpszDescr*<br/>
in Descrizione della proprietà. Il valore predefinito è NULL.

*dwData*<br/>
in Dati specifici dell'applicazione, ad esempio un numero intero o un puntatore ad altri dati associati alla proprietà. Il valore predefinito è 0.

## <a name="cmfcpropertygridcolorpropertyenableautomaticbutton"></a><a name="enableautomaticbutton"></a> CMFCPropertyGridColorProperty:: EnableAutomaticButton

Abilita il pulsante *automatico* nella finestra di dialogo Selezione colori. Il pulsante standard automatico è contrassegnato come **automatico**.

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Testo dell'etichetta del pulsante automatico.

*colorAutomatic*<br/>
in Valore di colore RGB del colore automatico (predefinito).

*bEnable*<br/>
in TRUE per abilitare il pulsante automatico; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

## <a name="cmfcpropertygridcolorpropertyenableotherbutton"></a><a name="enableotherbutton"></a> CMFCPropertyGridColorProperty:: EnableOtherButton

Abilita il pulsante *altro* nella finestra di dialogo Selezione colori. Il pulsante altro standard è contrassegnato con un **numero maggiore di colori**.

```cpp
void EnableOtherButton(
    LPCTSTR lpszLabel,
    BOOL bAltColorDlg = TRUE,
    BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Testo dell'etichetta dell'altro pulsante.

*bAltColorDlg*<br/>
in TRUE per visualizzare la finestra di `CMFCColorDialog` dialogo; FALSE per visualizzare la finestra di dialogo Selezione colori standard. Il valore predefinito è TRUE.

*bEnable*<br/>
in TRUE per visualizzare l'altro pulsante; in caso contrario, FALSE.  Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

## <a name="cmfcpropertygridcolorpropertygetcolor"></a><a name="getcolor"></a> CMFCPropertyGridColorProperty:: GetColor

Ottiene il colore corrente della proprietà.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore di colore RGB.

### <a name="remarks"></a>Commenti

## <a name="cmfcpropertygridcolorpropertysetcolor"></a><a name="setcolor"></a> CMFCPropertyGridColorProperty:: ToColor

Imposta un nuovo colore per la proprietà.

```cpp
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
in Valore di colore RGB.

### <a name="remarks"></a>Commenti

## <a name="cmfcpropertygridcolorpropertysetcolumnsnumber"></a><a name="setcolumnsnumber"></a> CMFCPropertyGridColorProperty:: SetColumnsNumber

Specifica il numero di colonne nella griglia delle proprietà del colore corrente.

```cpp
void SetColumnsNumber(int nColumnsNumber);
```

### <a name="parameters"></a>Parametri

*nColumnsNumber*<br/>
in Il numero preferito di colonne nella griglia delle proprietà dei colori.

### <a name="remarks"></a>Commenti

Questo metodo imposta il valore del `m_nColumnsNumber` membro dati protetto.

## <a name="cmfcpropertygridcolorpropertysetoriginalvalue"></a><a name="setoriginalvalue"></a> CMFCPropertyGridColorProperty:: SetOriginalValue

Imposta il valore originale di una proprietà modificabile.

```
virtual void SetOriginalValue(const COleVariant& varValue);
```

### <a name="parameters"></a>Parametri

*varValue*<br/>
in Valore.

### <a name="remarks"></a>Commenti

Usare il metodo [CMFCPropertyGridProperty:: ResetOriginalValue](../../mfc/reference/cmfcpropertygridproperty-class.md#resetoriginalvalue) per reimpostare il valore originale di una proprietà modificata.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)<br/>
[Classe CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)
