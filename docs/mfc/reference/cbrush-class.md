---
title: Classe CBrush
ms.date: 11/04/2016
f1_keywords:
- CBrush
- AFXWIN/CBrush
- AFXWIN/CBrush::CBrush
- AFXWIN/CBrush::CreateBrushIndirect
- AFXWIN/CBrush::CreateDIBPatternBrush
- AFXWIN/CBrush::CreateHatchBrush
- AFXWIN/CBrush::CreatePatternBrush
- AFXWIN/CBrush::CreateSolidBrush
- AFXWIN/CBrush::CreateSysColorBrush
- AFXWIN/CBrush::FromHandle
- AFXWIN/CBrush::GetLogBrush
helpviewer_keywords:
- CBrush [MFC], CBrush
- CBrush [MFC], CreateBrushIndirect
- CBrush [MFC], CreateDIBPatternBrush
- CBrush [MFC], CreateHatchBrush
- CBrush [MFC], CreatePatternBrush
- CBrush [MFC], CreateSolidBrush
- CBrush [MFC], CreateSysColorBrush
- CBrush [MFC], FromHandle
- CBrush [MFC], GetLogBrush
ms.assetid: e5ef2c62-dd95-4973-9090-f52f605900e1
ms.openlocfilehash: 15132bb5497886638edfe431ae769dd446785df8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352487"
---
# <a name="cbrush-class"></a>Classe CBrush

Incapsula un pennello GDI (Graphics Device Interface) di Windows.

## <a name="syntax"></a>Sintassi

```
class CBrush : public CGdiObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBrush::CBrush](#cbrush)|Costruisce un oggetto `CBrush`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBrush::CreateBrushIndiretto](#createbrushindirect)|Inizializza un pennello con lo stile, il colore e il motivo specificati in una struttura [LOGBRUSH.](/windows/win32/api/wingdi/ns-wingdi-logbrush)|
|[Pennello CBrush::CreateDIBPatternBrush](#createdibpatternbrush)|Inizializza un pennello con un motivo specificato da una bitmap indipendente dal dispositivo (DIB).|
|[CBrush::CreateHatchBrush](#createhatchbrush)|Inizializza un pennello con il modello e il colore tratteggiati specificati.|
|[CBrush::CreatePatternBrush](#createpatternbrush)|Inizializza un pennello con un motivo specificato da una bitmap.|
|[CBrush::CreateSolidBrush](#createsolidbrush)|Inizializza un pennello con il colore a tinta unita specificato.|
|[CBrush::CreateSysColorBrush](#createsyscolorbrush)|Crea un pennello che è il colore di sistema predefinito.|
|[CBrush::FromHandle](#fromhandle)|Restituisce un `CBrush` puntatore a un oggetto `HBRUSH` quando viene fornito un handle a un oggetto Windows.|
|[CBrush::GetLogBrush](#getlogbrush)|Ottiene una struttura [LOGBRUSH.](/windows/win32/api/wingdi/ns-wingdi-logbrush)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBrush::operatorh](#operator_hbrush)|Restituisce l'handle di `CBrush` Windows associato all'oggetto.|

## <a name="remarks"></a>Osservazioni

Per usare `CBrush` un oggetto, costruire un `CBrush` `CDC` oggetto e passarlo a qualsiasi funzione membro che richiede un pennello.

I pennelli possono essere solidi, tratteggiati o modellati.

Per ulteriori `CBrush`informazioni su , vedere [Oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cbrushcbrush"></a><a name="cbrush"></a>CBrush::CBrush

Costruisce un oggetto `CBrush`.

```
CBrush();
CBrush(COLORREF crColor);
CBrush(int nIndex, COLORREF crColor);
explicit CBrush(CBitmap* pBitmap);
```

### <a name="parameters"></a>Parametri

*crColor (colore)*<br/>
Specifica il colore di primo piano del pennello come colore RGB. Se il pennello è tratteggiato, questo parametro specifica il colore del tratteggio.

*nIndex*<br/>
Specifica lo stile di tratteggio del pennello. Può essere uno dei seguenti valori:

- HS_BDIAGONAL tratteggio verso il basso (da sinistra a destra) a 45 gradi

- HS_CROSS tratteggio trasversale orizzontale e verticale

- HS_DIAGCROSS cross-hatch a 45 gradi

- HS_FDIAGONAL tratteggio verso l'alto (da sinistra a destra) a 45 gradi

- HS_HORIZONTAL tratteggio orizzontale

- HS_VERTICAL tratteggio verticale

*pBitmap*<br/>
Punta a `CBitmap` un oggetto che specifica una bitmap con cui viene disegnato il pennello.

### <a name="remarks"></a>Osservazioni

`CBrush`dispone di quattro costruttori di overload. Il costruttore senza argomenti costruisce `CBrush` un oggetto non inizializzato che deve essere inizializzato prima che possa essere utilizzato.

Se si utilizza il costruttore senza argomenti, è necessario inizializzare l'oggetto `CBrush` risultante con [CreateSolidBrush](#createsolidbrush), [CreateHatchBrush](#createhatchbrush), [CreateBrushIndirect](#createbrushindirect), [CreatePatternBrush](#createpatternbrush)o [CreateDIBPatternBrush](#createdibpatternbrush). Se si utilizza uno dei costruttori che accetta argomenti, non è necessaria alcuna ulteriore inizializzazione. I costruttori con argomenti possono generare un'eccezione se vengono rilevati errori, mentre il costruttore senza argomenti avrà sempre esito positivo.

Il costruttore con un singolo parametro [COLORREF](/windows/win32/gdi/colorref) costruisce un pennello a tinta unita con il colore specificato. Il colore specifica un valore RGB e può essere costruito con la macro RGB in WINDOWS. H.

Il costruttore con due parametri costruisce un pennello tratteggiato. Il parametro *nIndex* consente di specificare l'indice di un modello tratteggiato. Il parametro *crColor* consente di specificare il colore.

Il costruttore `CBitmap` con un parametro costruisce un pennello con motivi. Il parametro identifica una bitmap. Si presuppone che la bitmap sia stata creata utilizzando [CBitmap::CreateBitmap](../../mfc/reference/cbitmap-class.md#createbitmap), [CBitmap::CreateBitmapIndirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect), [CBitmap::LoadBitmap](../../mfc/reference/cbitmap-class.md#loadbitmap)o [CBitmap::CreateCompatibleBitmap](../../mfc/reference/cbitmap-class.md#createcompatiblebitmap). La dimensione minima per una bitmap da utilizzare in un motivo di riempimento è 8 x 8 pixel.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#21](../../mfc/codesnippet/cpp/cbrush-class_1.cpp)]

## <a name="cbrushcreatebrushindirect"></a><a name="createbrushindirect"></a>CBrush::CreateBrushIndiretto

Inizializza un pennello con uno stile, un colore e un motivo specificati in una struttura [LOGBRUSH.](/windows/win32/api/wingdi/ns-wingdi-logbrush)

```
BOOL CreateBrushIndirect(const LOGBRUSH* lpLogBrush);
```

### <a name="parameters"></a>Parametri

*LpLogBrush (Pennello lpLog)*<br/>
Punta a una struttura [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) che contiene informazioni sul pennello.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Il pennello può essere successivamente selezionato come pennello corrente per qualsiasi contesto di dispositivo.

Un pennello creato utilizzando una bitmap monocromatica (1 piano, 1 bit per pixel) viene disegnata utilizzando il testo corrente e i colori di sfondo. I pixel rappresentati da un bit impostato su 0 verranno disegnati con il colore del testo corrente. I pixel rappresentati da un bit impostato su 1 verranno disegnati con il colore di sfondo corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#22](../../mfc/codesnippet/cpp/cbrush-class_2.cpp)]

## <a name="cbrushcreatedibpatternbrush"></a><a name="createdibpatternbrush"></a>Pennello CBrush::CreateDIBPatternBrush

Inizializza un pennello con il motivo specificato da una bitmap indipendente dal dispositivo (DIB).

```
BOOL CreateDIBPatternBrush(
    HGLOBAL hPackedDIB,
    UINT nUsage);

BOOL CreateDIBPatternBrush(
    const void* lpPackedDIB,
    UINT nUsage);
```

### <a name="parameters"></a>Parametri

*hPackedDIB*<br/>
Identifica un oggetto di memoria globale contenente una bitmap indipendente dal dispositivo compressa (DIB).

*nUtilizzo*<br/>
Specifica se `bmiColors[]` i campi della struttura di dati [BITMAPINFO](/windows/win32/api/wingdi/ns-wingdi-bitmapinfo) (una parte della "DIB compressa") contengono valori RGB espliciti o indici nella tavolozza logica attualmente realizzata. Il parametro deve essere uno dei valori seguenti:

- DIB_PAL_COLORS La tabella dei colori è costituita da una matrice di indici a 16 bit.

- DIB_RGB_COLORS La tabella dei colori contiene valori RGB letterali.

*lpPackedDIB (informazioni in cui è stato compresso)*<br/>
Punta a una DIB `BITMAPINFO` compressa costituita da una struttura immediatamente seguita da una matrice di byte che definisce i pixel della bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il pennello può essere successivamente selezionato per qualsiasi contesto di dispositivo che supporta le operazioni raster.

Le due versioni differiscono nel modo in cui si gestisce la DIB:

- Nella prima versione, per ottenere un handle per `GlobalAlloc` la DIB si chiama la funzione di Windows per allocare un blocco di memoria globale e quindi riempire la memoria con la DIB compressa.

- Nella seconda versione, non è `GlobalAlloc` necessario chiamare per allocare memoria per la DIB compressa.

Una DIB compressa `BITMAPINFO` è costituita da una struttura di dati immediatamente seguita dalla matrice di byte che definisce i pixel della bitmap. Le bitmap utilizzate come motivi di riempimento devono essere di 8 x 8 pixel. Se la bitmap è più grande, Windows crea un motivo di riempimento utilizzando solo i bit corrispondenti alle prime 8 righe e 8 colonne di pixel nell'angolo superiore sinistro della bitmap.

Quando un'applicazione seleziona un pennello motivo DIB a due colori in un contesto di dispositivo monocromatico, Windows ignora i colori specificati nella DIB e visualizza invece il pennello pattern usando il testo corrente e i colori di sfondo del contesto di dispositivo. I pixel mappati al primo colore (all'offset 0 nella tabella dei colori DIB) della DIB vengono visualizzati utilizzando il colore del testo. I pixel mappati al secondo colore (all'offset 1 nella tabella dei colori) vengono visualizzati utilizzando il colore di sfondo.

Per informazioni sull'utilizzo delle seguenti funzioni di Windows, vedere Windows SDK:

- [CreateDIBPatternBrush](/windows/win32/api/wingdi/nf-wingdi-createdibpatternbrush) (questa funzione viene fornita solo per la compatibilità con le `CreateDIBPatternBrushPt` applicazioni scritte per le versioni di Windows precedenti alla 3.0; utilizzare la funzione.)

- [CreateDIBPatternBrushPt](/windows/win32/api/wingdi/nf-wingdi-createdibpatternbrushpt) (questa funzione deve essere utilizzata per le applicazioni basate su Win32).

- [Globalalloc](/windows/win32/api/winbase/nf-winbase-globalalloc)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#23](../../mfc/codesnippet/cpp/cbrush-class_3.cpp)]

## <a name="cbrushcreatehatchbrush"></a><a name="createhatchbrush"></a>CBrush::CreateHatchBrush

Inizializza un pennello con il modello e il colore tratteggiati specificati.

```
BOOL CreateHatchBrush(
    int nIndex,
    COLORREF crColor);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica lo stile di tratteggio del pennello. Può essere uno dei seguenti valori:

- HS_BDIAGONAL tratteggio verso il basso (da sinistra a destra) a 45 gradi

- HS_CROSS tratteggio trasversale orizzontale e verticale

- HS_DIAGCROSS cross-hatch a 45 gradi

- HS_FDIAGONAL tratteggio verso l'alto (da sinistra a destra) a 45 gradi

- HS_HORIZONTAL tratteggio orizzontale

- HS_VERTICAL tratteggio verticale

*crColor (colore)*<br/>
Specifica il colore di primo piano del pennello come colore RGB (il colore dei tratteggi). Per ulteriori informazioni, vedere [COLORREF](/windows/win32/gdi/colorref) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il pennello può essere successivamente selezionato come pennello corrente per qualsiasi contesto di dispositivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#24](../../mfc/codesnippet/cpp/cbrush-class_4.cpp)]

## <a name="cbrushcreatepatternbrush"></a><a name="createpatternbrush"></a>CBrush::CreatePatternBrush

Inizializza un pennello con un motivo specificato da una bitmap.

```
BOOL CreatePatternBrush(CBitmap* pBitmap);
```

### <a name="parameters"></a>Parametri

*pBitmap*<br/>
Identifica una bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il pennello può essere successivamente selezionato per qualsiasi contesto di dispositivo che supporta le operazioni raster. La bitmap identificata da *pBitmap* viene in genere inizializzata utilizzando la funzione [CBitmap::CreateBitmap](../../mfc/reference/cbitmap-class.md#createbitmap), [CBitmap::CreateBitmapIndirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect), [CBitmap::LoadBitmap](../../mfc/reference/cbitmap-class.md#loadbitmap)o [CBitmap::CreateCompatibleBitmap](../../mfc/reference/cbitmap-class.md#createcompatiblebitmap) .

Le bitmap utilizzate come motivi di riempimento devono essere di 8 x 8 pixel. Se la bitmap è più grande, Windows utilizzerà solo i bit corrispondenti alle prime 8 righe e colonne di pixel nell'angolo superiore sinistro della bitmap.

Un pennello pattern può essere eliminato senza influire sulla bitmap associata. Ciò significa che la bitmap può essere utilizzata per creare un numero qualsiasi di pennelli pattern.

Un pennello creato utilizzando una bitmap monocromatica (1 piano di colore, 1 bit per pixel) viene disegnato utilizzando il testo corrente e i colori di sfondo. I pixel rappresentati da un bit impostato su 0 vengono disegnati con il colore del testo corrente. I pixel rappresentati da un bit impostato su 1 vengono disegnati con il colore di sfondo corrente.

Per informazioni sull'utilizzo di [CreatePatternBrush](/windows/win32/api/wingdi/nf-wingdi-createpatternbrush), una funzione di Windows, vedere Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#25](../../mfc/codesnippet/cpp/cbrush-class_5.cpp)]

## <a name="cbrushcreatesolidbrush"></a><a name="createsolidbrush"></a>CBrush::CreateSolidBrush

Inizializza un pennello con un colore a tinta unita specificato.

```
BOOL CreateSolidBrush(COLORREF crColor);
```

### <a name="parameters"></a>Parametri

*crColor (colore)*<br/>
Struttura [COLORREF](/windows/win32/gdi/colorref) che specifica il colore del pennello. Il colore specifica un valore RGB e può essere costruito con la macro RGB in WINDOWS. H.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il pennello può essere successivamente selezionato come pennello corrente per qualsiasi contesto di dispositivo.

Quando un'applicazione ha terminato `CreateSolidBrush`di utilizzare il pennello creato da , deve selezionare il pennello dal contesto di periferica.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CBrush::CBrush](#cbrush).

## <a name="cbrushcreatesyscolorbrush"></a><a name="createsyscolorbrush"></a>CBrush::CreateSysColorBrush

Inizializza un colore del pennello.

```
BOOL CreateSysColorBrush(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica un indice dei colori. Questo valore corrisponde al colore utilizzato per disegnare uno dei 21 elementi della finestra. Per un elenco di valori, vedere [GetSysColor](/windows/win32/api/winuser/nf-winuser-getsyscolor) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il pennello può essere successivamente selezionato come pennello corrente per qualsiasi contesto di dispositivo.

Quando un'applicazione ha terminato `CreateSysColorBrush`di utilizzare il pennello creato da , deve selezionare il pennello dal contesto di periferica.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#26](../../mfc/codesnippet/cpp/cbrush-class_6.cpp)]

## <a name="cbrushfromhandle"></a><a name="fromhandle"></a>CBrush::FromHandle

Restituisce un `CBrush` puntatore a un oggetto quando viene fornito un handle per un oggetto [HBRUSH di](#operator_hbrush) Windows.

```
static CBrush* PASCAL FromHandle(HBRUSH hBrush);
```

### <a name="parameters"></a>Parametri

*hPennello*<br/>
HANDLE a un pennello GDI di Windows.

### <a name="return-value"></a>Valore restituito

Un puntatore `CBrush` a un oggetto se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se `CBrush` un oggetto non è già associato `CBrush` alla maniglia, viene creato e associato un oggetto temporaneo. Questo `CBrush` oggetto temporaneo è valido solo fino alla prossima volta che l'applicazione ha tempo di inattività nel ciclo di eventi. A questo punto, tutti gli oggetti grafici temporanei vengono eliminati. In altre parole, l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

Per altre informazioni sull'uso di oggetti grafici, vedere [Oggetti grafici](/windows/win32/gdi/graphic-objects) in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CBrush::CBrush](#cbrush).

## <a name="cbrushgetlogbrush"></a><a name="getlogbrush"></a>CBrush::GetLogBrush

Chiamare questa funzione membro `LOGBRUSH` per recuperare la struttura.

```
int GetLogBrush(LOGBRUSH* pLogBrush);
```

### <a name="parameters"></a>Parametri

*PLogPennello*<br/>
Punta a una struttura [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) che contiene informazioni sul pennello.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo e *pLogBrush* è un puntatore valido, il valore restituito è il numero di byte archiviati nel buffer.

Se la funzione ha esito positivo e *pLogBrush* è NULL, il valore restituito è il numero di byte necessari per contenere le informazioni che la funzione archivierebbe nel buffer.

Se la funzione ha esito negativo, il valore restituito è 0.If the function fails, the return value is 0.

### <a name="remarks"></a>Osservazioni

La `LOGBRUSH` struttura definisce lo stile, il colore e il motivo di un pennello.

Ad esempio, `GetLogBrush` chiamare per abbinare il colore o il motivo particolare di una bitmap.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#27](../../mfc/codesnippet/cpp/cbrush-class_7.cpp)]

## <a name="cbrushoperator-hbrush"></a><a name="operator_hbrush"></a>CBrush::operatorh

Utilizzare questo operatore per ottenere l'handle `CBrush` GDI di Windows associato dell'oggetto.

```
operator HBRUSH() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un `CBrush` handle per l'oggetto GDI di Windows rappresentato dall'oggetto; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo operatore è un operatore di cast, che supporta l'utilizzo diretto di un oggetto HBRUSH.

Per altre informazioni sull'uso di oggetti grafici, vedere [Oggetti grafici](/windows/win32/gdi/graphic-objects) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#28](../../mfc/codesnippet/cpp/cbrush-class_8.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC PROPDLG](../../overview/visual-cpp-samples.md)<br/>
[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CBitmap](../../mfc/reference/cbitmap-class.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)
