---
title: CMFCToolBarFontComboBox (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCToolBarFontComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox::CMFCToolBarFontComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox::GetFontDesc
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox::SetFont
helpviewer_keywords:
- CMFCToolBarFontComboBox [MFC], CMFCToolBarFontComboBox
- CMFCToolBarFontComboBox [MFC], GetFontDesc
- CMFCToolBarFontComboBox [MFC], SetFont
ms.assetid: 25f8e08c-aadd-4cb5-9581-a99d49d444b1
ms.openlocfilehash: 7b31f4b725a6983171162d9805d08224ad787808
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360456"
---
# <a name="cmfctoolbarfontcombobox-class"></a>CMFCToolBarFontComboBox (classe)

Pulsante della barra degli strumenti che contiene un controllo casella combinata che consente all'utente di selezionare un tipo di carattere da un elenco di tipi di carattere di sistema.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarFontComboBox : public CMFCToolBarComboBoxButton
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarFontComboBox::CMFCToolBarBarComboBox](#cmfctoolbarfontcombobox)|Costruisce un oggetto `CMFCToolBarFontComboBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarFontComboBox::GetFontDesc](#getfontdesc)|Restituisce un `CMFCFontInfo` puntatore all'oggetto per un indice specificato nella casella combinata.|
|[CMFCToolBarFontComboBox::SetFont](#setfont)|Seleziona un tipo di carattere nella casella combinata del tipo di carattere in base al nome del tipo di carattere o al prefisso e al set di caratteri del tipo di carattere.|

### <a name="data-members"></a>Membri dei dati

[CMFCToolBarFontComboBox::m_nFontHeight](#m_nfontheight)<br/>
Altezza dei caratteri nella casella combinata del tipo di carattere.

## <a name="remarks"></a>Osservazioni

Per aggiungere un pulsante della casella combinata del tipo di carattere a una barra degli strumenti, attenersi alla seguente procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

1. Costruire `CMFCToolBarFontComboBox` un oggetto.

1. Nel gestore messaggi che elabora il messaggio AFX_WM_RESETTOOLBAR sostituire il pulsante originale con il nuovo pulsante della casella combinata utilizzando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

1. Sincronizzare il tipo di carattere selezionato nella casella combinata con il tipo di carattere nel documento utilizzando il [CMFCToolBarFontComboBox::SetFont](#setfont) metodo.

Per sincronizzare il tipo di carattere del documento con il tipo di carattere selezionato nella casella combinata, utilizzare il [CMFCToolBarFontComboBox::GetFontDesc](#getfontdesc) metodo per recuperare gli attributi del tipo di carattere selezionato e utilizzare tali attributi per creare un [CFont classe](../../mfc/reference/cfont-class.md) oggetto.

Il pulsante della casella combinata dei tipi di carattere chiama la funzione Win32 [EnumFontFamiliesEx](/windows/win32/api/wingdi/nf-wingdi-enumfontfamiliesexw) per determinare i tipi di carattere dello schermo e della stampante disponibili per il sistema.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)

[CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarfontcombobox.h

## <a name="cmfctoolbarfontcomboboxcmfctoolbarfontcombobox"></a><a name="cmfctoolbarfontcombobox"></a>CMFCToolBarFontComboBox::CMFCToolBarBarComboBox

Costruisce un [CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md) oggetto.

```
public:
CMFCToolBarFontComboBox(
    UINT uiID,
    int iImage,
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,
    BYTE nCharSet = DEFAULT_CHARSET,
    DWORD dwStyle = CBS_DROPDOWN,
    int iWidth = 0,
    BYTE nPitchAndFamily = DEFAULT_PITCH);

protected:
CMFCToolBarFontComboBox(
    CObList* pLstFontsExternal,
    int nFontType,
    BYTE nCharSet,
    BYTE nPitchAndFamily);

CMFCToolBarFontComboBox();
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] ID di comando della casella combinata.

*iImage (immagine)*<br/>
[in] Indice in base zero di un'immagine della barra degli strumenti. L'immagine si trova nel [CMFCToolBarImages classe](../../mfc/reference/cmfctoolbarimages-class.md) oggetto che [CMFCToolBar classe](../../mfc/reference/cmfctoolbar-class.md) gestisce.

*nTipoCarattere*<br/>
[in] Tipi di tipi di carattere contenuti nella casella combinata. Questo parametro può essere una combinazione (OR booleana) dei seguenti valori:

DEVICE_FONTTYPE

RASTER_FONTTYPE

TRUETYPE_FONTTYPE

*nCharSet (insieme)*<br/>
[in] Se impostato su DEFAULT_CHARSET, la casella combinata contiene tutti i tipi di carattere con nome univoco in tutti i set di caratteri. Se sono presenti due tipi di carattere con lo stesso nome, la casella combinata ne contiene uno. Se impostato su un valore di set di caratteri valido, la casella combinata contiene solo tipi di carattere nel set di caratteri specificato. Vedere [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) per un elenco dei possibili set di caratteri.

*DwStyle (in stile dwStyle)*<br/>
[in] Stile della casella combinata. (vedere [Stili casella combinata](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles))

*ILarghezza*<br/>
[in] Larghezza in pixel del controllo di modifica.

*nPitchAndFamily (informazioni in questo gruppo)*<br/>
[in] Se è impostata su DEFAULT_PITCH, la casella combinata contiene i tipi di carattere indipendentemente dall'altezza. Se è impostata su FIXED_PITCH o VARIABLE_PITCH, la casella combinata contiene solo i tipi di carattere con quel tipo di passo. Il filtro basato sulla famiglia di caratteri non è attualmente supportato.

*pLstFontsExternal (esterna)*<br/>
[fuori] Puntatore a un [CObList Class](../../mfc/reference/coblist-class.md) oggetto che archivia i tipi di carattere disponibili.

### <a name="remarks"></a>Osservazioni

In `CMFCToolBarFontComboBox` genere, gli oggetti memorizzano `CObList` l'elenco dei tipi di carattere disponibili in un singolo oggetto condiviso. Se si utilizza il secondo overload del costruttore e si fornisce `CMFCToolBarFontComboBox` un puntatore `CObList` valido a *pLstFontsExternal*, tale oggetto riempirà invece i punti di riferimento a tali *pLstFontsExternal* con i tipi di carattere disponibili.

### <a name="example"></a>Esempio

Nell'esempio seguente viene `CMFCToolBarFontComboBox` illustrato come costruire un oggetto. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#7](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontcombobox-class_1.cpp)]

## <a name="cmfctoolbarfontcomboboxgetfontdesc"></a><a name="getfontdesc"></a>CMFCToolBarFontComboBox::GetFontDesc

Restituisce un `CMFCFontInfo` puntatore all'oggetto per un indice specificato nella casella combinata.

```
const CMFCFontInfo* GetFontDesc(int iIndex=-1) const;
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Specifica l'indice in base zero di un elemento della casella combinata.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CMFCFontInfo`. Se *iIndex* non specifica un indice di elemento valido, il valore restituito è NULL.

## <a name="cmfctoolbarfontcomboboxm_nfontheight"></a><a name="m_nfontheight"></a>CMFCToolBarFontComboBox::m_nFontHeight

Specifica l'altezza, in pixel, dei caratteri nella casella combinata del tipo di carattere se la casella combinata ha uno stile di disegno proprietario.

```
static int m_nFontHeight
```

### <a name="remarks"></a>Osservazioni

Se `m_nFontHeight` la variabile è 0, l'altezza viene calcolata automaticamente in base al tipo di carattere predefinito della casella combinata. L'altezza include sia l'ascesa dei caratteri al di sopra della linea di base che la discesa dei caratteri sotto la linea di base.

## <a name="cmfctoolbarfontcomboboxsetfont"></a><a name="setfont"></a>CMFCToolBarFontComboBox::SetFont

Seleziona il tipo di carattere nella casella combinata del tipo di carattere in base al nome e al set di caratteri specificati nei parametri.

```
BOOL SetFont(
    LPCTSTR lpszName,
    BYTE nCharSet=DEFAULT_CHARSET,
    BOOL bExact=FALSE);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
[in] Specifica il nome o il prefisso del tipo di carattere.

*nCharSet (insieme)*<br/>
[in] Specifica il set di caratteri.

*bEsatto*<br/>
[in] Specifica se *lpszName* contiene il nome del tipo di carattere o il prefisso del tipo di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere è stato selezionato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se *bExact* è TRUE, questo metodo seleziona un tipo di carattere che corrisponde esattamente al nome specificato come *lpszName*. Se *bExact* è FALSE, questo metodo seleziona un tipo di carattere che inizia con il testo specificato come *lpszName* e che utilizza il set di caratteri specificato come *nCharSet*. Se *nCharSet* è impostato su DEFAULT_CHARSET, il set di caratteri verrà ignorato e solo *lpszName* verrà utilizzato per selezionare un tipo di carattere.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar (classe)](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)<br/>
[Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
