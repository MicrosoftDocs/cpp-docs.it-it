---
title: Classe CMFCDynamicLayout | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCDynamicLayout
- AFXLAYOUT/CMFCDynamicLayout
- AFXLAYOUT/CMFCDynamicLayout::AddItem
- AFXLAYOUT/CMFCDynamicLayout::Adjust
- AFXLAYOUT/CMFCDynamicLayout::Create
- AFXLAYOUT/CMFCDynamicLayout::GetHostWnd
- AFXLAYOUT/CMFCDynamicLayout::GetMinSize
- AFXLAYOUT/CMFCDynamicLayout::GetWindowRect
- AFXLAYOUT/CMFCDynamicLayout::HasItem
- AFXLAYOUT/CMFCDynamicLayout::IsEmpty
- AFXLAYOUT/CMFCDynamicLayout::LoadResource
- AFXLAYOUT/CMFCDynamicLayout::SetMinSize
dev_langs:
- C++
ms.assetid: c2df2976-f049-47fc-9cf0-abe3e01948bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 868bc5271fd52e32ecb01f0155fe1c11181ac2ea
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381695"
---
# <a name="cmfcdynamiclayout-class"></a>Classe CMFCDynamicLayout

Specifica come i controlli in una finestra vengono spostati e ridimensionati quando l'utente ridimensiona la finestra.

## <a name="syntax"></a>Sintassi

```
class CMFCDynamicLayout : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCDynamicLayout::CMFCDynamicLayout`|Costruisce un oggetto `CMFCDynamicLayout`.|
|`CMFCDynamicLayout::~CMFCDynamicLayout`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Cmfcdynamiclayout:: AddItem](#additem)|Aggiunge una finestra figlio, in genere un controllo, all'elenco di finestre controllate dal gestore del layout dinamico.|
|[Cmfcdynamiclayout:: Adjust](#adjust)|Aggiunge una finestra figlio, in genere un controllo, all'elenco di finestre controllate dal gestore del layout dinamico.|
|[CMFCDynamicLayout::Create](#create)|Archivia e convalida la finestra host.|
|[CMFCDynamicLayout::GetHostWnd](#gethostwnd)|Restituisce un puntatore a una finestra host.|
|[CMFCDynamicLayout::GetMinSize](#getminsize)|Restituisce le dimensioni finestra al di sotto delle quali il layout non verrà regolato.|
|[CMFCDynamicLayout::GetWindowRect](#getwindowrect)|Recupera il rettangolo per l'area client corrente della finestra.|
|[Cmfcdynamiclayout:: Hasitem](#hasitem)|Controlla se al layout dinamico è stato aggiunto un controllo figlio.|
|[Cmfcdynamiclayout:: IsEmpty](#isempty)|Controlla se un layout dinamico non dispone di finestre figlio aggiuntive.|
|[CMFCDynamicLayout::LoadResource](#loadresource)|Legge il layout dinamico dalla risorsa AFX_DIALOG_LAYOUT e quindi applica il layout alla finestra host.|
|statico [Movehorizontal](#movehorizontal)|Ottiene un [MoveSettings](#movesettings_structure) valore che definisce come un controllo figlio viene spostato in senso orizzontale quando l'utente ridimensiona la finestra di hosting.|
|statico [Movehorizontalandvertical](#movehorizontalandvertical)|Ottiene un [MoveSettings](#movesettings_structure) valore che definisce come un controllo figlio viene spostato in senso orizzontale quando l'utente ridimensiona la finestra di hosting.|
|statico [Movenone](#movenone)|Ottiene un [MoveSettings](#movesettings_structure) valore che non rappresenta alcun movimento, orizzontale o verticale, per un controllo figlio.|
|statico [Movevertical](#movevertical)|Ottiene un [MoveSettings](#movesettings_structure) valore che definisce come un controllo figlio viene spostato in senso verticale quando l'utente ridimensiona la finestra di hosting.|
|[CMFCDynamicLayout::SetMinSize](#setminsize)|Imposta le dimensioni finestra al di sotto delle quali il layout non verrà regolato.|
|statico [Sizehorizontal](#sizehorizontal)|Ottiene un [SizeSettings](#sizesettings_structure) valore che definisce come un controllo figlio viene ridimensionato in senso orizzontale quando l'utente ridimensiona la finestra di hosting.|
|statico [Sizehorizontalandvertical](#sizehorizontalandvertical)|Ottiene un [SizeSettings](#sizesettings_structure) valore che definisce come un controllo figlio viene ridimensionato in senso orizzontale quando l'utente ridimensiona la finestra di hosting.|
|statico [Sizenone](#sizenone)|Ottiene un [SizeSettings](#sizesettings_structure) valore che non rappresenta alcuna modifica nelle dimensioni di un controllo figlio.|
|statico [Sizevertical](#sizevertical)|Ottiene un [SizeSettings](#sizesettings_structure) valore che definisce come un controllo figlio viene ridimensionato in senso verticale quando l'utente ridimensiona la finestra di hosting.|

## <a name="nested-types"></a>Tipi annidati

|nome|Descrizione|
|----------|-----------------|
|[Struttura cmfcdynamiclayout:: Movesettings](#movesettings_structure)|Incapsula i dati di spostamento per i controlli in un layout dinamico.|
|[Struttura cmfcdynamiclayout:: Sizesettings](#sizesettings_structure)|Incapsula i dati di modifica delle dimensioni per i controlli in un layout dinamico.|

## <a name="remarks"></a>Note

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCDynamicLayout](../../mfc/reference/cmfctoolbarbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxlayout. h

##  <a name="additem"></a>  Cmfcdynamiclayout:: AddItem

Aggiunge una finestra figlio, in genere un controllo, all'elenco di finestre controllate dal gestore del layout dinamico.

```
BOOL AddItem(
    HWND hwnd,
    MoveSettings moveSettings SizeSettings sizeSettings);


BOOL AddItem(
    int nID,
    MoveSettings moveSettings SizeSettings sizeSettings);
```

### <a name="parameters"></a>Parametri

*HWND*<br/>
Handle per la finestra da aggiungere.

*nID*<br/>
ID del controllo figlio da aggiungere.

*moveSettings*<br/>
Struttura che descrive le modalità di spostamento del controllo al variare delle dimensioni della finestra.

*sizeSettings*<br/>
Struttura che descrive le modalità di ridimensionamento del controllo al variare delle dimensioni della finestra.

### <a name="return-value"></a>Valore restituito

TRUE se l'elemento viene aggiunto correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

La posizione e le dimensioni di un controllo figlio vengono modificate in modo dinamico durante il ridimensionamento di una finestra di hosting.

##  <a name="adjust"></a>  Cmfcdynamiclayout:: Adjust

Aggiunge una finestra figlio, in genere un controllo, all'elenco di finestre controllate dal gestore del layout dinamico.

```
void Adjust();
```

### <a name="remarks"></a>Note

La posizione e le dimensioni di un controllo figlio vengono modificate in modo dinamico durante il ridimensionamento di una finestra di hosting.

##  <a name="create"></a>  CMFCDynamicLayout::Create

Archivia e convalida la finestra host.

```
BOOL Create(CWnd* pHostWnd);
```

### <a name="parameters"></a>Parametri

*pHostWnd*<br/>
Puntatore alla finestra host.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione di creazione è riuscita; in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="gethostwnd"></a>  CMFCDynamicLayout::GetHostWnd

Restituisce un puntatore a una finestra host.

```
CWnd* GetHostWnd();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra host.

### <a name="remarks"></a>Note

Per impostazione predefinita, tutte le posizioni di controllo figlio ricalcolate rispetto a questa finestra.

##  <a name="getminsize"></a>  CMFCDynamicLayout::GetMinSize

Restituisce le dimensioni finestra al di sotto delle quali il layout non verrà regolato.

```
CSize GetMinSize();
```

### <a name="return-value"></a>Valore restituito

Dimensioni finestra al di sotto delle quali il layout non verrà regolato.

### <a name="remarks"></a>Note

Posizione e dimensioni di un controllo figlio quando viene modificato in modo dinamico quando si ridimensiona una finestra di hosting, con una dimensione minima al di sotto della quale il layout non viene regolato. L'utente può ridurre le dimensioni della finestra, ma alcune parti della stessa verranno nascoste dalla visualizzazione.

##  <a name="getwindowrect"></a>  CMFCDynamicLayout::GetWindowRect

Recupera il rettangolo per l'area client corrente della finestra.

```
void GetHostWndRect(CRect& rect,);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Dopo che viene restituita la funzione, questo parametro contiene il rettangolo delimitatore dell'area del layout. Questo è un parametro out; il valore di input viene sovrascritto.

### <a name="remarks"></a>Note

##  <a name="hasitem"></a>  Cmfcdynamiclayout:: Hasitem

Controlla se al layout dinamico è stato aggiunto un controllo figlio.

```
BOOL HasItem(HWND hwnd);
```

### <a name="parameters"></a>Parametri

*HWND*<br/>
Handle della finestra per il controllo.

### <a name="return-value"></a>Valore restituito

TRUE se il layout include già questo elemento. In caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="isempty"></a>  Cmfcdynamiclayout:: IsEmpty

Controlla se un layout dinamico non dispone di finestre figlio aggiuntive.

```
BOOL IsEmpty();
```

### <a name="return-value"></a>Valore restituito

TRUE se il layout non contiene elementi; in caso contrario FALSE.

### <a name="remarks"></a>Note

##  <a name="loadresource"></a>  CMFCDynamicLayout::LoadResource

Legge il layout dinamico dalla risorsa AFX_DIALOG_LAYOUT e quindi applica il layout alla finestra host.

```
static BOOL LoadResource(CWnd* pHostWnd,
    LPVOID lpResource,
    DWORD dwSize);
```

### <a name="parameters"></a>Parametri

*pHostWnd*<br/>
Puntatore alla finestra host.

*lpResource*<br/>
Puntatore al buffer che contiene la risorsa AFX_DIALOG_LAYOUT.

*dwSize diverso da*<br/>
Dimensioni del buffer, in byte.

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è caricata e applicata alla finestra host. In caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="movehorizontal"></a>  Movehorizontal

Ottiene un [MoveSettings](#movesettings_structure) valore che definisce come un controllo figlio viene spostato in senso orizzontale quando l'utente ridimensiona la finestra di hosting.

```
static MoveSettings MoveHorizontal(int nRatio);
```

### <a name="parameters"></a>Parametri

*nRatio*<br/>
Definisce come percentuale la distanza di spostamento in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Oggetto [MoveSettings](#movesettings_structure) rapporto di spostamento di valore che incapsula l'oggetto richiesto.

### <a name="remarks"></a>Note

##  <a name="movehorizontalandvertical"></a>  Movehorizontalandvertical

Ottiene un [MoveSettings](#movesettings_structure) valore che definisce come un controllo figlio viene spostato in senso orizzontale quando l'utente ridimensiona la finestra di hosting.

```
static MoveSettings MoveHorizontalAndVertical(int nXRatio int nYRatio);
```

### <a name="parameters"></a>Parametri

*nXRatio*<br/>
Definisce come percentuale la distanza di spostamento in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra host.

*nYRatio*<br/>
Definisce come percentuale la distanza di spostamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Oggetto [MoveSettings](#movesettings_structure) rapporto di spostamento di valore che incapsula l'oggetto richiesto.

### <a name="remarks"></a>Note

##  <a name="movenone"></a>  Movenone

Ottiene un [MoveSettings](#movesettings_structure) valore che non rappresenta alcun movimento, orizzontale o verticale, per un controllo figlio.

```
static MoveSettings MoveNone();
```

### <a name="return-value"></a>Valore restituito

Oggetto [MoveSettings](#movesettings_structure) valore che corregge il controllo sul posto, in modo che non si sposti quando l'utente ridimensiona la finestra host.

### <a name="remarks"></a>Note

##  <a name="movesettings_structure"></a>  Struttura cmfcdynamiclayout:: Movesettings

Incapsula i dati di spostamento per i controlli in un layout dinamico.

```
struct CMFCDynamicLayout::MoveSettings;
```

### <a name="remarks"></a>Note

Si tratta di una classe annidata all'interno di `CMFCDynamicLayout`.

## <a name="cmfcdynamiclayoutmovesettingsishorizontal"></a>CMFCDynamicLayout::MoveSettings::IsHorizontal

Controlla se i dati di spostamento specificano uno spostamento orizzontale diverso da zero.


```
BOOL IsHorizontal() const
```

## <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `MoveSettings` specifica uno spostamento orizzontale diverso da zero.

## <a name="cmfcdynamiclayoutmovesettingsisnone"></a>CMFCDynamicLayout::MoveSettings::IsNone

Controlla se i dati di spostamento specificano l'assenza di spostamento.

```
BOOL IsNone() const
```

## <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `MoveSettings` specifica l'assenza di spostamento.

## <a name="cmfcdynamiclayoutmovesettingsisvertical"></a>CMFCDynamicLayout::MoveSettings::IsVertical

  Controlla se i dati di spostamento specificano uno spostamento verticale diverso da zero.

```
BOOL IsVertical() const
```

## <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `MoveSettings` specifica uno spostamento verticale diverso da zero.

##  <a name="movevertical"></a>  Movevertical

Ottiene un [MoveSettings](#movesettings_structure) valore che definisce come un controllo figlio viene spostato in senso verticale quando l'utente ridimensiona la finestra di hosting.

```
static MoveSettings MoveVertical(int nRatio);
```

### <a name="parameters"></a>Parametri

*nRatio*<br/>
Definisce come percentuale la distanza di spostamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Oggetto [MoveSettings](#movesettings_structure) rapporto di spostamento di valore che incapsula l'oggetto richiesto.

### <a name="remarks"></a>Note

##  <a name="setminsize"></a>  CMFCDynamicLayout::SetMinSize

Imposta le dimensioni finestra al di sotto delle quali il layout non verrà regolato.

```
void SetMinSize(const CSize& size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Le dimensioni finestra al di sotto delle quali il layout non verrà regolato.

### <a name="remarks"></a>Note

Posizione e dimensioni di un controllo figlio quando viene modificato in modo dinamico quando si ridimensiona una finestra di hosting, con una dimensione minima al di sotto della quale il layout non viene regolato. L'utente può ridurre le dimensioni della finestra, ma alcune parti della stessa verranno nascoste dalla visualizzazione.

##  <a name="sizehorizontal"></a>  Sizehorizontal

Ottiene un [SizeSettings](#sizesettings_structure) valore che definisce come un controllo figlio viene ridimensionato in senso orizzontale quando l'utente ridimensiona la finestra di hosting.

```
static SizeSettings SizeHorizontal(int nRatio);
```

### <a name="parameters"></a>Parametri

*nRatio*<br/>
Definisce come percentuale l'estensione del ridimensionamento in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Oggetto [SizeSettings](#sizesettings_structure) valore che incapsula il rapporto di dimensionamento richiesto.

### <a name="remarks"></a>Note

##  <a name="sizehorizontalandvertical"></a>  Sizehorizontalandvertical

Ottiene un [SizeSettings](#sizesettings_structure) valore che definisce come un controllo figlio viene ridimensionato in senso orizzontale quando l'utente ridimensiona la finestra di hosting.

```
static SizeSettings SizeHorizontalAndVertical(int nXRatio int nYRatio);
```

### <a name="parameters"></a>Parametri

*nXRatio*<br/>
Definisce come percentuale l'estensione del ridimensionamento in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra host.

*nYRatio*<br/>
Definisce come percentuale l'estensione del ridimensionamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Oggetto [SizeSettings](#sizesettings_structure) valore che incapsula il rapporto di dimensionamento richiesto.

### <a name="remarks"></a>Note

##  <a name="sizenone"></a>  Sizenone

Ottiene un [SizeSettings](#sizesettings_structure) valore che non rappresenta alcuna modifica nelle dimensioni di un controllo figlio.

```
static SizeSettings SizeNone();
```

### <a name="return-value"></a>Valore restituito

Oggetto [SizeSettings](#sizesettings_structure) valore che corregge il controllo a una determinata dimensione, in modo che non modifica le dimensioni quando l'utente ridimensiona la finestra host.

### <a name="remarks"></a>Note

##  <a name="sizesettings_structure"></a>  Struttura cmfcdynamiclayout:: Sizesettings

Incapsula i dati di modifica delle dimensioni per i controlli in un layout dinamico.

```
struct CMFCDynamicLayout::SizeSettings;
```

### <a name="remarks"></a>Note

Si tratta di una classe annidata all'interno di `CMFCDynamicLayout`.

## <a name="cmfcdynamiclayoutsizesettingsishorizontal"></a>CMFCDynamicLayout::SizeSettings::IsHorizontal

Controlla se i dati di ridimensionamento specificano un ridimensionamento orizzontale diverso da zero.

```
BOOL IsHorizontal() const
```

## <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `SizeSettings` specifica un ridimensionamento orizzontale diverso da zero.

## <a name="cmfcdynamiclayoutsizesettingsisnone"></a>CMFCDynamicLayout::SizeSettings::IsNone

Controlla se i dati di ridimensionamento specificano l'assenza di ridimensionamento.

```
BOOL IsNone() const
```

## <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `SizeSettings` specifica l'assenza di ridimensionamento.

## <a name="cmfcdynamiclayoutsizesettingsisvertical"></a>CMFCDynamicLayout::SizeSettings::IsVertical

Controlla se i dati di ridimensionamento specificano un ridimensionamento verticale diverso da zero.

```
BOOL IsVertical() const
```

## <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `SizeSettings` specifica un ridimensionamento verticale diverso da zero.

##  <a name="sizevertical"></a>  Sizevertical

Ottiene un [SizeSettings](#sizesettings_structure) valore che definisce come un controllo figlio viene ridimensionato in senso verticale quando l'utente ridimensiona la finestra di hosting.

```
static SizeSettings SizeVertical(int nRatio);
```

### <a name="parameters"></a>Parametri

*nRatio*<br/>
Definisce come percentuale l'estensione del ridimensionamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Oggetto [SizeSettings](#sizesettings_structure) valore che incapsula il rapporto di dimensionamento richiesto.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
