---
title: Classe CMFCToolBarFontComboBox
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
ms.openlocfilehash: 4ab4eece67406b1c5a52669beafc9bfd8acd32e6
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57283722"
---
# <a name="cmfctoolbarfontcombobox-class"></a>Classe CMFCToolBarFontComboBox

Pulsante della barra degli strumenti che contiene un controllo casella combinata che consente all'utente di selezionare un tipo di carattere da un elenco di tipi di carattere del sistema.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarFontComboBox : public CMFCToolBarComboBoxButton
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarFontComboBox::CMFCToolBarFontComboBox](#cmfctoolbarfontcombobox)|Costruisce un oggetto `CMFCToolBarFontComboBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarFontComboBox::GetFontDesc](#getfontdesc)|Restituisce un puntatore al `CMFCFontInfo` oggetto per un indice specificato nella casella combinata.|
|[CMFCToolBarFontComboBox::SetFont](#setfont)|Seleziona un tipo di carattere nella casella combinata tipo di carattere in base a uno, il nome del tipo di carattere o il prefisso e set di caratteri del tipo di carattere.|

### <a name="data-members"></a>Membri di dati

[CMFCToolBarFontComboBox::m_nFontHeight](#m_nfontheight)<br/>
L'altezza dei caratteri nella casella combinata tipo di carattere.

## <a name="remarks"></a>Note

Per aggiungere un pulsante della casella combinata tipo di carattere a una barra degli strumenti, seguire questa procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

1. Costruire un `CMFCToolBarFontComboBox` oggetto.

1. Nel gestore di messaggi che elabora il messaggio AFX_WM_RESETTOOLBAR, sostituire il pulsante originale con il nuovo pulsante della casella combinata con [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

1. Sincronizzare il tipo di carattere selezionato nella casella combinata con il tipo di carattere del documento utilizzando il [CMFCToolBarFontComboBox::SetFont](#setfont) (metodo).

Per la sincronizzazione del tipo di carattere del documento con il tipo di carattere selezionato nella casella combinata, usare il [CMFCToolBarFontComboBox::GetFontDesc](#getfontdesc) metodo per recuperare gli attributi del tipo di carattere selezionato e usare gli attributi per creare un [ Classe CFont](../../mfc/reference/cfont-class.md) oggetto.

Il pulsante della casella combinata tipo di carattere chiama la funzione Win32 [EnumFontFamiliesEx](/windows/desktop/api/wingdi/nf-wingdi-enumfontfamiliesexa) per determinare dello schermo e della stampante tipi di carattere disponibili nel sistema.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)

[CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarfontcombobox.h

##  <a name="cmfctoolbarfontcombobox"></a>  CMFCToolBarFontComboBox::CMFCToolBarFontComboBox

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
[in] ID comando della casella combinata.

*iImage*<br/>
[in] Indice a base zero di un'immagine della barra degli strumenti. L'immagine si trova nel [classe CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) dell'oggetto che [classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) classe gestisce.

*nFontType*<br/>
[in] I tipi di carattere contenente la casella combinata. Questo parametro può essere una combinazione (OR booleano) dei valori seguenti:

DEVICE_FONTTYPE

RASTER_FONTTYPE

TRUETYPE_FONTTYPE

*nCharSet*<br/>
[in] Se impostato su DEFAULT_CHARSET, la casella combinata contiene i tipi di carattere denominato tutto in modo univoco in tutti i set di caratteri. (Se sono presenti due tipi di carattere con lo stesso nome, la casella combinata contiene uno di essi). Se impostato su un valore di set di caratteri valida, la casella combinata contiene solo i tipi di carattere nel set di caratteri specificato. Visualizzare [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) per un elenco di caratteri possibili imposta.

*dwStyle*<br/>
[in] Lo stile della casella combinata. (vedere [stili casella combinata](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles))

*iWidth*<br/>
[in] La larghezza in pixel del controllo di modifica.

*nPitchAndFamily*<br/>
[in] Se impostato su DEFAULT_PITCH, la casella combinata contiene i tipi di carattere indipendentemente dal passo. Se è impostato su FIXED_PITCH o VARIABLE_PITCH, la casella combinata contiene solo i tipi di carattere con tale tipo di passo. Filtro in base alla famiglia di caratteri non è attualmente supportato.

*pLstFontsExternal*<br/>
[out] Puntatore a un [classe CObList](../../mfc/reference/coblist-class.md) oggetto che archivia i tipi di carattere disponibili.

### <a name="remarks"></a>Note

In genere `CMFCToolBarFontComboBox` oggetti archiviare l'elenco dei tipi di carattere disponibili in un singolo condiviso `CObList` oggetto. Se si usa il secondo overload del costruttore e un puntatore valido a fornire *pLstFontsExternal*, che `CMFCToolBarFontComboBox` oggetto invece compilerà il `CObList` che *pLstFontsExternal* punti da con tipi di carattere disponibili.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCToolBarFontComboBox` oggetto. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#7](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontcombobox-class_1.cpp)]

##  <a name="getfontdesc"></a>  CMFCToolBarFontComboBox::GetFontDesc

Restituisce un puntatore al `CMFCFontInfo` oggetto per un indice specificato nella casella combinata.

```
const CMFCFontInfo* GetFontDesc(int iIndex=-1) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
[in] Specifica l'indice in base zero di un elemento della casella combinata.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CMFCFontInfo` . Se *iIndex* non specifica un indice di elemento validi, il valore restituito è NULL.

##  <a name="m_nfontheight"></a>  CMFCToolBarFontComboBox::m_nFontHeight

Specifica l'altezza, in pixel, di caratteri nella casella combinata tipo di carattere se la casella combinata dispone di proprietario stile di disegno.

```
static int m_nFontHeight
```

### <a name="remarks"></a>Note

Se il `m_nFontHeight` variabile è 0, l'altezza viene calcolato automaticamente in base al tipo di carattere predefinito della casella combinata. L'altezza include l'ascent dei caratteri di sopra della linea di base e il descent dei caratteri di sotto della linea di base.

##  <a name="setfont"></a>  CMFCToolBarFontComboBox::SetFont

Seleziona che il tipo di carattere nella casella combinata tipo di carattere in base al nome del tipo di carattere e carattere set che è specificati nei parametri.

```
BOOL SetFont(
    LPCTSTR lpszName,
    BYTE nCharSet=DEFAULT_CHARSET,
    BOOL bExact=FALSE);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
[in] Specifica il nome del tipo di carattere o un prefisso.

*nCharSet*<br/>
[in] Specifica il set di caratteri.

*bExact*<br/>
[in] Specifica se *lpszName* contiene il nome del tipo di carattere o il prefisso del carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere è stato selezionato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Se *bExact* è TRUE, questo metodo consente di selezionare un tipo di carattere che corrisponde esattamente al nome specificato come *lpszName*. Se *bExact* è FALSE, seleziona questo metodo un tipo di carattere che inizia con il testo specificato come *lpszName* e che usa il set di caratteri che è stato specificato come *nCharSet*. Se *nCharSet* è impostata per DEFAULT_CHARSET, il set di caratteri saranno ignorati e unica *lpszName* verrà usato per selezionare un tipo di carattere.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)<br/>
[Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
