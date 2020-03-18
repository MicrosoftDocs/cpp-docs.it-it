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
ms.openlocfilehash: 27f4f14c9e93091728e256c890dcffee26a43de4
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79421660"
---
# <a name="cpalette-class"></a>Classe CPalette

Incapsula una tavolozza dei colori di Windows.

## <a name="syntax"></a>Sintassi

```
class CPalette : public CGdiObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPalette:: CPalette](#cpalette)|Costruisce un oggetto `CPalette` senza tavolozza Windows collegato. È necessario inizializzare l'oggetto `CPalette` con una delle funzioni membro di inizializzazione prima di poterlo utilizzare.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPalette:: AnimatePalette](#animatepalette)|Sostituisce le voci della tavolozza logica identificata dall'oggetto `CPalette`. Non è necessario che l'applicazione aggiorni l'area client perché Windows esegue immediatamente il mapping delle nuove voci nella tavolozza di sistema.|
|[CPalette:: CreateHalftonePalette](#createhalftonepalette)|Crea una tavolozza di mezzitoni per il contesto di dispositivo e la collega all'oggetto `CPalette`.|
|[CPalette:: CreatePalette](#createpalette)|Crea una tavolozza dei colori di Windows e la collega all'oggetto `CPalette`.|
|[CPalette:: FromHandle](#fromhandle)|Restituisce un puntatore a un oggetto `CPalette` quando viene fornito un handle a un oggetto tavolozza di Windows.|
|[CPalette:: GetEntryCount](#getentrycount)|Recupera il numero di voci della tavolozza in una tavolozza logica.|
|[CPalette:: GetNearestPaletteIndex](#getnearestpaletteindex)|Restituisce l'indice della voce nella tavolozza logica che corrisponde maggiormente a un valore di colore.|
|[CPalette:: GetPaletteEntries](#getpaletteentries)|Recupera un intervallo di voci della tavolozza in una tavolozza logica.|
|[CPalette:: ResizePalette](#resizepalette)|Consente di modificare le dimensioni della tavolozza logica specificata dall'oggetto `CPalette` in base al numero di voci specificato.|
|[CPalette:: SetPaletteEntries](#setpaletteentries)|Imposta i valori di colore RGB e i flag in un intervallo di voci in una tavolozza logica.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPalette:: operator HPALETTE](#operator_hpalette)|Restituisce l'oggetto HPALETTE associato al `CPalette`.|

## <a name="remarks"></a>Osservazioni

Una tavolozza fornisce un'interfaccia tra un'applicazione e un dispositivo di output del colore, ad esempio un dispositivo di visualizzazione. L'interfaccia consente all'applicazione di sfruttare appieno le funzionalità cromatiche del dispositivo di output senza interferire gravemente con i colori visualizzati da altre applicazioni. Windows utilizza la tavolozza logica dell'applicazione (un elenco di colori necessari) e la tavolozza di sistema (che definisce i colori disponibili) per determinare i colori utilizzati.

Un oggetto `CPalette` fornisce funzioni membro per la modifica della tavolozza a cui fa riferimento l'oggetto. Costruire un oggetto `CPalette` e utilizzarne le funzioni membro per creare la tavolozza effettiva, un oggetto GDI (Graphics Device Interface) e modificare le relative voci e altre proprietà.

Per ulteriori informazioni sull'utilizzo di `CPalette`, vedere [oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CPalette`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="animatepalette"></a>CPalette:: AnimatePalette

Sostituisce le voci della tavolozza logica collegata all'oggetto `CPalette`.

```
void AnimatePalette(
    UINT nStartIndex,
    UINT nNumEntries,
    LPPALETTEENTRY lpPaletteColors);
```

### <a name="parameters"></a>Parametri

*nStartIndex*<br/>
Specifica la prima voce della tavolozza da animare.

*nNumEntries*<br/>
Specifica il numero di voci nella tavolozza da animare.

*lpPaletteColors*<br/>
Punta al primo membro di una matrice di strutture [PaletteEntry](/previous-versions/dd162769\(v=vs.85\)) per sostituire le voci della tavolozza identificate da *nStartIndex* e *nNumEntries*.

### <a name="remarks"></a>Osservazioni

Quando un'applicazione chiama `AnimatePalette`, non è necessario aggiornare la relativa area client perché Windows esegue immediatamente il mapping delle nuove voci nella tavolozza di sistema.

La funzione `AnimatePalette` modificherà solo le voci con il flag di PC_RESERVED impostato nel membro `palPaletteEntry` corrispondente della struttura [LOGPALETTE](/windows/win32/api/wingdi/ns-wingdi-logpalette) collegata all'oggetto `CPalette`. Per ulteriori informazioni su questa struttura, vedere LOGPALETTE nella Windows SDK.

##  <a name="cpalette"></a>CPalette:: CPalette

Costruisce un oggetto `CPalette`.

```
CPalette();
```

### <a name="remarks"></a>Osservazioni

All'oggetto non è associata alcuna tavolozza fino a quando non si chiama `CreatePalette` per allegarne una.

##  <a name="createhalftonepalette"></a>CPalette:: CreateHalftonePalette

Crea una tavolozza di mezzitoni per il contesto di dispositivo.

```
BOOL CreateHalftonePalette(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Identifica il contesto di dispositivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un'applicazione deve creare una tavolozza di mezzitoni quando la modalità di adattamento di un contesto di dispositivo è impostata su mezzitoni. La tavolozza mezzitoni logica restituita dalla funzione membro [CreateHalftonePalette](/windows/win32/api/wingdi/nf-wingdi-createhalftonepalette) deve quindi essere selezionata e realizzata nel contesto di dispositivo prima della chiamata della funzione [CDC:: StretchBlt](../../mfc/reference/cdc-class.md#stretchblt) o [StretchDIBits](/windows/win32/api/wingdi/nf-wingdi-stretchdibits) .

Per ulteriori informazioni su `CreateHalftonePalette` e `StretchDIBits`, vedere la Windows SDK.

##  <a name="createpalette"></a>CPalette:: CreatePalette

Inizializza un oggetto `CPalette` creando una tavolozza dei colori logica di Windows e aggiungendola all'oggetto `CPalette`.

```
BOOL CreatePalette(LPLOGPALETTE lpLogPalette);
```

### <a name="parameters"></a>Parametri

*lpLogPalette*<br/>
Punta a una struttura [LOGPALETTE](/windows/win32/api/wingdi/ns-wingdi-logpalette) che contiene informazioni sui colori nella tavolozza logica.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla struttura `LOGPALETTE`, vedere la Windows SDK.

##  <a name="fromhandle"></a>CPalette:: FromHandle

Restituisce un puntatore a un oggetto `CPalette` quando viene fornito un handle a un oggetto tavolozza di Windows.

```
static CPalette* PASCAL FromHandle(HPALETTE hPalette);
```

### <a name="parameters"></a>Parametri

*hPalette*<br/>
Handle per una tavolozza dei colori GDI di Windows.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CPalette` in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Se un oggetto `CPalette` non è già collegato alla tavolozza di Windows, viene creato e collegato un oggetto `CPalette` temporaneo. Questo oggetto `CPalette` temporaneo è valido solo fino alla successiva esecuzione del tempo di inattività dell'applicazione nel ciclo di eventi, al momento dell'eliminazione di tutti gli oggetti grafici temporanei. In altre parole, l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

##  <a name="getentrycount"></a>CPalette:: GetEntryCount

Chiamare questa funzione membro per recuperare il numero di voci in una tavolozza logica specificata.

```
int GetEntryCount();
```

### <a name="return-value"></a>Valore restituito

Numero di voci in una tavolozza logica.

##  <a name="getnearestpaletteindex"></a>CPalette:: GetNearestPaletteIndex

Restituisce l'indice della voce nella tavolozza logica che corrisponde maggiormente al valore del colore specificato.

```
UINT GetNearestPaletteIndex(COLORREF crColor) const;
```

### <a name="parameters"></a>Parametri

*crColor*<br/>
Specifica il colore da confrontare.

### <a name="return-value"></a>Valore restituito

Indice di una voce in una tavolozza logica. La voce contiene il colore che corrisponde quasi al colore specificato.

##  <a name="getpaletteentries"></a>CPalette:: GetPaletteEntries

Recupera un intervallo di voci della tavolozza in una tavolozza logica.

```
UINT GetPaletteEntries(
    UINT nStartIndex,
    UINT nNumEntries,
    LPPALETTEENTRY lpPaletteColors) const;
```

### <a name="parameters"></a>Parametri

*nStartIndex*<br/>
Specifica la prima voce della tavolozza logica da recuperare.

*nNumEntries*<br/>
Specifica il numero di voci nella tavolozza logica da recuperare.

*lpPaletteColors*<br/>
Punta a una matrice di strutture di dati [PaletteEntry](/previous-versions/dd162769\(v=vs.85\)) per ricevere le voci della tavolozza. La matrice deve contenere almeno il numero di strutture di dati specificato da *nNumEntries*.

### <a name="return-value"></a>Valore restituito

Numero di voci recuperate dalla tavolozza logica. 0 se la funzione non è riuscita.

##  <a name="operator_hpalette"></a>CPalette:: operator HPALETTE

Utilizzare questo operatore per ottenere l'handle GDI di Windows collegato dell'oggetto `CPalette`.

```
operator HPALETTE() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un handle per l'oggetto GDI di Windows rappresentato dall'oggetto `CPalette`; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HPALETTE.

Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [oggetti grafici](/windows/win32/gdi/graphic-objects) nell'Windows SDK.

##  <a name="resizepalette"></a>CPalette:: ResizePalette

Modifica la dimensione della tavolozza logica collegata all'oggetto `CPalette` al numero di voci specificate da *nNumEntries*.

```
BOOL ResizePalette(UINT nNumEntries);
```

### <a name="parameters"></a>Parametri

*nNumEntries*<br/>
Specifica il numero di voci nella tavolozza dopo che è stato ridimensionato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la tavolozza è stata ridimensionata correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se un'applicazione chiama `ResizePalette` per ridurre le dimensioni della tavolozza, le voci rimanenti nella tavolozza ridimensionata rimangono invariate. Se l'applicazione chiama `ResizePalette` per ingrandire la tavolozza, le voci della tavolozza aggiuntive sono impostate su nero (i valori rosso, verde e blu sono tutti 0) e i flag per tutte le voci aggiuntive vengono impostati su 0.

Per ulteriori informazioni sul `ResizePalette`dell'API Windows, vedere [ResizePalette](/windows/win32/api/wingdi/nf-wingdi-resizepalette) nella Windows SDK.

##  <a name="setpaletteentries"></a>CPalette:: SetPaletteEntries

Imposta i valori di colore RGB e i flag in un intervallo di voci in una tavolozza logica.

```
UINT SetPaletteEntries(
    UINT nStartIndex,
    UINT nNumEntries,
    LPPALETTEENTRY lpPaletteColors);
```

### <a name="parameters"></a>Parametri

*nStartIndex*<br/>
Specifica la prima voce della tavolozza logica da impostare.

*nNumEntries*<br/>
Specifica il numero di voci nella tavolozza logica da impostare.

*lpPaletteColors*<br/>
Punta a una matrice di strutture di dati [PaletteEntry](/previous-versions/dd162769\(v=vs.85\)) per ricevere le voci della tavolozza. La matrice deve contenere almeno il numero di strutture di dati specificato da *nNumEntries*.

### <a name="return-value"></a>Valore restituito

Numero di voci impostate nella tavolozza logica. 0 se la funzione non è riuscita.

### <a name="remarks"></a>Osservazioni

Se la tavolozza logica è selezionata in un contesto di dispositivo quando l'applicazione chiama `SetPaletteEntries`, le modifiche non saranno effettive fino a quando l'applicazione non chiamerà [CDC:: RealizePalette](../../mfc/reference/cdc-class.md#realizepalette).

Per ulteriori informazioni, vedere [PaletteEntry](/previous-versions/dd162769\(v=vs.85\)) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[DIBLOOK di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[CPalette:: GetPaletteEntries](#getpaletteentries)<br/>
[CPalette:: SetPaletteEntries](#setpaletteentries)
