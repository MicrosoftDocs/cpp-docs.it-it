---
description: 'Altre informazioni su: classe CMFCDynamicLayout'
title: Classe CMFCDynamicLayout
ms.date: 08/29/2019
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
ms.assetid: c2df2976-f049-47fc-9cf0-abe3e01948bc
ms.openlocfilehash: 56979cce8ff20224cae444dab038bae29deeb39b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293911"
---
# <a name="cmfcdynamiclayout-class"></a>Classe CMFCDynamicLayout

Specifica come i controlli in una finestra vengono spostati e ridimensionati quando l'utente ridimensiona la finestra.

## <a name="syntax"></a>Sintassi

```
class CMFCDynamicLayout : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCDynamicLayout::CMFCDynamicLayout`|Costruisce un oggetto `CMFCDynamicLayout`.|
|`CMFCDynamicLayout::~CMFCDynamicLayout`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCDynamicLayout::AddItem](#additem)|Aggiunge una finestra figlio, in genere un controllo, all'elenco di finestre controllate dal gestore del layout dinamico.|
|[CMFCDynamicLayout::Adjust](#adjust)|Aggiunge una finestra figlio, in genere un controllo, all'elenco di finestre controllate dal gestore del layout dinamico.|
|[CMFCDynamicLayout::Create](#create)|Archivia e convalida la finestra host.|
|[CMFCDynamicLayout::GetHostWnd](#gethostwnd)|Restituisce un puntatore a una finestra host.|
|[CMFCDynamicLayout::GetMinSize](#getminsize)|Restituisce le dimensioni finestra al di sotto delle quali il layout non verrà regolato.|
|[CMFCDynamicLayout::GetWindowRect](#getwindowrect)|Recupera il rettangolo per l'area client corrente della finestra.|
|[CMFCDynamicLayout::HasItem](#hasitem)|Controlla se al layout dinamico è stato aggiunto un controllo figlio.|
|[CMFCDynamicLayout::IsEmpty](#isempty)|Controlla se un layout dinamico non dispone di finestre figlio aggiuntive.|
|[CMFCDynamicLayout::LoadResource](#loadresource)|Legge il layout dinamico dalla risorsa AFX_DIALOG_LAYOUT e quindi applica il layout alla finestra host.|
|[CMFCDynamicLayout statico:: MoveHorizontal](#movehorizontal)|Ottiene un valore [MoveSettings](#movesettings_structure) che definisce il numero di spostamenti in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|
|[CMFCDynamicLayout statico:: MoveHorizontalAndVertical](#movehorizontalandvertical)|Ottiene un valore [MoveSettings](#movesettings_structure) che definisce il numero di spostamenti in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|
|[CMFCDynamicLayout statico:: MoveNone](#movenone)|Ottiene un valore [MoveSettings](#movesettings_structure) che rappresenta nessun movimento, verticale o orizzontale, per un controllo figlio.|
|[CMFCDynamicLayout statico:: MoveVertical](#movevertical)|Ottiene un valore [MoveSettings](#movesettings_structure) che definisce la quantità di spostamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|
|[CMFCDynamicLayout::SetMinSize](#setminsize)|Imposta le dimensioni finestra al di sotto delle quali il layout non verrà regolato.|
|[CMFCDynamicLayout statico:: SizeHorizontal](#sizehorizontal)|Ottiene un valore [SizeSettings](#sizesettings_structure) che definisce la quantità di ridimensionamento orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|
|[CMFCDynamicLayout statico:: SizeHorizontalAndVertical](#sizehorizontalandvertical)|Ottiene un valore [SizeSettings](#sizesettings_structure) che definisce la quantità di ridimensionamento orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|
|[CMFCDynamicLayout statico:: SizeNone](#sizenone)|Ottiene un valore [SizeSettings](#sizesettings_structure) che non rappresenta alcuna modifica delle dimensioni per un controllo figlio.|
|[CMFCDynamicLayout statico:: SizeVertical](#sizevertical)|Ottiene un valore [SizeSettings](#sizesettings_structure) che definisce la quantità di ridimensionamento verticale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|

## <a name="nested-types"></a>Tipi annidati

|Nome|Description|
|----------|-----------------|
|[CMFCDynamicLayout::MoveSettings Structure](#movesettings_structure)|Incapsula i dati di spostamento per i controlli in un layout dinamico.|
|[Struttura CMFCDynamicLayout::SizeSettings](#sizesettings_structure)|Incapsula i dati di modifica delle dimensioni per i controlli in un layout dinamico.|

## <a name="remarks"></a>Commenti

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCDynamicLayout](../../mfc/reference/cmfctoolbarbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxlayout. h

## <a name="cmfcdynamiclayoutadditem"></a><a name="additem"></a> CMFCDynamicLayout:: AddItem

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

### <a name="remarks"></a>Commenti

La posizione e le dimensioni di un controllo figlio vengono modificate in modo dinamico durante il ridimensionamento di una finestra di hosting.

## <a name="cmfcdynamiclayoutadjust"></a><a name="adjust"></a> CMFCDynamicLayout:: Adjust

Aggiunge una finestra figlio, in genere un controllo, all'elenco di finestre controllate dal gestore del layout dinamico.

```cpp
void Adjust();
```

### <a name="remarks"></a>Commenti

La posizione e le dimensioni di un controllo figlio vengono modificate in modo dinamico durante il ridimensionamento di una finestra di hosting.

## <a name="cmfcdynamiclayoutcreate"></a><a name="create"></a> CMFCDynamicLayout:: create

Archivia e convalida la finestra host.

```
BOOL Create(CWnd* pHostWnd);
```

### <a name="parameters"></a>Parametri

*pHostWnd*<br/>
Puntatore alla finestra host.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione di creazione è riuscita; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutgethostwnd"></a><a name="gethostwnd"></a> CMFCDynamicLayout:: GetHostWnd

Restituisce un puntatore a una finestra host.

```
CWnd* GetHostWnd();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra host.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, tutte le posizioni di controllo figlio ricalcolate rispetto a questa finestra.

## <a name="cmfcdynamiclayoutgetminsize"></a><a name="getminsize"></a> CMFCDynamicLayout:: GetMinSize

Restituisce le dimensioni finestra al di sotto delle quali il layout non verrà regolato.

```
CSize GetMinSize();
```

### <a name="return-value"></a>Valore restituito

Dimensioni finestra al di sotto delle quali il layout non verrà regolato.

### <a name="remarks"></a>Commenti

Posizione e dimensioni di un controllo figlio quando viene modificato in modo dinamico quando si ridimensiona una finestra di hosting, con una dimensione minima al di sotto della quale il layout non viene regolato. L'utente può ridurre le dimensioni della finestra, ma alcune parti della stessa verranno nascoste dalla visualizzazione.

## <a name="cmfcdynamiclayoutgetwindowrect"></a><a name="getwindowrect"></a> CMFCDynamicLayout:: GetWindowRect

Recupera il rettangolo per l'area client corrente della finestra.

```cpp
void GetHostWndRect(CRect& rect,);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Dopo che viene restituita la funzione, questo parametro contiene il rettangolo delimitatore dell'area del layout. Questo è un parametro out; il valore di input viene sovrascritto.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayouthasitem"></a><a name="hasitem"></a> CMFCDynamicLayout:: HasItem

Controlla se al layout dinamico è stato aggiunto un controllo figlio.

```
BOOL HasItem(HWND hwnd);
```

### <a name="parameters"></a>Parametri

*HWND*<br/>
Handle della finestra per il controllo.

### <a name="return-value"></a>Valore restituito

TRUE se il layout include già questo elemento. In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutisempty"></a><a name="isempty"></a> CMFCDynamicLayout:: IsEmpty

Controlla se un layout dinamico non dispone di finestre figlio aggiuntive.

```
BOOL IsEmpty();
```

### <a name="return-value"></a>Valore restituito

TRUE se il layout non contiene elementi; in caso contrario FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutloadresource"></a><a name="loadresource"></a> CMFCDynamicLayout:: LoadResource

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

*dwSize*<br/>
Dimensioni del buffer, in byte.

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è caricata e applicata alla finestra host. In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutmovehorizontal"></a><a name="movehorizontal"></a> CMFCDynamicLayout:: MoveHorizontal

Ottiene un valore [MoveSettings](#movesettings_structure) che definisce il numero di spostamenti in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.

```
static MoveSettings MoveHorizontal(int nRatio);
```

### <a name="parameters"></a>Parametri

*nRatio*<br/>
Definisce come percentuale la distanza di spostamento in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Valore [MoveSettings](#movesettings_structure) che incapsula il rapporto di spostamento richiesto.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutmovehorizontalandvertical"></a><a name="movehorizontalandvertical"></a> CMFCDynamicLayout:: MoveHorizontalAndVertical

Ottiene un valore [MoveSettings](#movesettings_structure) che definisce il numero di spostamenti in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.

```
static MoveSettings MoveHorizontalAndVertical(int nXRatio int nYRatio);
```

### <a name="parameters"></a>Parametri

*nXRatio*<br/>
Definisce come percentuale la distanza di spostamento in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra host.

*nYRatio*<br/>
Definisce come percentuale la distanza di spostamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Valore [MoveSettings](#movesettings_structure) che incapsula il rapporto di spostamento richiesto.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutmovenone"></a><a name="movenone"></a> CMFCDynamicLayout:: MoveNone

Ottiene un valore [MoveSettings](#movesettings_structure) che rappresenta nessun movimento, verticale o orizzontale, per un controllo figlio.

```
static MoveSettings MoveNone();
```

### <a name="return-value"></a>Valore restituito

Valore [MoveSettings](#movesettings_structure) che corregge il controllo sul posto, in modo che non venga spostato quando l'utente ridimensiona la finestra host.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutmovesettings-structure"></a><a name="movesettings_structure"></a> Struttura CMFCDynamicLayout:: MoveSettings

Incapsula i dati di spostamento per i controlli in un layout dinamico.

```
struct CMFCDynamicLayout::MoveSettings;
```

### <a name="remarks"></a>Commenti

Si tratta di una classe annidata all'interno di `CMFCDynamicLayout`.

## <a name="cmfcdynamiclayoutmovesettingsishorizontal"></a>CMFCDynamicLayout:: MoveSettings:: Horizontal

Controlla se i dati di spostamento specificano uno spostamento orizzontale diverso da zero.

```
BOOL IsHorizontal() const
```

### <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `MoveSettings` specifica uno spostamento orizzontale diverso da zero.

## <a name="cmfcdynamiclayoutmovesettingsisnone"></a>CMFCDynamicLayout:: MoveSettings:: None

Controlla se i dati di spostamento specificano l'assenza di spostamento.

```
BOOL IsNone() const
```

### <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `MoveSettings` specifica l'assenza di spostamento.

## <a name="cmfcdynamiclayoutmovesettingsisvertical"></a>CMFCDynamicLayout:: MoveSettings:: Vertical

Controlla se i dati di spostamento specificano uno spostamento verticale diverso da zero.

```
BOOL IsVertical() const
```

### <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `MoveSettings` specifica uno spostamento verticale diverso da zero.

## <a name="cmfcdynamiclayoutmovevertical"></a><a name="movevertical"></a> CMFCDynamicLayout:: MoveVertical

Ottiene un valore [MoveSettings](#movesettings_structure) che definisce la quantità di spostamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.

```
static MoveSettings MoveVertical(int nRatio);
```

### <a name="parameters"></a>Parametri

*nRatio*<br/>
Definisce come percentuale la distanza di spostamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Valore [MoveSettings](#movesettings_structure) che incapsula il rapporto di spostamento richiesto.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutsetminsize"></a><a name="setminsize"></a> CMFCDynamicLayout:: SetMinSize

Imposta le dimensioni finestra al di sotto delle quali il layout non verrà regolato.

```cpp
void SetMinSize(const CSize& size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Le dimensioni finestra al di sotto delle quali il layout non verrà regolato.

### <a name="remarks"></a>Commenti

Posizione e dimensioni di un controllo figlio quando viene modificato in modo dinamico quando si ridimensiona una finestra di hosting, con una dimensione minima al di sotto della quale il layout non viene regolato. L'utente può ridurre le dimensioni della finestra, ma alcune parti della stessa verranno nascoste dalla visualizzazione.

## <a name="cmfcdynamiclayoutsizehorizontal"></a><a name="sizehorizontal"></a> CMFCDynamicLayout:: SizeHorizontal

Ottiene un valore [SizeSettings](#sizesettings_structure) che definisce la quantità di ridimensionamento orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.

```
static SizeSettings SizeHorizontal(int nRatio);
```

### <a name="parameters"></a>Parametri

*nRatio*<br/>
Definisce come percentuale l'estensione del ridimensionamento in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Valore [SizeSettings](#sizesettings_structure) che incapsula il rapporto delle dimensioni richiesto.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutsizehorizontalandvertical"></a><a name="sizehorizontalandvertical"></a> CMFCDynamicLayout:: SizeHorizontalAndVertical

Ottiene un valore [SizeSettings](#sizesettings_structure) che definisce la quantità di ridimensionamento orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.

```
static SizeSettings SizeHorizontalAndVertical(int nXRatio int nYRatio);
```

### <a name="parameters"></a>Parametri

*nXRatio*<br/>
Definisce come percentuale l'estensione del ridimensionamento in orizzontale di un controllo figlio quando l'utente ridimensiona la finestra host.

*nYRatio*<br/>
Definisce come percentuale l'estensione del ridimensionamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Valore [SizeSettings](#sizesettings_structure) che incapsula il rapporto delle dimensioni richiesto.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutsizenone"></a><a name="sizenone"></a> CMFCDynamicLayout:: SizeNone

Ottiene un valore [SizeSettings](#sizesettings_structure) che non rappresenta alcuna modifica delle dimensioni per un controllo figlio.

```
static SizeSettings SizeNone();
```

### <a name="return-value"></a>Valore restituito

Valore [SizeSettings](#sizesettings_structure) che corregge il controllo a una determinata dimensione, in modo che non modifichi le dimensioni quando l'utente ridimensiona la finestra host.

### <a name="remarks"></a>Commenti

## <a name="cmfcdynamiclayoutsizesettings-structure"></a><a name="sizesettings_structure"></a> Struttura CMFCDynamicLayout:: SizeSettings

Incapsula i dati di modifica delle dimensioni per i controlli in un layout dinamico.

```
struct CMFCDynamicLayout::SizeSettings;
```

### <a name="remarks"></a>Commenti

Si tratta di una classe annidata all'interno di `CMFCDynamicLayout`.

## <a name="cmfcdynamiclayoutsizesettingsishorizontal"></a>CMFCDynamicLayout:: SizeSettings:: Horizontal

Controlla se i dati di ridimensionamento specificano un ridimensionamento orizzontale diverso da zero.

```
BOOL IsHorizontal() const
```

### <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `SizeSettings` specifica un ridimensionamento orizzontale diverso da zero.

## <a name="cmfcdynamiclayoutsizesettingsisnone"></a>CMFCDynamicLayout:: SizeSettings:: None

Controlla se i dati di ridimensionamento specificano l'assenza di ridimensionamento.

```
BOOL IsNone() const
```

### <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `SizeSettings` specifica l'assenza di ridimensionamento.

## <a name="cmfcdynamiclayoutsizesettingsisvertical"></a>CMFCDynamicLayout:: SizeSettings:: Vertical

Controlla se i dati di ridimensionamento specificano un ridimensionamento verticale diverso da zero.

```
BOOL IsVertical() const
```

### <a name="return-value"></a>Valore restituito

TRUE se l'oggetto `SizeSettings` specifica un ridimensionamento verticale diverso da zero.

## <a name="cmfcdynamiclayoutsizevertical"></a><a name="sizevertical"></a> CMFCDynamicLayout:: SizeVertical

Ottiene un valore [SizeSettings](#sizesettings_structure) che definisce la quantità di ridimensionamento verticale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.

```
static SizeSettings SizeVertical(int nRatio);
```

### <a name="parameters"></a>Parametri

*nRatio*<br/>
Definisce come percentuale l'estensione del ridimensionamento in verticale di un controllo figlio quando l'utente ridimensiona la finestra host.

### <a name="return-value"></a>Valore restituito

Valore [SizeSettings](#sizesettings_structure) che incapsula il rapporto delle dimensioni richiesto.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
