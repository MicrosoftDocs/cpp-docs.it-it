---
title: Classe CMFCFontComboBox
ms.date: 11/04/2016
f1_keywords:
- CMFCFontComboBox
- AFXFONTCOMBOBOX/CMFCFontComboBox
- AFXFONTCOMBOBOX/CMFCFontComboBox::CMFCFontComboBox
- AFXFONTCOMBOBOX/CMFCFontComboBox::GetSelFont
- AFXFONTCOMBOBOX/CMFCFontComboBox::SelectFont
- AFXFONTCOMBOBOX/CMFCFontComboBox::Setup
- AFXFONTCOMBOBOX/CMFCFontComboBox::m_bDrawUsingFont
helpviewer_keywords:
- CMFCFontComboBox [MFC], CMFCFontComboBox
- CMFCFontComboBox [MFC], GetSelFont
- CMFCFontComboBox [MFC], SelectFont
- CMFCFontComboBox [MFC], Setup
- CMFCFontComboBox [MFC], m_bDrawUsingFont
ms.assetid: 9a53fb0c-7b45-486d-8187-2a4c723d9fbb
ms.openlocfilehash: 69e8f81e7e01d0610f3cbf88ac1725a21d59838f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69505304"
---
# <a name="cmfcfontcombobox-class"></a>Classe CMFCFontComboBox

La `CMFCFontComboBox` classe crea un controllo casella combinata contenente un elenco di tipi di carattere.

## <a name="syntax"></a>Sintassi

```
class CMFCFontComboBox : public CComboBox
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CMFCFontComboBox::CMFCFontComboBox](#cmfcfontcombobox)|Costruisce un oggetto `CMFCFontComboBox`.|
|`CMFCFontComboBox::~CMFCFontComboBox`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCFontComboBox::CompareItem`|Chiamata eseguita dal Framework per determinare la posizione relativa di un nuovo elemento nella casella di riepilogo ordinata del controllo casella combinata del tipo di carattere corrente. Esegue l'override di [CComboBox:: CompareItem](../../mfc/reference/ccombobox-class.md#compareitem).|
|`CMFCFontComboBox::DrawItem`|Chiamato dal Framework per creare un elemento specificato nel controllo casella combinata del tipo di carattere corrente. Esegue l'override di [CComboBox::D rawitem](../../mfc/reference/ccombobox-class.md#drawitem).|
|[CMFCFontComboBox::GetSelFont](#getselfont)|Recupera le informazioni sul tipo di carattere correntemente selezionato.|
|`CMFCFontComboBox::MeasureItem`|Chiamata eseguita dal Framework per informare le finestre delle dimensioni della casella di riepilogo nel controllo casella combinata tipo di carattere corrente. Esegue l'override di [CComboBox:: MeasureItem](../../mfc/reference/ccombobox-class.md#measureitem).|
|`CMFCFontComboBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCFontComboBox::SelectFont](#selectfont)|Consente di selezionare il tipo di carattere corrispondente ai criteri specificati nella casella combinata tipo di carattere.|
|[CMFCFontComboBox::Setup](#setup)|Inizializza l'elenco di elementi nella casella combinata tipo di carattere.|

### <a name="data-members"></a>Membri di dati

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CMFCFontComboBox::m_bDrawUsingFont](#m_bdrawusingfont)|Indica al Framework il tipo di carattere da utilizzare per tracciare le etichette degli elementi nella casella combinata tipo di carattere corrente.|

## <a name="remarks"></a>Note

Per utilizzare un `CMFCFontComboBox` oggetto in una finestra di dialogo, aggiungere `CMFCFontComboBox` una variabile alla classe della finestra di dialogo. Quindi, nel `OnInitDialog` metodo della classe della finestra di dialogo, chiamare il metodo [CMFCFontComboBox:: Setup](#setup) per inizializzare l'elenco di elementi nel controllo casella combinata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CComboBox](../../mfc/reference/ccombobox-class.md)

[CMFCFontComboBox](../../mfc/reference/cmfcfontcombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxfontcombobox. h

##  <a name="cmfcfontcombobox"></a>  CMFCFontComboBox::CMFCFontComboBox

Costruisce un oggetto `CMFCFontComboBox`.

```
CMFCFontComboBox();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="getselfont"></a>  CMFCFontComboBox::GetSelFont

Recupera le informazioni sul tipo di carattere correntemente selezionato.

```
CMFCFontInfo* GetSelFont() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto della [classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md) che descrive un tipo di carattere. Può essere NULL se nella casella combinata non è selezionato alcun carattere.

### <a name="remarks"></a>Note

##  <a name="m_bdrawusingfont"></a>CMFCFontComboBox:: m_bDrawUsingFont

Indica al Framework il tipo di carattere da utilizzare per tracciare le etichette degli elementi nella casella combinata tipo di carattere corrente.

```
static BOOL m_bDrawUsingFont;
```

### <a name="remarks"></a>Note

Impostare questo membro su TRUE per indicare al Framework di utilizzare lo stesso tipo di carattere per tracciare ogni etichetta dell'elemento. Impostare questo membro su FALSE per indicare al Framework di creare ogni etichetta di elemento con il tipo di carattere il cui nome è uguale all'etichetta. Il valore predefinito di questo membro è FALSE.

##  <a name="selectfont"></a>CMFCFontComboBox:: SelectFont

Consente di selezionare il tipo di carattere corrispondente ai criteri specificati nella casella combinata tipo di carattere.

```
BOOL SelectFont(CMFCFontInfo* pDesc);

BOOL SelectFont(
    LPCTSTR lpszName,
    BYTE nCharSet=DEFAULT_CHARSET);
```

### <a name="parameters"></a>Parametri

*pDesc*<br/>
in Punta a un oggetto descrizione del tipo di carattere.

*lpszName*<br/>
in Specifica il nome del tipo di carattere.

*nCharSet*<br/>
in Specifica un set di caratteri. Il valore predefinito è DEFAULT_CHARSET. Per ulteriori informazioni, vedere il `lfCharSet` membro della struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) .

### <a name="return-value"></a>Valore restituito

TRUE se un elemento nella casella combinata tipo di carattere corrisponde all'oggetto della descrizione del tipo di carattere o al set di caratteri specificato. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Utilizzare questo metodo per selezionare e scorrere l'elemento nella casella combinata tipo di carattere corrispondente al tipo di carattere specificato.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `SelectFont` metodo `CMFCFontComboBox` nella classe. Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#34](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#35](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_2.cpp)]

##  <a name="setup"></a>CMFCFontComboBox:: Setup

Inizializza l'elenco di elementi nella casella combinata tipo di carattere.

```
BOOL Setup(
    int nFontType=DEVICE_FONTTYPE|RASTER_FONTTYPE|TRUETYPE_FONTTYPE,
    BYTE nCharSet=DEFAULT_CHARSET,
    BYTE nPitchAndFamily=DEFAULT_PITCH);
```

### <a name="parameters"></a>Parametri

*nFontType*<br/>
in Specifica il tipo di carattere. Il valore predefinito è la combinazione bit per bit (o) di DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE.

*nCharSet*<br/>
in Specifica il set di caratteri del tipo di carattere. Il valore predefinito è DEFAULT_CHARSET.

*nPitchAndFamily*<br/>
in Specifica il passo del carattere e la famiglia. Il valore predefinito è DEFAULT_PITCH.

### <a name="return-value"></a>Valore restituito

TRUE se la casella combinata del tipo di carattere è stata inizializzata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo inizializza la casella combinata tipo di carattere enumerando i tipi di carattere attualmente installati che corrispondono ai parametri specificati e inserendo i nomi dei tipi di carattere nella casella combinata tipo di carattere.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `Setup` metodo `CMFCFontComboBox` nella classe. Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#34](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#36](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)<br/>
[Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)
