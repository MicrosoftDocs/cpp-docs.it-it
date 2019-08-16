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
ms.openlocfilehash: a99d8c8022d23f627320b66c3f376be803c9c839
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507441"
---
# <a name="cbrush-class"></a>Classe CBrush

Incapsula un pennello GDI (Graphics Device Interface) di Windows.

## <a name="syntax"></a>Sintassi

```
class CBrush : public CGdiObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CBrush::CBrush](#cbrush)|Costruisce un oggetto `CBrush`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBrush::CreateBrushIndirect](#createbrushindirect)|Inizializza un pennello con lo stile, il colore e il criterio specificati in una struttura [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) .|
|[CBrush::CreateDIBPatternBrush](#createdibpatternbrush)|Inizializza un pennello con un criterio specificato da una bitmap indipendente dal dispositivo (DIB).|
|[CBrush::CreateHatchBrush](#createhatchbrush)|Inizializza un pennello con il motivo e il colore tratteggiato specificati.|
|[CBrush::CreatePatternBrush](#createpatternbrush)|Inizializza un pennello con un criterio specificato da una bitmap.|
|[CBrush::CreateSolidBrush](#createsolidbrush)|Inizializza un pennello con il colore a tinta unita specificato.|
|[CBrush::CreateSysColorBrush](#createsyscolorbrush)|Crea un pennello che rappresenta il colore di sistema predefinito.|
|[CBrush::FromHandle](#fromhandle)|Restituisce un puntatore a un `CBrush` oggetto quando viene fornito un handle a un `HBRUSH` oggetto di Windows.|
|[CBrush::GetLogBrush](#getlogbrush)|Ottiene una struttura [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) .|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBrush:: operator HBRUSH](#operator_hbrush)|Restituisce l'handle di Windows collegato all' `CBrush` oggetto.|

## <a name="remarks"></a>Note

Per usare un `CBrush` oggetto, costruire un `CBrush` oggetto `CDC` e passarlo a una funzione membro che richiede un pennello.

I pennelli possono essere a tinta unita, tratteggiati o con modello.

Per ulteriori informazioni su `CBrush`, vedere [oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cbrush"></a>CBrush:: CBrush

Costruisce un oggetto `CBrush`.

```
CBrush();
CBrush(COLORREF crColor);
CBrush(int nIndex, COLORREF crColor);
explicit CBrush(CBitmap* pBitmap);
```

### <a name="parameters"></a>Parametri

*crColor*<br/>
Specifica il colore di primo piano del pennello come colore RGB. Se il pennello è tratteggiato, questo parametro specifica il colore del tratteggio.

*nIndex*<br/>
Specifica lo stile di tratteggio del pennello. Può essere uno dei valori seguenti:

- HS_BDIAGONAL il tratteggio verso il basso (da sinistra a destra) a 45 gradi

- Campitura orizzontale e verticale HS_CROSS

- HS_DIAGCROSS campitura a 45 gradi

- HS_FDIAGONAL verso l'alto (da sinistra a destra) a 45 gradi

- Tratteggio orizzontale HS_HORIZONTAL

- Tratteggio verticale HS_VERTICAL

*pBitmap*<br/>
Punta a un `CBitmap` oggetto che specifica una bitmap con cui disegnare il pennello.

### <a name="remarks"></a>Note

`CBrush`dispone di quattro costruttori di overload. Il costruttore senza argomenti costruisce un `CBrush` oggetto non inizializzato che deve essere inizializzato prima di poter essere utilizzato.

Se si usa il costruttore senza argomenti, è necessario inizializzare l'oggetto `CBrush` risultante con [CreateSolidBrush](#createsolidbrush), [CreateHatchBrush](#createhatchbrush), [CreateBrushIndirect](#createbrushindirect), [CreatePatternBrush](#createpatternbrush)o [ CreateDIBPatternBrush](#createdibpatternbrush). Se si usa uno dei costruttori che accetta argomenti, non sono necessarie altre inizializzazioni. Se vengono rilevati errori, i costruttori con argomenti possono generare un'eccezione, mentre il costruttore senza argomenti avrà sempre esito positivo.

Il costruttore con un singolo parametro [COLORREF](/windows/win32/gdi/colorref) costruisce un pennello a tinta unita con il colore specificato. Il colore specifica un valore RGB e può essere costruito con la macro RGB in WINDOWS. H.

Il costruttore con due parametri costruisce un pennello di tratteggio. Il parametro *nIndex* specifica l'indice di un motivo tratteggiato. Il parametro *crColor* specifica il colore.

Il costruttore con un `CBitmap` parametro costruisce un pennello con pattern. Il parametro identifica una bitmap. Si presuppone che la bitmap sia stata creata con [CBitmap:: CreateBitmap](../../mfc/reference/cbitmap-class.md#createbitmap), [CBitmap:: CreateBitmapIndirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect), [CBitmap:: LoadBitmap](../../mfc/reference/cbitmap-class.md#loadbitmap)o [CBitmap:: CreateCompatibleBitmap](../../mfc/reference/cbitmap-class.md#createcompatiblebitmap). La dimensione minima per una bitmap da usare in un modello di riempimento è 8 pixel per 8 pixel.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#21](../../mfc/codesnippet/cpp/cbrush-class_1.cpp)]

##  <a name="createbrushindirect"></a>  CBrush::CreateBrushIndirect

Inizializza un pennello con uno stile, un colore e un criterio specificati in una struttura [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) .

```
BOOL CreateBrushIndirect(const LOGBRUSH* lpLogBrush);
```

### <a name="parameters"></a>Parametri

*lpLogBrush*<br/>
Punta a una struttura [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) che contiene informazioni sul pennello.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Il pennello può essere selezionato successivamente come pennello corrente per qualsiasi contesto di dispositivo.

Un pennello creato con una bitmap monocromatica (1 piano, 1 bit per pixel) viene disegnato usando il testo corrente e i colori di sfondo. I pixel rappresentati da un bit impostato su 0 verranno disegnati con il colore del testo corrente. I pixel rappresentati da un bit impostato su 1 verranno disegnati con il colore di sfondo corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#22](../../mfc/codesnippet/cpp/cbrush-class_2.cpp)]

##  <a name="createdibpatternbrush"></a>  CBrush::CreateDIBPatternBrush

Inizializza un pennello con il criterio specificato da una bitmap indipendente dal dispositivo (DIB).

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
Identifica un oggetto memoria globale contenente una bitmap (Device-Independent Bitmap) compressa.

*nUsage*<br/>
Specifica se i `bmiColors[]` campi della struttura di dati [BITMAPINFO](/windows/win32/api/wingdi/ns-wingdi-bitmapinfo) (una parte di "DIB compresso") contengono valori RGB espliciti o indici nella tavolozza logica attualmente realizzata. Il parametro deve essere uno dei valori seguenti:

- DIB_PAL_COLORS la tabella dei colori è costituita da una matrice di indici a 16 bit.

- DIB_RGB_COLORS la tabella dei colori contiene valori RGB letterali.

*lpPackedDIB*<br/>
Punta a un oggetto DIB compresso costituito da `BITMAPINFO` una struttura immediatamente seguita da una matrice di byte che definisce i pixel della bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il pennello può essere selezionato successivamente per qualsiasi contesto di dispositivo che supporta le operazioni raster.

Le due versioni variano a seconda del modo in cui si gestisce la DIB:

- Nella prima versione, per ottenere un handle per la DIB, chiamare la funzione Windows `GlobalAlloc` per allocare un blocco di memoria globale e quindi riempire la memoria con l'oggetto DIB compresso.

- Nella seconda versione non è necessario chiamare `GlobalAlloc` per allocare memoria per l'oggetto DIB compresso.

Una DIB compressa è costituita `BITMAPINFO` da una struttura di dati immediatamente seguita dalla matrice di byte che definisce i pixel della bitmap. Le bitmap utilizzate come modelli di riempimento devono essere 8 pixel per 8 pixel. Se la bitmap è più grande, Windows crea un modello di riempimento usando solo i bit corrispondenti alle prime 8 righe e 8 colonne di pixel nell'angolo superiore sinistro della bitmap.

Quando un'applicazione seleziona un pennello di tipo DIB a due colori in un contesto di dispositivo monocromatico, Windows ignora i colori specificati nella DIB e visualizza invece il pennello del pattern usando il testo corrente e i colori di sfondo del contesto di dispositivo. I pixel di cui è stato eseguito il mapping al primo colore (in corrispondenza dell'offset 0 nella tabella dei colori DIB) della DIB vengono visualizzati utilizzando il colore del testo. I pixel con mapping al secondo colore (in corrispondenza dell'offset 1 nella tabella dei colori) vengono visualizzati utilizzando il colore di sfondo.

Per informazioni sull'utilizzo delle funzioni di Windows seguenti, vedere la Windows SDK:

- [CreateDIBPatternBrush](/windows/win32/api/wingdi/nf-wingdi-createdibpatternbrush) Questa funzione viene fornita solo per la compatibilità con le applicazioni scritte per le versioni di Windows precedenti alla 3,0; `CreateDIBPatternBrushPt` utilizzare la funzione.

- [CreateDIBPatternBrushPt](/windows/win32/api/wingdi/nf-wingdi-createdibpatternbrushpt) Questa funzione deve essere utilizzata per le applicazioni basate su Win32.

- [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#23](../../mfc/codesnippet/cpp/cbrush-class_3.cpp)]

##  <a name="createhatchbrush"></a>  CBrush::CreateHatchBrush

Inizializza un pennello con il motivo e il colore tratteggiato specificati.

```
BOOL CreateHatchBrush(
    int nIndex,
    COLORREF crColor);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica lo stile di tratteggio del pennello. Può essere uno dei valori seguenti:

- HS_BDIAGONAL il tratteggio verso il basso (da sinistra a destra) a 45 gradi

- Campitura orizzontale e verticale HS_CROSS

- HS_DIAGCROSS campitura a 45 gradi

- HS_FDIAGONAL verso l'alto (da sinistra a destra) a 45 gradi

- Tratteggio orizzontale HS_HORIZONTAL

- Tratteggio verticale HS_VERTICAL

*crColor*<br/>
Specifica il colore di primo piano del pennello come colore RGB (il colore dei tratteggio). Per ulteriori informazioni, vedere [COLORREF](/windows/win32/gdi/colorref) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il pennello può essere selezionato successivamente come pennello corrente per qualsiasi contesto di dispositivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#24](../../mfc/codesnippet/cpp/cbrush-class_4.cpp)]

##  <a name="createpatternbrush"></a>  CBrush::CreatePatternBrush

Inizializza un pennello con un criterio specificato da una bitmap.

```
BOOL CreatePatternBrush(CBitmap* pBitmap);
```

### <a name="parameters"></a>Parametri

*pBitmap*<br/>
Identifica una bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il pennello può essere selezionato successivamente per qualsiasi contesto di dispositivo che supporta le operazioni raster. La bitmap identificata da *pBitmap* viene in genere inizializzata tramite la funzione [CBitmap:: CreateBitmap](../../mfc/reference/cbitmap-class.md#createbitmap), [CBitmap:: CreateBitmapIndirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect), [CBitmap:: LoadBitmap](../../mfc/reference/cbitmap-class.md#loadbitmap)o [CBitmap:: CreateCompatibleBitmap](../../mfc/reference/cbitmap-class.md#createcompatiblebitmap) .

Le bitmap utilizzate come modelli di riempimento devono essere 8 pixel per 8 pixel. Se la bitmap è più grande, Windows utilizzerà solo i bit corrispondenti alle prime 8 righe e colonne di pixel nell'angolo superiore sinistro della bitmap.

Un pennello di pattern può essere eliminato senza influire sulla bitmap associata. Ciò significa che la bitmap può essere usata per creare un numero qualsiasi di pennelli modello.

Un pennello creato con una bitmap monocromatica (1 piano di colore, 1 bit per pixel) viene disegnato usando il testo corrente e i colori di sfondo. I pixel rappresentati da un bit impostato su 0 vengono disegnati con il colore del testo corrente. I pixel rappresentati da un bit impostato su 1 vengono disegnati con il colore di sfondo corrente.

Per informazioni sull'uso di [CreatePatternBrush](/windows/win32/api/wingdi/nf-wingdi-createpatternbrush), una funzione di Windows, vedere la Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#25](../../mfc/codesnippet/cpp/cbrush-class_5.cpp)]

##  <a name="createsolidbrush"></a>  CBrush::CreateSolidBrush

Inizializza un pennello con un colore a tinta unita specificato.

```
BOOL CreateSolidBrush(COLORREF crColor);
```

### <a name="parameters"></a>Parametri

*crColor*<br/>
Struttura [COLORREF](/windows/win32/gdi/colorref) che specifica il colore del pennello. Il colore specifica un valore RGB e può essere costruito con la macro RGB in WINDOWS. H.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il pennello può essere selezionato successivamente come pennello corrente per qualsiasi contesto di dispositivo.

Quando un'applicazione ha terminato di usare il pennello creato `CreateSolidBrush`da, deve selezionare il pennello al di fuori del contesto di dispositivo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CBrush:: CBrush](#cbrush).

##  <a name="createsyscolorbrush"></a>  CBrush::CreateSysColorBrush

Inizializza un colore del pennello.

```
BOOL CreateSysColorBrush(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica un indice colori. Questo valore corrisponde al colore utilizzato per disegnare uno dei 21 elementi della finestra. Per un elenco di valori, vedere [GetSysColor](/windows/win32/api/winuser/nf-winuser-getsyscolor) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il pennello può essere selezionato successivamente come pennello corrente per qualsiasi contesto di dispositivo.

Quando un'applicazione ha terminato di usare il pennello creato `CreateSysColorBrush`da, deve selezionare il pennello al di fuori del contesto di dispositivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#26](../../mfc/codesnippet/cpp/cbrush-class_6.cpp)]

##  <a name="fromhandle"></a>CBrush:: FromHandle

Restituisce un puntatore a un `CBrush` oggetto quando viene fornito un handle a un oggetto [HBRUSH](#operator_hbrush) Windows.

```
static CBrush* PASCAL FromHandle(HBRUSH hBrush);
```

### <a name="parameters"></a>Parametri

*hBrush*<br/>
HANDLE per un pennello GDI di Windows.

### <a name="return-value"></a>Valore restituito

Puntatore a un `CBrush` oggetto in caso di esito positivo; in caso contrario null.

### <a name="remarks"></a>Note

Se un `CBrush` oggetto non è già collegato all'handle, viene creato e `CBrush` collegato un oggetto temporaneo. Questo oggetto `CBrush` temporaneo è valido solo fino alla successiva esecuzione del tempo di inattività nel ciclo di eventi dell'applicazione. A questo punto, vengono eliminati tutti gli oggetti grafici temporanei. In altre parole, l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere [oggetti grafici](/windows/win32/gdi/graphic-objects) nell'Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CBrush:: CBrush](#cbrush).

##  <a name="getlogbrush"></a>  CBrush::GetLogBrush

Chiamare questa funzione membro per recuperare la `LOGBRUSH` struttura.

```
int GetLogBrush(LOGBRUSH* pLogBrush);
```

### <a name="parameters"></a>Parametri

*pLogBrush*<br/>
Punta a una struttura [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) che contiene informazioni sul pennello.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo e *pLogBrush* è un puntatore valido, il valore restituito è il numero di byte archiviati nel buffer.

Se la funzione ha esito positivo e *pLogBrush* è null, il valore restituito è il numero di byte necessari per contenere le informazioni che la funzione archivia nel buffer.

Se la funzione ha esito negativo, il valore restituito è 0.

### <a name="remarks"></a>Note

La `LOGBRUSH` struttura definisce lo stile, il colore e il modello di un pennello.

Ad esempio, chiamare `GetLogBrush` per trovare la corrispondenza con il colore o lo schema di una bitmap.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#27](../../mfc/codesnippet/cpp/cbrush-class_7.cpp)]

##  <a name="operator_hbrush"></a>CBrush:: operator HBRUSH

Utilizzare questo operatore per ottenere l'handle di Windows GDI associato dell' `CBrush` oggetto.

```
operator HBRUSH() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un handle per l'oggetto GDI Windows `CBrush` rappresentato dall'oggetto; in caso contrario, null.

### <a name="remarks"></a>Note

Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HBRUSH.

Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere [oggetti grafici](/windows/win32/gdi/graphic-objects) nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#28](../../mfc/codesnippet/cpp/cbrush-class_8.cpp)]

## <a name="see-also"></a>Vedere anche

[PROPDLG di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CBitmap](../../mfc/reference/cbitmap-class.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)
