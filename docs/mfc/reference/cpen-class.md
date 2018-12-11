---
title: CPen (classe)
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
ms.openlocfilehash: ba85a811e0ea8c6d1658be3403ca466bb6877914
ms.sourcegitcommit: 975098222db3e8b297607cecaa1f504570a11799
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2018
ms.locfileid: "53178564"
---
# <a name="cpen-class"></a>CPen (classe)

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
|[CPen::CreatePen](#createpen)|Crea una penna cosmetica o geometrica logica con uno stile specificato, larghezza e gli attributi di pennello e lo collega al `CPen` oggetto.|
|[CPen::CreatePenIndirect](#createpenindirect)|Crea un oggetto pen con stile di visualizzazione, spessore e il colore specificato in un [LOGPEN](/windows/desktop/api/wingdi/ns-wingdi-taglogpen) struttura e lo collega al `CPen` oggetto.|
|[CPen::FromHandle](#fromhandle)|Restituisce un puntatore a un `CPen` dell'oggetto quando viene specificato un HPEN di Windows.|
|[CPen::GetExtLogPen](#getextlogpen)|Ottiene un' [EXTLOGPEN](/windows/desktop/api/wingdi/ns-wingdi-tagextlogpen) struttura sottostante.|
|[CPen::GetLogPen](#getlogpen)|Ottiene un [LOGPEN](/windows/desktop/api/wingdi/ns-wingdi-taglogpen) struttura sottostante.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPen::operator HPEN](#operator_hpen)|Restituisce l'handle di Windows associato ai `CPen` oggetto.|

## <a name="remarks"></a>Note

Per altre informazioni sull'uso `CPen`, vedere [degli oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CPen`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cpen"></a>  CPen::CPen

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

*nPenStyle*<br/>
Specifica lo stile di penna. Questo parametro nella prima versione del costruttore può essere uno dei valori seguenti:

- PS_SOLID crea una penna a tinta unita.

- PS_DASH crea un oggetto pen tratteggiato. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.

- PS_DOT crea un oggetto pen punteggiato. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.

- PS_DASHDOT crea un oggetto pen con alternanza di trattini e punti. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.

- PS_DASHDOTDOT crea una penna con alternanza di trattini e punti double. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.

- PS_NULL crea un oggetto pen null.

- PS_INSIDEFRAME crea una penna che disegna una linea all'interno del fotogramma di forme chiuse prodotte da GDI di Windows funzioni che specificano un rettangolo di delimitazione di output (ad esempio, il `Ellipse`, `Rectangle`, `RoundRect`, `Pie`e `Chord`le funzioni membro). Quando questo stile viene usato con funzioni di output GDI di Windows che non si specifica un rettangolo di delimitazione (ad esempio, il `LineTo` funzione membro), l'area di disegno della penna non è limitato da un frame.

La seconda versione del `CPen` costruttore specifica una combinazione di tipo, stile, estremità di chiusura e gli attributi di join. I valori di ciascuna categoria devono essere combinati con l'operatore OR bit per bit (&#124;). Il tipo di penna può essere uno dei valori seguenti:

- PS_GEOMETRIC crea un oggetto pen geometrico.

- PS_COSMETIC crea un oggetto pen cosmetico.

   La seconda versione del `CPen` costruttore aggiunge gli stili di penna seguenti per *nPenStyle*:

- PS_ALTERNATE crea una penna che consente di impostare gli altri pixel. (Questo stile è applicabile solo per penne cosmetiche).

- PS_USERSTYLE crea una penna che usa una matrice di stile forniti dall'utente.

   L'estremità di chiusura può essere uno dei valori seguenti:

- Delimitatori finali PS_ENDCAP_ROUND sono arrotondati.

- Delimitatori finali PS_ENDCAP_SQUARE sono quadrati.

- Delimitatori finali PS_ENDCAP_FLAT sono fissi.

   Il join può essere uno dei valori seguenti:

- Crea un join PS_JOIN_BEVEL sono un effetto tridimensionale.

- Unisce PS_JOIN_MITER sono siano quando si trovano entro il limite corrente impostato tramite il [SetMiterLimit](/windows/desktop/api/wingdi/nf-wingdi-setmiterlimit) (funzione). Se il join supera questo limite, è in rilievo.

- Unisce PS_JOIN_ROUND sono arrotondati.

*nWidth*<br/>
Specifica lo spessore della penna.

- Per la prima versione del costruttore, se questo valore è 0, la larghezza in unità di dispositivo è sempre 1 pixel, indipendentemente dalla modalità di mapping.

- Per la seconda versione del costruttore, se *nPenStyle* è PS_GEOMETRIC, la larghezza viene espresso in unità logiche. Se *nPenStyle* è PS_COSMETIC, la larghezza deve essere impostata su 1.

*crColor*<br/>
Contiene un colore RGB per la penna.

*pLogBrush*<br/>
Punta a un `LOGBRUSH` struttura. Se *nPenStyle* è PS_COSMETIC, il *lbColor* membro del `LOGBRUSH` struttura specifica il colore della penna e la *lbStyle* membro del `LOGBRUSH` struttura deve essere impostata su BS_SOLID. Se *nPenStyle* è PS_GEOMETRIC, tutti i membri devono essere usati per specificare gli attributi di pennello della penna.

*nStyleCount*<br/>
Specifica la lunghezza, in unità di Double Word del *lpStyle* matrice. Questo valore deve essere zero se *nPenStyle* non PS_USERSTYLE.

*lpStyle*<br/>
Punta a una matrice di valori Double Word. Il primo valore specifica la lunghezza del trattino prima in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Puntatore ' this ' deve essere NULL se *nPenStyle* non PS_USERSTYLE.

### <a name="remarks"></a>Note

Se si usa il costruttore senza argomenti, è necessario inizializzare l'oggetto risultante `CPen` dell'oggetto con il `CreatePen`, `CreatePenIndirect`, o `CreateStockObject` funzioni membro.

Se si usa il costruttore che accetta argomenti, non sarà necessaria alcuna ulteriore inizializzazione. Il costruttore con gli argomenti possa generare un'eccezione se si verificano errori, mentre il costruttore senza argomenti avrà sempre esito positivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#99](../../mfc/codesnippet/cpp/cpen-class_1.cpp)]

##  <a name="createpen"></a>  CPen::CreatePen

Crea una penna cosmetica o geometrica logica con uno stile specificato, larghezza e gli attributi di pennello e lo collega al `CPen` oggetto.

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

*nPenStyle*<br/>
Specifica lo stile per la penna. Per un elenco di valori possibili, vedere la *nPenStyle* parametro le [CPen](#cpen) costruttore.

*nWidth*<br/>
Specifica lo spessore della penna.

- Per la prima versione di `CreatePen`, se questo valore è 0, la larghezza in unità di dispositivo è sempre 1 pixel, indipendentemente dalla modalità di mapping.

- Per la seconda versione del `CreatePen`, se *nPenStyle* è PS_GEOMETRIC, la larghezza viene espresso in unità logiche. Se *nPenStyle* è PS_COSMETIC, la larghezza deve essere impostata su 1.

*crColor*<br/>
Contiene un colore RGB per la penna.

*pLogBrush*<br/>
Punta a un [LOGBRUSH](/windows/desktop/api/wingdi/ns-wingdi-taglogbrush) struttura. Se *nPenStyle* è PS_COSMETIC, il `lbColor` membro del `LOGBRUSH` struttura specifica il colore della penna e il *lbStyle* membro del `LOGBRUSH` struttura deve essere impostata su BS_ TINTA UNITA. Se nPenStyle è PS_GEOMETRIC, tutti i membri devono essere utilizzati per specificare gli attributi di pennello della penna.

*nStyleCount*<br/>
Specifica la lunghezza, in unità di Double Word del *lpStyle* matrice. Questo valore deve essere zero se *nPenStyle* non PS_USERSTYLE.

*lpStyle*<br/>
Punta a una matrice di valori Double Word. Il primo valore specifica la lunghezza del trattino prima in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Puntatore ' this ' deve essere NULL se *nPenStyle* non PS_USERSTYLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero nel caso di esito positivo oppure zero se il metodo ha esito negativo.

### <a name="remarks"></a>Note

La prima versione di `CreatePen` Inizializza un oggetto pen con uno stile specificato, spessore e il colore. È possibile selezionare successivamente la penna della penna corrente per qualsiasi contesto di dispositivo.

Penne che hanno una larghezza maggiore di 1 pixel devono contenere sempre PS_NULL, PS_SOLID o PS_INSIDEFRAME stile.

Se un oggetto pen dispone di un colore che corrisponde a un colore nella tabella dei colori logico e lo stile PS_INSIDEFRAME, penna viene disegnata con un colore retinato. Lo stile di penna PS_SOLID non può essere utilizzato per creare un oggetto pen con un colore retinato. Lo stile PS_INSIDEFRAME è identico a PS_SOLID se la larghezza della penna è minore o uguale a 1.

La seconda versione di `CreatePen` consente di inizializzare una penna cosmetica o geometrica logica che è stato specificato lo stile, larghezza, quindi gli attributi del pennello. La larghezza di un oggetto pen cosmetico è sempre 1. la larghezza di un oggetto pen geometrica viene sempre specificata in unità internazionali. Dopo che un'applicazione crea un oggetto pen logico, è possibile selezionare la penna in un contesto di dispositivo chiamando il [CDC:: SelectObject](../../mfc/reference/cdc-class.md#selectobject) (funzione). Dopo aver selezionata una penna nel contesto di periferica, può essere utilizzato per disegnare linee e curve.

- Se *nPenStyle* sia PS_COSMETIC PS_USERSTYLE, le voci nella *lpStyle* matrice specificare lunghezze di trattini e spazi in unità di stile. Un'unità di stile viene definita dal dispositivo in cui la penna utilizzata per disegnare una linea.

- Se *nPenStyle* sia PS_GEOMETRIC PS_USERSTYLE, le voci nella *lpStyle* matrice specificare lunghezze di trattini e spazi in unità logiche.

- Se *nPenStyle* è PS_ALTERNATE, l'unità di stile viene ignorato e viene impostato ogni altro pixel.

Quando un'applicazione non richiede più una penna specificata, questo deve chiamare il [CGdiObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) membro funzione o distruggere il `CPen` dell'oggetto in modo che la risorsa non è più in uso. Un'applicazione non eliminare una penna quando la penna è selezionata in un contesto di dispositivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#100](../../mfc/codesnippet/cpp/cpen-class_2.cpp)]

##  <a name="createpenindirect"></a>  CPen::CreatePenIndirect

Inizializza un oggetto pen con stile di visualizzazione, spessore e il colore specificato nella struttura a cui punta *lpLogPen*.

```
BOOL CreatePenIndirect(LPLOGPEN lpLogPen);
```

### <a name="parameters"></a>Parametri

*lpLogPen*<br/>
Punta a di Windows [LOGPEN](/windows/desktop/api/Wingdi/ns-wingdi-taglogpen) struttura che contiene informazioni sulla penna.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Penne che hanno una larghezza maggiore di 1 pixel devono contenere sempre PS_NULL, PS_SOLID o PS_INSIDEFRAME stile.

Se un oggetto pen dispone di un colore che corrisponde a un colore nella tabella dei colori logico e lo stile PS_INSIDEFRAME, penna viene disegnata con un colore retinato. Lo stile PS_INSIDEFRAME è identico a PS_SOLID se la larghezza della penna è minore o uguale a 1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#101](../../mfc/codesnippet/cpp/cpen-class_3.cpp)]

##  <a name="fromhandle"></a>  CPen::FromHandle

Restituisce un puntatore a un `CPen` oggetto dato un handle a un oggetto di penna GDI di Windows.

```
static CPen* PASCAL FromHandle(HPEN hPen);
```

### <a name="parameters"></a>Parametri

*hPen*<br/>
`HPEN` handle alla penna GDI di Windows.

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CPen` oggetto se riesce; in caso contrario, NULL.

### <a name="remarks"></a>Note

Se all'handle non è collegato un oggetto `CPen`, viene creato e collegato un oggetto `CPen` temporaneo. Questo temporaneo `CPen` oggetto è valido solo fino a quando non la volta successiva che l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, a cui ora l'immagine di tutti i temporanei vengono eliminati gli oggetti. In altre parole, l'oggetto temporaneo è solo valido durante l'elaborazione di una finestra di messaggio.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#105](../../mfc/codesnippet/cpp/cpen-class_4.cpp)]

##  <a name="getextlogpen"></a>  CPen::GetExtLogPen

Ottiene un `EXTLOGPEN` struttura sottostante.

```
int GetExtLogPen(EXTLOGPEN* pLogPen);
```

### <a name="parameters"></a>Parametri

*pLogPen*<br/>
Punta a un [EXTLOGPEN](/windows/desktop/api/wingdi/ns-wingdi-tagextlogpen) struttura che contiene informazioni sulla penna.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il `EXTLOGPEN` struttura definisce lo stile, larghezza e gli attributi di pennello di un oggetto pen. Ad esempio, chiamare `GetExtLogPen` per associare lo stile specifico di un oggetto pen.

Vedere gli argomenti seguenti nel SDK di Windows per informazioni sugli attributi di penna:

- [GetObject](/windows/desktop/api/wingdi/nf-wingdi-getobject)

- [EXTLOGPEN](/windows/desktop/api/wingdi/ns-wingdi-tagextlogpen)

- [LOGPEN](/windows/desktop/api/wingdi/ns-wingdi-taglogpen)

- [ExtCreatePen](/windows/desktop/api/wingdi/nf-wingdi-extcreatepen)

### <a name="example"></a>Esempio

Esempio di codice seguente viene illustrato come chiamare `GetExtLogPen` per recuperare gli attributi della penna e quindi creare una nuova, Cosmetica penna con lo stesso colore.

[!code-cpp[NVC_MFCDocView#102](../../mfc/codesnippet/cpp/cpen-class_5.cpp)]

##  <a name="getlogpen"></a>  CPen::GetLogPen

Ottiene un `LOGPEN` struttura sottostante.

```
int GetLogPen(LOGPEN* pLogPen);
```

### <a name="parameters"></a>Parametri

*pLogPen*<br/>
Punta a un [LOGPEN](/windows/desktop/api/wingdi/ns-wingdi-taglogpen) struttura per contenere informazioni sulla penna.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il `LOGPEN` struttura definisce lo stile, colore e modello di un oggetto pen.

Ad esempio, chiamare `GetLogPen` per associare lo stile particolare della penna.

Vedere gli argomenti seguenti nel SDK di Windows per informazioni sugli attributi di penna:

- [GetObject](/windows/desktop/api/wingdi/nf-wingdi-getobject)

- [LOGPEN](/windows/desktop/api/wingdi/ns-wingdi-taglogpen)

### <a name="example"></a>Esempio

Esempio di codice seguente viene illustrato come chiamare `GetLogPen` per recuperare un carattere di penna e quindi creare un oggetto pen nuove, a tinta unita con lo stesso colore.

[!code-cpp[NVC_MFCDocView#103](../../mfc/codesnippet/cpp/cpen-class_6.cpp)]

##  <a name="operator_hpen"></a>  CPen::operator HPEN

Ottiene l'handle GDI di Windows associata del `CPen` oggetto.

```
operator HPEN() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un handle all'oggetto GDI di Windows rappresentato dal `CPen` oggetto; in caso contrario, NULL.

### <a name="remarks"></a>Note

Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HPEN.

Per altre informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [gli oggetti di grafica](/windows/desktop/gdi/graphic-objects) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#104](../../mfc/codesnippet/cpp/cpen-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CBrush](../../mfc/reference/cbrush-class.md)
