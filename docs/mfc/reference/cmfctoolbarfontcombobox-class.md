---
description: 'Altre informazioni su: classe CMFCToolBarFontComboBox'
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
ms.openlocfilehash: 900da03bab8fdc95d93a9c92a14932d7a5bdd9ec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331765"
---
# <a name="cmfctoolbarfontcombobox-class"></a>Classe CMFCToolBarFontComboBox

Pulsante della barra degli strumenti contenente un controllo casella combinata che consente all'utente di selezionare un tipo di carattere da un elenco di tipi di carattere di sistema.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarFontComboBox : public CMFCToolBarComboBoxButton
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[CMFCToolBarFontComboBox:: CMFCToolBarFontComboBox](#cmfctoolbarfontcombobox)|Costruisce un oggetto `CMFCToolBarFontComboBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCToolBarFontComboBox:: GetFontDesc](#getfontdesc)|Restituisce un puntatore all' `CMFCFontInfo` oggetto per un indice specificato nella casella combinata.|
|[CMFCToolBarFontComboBox:: sefont](#setfont)|Seleziona un tipo di carattere nella casella combinata tipo di carattere in base al nome del tipo di carattere o al prefisso e al set di caratteri del tipo di carattere.|

### <a name="data-members"></a>Membri dei dati

[CMFCToolBarFontComboBox:: m_nFontHeight](#m_nfontheight)<br/>
Altezza dei caratteri nella casella combinata tipo di carattere.

## <a name="remarks"></a>Commenti

Per aggiungere un pulsante della casella combinata carattere a una barra degli strumenti, attenersi alla seguente procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

1. Costruisce un `CMFCToolBarFontComboBox` oggetto.

1. Nel gestore di messaggi che elabora il messaggio di AFX_WM_RESETTOOLBAR, sostituire il pulsante originale con il nuovo pulsante della casella combinata tramite [CMFCToolBar:: ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

1. Sincronizzare il tipo di carattere selezionato nella casella combinata con il tipo di carattere del documento usando il metodo [CMFCToolBarFontComboBox:: sefont](#setfont) .

Per sincronizzare il tipo di carattere del documento con il tipo di carattere selezionato nella casella combinata, utilizzare il metodo [CMFCToolBarFontComboBox:: GetFontDesc](#getfontdesc) per recuperare gli attributi del tipo di carattere selezionato e utilizzare tali attributi per creare un oggetto della [classe CFont](../../mfc/reference/cfont-class.md) .

Il pulsante casella combinata tipo di carattere chiama la funzione Win32 [EnumFontFamiliesEx](/windows/win32/api/wingdi/nf-wingdi-enumfontfamiliesexw) per determinare i tipi di carattere dello schermo e della stampante disponibili per il sistema.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)

[CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarfontcombobox. h

## <a name="cmfctoolbarfontcomboboxcmfctoolbarfontcombobox"></a><a name="cmfctoolbarfontcombobox"></a> CMFCToolBarFontComboBox:: CMFCToolBarFontComboBox

Costruisce un oggetto [CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md) .

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
in ID del comando della casella combinata.

*iImage*<br/>
in Indice in base zero di un'immagine della barra degli strumenti. L'immagine si trova nell'oggetto della [classe CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) che la classe di [classe di CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) gestisce.

*nFontType*<br/>
in Tipi di tipi di carattere contenuti nella casella combinata. Questo parametro può essere una combinazione (booleana o) dei valori seguenti:

DEVICE_FONTTYPE

RASTER_FONTTYPE

TRUETYPE_FONTTYPE

*nCharSet*<br/>
in Se è impostato su DEFAULT_CHARSET, la casella combinata contiene tutti i tipi di carattere con nome univoco in tutti i set di caratteri. Se sono presenti due tipi di carattere con lo stesso nome, la casella combinata contiene uno di essi. Se è impostato su un valore del set di caratteri valido, la casella combinata contiene solo caratteri nel set di caratteri specificato. Vedere [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) per un elenco di set di caratteri possibili.

*dwStyle*<br/>
in Stile della casella combinata. (vedere [stili casella combinata](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles))

*Larghezza*<br/>
in Larghezza in pixel del controllo di modifica.

*nPitchAndFamily*<br/>
in Se è impostato su DEFAULT_PITCH, la casella combinata contiene caratteri indipendentemente dal pitch. Se è impostato su FIXED_PITCH o VARIABLE_PITCH, la casella combinata contiene solo i tipi di carattere con tale tipo di passo. Il filtro basato sulla famiglia di caratteri non è attualmente supportato.

*pLstFontsExternal*<br/>
out Puntatore a un oggetto della [classe CObList](../../mfc/reference/coblist-class.md) che archivia i tipi di carattere disponibili.

### <a name="remarks"></a>Commenti

In genere, `CMFCToolBarFontComboBox` gli oggetti archiviano l'elenco dei tipi di carattere disponibili in un singolo `CObList` oggetto condiviso. Se si usa il secondo overload del costruttore e si fornisce un puntatore valido a *pLstFontsExternal*, `CMFCToolBarFontComboBox` l'oggetto compilerà invece `CObList` il *pLstFontsExternal* a cui punta con i tipi di carattere disponibili.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCToolBarFontComboBox` oggetto. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#7](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontcombobox-class_1.cpp)]

## <a name="cmfctoolbarfontcomboboxgetfontdesc"></a><a name="getfontdesc"></a> CMFCToolBarFontComboBox:: GetFontDesc

Restituisce un puntatore all' `CMFCFontInfo` oggetto per un indice specificato nella casella combinata.

```
const CMFCFontInfo* GetFontDesc(int iIndex=-1) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Specifica l'indice in base zero di un elemento della casella combinata.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CMFCFontInfo`. Se *iIndex* non specifica un indice di elemento valido, il valore restituito è null.

## <a name="cmfctoolbarfontcomboboxm_nfontheight"></a><a name="m_nfontheight"></a> CMFCToolBarFontComboBox:: m_nFontHeight

Specifica l'altezza, in pixel, dei caratteri nella casella combinata tipo di carattere se la casella combinata dispone di Owner Draw stile.

```
static int m_nFontHeight
```

### <a name="remarks"></a>Commenti

Se la `m_nFontHeight` variabile è 0, l'altezza viene calcolata automaticamente in base al tipo di carattere predefinito della casella combinata. L'altezza include sia l'ascesa dei caratteri sopra la linea di base che la discesa dei caratteri sotto la linea di base.

## <a name="cmfctoolbarfontcomboboxsetfont"></a><a name="setfont"></a> CMFCToolBarFontComboBox:: sefont

Consente di selezionare il tipo di carattere nella casella combinata tipo di carattere in base al nome del tipo di carattere e al set di caratteri specificati nei parametri.

```
BOOL SetFont(
    LPCTSTR lpszName,
    BYTE nCharSet=DEFAULT_CHARSET,
    BOOL bExact=FALSE);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
in Specifica il nome o il prefisso del tipo di carattere.

*nCharSet*<br/>
in Specifica il set di caratteri.

*bExact*<br/>
in Specifica se *lpszName* contiene il nome del tipo di carattere o il prefisso del tipo di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere è stato selezionato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se *bExact* è true, questo metodo seleziona un tipo di carattere che corrisponde esattamente al nome specificato come *lpszName*. Se *bExact* è false, questo metodo seleziona un tipo di carattere che inizia con il testo specificato come *lpszName* e che utilizza il set di caratteri specificato come *nCharSet*. Se *nCharSet* è impostato su DEFAULT_CHARSET, il set di caratteri verrà ignorato e verrà usato solo *lpszName* per selezionare un tipo di carattere.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)<br/>
[Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)<br/>
[Metodo CMFCToolBar:: ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
