---
title: Classe CPalette
ms.date: 11/04/2016
f1_keywords:
- CPalette
- AFXWIN/CPalette
- AFXWIN/CPalette::CPalette
- AFXWIN/CPalette::AnimatePalette
- AFXWIN/CPalette::CreateHalftonePalette
- AFXWIN/CPalette::CreatePalette
- AFXWIN/CPalette::FromHandle
- AFXWIN/CPalette::GetEntryCount
- AFXWIN/CPalette::GetNearestPaletteIndex
- AFXWIN/CPalette::GetPaletteEntries
- AFXWIN/CPalette::ResizePalette
- AFXWIN/CPalette::SetPaletteEntries
helpviewer_keywords:
- CPalette [MFC], CPalette
- CPalette [MFC], AnimatePalette
- CPalette [MFC], CreateHalftonePalette
- CPalette [MFC], CreatePalette
- CPalette [MFC], FromHandle
- CPalette [MFC], GetEntryCount
- CPalette [MFC], GetNearestPaletteIndex
- CPalette [MFC], GetPaletteEntries
- CPalette [MFC], ResizePalette
- CPalette [MFC], SetPaletteEntries
ms.assetid: 8cd95498-53ed-4852-85e1-70e522541114
ms.openlocfilehash: f5740b3b073c4f564f9cac0fa04e5687ce1d8f00
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753683"
---
# <a name="cpalette-class"></a>Classe CPalette

Incapsula una tavolozza dei colori di Windows.

## <a name="syntax"></a>Sintassi

```
class CPalette : public CGdiObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPalette::CPalette](#cpalette)|Costruisce un `CPalette` oggetto senza tavolozza di Windows associata. È necessario `CPalette` inizializzare l'oggetto con una delle funzioni membro di inizializzazione prima che possa essere utilizzato.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPalette::AnimatePalette](#animatepalette)|Sostituisce le voci nella tavolozza `CPalette` logica identificata dall'oggetto. L'applicazione non deve aggiornare l'area client, perché Windows esegue immediatamente il mapping delle nuove voci nella tavolozza di sistema.|
|[CPalette::CreateHalftonePalette](#createhalftonepalette)|Crea una tavolozza dei mezzitoni per il `CPalette` contesto di periferica e la associa all'oggetto.|
|[CPalette::CreatePalette (CPalette::CreatePalette)](#createpalette)|Crea una tavolozza dei colori di `CPalette` Windows e la associa all'oggetto.|
|[CPalette::FromHandle](#fromhandle)|Restituisce un `CPalette` puntatore a un oggetto quando viene fornito un handle per un oggetto tavolozza di Windows.|
|[CPalette::GetEntryCount](#getentrycount)|Recupera il numero di voci della tavolozza in una tavolozza logica.|
|[CPalette::GetNearestPaletteIndex](#getnearestpaletteindex)|Restituisce l'indice della voce nella tavolozza logica che corrisponde maggiormente a un valore di colore.|
|[CPalette::GetPaletteEvoci](#getpaletteentries)|Recupera un intervallo di voci di tavolozza in una tavolozza logica.|
|[CPalette::ResizePalette](#resizepalette)|Modifica le dimensioni della tavolozza `CPalette` logica specificata dall'oggetto in base al numero di voci specificato.|
|[CPalette::SetPaletteEntries](#setpaletteentries)|Imposta i valori di colore e i flag RGB in un intervallo di voci in una tavolozza logica.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPalette::operatore HPALETTE](#operator_hpalette)|Restituisce l'HPALETTE `CPalette`associato all'oggetto .|

## <a name="remarks"></a>Osservazioni

Una tavolozza fornisce un'interfaccia tra un'applicazione e una periferica di output a colori (ad esempio un dispositivo di visualizzazione). L'interfaccia consente all'applicazione di sfruttare appieno le capacità di colore del dispositivo di output senza interferire gravemente con i colori visualizzati da altre applicazioni. Windows utilizza la tavolozza logica dell'applicazione (un elenco di colori necessari) e la tavolozza di sistema (che definisce i colori disponibili) per determinare i colori utilizzati.

Un `CPalette` oggetto fornisce funzioni membro per la modifica della tavolozza a cui fa riferimento l'oggetto. Costruire `CPalette` un oggetto e utilizzare le relative funzioni membro per creare la tavolozza effettiva, un oggetto GDI (Graphics Device Interface) e per modificarne le voci e altre proprietà.

Per ulteriori informazioni `CPalette`sull'utilizzo di , vedere [Oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CPalette`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cpaletteanimatepalette"></a><a name="animatepalette"></a>CPalette::AnimatePalette

Sostituisce le voci della tavolozza `CPalette` logica associata all'oggetto.

```cpp
void AnimatePalette(
    UINT nStartIndex,
    UINT nNumEntries,
    LPPALETTEENTRY lpPaletteColors);
```

### <a name="parameters"></a>Parametri

*nInizioIndice*<br/>
Specifica la prima voce della tavolozza da animare.

*nVoci*<br/>
Specifica il numero di voci nella tavolozza da animare.

*lpPaletteColors (lapPaletteColors)*<br/>
Punta al primo membro di una matrice di strutture [PALETTEENTRY](/previous-versions/dd162769\(v=vs.85\)) per sostituire le voci della tavolozza identificate da *nStartIndex* e *nNumEntries*.

### <a name="remarks"></a>Osservazioni

Quando un'applicazione chiama `AnimatePalette`, non è necessario aggiornare l'area client, poiché Windows esegue immediatamente il mapping delle nuove voci nella tavolozza di sistema.

La `AnimatePalette` funzione modificherà solo le voci con `palPaletteEntry` il flag PC_RESERVED impostato nel membro `CPalette` corrispondente della struttura [LOGPALETTE](/windows/win32/api/wingdi/ns-wingdi-logpalette) associata all'oggetto. Per ulteriori informazioni su questa struttura, vedere LOGPALETTE in Windows SDK.

## <a name="cpalettecpalette"></a><a name="cpalette"></a>CPalette::CPalette

Costruisce un oggetto `CPalette`.

```
CPalette();
```

### <a name="remarks"></a>Osservazioni

L'oggetto non ha alcuna `CreatePalette` tavolozza associata fino a quando non si chiama per allegarne uno.

## <a name="cpalettecreatehalftonepalette"></a><a name="createhalftonepalette"></a>CPalette::CreateHalftonePalette

Crea una tavolozza dei mezzitoni per il contesto di periferica.

```
BOOL CreateHalftonePalette(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Identifica il contesto di dispositivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un'applicazione deve creare una tavolozza mezzitoni quando la modalità di estensione di un contesto di periferica è impostata su HALFTONE. La tavolozza dei mezzitoni logica restituita dalla funzione membro [CreateHalftonePalette](/windows/win32/api/wingdi/nf-wingdi-createhalftonepalette) deve quindi essere selezionata e realizzata nel contesto di periferica prima che venga chiamata la funzione [CDC::StretchBlt](../../mfc/reference/cdc-class.md#stretchblt) o [StretchDIBits](/windows/win32/api/wingdi/nf-wingdi-stretchdibits) .

Vedere Windows SDK per `CreateHalftonePalette` ulteriori `StretchDIBits`informazioni su e .

## <a name="cpalettecreatepalette"></a><a name="createpalette"></a>CPalette::CreatePalette (CPalette::CreatePalette)

Inizializza un `CPalette` oggetto creando una tavolozza di colori `CPalette` logica di Windows e associandola all'oggetto.

```
BOOL CreatePalette(LPLOGPALETTE lpLogPalette);
```

### <a name="parameters"></a>Parametri

*LpLogPalette (in modo lpLogPalette)*<br/>
Punta a una struttura [LOGPALETTE](/windows/win32/api/wingdi/ns-wingdi-logpalette) che contiene informazioni sui colori nella tavolozza logica.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla `LOGPALETTE` struttura, vedere Windows SDK.

## <a name="cpalettefromhandle"></a><a name="fromhandle"></a>CPalette::FromHandle

Restituisce un `CPalette` puntatore a un oggetto quando viene fornito un handle per un oggetto tavolozza di Windows.

```
static CPalette* PASCAL FromHandle(HPALETTE hPalette);
```

### <a name="parameters"></a>Parametri

*HPalette (in modo insep*<br/>
Handle per una tavolozza di colori GDI di Windows.

### <a name="return-value"></a>Valore restituito

Un puntatore `CPalette` a un oggetto se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se `CPalette` un oggetto non è già collegato alla `CPalette` tavolozza di Windows, viene creato e associato un oggetto temporaneo. Questo `CPalette` oggetto temporaneo è valido solo fino alla successiva inattività dell'applicazione nel ciclo di eventi, in cui vengono eliminati tutti gli oggetti grafici temporanei. In altre parole, l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

## <a name="cpalettegetentrycount"></a><a name="getentrycount"></a>CPalette::GetEntryCount

Chiamare questa funzione membro per recuperare il numero di voci in una determinata tavolozza logica.

```
int GetEntryCount();
```

### <a name="return-value"></a>Valore restituito

Numero di voci in una tavolozza logica.

## <a name="cpalettegetnearestpaletteindex"></a><a name="getnearestpaletteindex"></a>CPalette::GetNearestPaletteIndex

Restituisce l'indice della voce nella tavolozza logica che corrisponde maggiormente al valore di colore specificato.

```
UINT GetNearestPaletteIndex(COLORREF crColor) const;
```

### <a name="parameters"></a>Parametri

*crColor (colore)*<br/>
Specifica il colore da abbinare.

### <a name="return-value"></a>Valore restituito

Indice di una voce in una tavolozza logica. La voce contiene il colore che corrisponde maggiormente al colore specificato.

## <a name="cpalettegetpaletteentries"></a><a name="getpaletteentries"></a>CPalette::GetPaletteEvoci

Recupera un intervallo di voci di tavolozza in una tavolozza logica.

```
UINT GetPaletteEntries(
    UINT nStartIndex,
    UINT nNumEntries,
    LPPALETTEENTRY lpPaletteColors) const;
```

### <a name="parameters"></a>Parametri

*nInizioIndice*<br/>
Specifica la prima voce della tavolozza logica da recuperare.

*nVoci*<br/>
Specifica il numero di voci nella tavolozza logica da recuperare.

*lpPaletteColors (lapPaletteColors)*<br/>
Punta a una matrice di strutture di dati [PALETTEENTRY](/previous-versions/dd162769\(v=vs.85\)) per ricevere le voci della tavolozza. La matrice deve contenere almeno il numero di strutture di dati specificato da *nNumEntries*.

### <a name="return-value"></a>Valore restituito

Il numero di voci recuperate dalla tavolozza logica; 0 se la funzione non è riuscita.

## <a name="cpaletteoperator-hpalette"></a><a name="operator_hpalette"></a>CPalette::operatore HPALETTE

Utilizzare questo operatore per ottenere l'handle `CPalette` GDI di Windows associato dell'oggetto.

```
operator HPALETTE() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un `CPalette` handle per l'oggetto GDI di Windows rappresentato dall'oggetto; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo operatore è un operatore di cast, che supporta l'utilizzo diretto di un oggetto HPALETTE.

Per altre informazioni sull'uso di oggetti grafici, vedere l'articolo [Oggetti grafici](/windows/win32/gdi/graphic-objects) in Windows SDK.

## <a name="cpaletteresizepalette"></a><a name="resizepalette"></a>CPalette::ResizePalette

Modifica le dimensioni della tavolozza `CPalette` logica associata all'oggetto in base al numero di voci specificato da *nNumEntries*.

```
BOOL ResizePalette(UINT nNumEntries);
```

### <a name="parameters"></a>Parametri

*nVoci*<br/>
Specifica il numero di voci nella tavolozza dopo che è stata ridimensionata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la tavolozza è stata ridimensionata correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se un'applicazione chiama `ResizePalette` per ridurre le dimensioni della tavolozza, le voci rimanenti nella tavolozza ridimensionata rimangono invariate. Se l'applicazione chiama `ResizePalette` per ingrandire la tavolozza, le voci aggiuntive della tavolozza sono impostate su nero (i valori rosso, verde e blu sono tutti 0) e i flag per tutte le voci aggiuntive sono impostati su 0.

Per ulteriori informazioni sull'API di `ResizePalette`Windows, vedere [ResizePalette](/windows/win32/api/wingdi/nf-wingdi-resizepalette) in Windows SDK.

## <a name="cpalettesetpaletteentries"></a><a name="setpaletteentries"></a>CPalette::SetPaletteEntries

Imposta i valori di colore e i flag RGB in un intervallo di voci in una tavolozza logica.

```
UINT SetPaletteEntries(
    UINT nStartIndex,
    UINT nNumEntries,
    LPPALETTEENTRY lpPaletteColors);
```

### <a name="parameters"></a>Parametri

*nInizioIndice*<br/>
Specifica la prima voce della tavolozza logica da impostare.

*nVoci*<br/>
Specifica il numero di voci nella tavolozza logica da impostare.

*lpPaletteColors (lapPaletteColors)*<br/>
Punta a una matrice di strutture di dati [PALETTEENTRY](/previous-versions/dd162769\(v=vs.85\)) per ricevere le voci della tavolozza. La matrice deve contenere almeno il numero di strutture di dati specificato da *nNumEntries*.

### <a name="return-value"></a>Valore restituito

Il numero di voci impostate nella tavolozza logica; 0 se la funzione non è riuscita.

### <a name="remarks"></a>Osservazioni

Se la tavolozza logica viene selezionata `SetPaletteEntries`in un contesto di periferica quando l'applicazione chiama , le modifiche non avranno effetto fino a quando l'applicazione non chiama [CDC::RealizePalette](../../mfc/reference/cdc-class.md#realizepalette).

Per ulteriori informazioni, vedere [PALETTEENTRY](/previous-versions/dd162769\(v=vs.85\)) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Esempio MFC DIBLOOK](../../overview/visual-cpp-samples.md)<br/>
[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CPalette::GetPaletteEvoci](#getpaletteentries)<br/>
[CPalette::SetPaletteEntries](#setpaletteentries)
