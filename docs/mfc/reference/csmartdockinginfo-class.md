---
title: Classe CSmartDockingInfo
ms.date: 11/19/2018
f1_keywords:
- CSmartDockingInfo
- AFXDOCKINGMANAGER/CSmartDockingInfo
- AFXDOCKINGMANAGER/CSmartDockingInfo::CopyTo
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_bUseThemeColorInShading
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrBaseBackground
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrToneDest
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrToneSrc
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrTransparent
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_nCentralGroupOffset
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_sizeTotal
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_uiMarkerBmpResID
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_uiMarkerLightBmpResID
helpviewer_keywords:
- CSmartDockingInfo [MFC], CopyTo
- CSmartDockingInfo [MFC], m_bUseThemeColorInShading
- CSmartDockingInfo [MFC], m_clrBaseBackground
- CSmartDockingInfo [MFC], m_clrToneDest
- CSmartDockingInfo [MFC], m_clrToneSrc
- CSmartDockingInfo [MFC], m_clrTransparent
- CSmartDockingInfo [MFC], m_nCentralGroupOffset
- CSmartDockingInfo [MFC], m_sizeTotal
- CSmartDockingInfo [MFC], m_uiMarkerBmpResID
- CSmartDockingInfo [MFC], m_uiMarkerLightBmpResID
ms.assetid: cab04f38-4bc1-4378-9337-c56fc87fbd68
ms.openlocfilehash: ebb5e75b5b298097cfce043bd83ec88ca0ab4030
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751303"
---
# <a name="csmartdockinginfo-class"></a>Classe CSmartDockingInfo

Definisce l'aspetto dei marcatori standard di ancoraggio intelligente.

## <a name="syntax"></a>Sintassi

```
class CSmartDockingInfo : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CSmartDockingInfo::CSmartDockingInfo`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSmartDockingInfo::CopiaTo](#copyto)|Copia i parametri delle informazioni di ancoraggio intelligenti correnti nell'oggetto [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) fornito.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CSmartDockingInfo::m_bUseThemeColorInShading](#m_busethemecolorinshading)|Specifica se utilizzare il colore del tema corrente quando il framework visualizza marcatori di ancoraggio intelligenti.|
|[CSmartDockingInfo::m_clrBaseBackground](#m_clrbasebackground)|Specifica il colore di sfondo di base dei marcatori di ancoraggio intelligenti.|
|[CSmartDockingInfo::m_clrToneDest](#m_clrtonedest)|Specifica il colore che `m_clrToneSrc` sostituisce nelle bitmap degli indicatori di ancoraggio intelligenti.|
|[CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc)|Specifica il colore delle bitmap degli indicatori di ancoraggio intelligenti.|
|[CSmartDockingInfo::m_clrTransparent](#m_clrtransparent)|Specifica il colore delle bitmap degli indicatori di ancoraggio intelligenti quando sono trasparenti.|
|[CSmartDockingInfo::m_nCentralGroupOffset](#m_ncentralgroupoffset)|Specifica l'offset del gruppo centrale di marcatori di ancoraggio intelligente dai contorni del rettangolo del gruppo centrale.|
|[CSmartDockingInfo::m_sizeTotal](#m_sizetotal)|Specifica la dimensione totale di tutti i marcatori di ancoraggio intelligente in un gruppo.|
|[CSmartDockingInfo::m_uiMarkerBmpResID](#m_uimarkerbmpresid)|Definisce gli ID di risorsa delle bitmap utilizzate dal framework per gli indicatori di ancoraggio intelligente non evidenziati.|
|[CSmartDockingInfo::m_uiMarkerLightBmpResID](#m_uimarkerlightbmpresid)|Definisce gli ID di risorsa delle bitmap utilizzate dal framework per gli indicatori di ancoraggio intelligenti evidenziati.|

## <a name="remarks"></a>Osservazioni

Il framework gestisce internamente i marcatori di ancoraggio intelligenti. La figura seguente mostra i marcatori di ancoraggio intelligenti standard:

![Marcatori standard per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkers.png "Marcatori standard per ancoraggio intelligente")

In questa figura, l'immagine a sinistra mostra un indicatore di ancoraggio intelligente del gruppo centrale che non dispone di ancoraggio a una scheda abilitata. L'immagine al centro mostra un indicatore di ancoraggio intelligente del bordo destro. L'immagine a destra mostra un indicatore di ancoraggio intelligente del gruppo centrale che ha l'ancoraggio a una scheda abilitata. Il marcatore di ancoraggio intelligente del gruppo centrale ha una bitmap principale e cinque bitmap del marcatore di ancoraggio intelligente.

È possibile personalizzare i seguenti parametri dei marcatori di ancoraggio intelligenti:

- Colore. Ad esempio, è possibile sostituire il colore blu dei marcatori nella figura con qualsiasi colore definito dall'utente.

- Colore trasparenza.

- Offset di un indicatore di ancoraggio intelligente nel gruppo centrale dal bordo del rettangolo di delimitazione.

- Bitmap principale che rappresenta il gruppo centrale.

- Bitmap che rappresenta gli indicatori di ancoraggio intelligente regolari ed evidenziati.

La figura seguente mostra un esempio di marcatori di ancoraggio intelligenti che sono stati personalizzati:

![Marcatori personalizzati per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkerscustom.png "Marcatori personalizzati per ancoraggio intelligente")

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDockingManager.h

## <a name="csmartdockinginfocopyto"></a><a name="copyto"></a>CSmartDockingInfo::CopiaTo

Copia i parametri di ancoraggio intelligente correnti nell'oggetto [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) fornito.

```cpp
void CopyTo(CSmartDockingInfo& params);
```

### <a name="parameters"></a>Parametri

*params*<br/>
[fuori] Oggetto di `CSmartDockingInfo` tipo popolato con i parametri di ancoraggio intelligente correnti.

## <a name="csmartdockinginfom_busethemecolorinshading"></a><a name="m_busethemecolorinshading"></a>CSmartDockingInfo::m_bUseThemeColorInShading

Specifica se utilizzare il colore del tema corrente quando il framework visualizza marcatori di ancoraggio intelligenti.

```
BOOL m_bUseThemeColorInShading;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, i marcatori vengono disegnati utilizzando il colore del tema corrente; in caso contrario, i marcatori vengono disegnati con un colore azzurro.

Il valore predefinito è FALSE.

## <a name="csmartdockinginfom_clrbasebackground"></a><a name="m_clrbasebackground"></a>CSmartDockingInfo::m_clrBaseBackground

Specifica il colore di sfondo di base dei marcatori di ancoraggio intelligenti.

```
COLORREF m_clrBaseBackground;
```

## <a name="csmartdockinginfom_clrtonedest"></a><a name="m_clrtonedest"></a>CSmartDockingInfo::m_clrToneDest

Specifica il colore che `m_clrToneSrc` verrà sostituito nelle bitmap degli indicatori di ancoraggio intelligenti.

```
COLORREF m_clrToneDest;
```

### <a name="remarks"></a>Osservazioni

Impostare questo valore per modificare il colore delle bitmap del marcatore a livello di codice. Ad esempio, se si desidera modificare il colore dei marcatori standard forniti con il framework, impostare questo valore sul colore desiderato. Per impostazione predefinita, [CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc) è impostato su RGB (61, 123, 241) (un colore bluastro).

Per modificare il colore dei marcatori `m_clrToneDest` personalizzati, è necessario specificare entrambi e `m_clrToneSrc`.

## <a name="csmartdockinginfom_clrtonesrc"></a><a name="m_clrtonesrc"></a>CSmartDockingInfo::m_clrToneSrc

Specifica il colore delle bitmap degli indicatori di ancoraggio intelligenti.

```
COLORREF m_clrToneSrc;
```

### <a name="remarks"></a>Osservazioni

Impostare questo valore solo quando si desidera sostituire il colore di una bitmap personalizzata con un altro colore. Non è necessario impostare questo valore se si modifica il colore di un marcatore standard (framework fornito).

Consente `(COLORREF)-1` di lasciare vuoto un membro del gruppo di ancoraggio intelligente.

## <a name="csmartdockinginfom_clrtransparent"></a><a name="m_clrtransparent"></a>CSmartDockingInfo::m_clrTransparent

Specifica il colore delle bitmap degli indicatori di ancoraggio intelligenti quando sono trasparenti.

```
COLORREF m_clrTransparent;
```

### <a name="remarks"></a>Osservazioni

È necessario impostare questo valore quando si visualizzano marcatori personalizzati e bitmap personalizzate nel gruppo di ancoraggio.

## <a name="csmartdockinginfom_ncentralgroupoffset"></a><a name="m_ncentralgroupoffset"></a>CSmartDockingInfo::m_nCentralGroupOffset

Specifica l'offset tra il gruppo centrale di indicatori di ancoraggio intelligente e i contorni del rettangolo del gruppo centrale.

```
int m_nCentralGroupOffset;
```

### <a name="remarks"></a>Osservazioni

Specificate questo valore se desiderate modificare l'offset predefinito tra i marcatori personalizzati e i limiti del gruppo centrale di marcatori di ancoraggio intelligente. L'offset predefinito è 5 pixel.

## <a name="csmartdockinginfom_sizetotal"></a><a name="m_sizetotal"></a>CSmartDockingInfo::m_sizeTotal

Specifica la dimensione totale di un rettangolo di delimitazione che racchiude tutti gli indicatori di ancoraggio intelligente nel gruppo centrale.

```
CSize m_sizeTotal;
```

### <a name="remarks"></a>Osservazioni

Impostare `m_sizeTotal` sulla dimensione del rettangolo di delimitazione dell'indicatore del gruppo centrale. È necessario specificare questo valore se si utilizzano bitmap personalizzate per i marcatori.

## <a name="csmartdockinginfom_uimarkerbmpresid"></a><a name="m_uimarkerbmpresid"></a>CSmartDockingInfo::m_uiMarkerBmpResID

Definisce gli ID di risorsa delle bitmap utilizzati per i marcatori di ancoraggio intelligente personalizzati non evidenziati.

```
UINT m_uiMarkerBmpResID[AFX_SD_MARKERS_NUM];
```

### <a name="remarks"></a>Osservazioni

Riempire questa matrice con gli ID di risorsa delle bitmap che rappresentano i marcatori di ancoraggio intelligente. AFX_SD_MARKERS_NUM è attualmente definito come 5. Riempire la matrice come segue:

```cpp
params.m_uiMarkerBmpResID[0] = IDB_MARKER_LEFT;
params.m_uiMarkerBmpResID[1] = IDB_MARKER_RIGHT;
params.m_uiMarkerBmpResID[2] = IDB_MARKER_TOP;
params.m_uiMarkerBmpResID[3] = IDB_MARKER_BOTTOM;
params.m_uiMarkerBmpResID[4] = IDB_MARKER_CENTER;
```

## <a name="csmartdockinginfom_uimarkerlightbmpresid"></a><a name="m_uimarkerlightbmpresid"></a>CSmartDockingInfo::m_uiMarkerLightBmpResID

Definisce gli ID di risorsa delle bitmap utilizzati per gli indicatori di ancoraggio intelligente personalizzati evidenziati.

```
UINT m_uiMarkerLightBmpResID[AFX_SD_MARKERS_NUM];
```

### <a name="remarks"></a>Osservazioni

Riempire questa matrice con gli ID di risorsa delle bitmap che rappresentano gli indicatori di ancoraggio intelligente evidenziati. AFX_SD_MARKERS_NUM è attualmente definito come 5. Riempire la matrice come segue:

```cpp
params.m_uiMarkerLightBmpResID[0] = IDB_MARKER_LEFT_LIGHT;
params.m_uiMarkerLightBmpResID[1] = IDB_MARKER_RIGHT_LIGHT;
params.m_uiMarkerLightBmpResID[2] = IDB_MARKER_TOP_LIGHT;
params.m_uiMarkerLightBmpResID[3] = IDB_MARKER_BOTTOM_LIGHT;
params.m_uiMarkerLightBmpResID[4] = IDB_MARKER_CENTER_LIGHT;
```

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
