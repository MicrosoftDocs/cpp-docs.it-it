---
title: CMFCFontComboBox (classe)
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
ms.openlocfilehash: 60b4b7cdfdace2332de35dd93c43eacf592e99e2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367497"
---
# <a name="cmfcfontcombobox-class"></a>CMFCFontComboBox (classe)

La `CMFCFontComboBox` classe crea un controllo casella combinata che contiene un elenco di tipi di carattere.

## <a name="syntax"></a>Sintassi

```
class CMFCFontComboBox : public CComboBox
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFontComboBox::CMFCFontComboBox](#cmfcfontcombobox)|Costruisce un oggetto `CMFCFontComboBox`.|
|`CMFCFontComboBox::~CMFCFontComboBox`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCFontComboBox::CompareItem`|Chiamato dal framework per determinare la posizione relativa di un nuovo elemento nella casella di riepilogo ordinata del controllo casella combinata del tipo di carattere corrente. (Esegue l'override di [CComboBox::CompareItem](../../mfc/reference/ccombobox-class.md#compareitem).)|
|`CMFCFontComboBox::DrawItem`|Chiamato dal framework per disegnare un elemento specificato nel controllo casella combinata del tipo di carattere corrente. (Esegue l'override di [CComboBox::DrawItem.)](../../mfc/reference/ccombobox-class.md#drawitem)|
|[CMFCFontComboBox::GetSelFont](#getselfont)|Recupera informazioni sul tipo di carattere attualmente selezionato.|
|`CMFCFontComboBox::MeasureItem`|Chiamato dal framework per informare Windows delle dimensioni della casella di riepilogo nel controllo casella combinata del tipo di carattere corrente. (Esegue l'override di [CComboBox::MeasureItem](../../mfc/reference/ccombobox-class.md#measureitem).)|
|`CMFCFontComboBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage.](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCFontComboBox::SelectFont](#selectfont)|Seleziona il tipo di carattere che corrisponde ai criteri specificati dalla casella combinata del tipo di carattere.|
|[CMFCFontComboBox::Setup](#setup)|Inizializza l'elenco di elementi nella casella combinata del tipo di carattere.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFontComboBox::m_bDrawUsingFont](#m_bdrawusingfont)|Indica al framework il tipo di carattere da utilizzare per disegnare le etichette degli elementi nella casella combinata del tipo di carattere corrente.|

## <a name="remarks"></a>Osservazioni

Per utilizzare `CMFCFontComboBox` un oggetto in una `CMFCFontComboBox` finestra di dialogo, aggiungere una variabile alla classe della finestra di dialogo. Quindi, `OnInitDialog` nel metodo della classe della finestra di dialogo, chiamare il [CMFCFontComboBox::Setup](#setup) metodo per inizializzare l'elenco di elementi nel controllo casella combinata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CComboBox](../../mfc/reference/ccombobox-class.md)

[CMFCFontComboBox](../../mfc/reference/cmfcfontcombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxfontcombobox.h

## <a name="cmfcfontcomboboxcmfcfontcombobox"></a><a name="cmfcfontcombobox"></a>CMFCFontComboBox::CMFCFontComboBox

Costruisce un oggetto `CMFCFontComboBox`.

```
CMFCFontComboBox();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfontcomboboxgetselfont"></a><a name="getselfont"></a>CMFCFontComboBox::GetSelFont

Recupera informazioni sul tipo di carattere attualmente selezionato.

```
CMFCFontInfo* GetSelFont() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a [CMFCFontInfo Class](../../mfc/reference/cmfcfontinfo-class.md) oggetto che descrive un tipo di carattere. Può essere NULL se nella casella combinata non è selezionato alcun tipo di carattere.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcfontcomboboxm_bdrawusingfont"></a><a name="m_bdrawusingfont"></a>CMFCFontComboBox::m_bDrawUsingFont

Indica al framework il tipo di carattere da utilizzare per disegnare le etichette degli elementi nella casella combinata del tipo di carattere corrente.

```
static BOOL m_bDrawUsingFont;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro su TRUE per indicare al framework di utilizzare lo stesso tipo di carattere per disegnare ogni etichetta dell'elemento. Impostare questo membro su FALSE per indirizzare il framework per disegnare ogni etichetta dell'elemento con il tipo di carattere il cui nome è lo stesso dell'etichetta. Il valore predefinito di questo membro è FALSE.

## <a name="cmfcfontcomboboxselectfont"></a><a name="selectfont"></a>CMFCFontComboBox::SelectFont

Seleziona il tipo di carattere che corrisponde ai criteri specificati dalla casella combinata del tipo di carattere.

```
BOOL SelectFont(CMFCFontInfo* pDesc);

BOOL SelectFont(
    LPCTSTR lpszName,
    BYTE nCharSet=DEFAULT_CHARSET);
```

### <a name="parameters"></a>Parametri

*pDesc*<br/>
[in] Punta a un oggetto descrizione del tipo di carattere.

*lpszName*<br/>
[in] Specifica un nome di carattere.

*nCharSet (insieme)*<br/>
[in] Specifica un set di caratteri. Il valore predefinito è DEFAULT_CHARSET. Per ulteriori informazioni, `lfCharSet` vedere il membro della struttura [LOGFONT.](/windows/win32/api/wingdi/ns-wingdi-logfontw)

### <a name="return-value"></a>Valore restituito

TRUESe un elemento nella casella combinata del tipo di carattere corrisponde all'oggetto descrizione del tipo di carattere specificato o al nome del tipo di carattere e al set di caratteri; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per selezionare e scorrere fino all'elemento nella casella combinata del tipo di carattere che corrisponde al tipo di carattere specificato.

### <a name="example"></a>Esempio

Nell'esempio `CMFCFontComboBox` riportato di `SelectFont` seguito viene illustrato come utilizzare il metodo nella classe . Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#34](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#35](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_2.cpp)]

## <a name="cmfcfontcomboboxsetup"></a><a name="setup"></a>CMFCFontComboBox::Setup

Inizializza l'elenco di elementi nella casella combinata del tipo di carattere.

```
BOOL Setup(
    int nFontType=DEVICE_FONTTYPE|RASTER_FONTTYPE|TRUETYPE_FONTTYPE,
    BYTE nCharSet=DEFAULT_CHARSET,
    BYTE nPitchAndFamily=DEFAULT_PITCH);
```

### <a name="parameters"></a>Parametri

*nTipoCarattere*<br/>
[in] Specifica il tipo di carattere. Il valore predefinito è la combinazione bit per bit (OR) di DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE.

*nCharSet (insieme)*<br/>
[in] Specifica il set di caratteri del tipo di carattere. Il valore predefinito è DEFAULT_CHARSET.

*nPitchAndFamily (informazioni in questo gruppo)*<br/>
[in] Specifica l'altezza e la famiglia del carattere. Il valore predefinito è DEFAULT_PITCH.

### <a name="return-value"></a>Valore restituito

TRUESe la casella combinata del tipo di carattere è stata inizializzata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo inizializza la casella combinata dei tipi di carattere enumerando i tipi di carattere attualmente installati che corrispondono ai parametri specificati e inserendo tali nomi di carattere nella casella combinata del tipo di carattere.

### <a name="example"></a>Esempio

Nell'esempio `CMFCFontComboBox` riportato di `Setup` seguito viene illustrato come utilizzare il metodo nella classe . Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#34](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#36](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBarFontComboBox (classe)](../../mfc/reference/cmfctoolbarfontcombobox-class.md)<br/>
[Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)
