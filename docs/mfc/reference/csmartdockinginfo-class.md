---
title: Classe CSmartDockingInfo
ms.date: 11/04/2016
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
ms.openlocfilehash: 885af55987c2d1e78cd0145fcee5ca0f4ef67dc5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50524660"
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
|[CSmartDockingInfo::CopyTo](#copyto)|Copia i parametri info di ancoraggio intelligente correnti in forniti [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) oggetto.|

### <a name="data-members"></a>Membri di dati

|nome|Descrizione|
|----------|-----------------|
|[CSmartDockingInfo::m_bUseThemeColorInShading](#m_busethemecolorinshading)|Specifica se utilizzare il colore del tema corrente quando il framework Visualizza marcatori di ancoraggio.|
|[CSmartDockingInfo::m_clrBaseBackground](#m_clrbasebackground)|Specifica il colore di sfondo di base di marcatori di ancoraggio.|
|[CSmartDockingInfo::m_clrToneDest](#m_clrtonedest)|Specifica il colore che sostituisce `m_clrToneSrc` nella bitmap di marcatore ancoraggio intelligente.|
|[CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc)|Specifica il colore delle bitmap di marcatore ancoraggio intelligente.|
|[CSmartDockingInfo::m_clrTransparent](#m_clrtransparent)|Specifica il colore delle bitmap di marcatore ancoraggio intelligente quando sono trasparenti.|
|[CSmartDockingInfo::m_nCentralGroupOffset](#m_ncentralgroupoffset)|Specifica l'offset del gruppo centrale di marcatori di ancoraggio dai limiti del rettangolo del gruppo centrale.|
|[CSmartDockingInfo::m_sizeTotal](#m_sizetotal)|Specifica le dimensioni totali di tutti i marcatori di ancoraggio in un gruppo.|
|[CSmartDockingInfo::m_uiMarkerBmpResID](#m_uimarkerbmpresid)|Definisce gli ID risorsa delle bitmap a cui il framework utilizza per marcatori di ancoraggio che non sono evidenziati.|
|[CSmartDockingInfo::m_uiMarkerLightBmpResID](#m_uimarkerlightbmpresid)|Definisce gli ID risorsa delle bitmap a cui il framework utilizza per marcatori di ancoraggio che vengono evidenziati.|

## <a name="remarks"></a>Note

Gli handle di framework smart internamente i marcatori di ancoraggio. La figura seguente mostra i marcatori di ancoraggio intelligenti standard:

![Marcatori standard per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkers.png "nextsdmarkers")

In questa figura, l'immagine a sinistra mostra un marcatore ancoraggio intelligente gruppo centrale che non dispone di ancoraggio a una scheda abilitata. L'immagine centrale Mostra un marcatore di ancoraggio intelligente bordo destro. L'immagine a destra mostra un marcatore ancoraggio intelligente gruppo centrale che dispone di ancoraggio a una scheda abilitata. Il marcatore di ancoraggio intelligente gruppo centrale è una bitmap main e cinque gli smart ancoraggio bitmap di marcatore.

È possibile personalizzare i parametri seguenti di marcatori di ancoraggio:

- Colore. Ad esempio, è possibile sostituire il colore dei marcatori nella figura blu con un colore definito dall'utente.

- Colore di trasparenza.

- Offset di un marcatore di ancoraggio intelligente nel gruppo centrale rispetto al bordo del rettangolo di delimitazione.

- Mappa di bit principale che rappresenta il gruppo centrale.

- Le mappe di bit che rappresenta i normali ed evidenziati marcatori di ancoraggio.

La figura seguente mostra un esempio di marcatori di ancoraggio che sono stati personalizzati:

![Marcatori personalizzati per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkerscustom.png "nextsdmarkerscustom")

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDockingManager.h

##  <a name="copyto"></a>  CSmartDockingInfo::CopyTo

Copia i parametri di ancoraggio intelligenti correnti nell'oggetto specificato [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) oggetto.

```
void CopyTo(CSmartDockingInfo& params);
```

### <a name="parameters"></a>Parametri

*params*<br/>
[out] Un oggetto di tipo `CSmartDockingInfo` che viene popolato con i parametri correnti di ancoraggio intelligenti.

##  <a name="m_busethemecolorinshading"></a>  CSmartDockingInfo::m_bUseThemeColorInShading

Specifica se utilizzare il colore del tema corrente quando il framework Visualizza marcatori di ancoraggio.

```
BOOL m_bUseThemeColorInShading;
```

### <a name="remarks"></a>Note

Se TRUE, i marcatori vengono disegnati utilizzando il colore del tema corrente; in caso contrario, i marcatori sono disegnati con colore azzurro.

Il valore predefinito è FALSE.

##  <a name="m_clrbasebackground"></a>  CSmartDockingInfo::m_clrBaseBackground

Specifica il colore di sfondo di base di marcatori di ancoraggio.

```
COLORREF m_clrBaseBackground;
```

##  <a name="m_clrtonedest"></a>  CSmartDockingInfo::m_clrToneDest

Specifica il colore che andrà a sostituire `m_clrToneSrc` nella bitmap di marcatore ancoraggio intelligente.

```
COLORREF m_clrToneDest;
```

### <a name="remarks"></a>Note

Impostare questo valore per modificare il colore del marcatore bitmap a livello di codice. Ad esempio, se si desidera modificare il colore dei marcatori standard forniti con il framework, impostare questo valore sul colore desiderato. Per impostazione predefinita [CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc) è impostato su RGB (61, 123, 241) (un colore blu).

Per modificare il colore dei marcatori personalizzati, è necessario specificare entrambe `m_clrToneDest` e `m_clrToneSrc`.

##  <a name="m_clrtonesrc"></a>  CSmartDockingInfo::m_clrToneSrc

Specifica il colore delle bitmap di marcatore ancoraggio intelligente.

```
COLORREF m_clrToneSrc;
```

### <a name="remarks"></a>Note

Impostare questo valore solo quando si desidera sostituire il colore di una bitmap personalizzata con un altro colore. Non è necessario impostare questo valore se si modifica il colore di uno standard (framework fornito) marcatore.

Usare `(COLORREF)-1` lasciare vuoto un membro del gruppo di ancoraggio intelligente.

##  <a name="m_clrtransparent"></a>  CSmartDockingInfo::m_clrTransparent

Specifica il colore delle bitmap di marcatore ancoraggio intelligente quando sono trasparenti.

```
COLORREF m_clrTransparent;
```

### <a name="remarks"></a>Note

È necessario impostare questo valore quando si visualizzano gli indicatori personalizzati e bitmap personalizzate nel gruppo di ancoraggio.

##  <a name="m_ncentralgroupoffset"></a>  CSmartDockingInfo::m_nCentralGroupOffset

Specifica l'offset tra il gruppo centrale dei marcatori di ancoraggio e i limiti del rettangolo del gruppo centrale.

```
int m_nCentralGroupOffset;
```

### <a name="remarks"></a>Note

Specificare questo valore se si desidera modificare l'offset predefinito tra i marcatori personalizzati e i limiti del gruppo centrale di marcatori di ancoraggio. L'offset predefinito è 5 pixel.

##  <a name="m_sizetotal"></a>  CSmartDockingInfo::m_sizeTotal

Specifica le dimensioni totali di un rettangolo di delimitazione che racchiude tutti i marcatori di ancoraggio del gruppo centrale.

```
CSize m_sizeTotal;
```

### <a name="remarks"></a>Note

Impostare `m_sizeTotal` alle dimensioni del rettangolo di delimitazione del marcatore gruppo centrale. È necessario specificare questo valore se si usa bitmap personalizzate per i marcatori.

##  <a name="m_uimarkerbmpresid"></a>  CSmartDockingInfo::m_uiMarkerBmpResID

Definisce gli ID risorsa delle bitmap a cui vengono usati per non evidenziate personalizzati marcatori di ancoraggio.

```
UINT m_uiMarkerBmpResID[AFX_SD_MARKERS_NUM];
```

### <a name="remarks"></a>Note

Compilare questa matrice con gli ID risorsa delle mappe di bit che rappresenta i marcatori di ancoraggio. AFX_SD_MARKERS_NUM attualmente è definita come 5. La matrice riempire come indicato di seguito:

```cpp
params.m_uiMarkerBmpResID[0] = IDB_MARKER_LEFT;
params.m_uiMarkerBmpResID[1] = IDB_MARKER_RIGHT;
params.m_uiMarkerBmpResID[2] = IDB_MARKER_TOP;
params.m_uiMarkerBmpResID[3] = IDB_MARKER_BOTTOM;
params.m_uiMarkerBmpResID[4] = IDB_MARKER_CENTER;
```

##  <a name="m_uimarkerlightbmpresid"></a>  CSmartDockingInfo::m_uiMarkerLightBmpResID

Definisce gli ID risorsa delle bitmap a cui vengono usati per evidenziato personalizzati marcatori di ancoraggio.

```
UINT m_uiMarkerLightBmpResID[AFX_SD_MARKERS_NUM];
```

### <a name="remarks"></a>Note

Compilare questa matrice con gli ID risorsa delle mappe di bit che rappresenta i marcatori di ancoraggio intelligenti evidenziati. AFX_SD_MARKERS_NUM attualmente è definita come 5. La matrice riempire come indicato di seguito:

```cpp
params.m_uiMarkerLightBmpResID[0] = IDB_MARKER_LEFT_LIGHT;
params.m_uiMarkerLightBmpResID[1] = IDB_MARKER_RIGHT_LIGHT;
params.m_uiMarkerLightBmpResID[2] = IDB_MARKER_TOP_LIGHT;
params.m_uiMarkerLightBmpResID[3] = IDB_MARKER_BOTTOM_LIGHT;
params.m_uiMarkerLightBmpResID[4] = IDB_MARKER_CENTER_LIGHT;
```

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
