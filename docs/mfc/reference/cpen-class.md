---
title: Classe CPen
ms.date: 11/04/2016
f1_keywords:
- CPen
- AFXWIN/CPen
- AFXWIN/CPen::CPen
- AFXWIN/CPen::CreatePen
- AFXWIN/CPen::CreatePenIndirect
- AFXWIN/CPen::FromHandle
- AFXWIN/CPen::GetExtLogPen
- AFXWIN/CPen::GetLogPen
helpviewer_keywords:
- CPen [MFC], CPen
- CPen [MFC], CreatePen
- CPen [MFC], CreatePenIndirect
- CPen [MFC], FromHandle
- CPen [MFC], GetExtLogPen
- CPen [MFC], GetLogPen
ms.assetid: 93175a3a-d46c-4768-be8d-863254f97a5f
ms.openlocfilehash: e15dc53fafa0d80f1b52b3fe77f3635c592a4346
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364078"
---
# <a name="cpen-class"></a>Classe CPen

Incapsula una penna GDI (Graphics Device Interface) di Windows.

## <a name="syntax"></a>Sintassi

```
class CPen : public CGdiObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPen::CPen](#cpen)|Costruisce un oggetto `CPen`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPen::CreatePen](#createpen)|Crea una penna cosmetica o geometrica logica con gli attributi di stile, larghezza e pennello specificati e la associa all'oggetto. `CPen`|
|[CPen::CreatePenIndiretto](#createpenindirect)|Crea una penna con lo stile, la larghezza e il colore forniti `CPen` in una struttura [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen) e la associa all'oggetto.|
|[CPen::FromHandle](#fromhandle)|Restituisce un `CPen` puntatore a un oggetto quando viene specificato un HPEN di Windows.|
|[CPen::GetExtLogPen](#getextlogpen)|Ottiene una struttura sottostante [EXTLOGPEN.](/windows/win32/api/wingdi/ns-wingdi-extlogpen)|
|[CPen::GetLogPen](#getlogpen)|Ottiene una struttura sottostante [LOGPEN.](/windows/win32/api/wingdi/ns-wingdi-logpen)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPen::operatore HPEN](#operator_hpen)|Restituisce l'handle di `CPen` Windows associato all'oggetto.|

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni `CPen`sull'utilizzo di , vedere [Oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CPen`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cpencpen"></a><a name="cpen"></a>CPen::CPen

Costruisce un oggetto `CPen`.

```
CPen();

CPen(
    int nPenStyle,
    int nWidth,
    COLORREF crColor);

CPen(
    int nPenStyle,
    int nWidth,
    const LOGBRUSH* pLogBrush,
    int nStyleCount = 0,
    const DWORD* lpStyle = NULL);
```

### <a name="parameters"></a>Parametri

*NPenStile*<br/>
Specifica lo stile della penna. Questo parametro nella prima versione del costruttore può essere uno dei seguenti valori:

- PS_SOLID Crea una penna solida.

- PS_DASH Crea una penna tratteggiata. Valido solo quando la larghezza della penna è pari o inferiore a 1, in unità di dispositivo.

- PS_DOT Crea una penna punteggiata. Valido solo quando la larghezza della penna è pari o inferiore a 1, in unità di dispositivo.

- PS_DASHDOT Crea una penna con trattini e punti alternati. Valido solo quando la larghezza della penna è pari o inferiore a 1, in unità di dispositivo.

- PS_DASHDOTDOT Crea una penna con trattini alternati e punti doppi. Valido solo quando la larghezza della penna è pari o inferiore a 1, in unità di dispositivo.

- PS_NULL Crea una penna nulla.

- PS_INSIDEFRAME Crea una penna che disegna una linea all'interno della cornice di forme chiuse prodotte `Ellipse` `Rectangle`dalle `RoundRect` `Pie`funzioni di output GDI di Windows che specificano un rettangolo di delimitazione, ad esempio le funzioni `Chord` membro , , , e . Quando questo stile viene utilizzato con le funzioni di output GDI di `LineTo` Windows che non specificano un rettangolo di delimitazione (ad esempio, la funzione membro), l'area di disegno della penna non è limitata da un frame.

La seconda versione `CPen` del costruttore specifica una combinazione di tipo, stile, estremità e attributi join. I valori di ogni categoria devono essere combinati utilizzando l'operatore OR bit per bit (&#124;). Il tipo di penna può essere uno dei seguenti valori:

- PS_GEOMETRIC Crea una penna geometrica.

- PS_COSMETIC Crea una penna cosmetica.

   La seconda versione `CPen` del costruttore aggiunge i seguenti stili di penna per *nPenStyle*:

- PS_ALTERNATE Crea una penna che imposta ogni altro pixel. (Questo stile è applicabile solo per le penne cosmetiche.)

- PS_USERSTYLE Crea una penna che utilizza una matrice di stili fornita dall'utente.

   Il limite finale può essere uno dei seguenti valori:

- PS_ENDCAP_ROUND i tappi finali sono rotondi.

- PS_ENDCAP_SQUARE i tappi finali sono quadrati.

- PS_ENDCAP_FLAT tappi End sono piatti.

   Il join può essere uno dei seguenti valori:

- I PS_JOIN_BEVEL Join sono svelati.

- PS_JOIN_MITER Join vengono attenuati quando rientrano nel limite corrente impostato dalla funzione [SetMiterLimit.](/windows/win32/api/wingdi/nf-wingdi-setmiterlimit) Se il join supera questo limite, viene svelato.

- PS_JOIN_ROUND Join sono rotondi.

*nLarghezza*<br/>
Specifica lo spessore della penna.

- Per la prima versione del costruttore, se questo valore è 0, la larghezza in unità di dispositivo è sempre 1 pixel, indipendentemente dalla modalità di mapping.

- Per la seconda versione del costruttore, se *nPenStyle* è PS_GEOMETRIC, la larghezza è specificata in unità logiche. Se *nPenStyle* è PS_COSMETIC, la larghezza deve essere impostata su 1.

*crColor (colore)*<br/>
Contiene un colore RGB per la penna.

*PLogPennello*<br/>
Punta a `LOGBRUSH` una struttura. Se *nPenStyle* è PS_COSMETIC, il *lbColor* membro della `LOGBRUSH` struttura specifica il colore della penna e il *lbStyle* membro della `LOGBRUSH` struttura deve essere impostato su BS_SOLID. Se *nPenStyle* è PS_GEOMETRIC, è necessario utilizzare tutti i membri per specificare gli attributi del pennello della penna.

*nStyleCount (conteggio in stile)*<br/>
Specifica la lunghezza, in unità doubleword, della matrice *lpStyle.* Questo valore deve essere zero se *nPenStyle* non è PS_USERSTYLE.

*LpStyle (stile)*<br/>
Punta a una matrice di valori di parola doppia. Il primo valore specifica la lunghezza del primo trattino in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Questo puntatore deve essere NULL se *nPenStyle* non è PS_USERSTYLE.

### <a name="remarks"></a>Osservazioni

Se si utilizza il costruttore senza argomenti, è `CreatePen` `CreatePenIndirect`necessario inizializzare l'oggetto risultante `CPen` con le funzioni membro , o `CreateStockObject` .

Se si utilizza il costruttore che accetta argomenti, non è necessaria alcuna ulteriore inizializzazione. Il costruttore con argomenti può generare un'eccezione se vengono rilevati errori, mentre il costruttore senza argomenti avrà sempre esito positivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#99](../../mfc/codesnippet/cpp/cpen-class_1.cpp)]

## <a name="cpencreatepen"></a><a name="createpen"></a>CPen::CreatePen

Crea una penna cosmetica o geometrica logica con gli attributi di stile, larghezza e pennello specificati e la associa all'oggetto. `CPen`

```
BOOL CreatePen(
    int nPenStyle,
    int nWidth,
    COLORREF crColor);

BOOL CreatePen(
    int nPenStyle,
    int nWidth,
    const LOGBRUSH* pLogBrush,
    int nStyleCount = 0,
    const DWORD* lpStyle = NULL);
```

### <a name="parameters"></a>Parametri

*NPenStile*<br/>
Specifica lo stile per la penna. Per un elenco dei valori possibili, vedere il *nPenStyle* parametro nel [CPen](#cpen) costruttore.

*nLarghezza*<br/>
Specifica lo spessore della penna.

- Per la prima `CreatePen`versione di , se questo valore è 0, la larghezza in unità di dispositivo è sempre di 1 pixel, indipendentemente dalla modalità di mappatura.

- Per la seconda `CreatePen`versione di , se *nPenStyle* è PS_GEOMETRIC, la larghezza è specificata in unità logiche. Se *nPenStyle* è PS_COSMETIC, la larghezza deve essere impostata su 1.

*crColor (colore)*<br/>
Contiene un colore RGB per la penna.

*PLogPennello*<br/>
Punta a una struttura [LOGBRUSH.](/windows/win32/api/wingdi/ns-wingdi-logbrush) Se *nPenStyle* è `lbColor` PS_COSMETIC, `LOGBRUSH` il membro della struttura specifica il colore della `LOGBRUSH` penna e il membro *lbStyle* della struttura deve essere impostato su BS_SOLID. Se nPenStyle è PS_GEOMETRIC, è necessario utilizzare tutti i membri per specificare gli attributi del pennello della penna.

*nStyleCount (conteggio in stile)*<br/>
Specifica la lunghezza, in unità doubleword, della matrice *lpStyle.* Questo valore deve essere zero se *nPenStyle* non è PS_USERSTYLE.

*LpStyle (stile)*<br/>
Punta a una matrice di valori di parola doppia. Il primo valore specifica la lunghezza del primo trattino in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Questo puntatore deve essere NULL se *nPenStyle* non è PS_USERSTYLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo o zero se il metodo ha esito negativo.

### <a name="remarks"></a>Osservazioni

La prima `CreatePen` versione di inizializza una penna con lo stile, la larghezza e il colore specificati. La penna può essere successivamente selezionata come penna corrente per qualsiasi contesto di dispositivo.

Le penne con una larghezza maggiore di 1 pixel devono sempre avere lo stile PS_NULL, PS_SOLID o PS_INSIDEFRAME.

Se una penna ha lo stile PS_INSIDEFRAME e un colore che non corrisponde a un colore nella tabella dei colori logica, la penna viene disegnata con un colore dithered. Lo stile di penna PS_SOLID non può essere utilizzato per creare una penna con un colore dithered. Lo stile PS_INSIDEFRAME è identico a PS_SOLID se la larghezza della penna è minore o uguale a 1.

La seconda `CreatePen` versione di inizializza una penna cosmetica o geometrica logica con gli attributi di stile, larghezza e pennello specificati. La larghezza di una penna cosmetica è sempre 1; la larghezza di una penna geometrica è sempre specificata nelle unità globali. Dopo che un'applicazione crea una penna logica, è possibile selezionare tale penna in un contesto di dispositivo chiamando la funzione [CDC::SelectObject.After](../../mfc/reference/cdc-class.md#selectobject) an application creates a logical pen, it can select that pen into a device context by calling the CDC::SelectObject function. Dopo aver selezionato una penna in un contesto di dispositivo, è possibile utilizzarla per disegnare linee e curve.

- Se *nPenStyle* è PS_COSMETIC e PS_USERSTYLE, le voci nella matrice *lpStyle* specificano lunghezze di trattini e spazi in unità di stile. Un'unità di stile è definita dal dispositivo in cui la penna viene utilizzata per disegnare una linea.

- Se *nPenStyle* è PS_GEOMETRIC e PS_USERSTYLE, le voci nella matrice *lpStyle* specificano lunghezze di trattini e spazi in unità logiche.

- Se *nPenStyle* è PS_ALTERNATE, l'unità di stile viene ignorata e viene impostato ogni altro pixel.

Quando un'applicazione non richiede più una penna specificata, deve chiamare il [CGdiObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione membro o eliminare l'oggetto `CPen` in modo che la risorsa non è più in uso. Un'applicazione non deve eliminare una penna quando la penna è selezionata in un contesto di dispositivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#100](../../mfc/codesnippet/cpp/cpen-class_2.cpp)]

## <a name="cpencreatepenindirect"></a><a name="createpenindirect"></a>CPen::CreatePenIndiretto

Inizializza una penna con lo stile, la larghezza e il colore forniti nella struttura a cui punta *lpLogPen*.

```
BOOL CreatePenIndirect(LPLOGPEN lpLogPen);
```

### <a name="parameters"></a>Parametri

*lpLogPen (penino a livello di proprietà del pulsant*<br/>
Punta alla struttura [LOGPEN](/windows/win32/api/Wingdi/ns-wingdi-logpen) di Windows che contiene informazioni sulla penna.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Le penne con una larghezza maggiore di 1 pixel devono sempre avere lo stile PS_NULL, PS_SOLID o PS_INSIDEFRAME.

Se una penna ha lo stile PS_INSIDEFRAME e un colore che non corrisponde a un colore nella tabella dei colori logica, la penna viene disegnata con un colore dithered. Lo stile PS_INSIDEFRAME è identico a PS_SOLID se la larghezza della penna è minore o uguale a 1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#101](../../mfc/codesnippet/cpp/cpen-class_3.cpp)]

## <a name="cpenfromhandle"></a><a name="fromhandle"></a>CPen::FromHandle

Restituisce un `CPen` puntatore a un oggetto dato un handle a un oggetto penna GDI di Windows.

```
static CPen* PASCAL FromHandle(HPEN hPen);
```

### <a name="parameters"></a>Parametri

*hPen*<br/>
`HPEN`all'handle GDI di Windows.

### <a name="return-value"></a>Valore restituito

Un puntatore `CPen` a un oggetto se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se all'handle non è collegato un oggetto `CPen`, viene creato e collegato un oggetto `CPen` temporaneo. Questo `CPen` oggetto temporaneo è valido solo fino alla successiva inattività dell'applicazione nel ciclo di eventi, in cui vengono eliminati tutti gli oggetti grafici temporanei. In altre parole, l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#105](../../mfc/codesnippet/cpp/cpen-class_4.cpp)]

## <a name="cpengetextlogpen"></a><a name="getextlogpen"></a>CPen::GetExtLogPen

Ottiene `EXTLOGPEN` una struttura sottostante.

```
int GetExtLogPen(EXTLOGPEN* pLogPen);
```

### <a name="parameters"></a>Parametri

*pLogPen (penino)*<br/>
Punta a una struttura [EXTLOGPEN](/windows/win32/api/wingdi/ns-wingdi-extlogpen) che contiene informazioni sulla penna.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La `EXTLOGPEN` struttura definisce gli attributi di stile, larghezza e pennello di una penna. Ad esempio, `GetExtLogPen` chiamare per abbinare lo stile particolare di una penna.

Per informazioni sugli attributi penna, vedere gli argomenti seguenti in Windows SDK:

- [Getobject](/windows/win32/api/wingdi/nf-wingdi-getobject)

- [EXTLOGPEN](/windows/win32/api/wingdi/ns-wingdi-extlogpen)

- [LOGPEN (LOGPEN)](/windows/win32/api/wingdi/ns-wingdi-logpen)

- [ExtCreatePen (finestra di volta in cui è stato fatto clic](/windows/win32/api/wingdi/nf-wingdi-extcreatepen)

### <a name="example"></a>Esempio

Esempio di codice `GetExtLogPen` seguente viene illustrato la chiamata per recuperare gli attributi di una penna e quindi creare una nuova penna cosmetica con lo stesso colore.

[!code-cpp[NVC_MFCDocView#102](../../mfc/codesnippet/cpp/cpen-class_5.cpp)]

## <a name="cpengetlogpen"></a><a name="getlogpen"></a>CPen::GetLogPen

Ottiene `LOGPEN` una struttura sottostante.

```
int GetLogPen(LOGPEN* pLogPen);
```

### <a name="parameters"></a>Parametri

*pLogPen (penino)*<br/>
Punta a una struttura [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen) per contenere informazioni sulla penna.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La `LOGPEN` struttura definisce lo stile, il colore e il motivo di una penna.

Ad esempio, `GetLogPen` chiamare per abbinare il particolare stile di penna.

Per informazioni sugli attributi penna, vedere gli argomenti seguenti in Windows SDK:

- [Getobject](/windows/win32/api/wingdi/nf-wingdi-getobject)

- [LOGPEN (LOGPEN)](/windows/win32/api/wingdi/ns-wingdi-logpen)

### <a name="example"></a>Esempio

Esempio di codice `GetLogPen` seguente viene illustrato la chiamata per recuperare un carattere penna e quindi creare una nuova penna a tinta unita con lo stesso colore.

[!code-cpp[NVC_MFCDocView#103](../../mfc/codesnippet/cpp/cpen-class_6.cpp)]

## <a name="cpenoperator-hpen"></a><a name="operator_hpen"></a>CPen::operatore HPEN

Ottiene l'handle GDI Windows `CPen` associato dell'oggetto.

```
operator HPEN() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un `CPen` handle per l'oggetto GDI di Windows rappresentato dall'oggetto; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo operatore è un operatore di cast, che supporta l'utilizzo diretto di un oggetto HPEN.

Per altre informazioni sull'uso di oggetti grafici, vedere l'articolo [Oggetti grafici](/windows/win32/gdi/graphic-objects) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#104](../../mfc/codesnippet/cpp/cpen-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CBrush](../../mfc/reference/cbrush-class.md)
