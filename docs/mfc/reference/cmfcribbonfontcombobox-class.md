---
title: CMFCRibbonFontComboBox (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonFontComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::CMFCRibbonFontComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::BuildFonts
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetCharSet
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetFontDesc
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetFontType
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetPitchAndFamily
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::RebuildFonts
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::SetFont
helpviewer_keywords:
- CMFCRibbonFontComboBox [MFC], CMFCRibbonFontComboBox
- CMFCRibbonFontComboBox [MFC], BuildFonts
- CMFCRibbonFontComboBox [MFC], GetCharSet
- CMFCRibbonFontComboBox [MFC], GetFontDesc
- CMFCRibbonFontComboBox [MFC], GetFontType
- CMFCRibbonFontComboBox [MFC], GetPitchAndFamily
- CMFCRibbonFontComboBox [MFC], RebuildFonts
- CMFCRibbonFontComboBox [MFC], SetFont
ms.assetid: 33b4db50-df4f-45fa-8f05-2e6e73c31435
ms.openlocfilehash: dbf28787e0c0f7d89586fbf98632bd9172c12eed
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754164"
---
# <a name="cmfcribbonfontcombobox-class"></a>CMFCRibbonFontComboBox (classe)

Implementa una casella combinata che contiene un elenco dei tipi di carattere. Posizionare la casella combinata in un pannello della barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonFontComboBox : public CMFCRibbonComboBox
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCRibbonFontComboBox::~CMFCRibbonFontComboBox`|Distruttore.|

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonFontComboBox::CMFCRibbonFontComboBox](#cmfcribbonfontcombobox)|Costruisce e inizializza un oggetto `CMFCRibbonFontComboBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonFontComboBox::BuildFonts](#buildfonts)|Popola la casella combinata tipi di carattere della barra multifunzione con tipi di carattere del tipo di carattere, del set di caratteri e del passo e famiglia specificati.|
|`CMFCRibbonFontComboBox::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCRibbonFontComboBox::GetCharSet](#getcharset)|Restituisce il set di caratteri specificato.|
|[CMFCRibbonFontComboBox::GetFontDesc](#getfontdesc)||
|[CMFCRibbonFontComboBox::GetFontType](#getfonttype)|Restituisce i tipi di carattere da visualizzare nella casella combinata. Le opzioni valide sono DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE oppure qualsiasi altra combinazione bit per bit.|
|[CMFCRibbonFontComboBox::GetPitchAndFamily](#getpitchandfamily)|Restituisce il passo e la famiglia di caratteri della barra multifunzione che vengono visualizzate nella casella combinata.|
|`CMFCRibbonFontComboBox::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCRibbonFontComboBox::RebuildFonts](#rebuildfonts)|Popola la casella combinata tipi di carattere della barra multifunzione con tipi di carattere del tipo di carattere, del set di caratteri e del passo e famiglia specificati in precedenza.|
|[CMFCRibbonFontComboBox::SetFont](#setfont)|Seleziona il tipo di carattere specificato nella casella combinata.|

## <a name="remarks"></a>Osservazioni

Dopo aver `CMFCRibbonFontComboBox` creato un oggetto, aggiungerlo a un gruppo della barra multifunzione chiamando [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

[CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)

[CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)

[CMFCRibbonFontComboBox](../../mfc/reference/cmfcribbonfontcombobox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonComboBox.h

## <a name="cmfcribbonfontcomboboxbuildfonts"></a><a name="buildfonts"></a>CMFCRibbonFontComboBox::BuildFonts

Popola la casella combinata sulla barra multifunzione con i tipi di carattere.

```cpp
void BuildFonts(
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,
    BYTE nCharSet = DEFAULT_CHARSET,
    BYTE nPitchAndFamily = DEFAULT_PITCH);
```

### <a name="parameters"></a>Parametri

*nTipoCarattere*<br/>
[in] Specifica il tipo di carattere dei tipi di carattere da aggiungere.

*nCharSet (insieme)*<br/>
[in] Specifica il set di caratteri da aggiungere.

*nPitchAndFamily (informazioni in questo gruppo)*<br/>
[in] Specifica l'altezza e la famiglia dei font da aggiungere.

## <a name="cmfcribbonfontcomboboxcmfcribbonfontcombobox"></a><a name="cmfcribbonfontcombobox"></a>CMFCRibbonFontComboBox::CMFCRibbonFontComboBox

Costruisce e inizializza un [CMFCRibbonFontComboBox](../../mfc/reference/cmfcribbonfontcombobox-class.md) oggetto.

```
CMFCRibbonFontComboBox(
    UINT nID,
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,
    BYTE nCharSet = DEFAULT_CHARSET,
    BYTE nPitchAndFamily = DEFAULT_PITCH,
    int nWidth = -1);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] ID di comando del comando che viene eseguito quando l'utente seleziona un elemento dalla casella combinata.

*nTipoCarattere*<br/>
[in] Specifica i tipi di carattere da visualizzare nella casella combinata. Le opzioni valide sono DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE oppure qualsiasi altra combinazione bit per bit.

*nCharSet (insieme)*<br/>
[in] Filtra i font nella casella combinata in base a quelli che appartengono al set di caratteri specificato.

*nPitchAndFamily (informazioni in questo gruppo)*<br/>
[in] Specifica l'altezza e la famiglia dei tipi di carattere visualizzati nella casella combinata.

*nLarghezza*<br/>
[in] Specifica la larghezza, in pixel, della casella combinata.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui possibili valori dei parametri *nFontType,* vedere [EnumFontFamProc](/previous-versions/dd162621\(v=vs.85\)) nella documentazione di Windows SDK.

Per ulteriori informazioni sui set di caratteri validi che possono essere assegnati a *nCharSet*e sui valori validi che possono essere assegnati a *nPitchAndFamily*, vedere [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) nella documentazione di Windows SDK.

## <a name="cmfcribbonfontcomboboxgetfontdesc"></a><a name="getfontdesc"></a>CMFCRibbonFontComboBox::GetFontDesc

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
const CMFCFontInfo* GetFontDesc(int iIndex = -1) const;
```

### <a name="parameters"></a>Parametri

[in] *indice iIndex*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonfontcomboboxrebuildfonts"></a><a name="rebuildfonts"></a>CMFCRibbonFontComboBox::RebuildFonts

Popola la casella combinata sulla barra multifunzione con i tipi di carattere di un tipo di carattere, un set di caratteri, un set di caratteri e un'altezza e una famiglia specificati in precedenza.

```cpp
void RebuildFonts();
```

### <a name="remarks"></a>Osservazioni

È possibile specificare il tipo di carattere, il set di caratteri e l'altezza e la famiglia dei tipi di carattere da includere nella casella combinata del tipo di carattere della barra multifunzione nel [costruttore](#cmfcribbonfontcombobox) per questa classe oppure chiamando [CMFCRibbonFontComboBox::BuildFonts](#buildfonts).

## <a name="cmfcribbonfontcomboboxsetfont"></a><a name="setfont"></a>CMFCRibbonFontComboBox::SetFont

Seleziona il tipo di carattere specificato nella casella combinata.

```
BOOL SetFont(
    LPCTSTR lpszName,
    BYTE nCharSet = DEFAULT_CHARSET,
    BOOL bExact = FALSE);
```

### <a name="parameters"></a>Parametri

'lpszName' Specifica il nome del tipo di carattere da selezionare.

*nCharSet (insieme)*<br/>
Specifica il set di caratteri per il tipo di carattere selezionato.

*bEsatto*<br/>
TRUE per specificare che il set di caratteri deve corrispondere quando si seleziona un tipo di carattere. FALSE per specificare che il set di caratteri può essere ignorato quando si seleziona un tipo di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere specificato è stato trovato e selezionato; in caso contrario, zero.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonfontcomboboxgetcharset"></a><a name="getcharset"></a>CMFCRibbonFontComboBox::GetCharSet

Restituisce il set di caratteri specificato.

```
BYTE GetCharSet() const;
```

### <a name="return-value"></a>Valore restituito

Set di caratteri (vedere LOGFONT nella documentazione di Windows SDK).

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonfontcomboboxgetfonttype"></a><a name="getfonttype"></a>CMFCRibbonFontComboBox::GetFontType

Restituisce i tipi di carattere da visualizzare nella casella combinata. Le opzioni valide sono DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE oppure qualsiasi altra combinazione bit per bit.

```
int GetFontType() const;
```

### <a name="return-value"></a>Valore restituito

Tipi di carattere (vedere EnumFontFamProc nella documentazione di Windows SDK).

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonfontcomboboxgetpitchandfamily"></a><a name="getpitchandfamily"></a>CMFCRibbonFontComboBox::GetPitchAndFamily

Restituisce il passo e la famiglia di caratteri della barra multifunzione che vengono visualizzate nella casella combinata.

```
BYTE GetPitchAndFamily() const;
```

### <a name="return-value"></a>Valore restituito

Pitch e la famiglia (vedere LOGFONT nella documentazione di Windows SDK).

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)
