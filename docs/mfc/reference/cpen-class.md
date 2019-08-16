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
ms.openlocfilehash: 952d270acd47b5834a06b731f7875ea2efdd4695
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69502943"
---
# <a name="cpen-class"></a>Classe CPen

Incapsula una penna GDI (Graphics Device Interface) di Windows.

## <a name="syntax"></a>Sintassi

```
class CPen : public CGdiObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPen:: CPen](#cpen)|Costruisce un oggetto `CPen`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPen::CreatePen](#createpen)|Crea una penna logica o geometrica con lo stile, la larghezza e gli attributi del pennello specificati e la associa all' `CPen` oggetto.|
|[CPen::CreatePenIndirect](#createpenindirect)|Crea una penna con lo stile, la larghezza e il colore specificati in una struttura [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen) e lo associa all' `CPen` oggetto.|
|[CPen:: FromHandle](#fromhandle)|Restituisce un puntatore a un `CPen` oggetto quando viene fornito un HPEN Windows.|
|[CPen::GetExtLogPen](#getextlogpen)|Ottiene una struttura sottostante [EXTLOGPEN](/windows/win32/api/wingdi/ns-wingdi-extlogpen) .|
|[CPen::GetLogPen](#getlogpen)|Ottiene una struttura sottostante [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen) .|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPen:: operator HPEN](#operator_hpen)|Restituisce l'handle di Windows collegato all' `CPen` oggetto.|

## <a name="remarks"></a>Note

Per ulteriori informazioni sull'utilizzo `CPen`di, vedere [oggetti grafici](../../mfc/graphic-objects.md).

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
Specifica lo stile della penna. Questo parametro nella prima versione del costruttore può essere uno dei valori seguenti:

- PS_SOLID crea una penna a tinta unita.

- PS_DASH crea una penna tratteggiata. Valido solo quando la larghezza della penna è almeno 1, in unità dispositivo.

- PS_DOT crea una penna punteggiata. Valido solo quando la larghezza della penna è almeno 1, in unità dispositivo.

- PS_DASHDOT crea una penna con trattini e puntini alternati. Valido solo quando la larghezza della penna è almeno 1, in unità dispositivo.

- PS_DASHDOTDOT crea una penna con trattini alternati e punti doppi. Valido solo quando la larghezza della penna è almeno 1, in unità dispositivo.

- PS_NULL crea una penna null.

- PS_INSIDEFRAME crea una penna che disegna una linea all'interno del frame di forme chiuse generate dalle funzioni di output GDI di Windows che specificano un rettangolo di delimitazione `Ellipse`( `Rectangle`ad `RoundRect`esempio `Pie`,,, e `Chord`funzioni membro). Quando questo stile viene utilizzato con le funzioni di output GDI di Windows che non specificano un rettangolo di delimitazione ( `LineTo` ad esempio, la funzione membro), l'area di disegno della penna non è limitata da un frame.

La seconda versione del `CPen` costruttore specifica una combinazione di attributi di tipo, stile, estremità finale e join. I valori di ogni categoria devono essere combinati utilizzando l'operatore OR bit per&#124;bit (). Il tipo di penna può essere uno dei valori seguenti:

- PS_GEOMETRIC crea una penna geometrica.

- PS_COSMETIC crea una penna cosmetica.

   La seconda versione del `CPen` costruttore aggiunge gli stili di penna seguenti per *nPenStyle*:

- PS_ALTERNATE crea una penna che imposta ogni altro pixel. (Questo stile è applicabile solo per le penne cosmetiche).

- PS_USERSTYLE crea una penna che usa una matrice di stili fornita dall'utente.

   Il limite finale può essere uno dei valori seguenti:

- I tappi di fine PS_ENDCAP_ROUND sono arrotondati.

- I tappi finali PS_ENDCAP_SQUARE sono quadrati.

- I tappi finali PS_ENDCAP_FLAT sono Flat.

   Il join può essere uno dei valori seguenti:

- I join PS_JOIN_BEVEL sono smussati.

- I join PS_JOIN_MITER sono sgolato quando sono all'interno del limite corrente impostato dalla funzione [SetMiterLimit](/windows/win32/api/wingdi/nf-wingdi-setmiterlimit) . Se il join supera questo limite, viene smussato.

- PS_JOIN_ROUND join sono arrotondati.

*nWidth*<br/>
Specifica la larghezza della penna.

- Per la prima versione del costruttore, se questo valore è 0, la larghezza in unità dispositivo è sempre 1 pixel, indipendentemente dalla modalità di mapping.

- Per la seconda versione del costruttore, se *nPenStyle* è PS_GEOMETRIC, la larghezza viene specificata in unità logiche. Se *nPenStyle* è PS_COSMETIC, la larghezza deve essere impostata su 1.

*crColor*<br/>
Contiene un colore RGB per la penna.

*pLogBrush*<br/>
Punta a una `LOGBRUSH` struttura. Se *nPenStyle* è PS_COSMETIC, il `LOGBRUSH` membro lbColor della struttura specifica il colore della penna `LOGBRUSH` e il membro *lbStyle* della struttura deve essere impostato su BS_SOLID. Se *nPenStyle* è PS_GEOMETRIC, tutti i membri devono essere utilizzati per specificare gli attributi pennello della penna.

*nStyleCount*<br/>
Specifica la lunghezza, in unità parola doppia, della matrice *lpStyle* . Questo valore deve essere zero se *nPenStyle* non è PS_USERSTYLE.

*lpStyle*<br/>
Punta a una matrice di valori parola doppia. Il primo valore specifica la lunghezza del primo trattino in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Il puntatore deve essere NULL se *nPenStyle* non è PS_USERSTYLE.

### <a name="remarks"></a>Note

Se si usa il costruttore senza argomenti, è necessario inizializzare l'oggetto `CPen` risultante con le `CreatePen`funzioni `CreatePenIndirect`membro, `CreateStockObject` o.

Se si usa il costruttore che accetta argomenti, non sono necessarie altre inizializzazioni. Il costruttore con argomenti può generare un'eccezione se vengono rilevati errori, mentre il costruttore senza argomenti avrà sempre esito positivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#99](../../mfc/codesnippet/cpp/cpen-class_1.cpp)]

##  <a name="createpen"></a>CPen:: CreatePen

Crea una penna logica o geometrica con lo stile, la larghezza e gli attributi del pennello specificati e la associa all' `CPen` oggetto.

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
Specifica lo stile della penna. Per un elenco di valori possibili, vedere il parametro *nPenStyle* nel costruttore [CPen](#cpen) .

*nWidth*<br/>
Specifica la larghezza della penna.

- Per la prima versione di `CreatePen`, se questo valore è 0, la larghezza in unità dispositivo è sempre 1 pixel, indipendentemente dalla modalità di mapping.

- Per la seconda versione di `CreatePen`, se *nPenStyle* è PS_GEOMETRIC, la larghezza viene specificata in unità logiche. Se *nPenStyle* è PS_COSMETIC, la larghezza deve essere impostata su 1.

*crColor*<br/>
Contiene un colore RGB per la penna.

*pLogBrush*<br/>
Punta a una struttura [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) . Se *nPenStyle* è PS_COSMETIC, il `lbColor` membro della `LOGBRUSH` struttura specifica il colore della `LOGBRUSH` penna e il membro *lbStyle* della struttura deve essere impostato su BS_SOLID. Se nPenStyle è PS_GEOMETRIC, tutti i membri devono essere utilizzati per specificare gli attributi pennello della penna.

*nStyleCount*<br/>
Specifica la lunghezza, in unità parola doppia, della matrice *lpStyle* . Questo valore deve essere zero se *nPenStyle* non è PS_USERSTYLE.

*lpStyle*<br/>
Punta a una matrice di valori parola doppia. Il primo valore specifica la lunghezza del primo trattino in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Il puntatore deve essere NULL se *nPenStyle* non è PS_USERSTYLE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo oppure zero se il metodo ha esito negativo.

### <a name="remarks"></a>Note

La prima versione di `CreatePen` Inizializza una penna con lo stile, la larghezza e il colore specificati. È possibile selezionare la penna in seguito come penna corrente per qualsiasi contesto di dispositivo.

Le penne con una larghezza maggiore di 1 pixel devono avere sempre lo stile PS_NULL, PS_SOLID o PS_INSIDEFRAME.

Se una penna ha lo stile PS_INSIDEFRAME e un colore che non corrisponde a un colore nella tabella dei colori logica, la penna viene disegnata con un colore con repliche. Non è possibile usare lo stile di penna PS_SOLID per creare una penna con un colore con repliche. Lo stile PS_INSIDEFRAME è identico a PS_SOLID se la lunghezza della penna è minore o uguale a 1.

La seconda versione di `CreatePen` Inizializza una penna logica cosmetica o geometrica con lo stile, la larghezza e gli attributi del pennello specificati. La larghezza di una penna cosmetica è sempre 1; la larghezza di una penna geometrica viene sempre specificata in unità internazionali. Dopo la creazione di una penna logica da parte di un'applicazione, è possibile selezionare tale penna in un contesto di dispositivo chiamando la funzione [CDC:: SelezionaOggetto](../../mfc/reference/cdc-class.md#selectobject) . Dopo aver selezionato una penna in un contesto di dispositivo, è possibile usarla per creare linee e curve.

- Se *nPenStyle* è PS_COSMETIC e PS_USERSTYLE, le voci della matrice *lpStyle* specificano lunghezze di trattini e spazi nelle unità di stile. Un'unità di stile è definita dal dispositivo in cui viene usata la penna per creare una linea.

- Se *nPenStyle* è PS_GEOMETRIC e PS_USERSTYLE, le voci della matrice *lpStyle* specificano lunghezze di trattini e spazi nelle unità logiche.

- Se *nPenStyle* è PS_ALTERNATE, l'unità di stile viene ignorata e viene impostato ogni altro pixel.

Quando un'applicazione non richiede più una determinata penna, deve chiamare la funzione membro [CGdiObject::D eleteobject](../../mfc/reference/cgdiobject-class.md#deleteobject) o eliminare definitivamente l' `CPen` oggetto, in modo che la risorsa non sia più utilizzata. Un'applicazione non deve eliminare una penna quando la penna è selezionata in un contesto di dispositivo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#100](../../mfc/codesnippet/cpp/cpen-class_2.cpp)]

##  <a name="createpenindirect"></a>CPen:: CreatePenIndirect

Inizializza una penna con lo stile, la larghezza e il colore specificati nella struttura a cui punta *lpLogPen*.

```
BOOL CreatePenIndirect(LPLOGPEN lpLogPen);
```

### <a name="parameters"></a>Parametri

*lpLogPen*<br/>
Punta alla struttura [LOGPEN](/windows/win32/api/Wingdi/ns-wingdi-logpen) di Windows che contiene informazioni sulla penna.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Le penne con una larghezza maggiore di 1 pixel devono avere sempre lo stile PS_NULL, PS_SOLID o PS_INSIDEFRAME.

Se una penna ha lo stile PS_INSIDEFRAME e un colore che non corrisponde a un colore nella tabella dei colori logica, la penna viene disegnata con un colore con repliche. Lo stile PS_INSIDEFRAME è identico a PS_SOLID se la lunghezza della penna è minore o uguale a 1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#101](../../mfc/codesnippet/cpp/cpen-class_3.cpp)]

##  <a name="fromhandle"></a>CPen:: FromHandle

Restituisce un puntatore a un `CPen` oggetto dato un handle a un oggetto Pen GDI di Windows.

```
static CPen* PASCAL FromHandle(HPEN hPen);
```

### <a name="parameters"></a>Parametri

*hPen*<br/>
`HPEN`handle per la penna GDI di Windows.

### <a name="return-value"></a>Valore restituito

Puntatore a un `CPen` oggetto in caso di esito positivo; in caso contrario null.

### <a name="remarks"></a>Note

Se all'handle non è collegato un oggetto `CPen`, viene creato e collegato un oggetto `CPen` temporaneo. Questo oggetto `CPen` temporaneo è valido solo fino alla successiva esecuzione del tempo di inattività dell'applicazione nel ciclo di eventi, quindi vengono eliminati tutti gli oggetti grafici temporanei. In altre parole, l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#105](../../mfc/codesnippet/cpp/cpen-class_4.cpp)]

##  <a name="getextlogpen"></a>CPen:: GetExtLogPen

Ottiene una `EXTLOGPEN` struttura sottostante.

```
int GetExtLogPen(EXTLOGPEN* pLogPen);
```

### <a name="parameters"></a>Parametri

*pLogPen*<br/>
Punta a una struttura [EXTLOGPEN](/windows/win32/api/wingdi/ns-wingdi-extlogpen) che contiene informazioni sulla penna.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La `EXTLOGPEN` struttura definisce lo stile, la larghezza e gli attributi pennello di una penna. Ad esempio, chiamare `GetExtLogPen` per trovare la corrispondenza con lo stile specifico di un oggetto Pen.

Per informazioni sugli attributi penna, vedere gli argomenti seguenti nella Windows SDK:

- [GetObject](/windows/win32/api/wingdi/nf-wingdi-getobject)

- [EXTLOGPEN](/windows/win32/api/wingdi/ns-wingdi-extlogpen)

- [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen)

- [ExtCreatePen](/windows/win32/api/wingdi/nf-wingdi-extcreatepen)

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene `GetExtLogPen` illustrata la chiamata a per recuperare gli attributi di una penna, quindi viene creata una nuova penna cosmetica con lo stesso colore.

[!code-cpp[NVC_MFCDocView#102](../../mfc/codesnippet/cpp/cpen-class_5.cpp)]

##  <a name="getlogpen"></a>CPen:: GetLogPen

Ottiene una `LOGPEN` struttura sottostante.

```
int GetLogPen(LOGPEN* pLogPen);
```

### <a name="parameters"></a>Parametri

*pLogPen*<br/>
Punta a una struttura [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen) per contenere informazioni sulla penna.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La `LOGPEN` struttura definisce lo stile, il colore e il motivo di una penna.

Ad esempio, chiamare `GetLogPen` per trovare la corrispondenza con lo stile di penna specifico.

Per informazioni sugli attributi penna, vedere gli argomenti seguenti nella Windows SDK:

- [GetObject](/windows/win32/api/wingdi/nf-wingdi-getobject)

- [LOGPEN](/windows/win32/api/wingdi/ns-wingdi-logpen)

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di `GetLogPen` seguito viene illustrata la chiamata a per recuperare un carattere Pen, quindi viene creata una nuova penna a tinta unita con lo stesso colore.

[!code-cpp[NVC_MFCDocView#103](../../mfc/codesnippet/cpp/cpen-class_6.cpp)]

##  <a name="operator_hpen"></a>CPen:: operator HPEN

Ottiene l'handle di Windows GDI associato dell' `CPen` oggetto.

```
operator HPEN() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un handle per l'oggetto GDI Windows `CPen` rappresentato dall'oggetto; in caso contrario, null.

### <a name="remarks"></a>Note

Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HPEN.

Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [oggetti grafici](/windows/win32/gdi/graphic-objects) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#104](../../mfc/codesnippet/cpp/cpen-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CBrush](../../mfc/reference/cbrush-class.md)
