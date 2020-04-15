---
title: Classe CGdiObject
ms.date: 11/04/2016
f1_keywords:
- CGdiObject
- AFXWIN/CGdiObject
- AFXWIN/CGdiObject::CGdiObject
- AFXWIN/CGdiObject::Attach
- AFXWIN/CGdiObject::CreateStockObject
- AFXWIN/CGdiObject::DeleteObject
- AFXWIN/CGdiObject::DeleteTempMap
- AFXWIN/CGdiObject::Detach
- AFXWIN/CGdiObject::FromHandle
- AFXWIN/CGdiObject::GetObject
- AFXWIN/CGdiObject::GetObjectType
- AFXWIN/CGdiObject::GetSafeHandle
- AFXWIN/CGdiObject::UnrealizeObject
- AFXWIN/CGdiObject::m_hObject
helpviewer_keywords:
- CGdiObject [MFC], CGdiObject
- CGdiObject [MFC], Attach
- CGdiObject [MFC], CreateStockObject
- CGdiObject [MFC], DeleteObject
- CGdiObject [MFC], DeleteTempMap
- CGdiObject [MFC], Detach
- CGdiObject [MFC], FromHandle
- CGdiObject [MFC], GetObject
- CGdiObject [MFC], GetObjectType
- CGdiObject [MFC], GetSafeHandle
- CGdiObject [MFC], UnrealizeObject
- CGdiObject [MFC], m_hObject
ms.assetid: 1cba3ba5-3d49-4e43-8293-209299f2f6f4
ms.openlocfilehash: 0cd7a0e0ed500ee9394b00e8906640e9f950163b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373729"
---
# <a name="cgdiobject-class"></a>Classe CGdiObject

Fornisce una classe di base per diversi generi di oggetti GDI (Graphics Device Interface) di Windows, quali bitmap, aree, pennelli, penne, tavolozze e tipi di carattere.

## <a name="syntax"></a>Sintassi

```
class CGdiObject : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CGdiObject::CGdiObject](#cgdiobject)|Costruisce un oggetto `CGdiObject`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGdiObject::Associare](#attach)|Associa un oggetto GDI di `CGdiObject` Windows a un oggetto.|
|[Oggetto CGdiObject::CreateStockObject](#createstockobject)|Recupera un handle per una delle penne predefinite, pennelli o tipi di carattere predefiniti di Windows.|
|[Oggetto CGdiObject::DeleteObject](#deleteobject)|Elimina l'oggetto GDI di `CGdiObject` Windows associato all'oggetto dalla memoria liberando tutta l'archiviazione di sistema associata all'oggetto.|
|[CGdiObject::DeleteTempMap](#deletetempmap)|Elimina tutti `CGdiObject` gli oggetti `FromHandle`temporanei creati da .|
|[Oggetto CGdiObject::Detach](#detach)|Scollega un oggetto GDI `CGdiObject` di Windows da un oggetto e restituisce un handle all'oggetto GDI di Windows.|
|[Oggetto CGdiObject::FromHandle](#fromhandle)|Restituisce un `CGdiObject` puntatore a un oggetto dato un handle a un oggetto GDI di Windows.|
|[Oggetto CGdiObject::GetObject](#getobject)|Riempie un buffer con dati che descrivono l'oggetto GDI di Windows associato all'oggetto. `CGdiObject`|
|[Oggetto CGdiObject::GetObjectType](#getobjecttype)|Recupera il tipo dell'oggetto GDI.|
|[CGdiObject::GetSafeHandle](#getsafehandle)|Restituisce `m_hObject` a meno che **non** sia NULL, nel qual caso viene restituito NULL.|
|[Oggetto CGdiObject::UnrealizeObject](#unrealizeobject)|Reimposta l'origine di un pennello o reimposta una tavolozza logica.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGdiObject::operator !](#operator_neq)|Determina se due oggetti GDI non sono logicamente uguali.|
|[CGdiObject::operatore](#operator_eq_eq)|Determina se due oggetti GDI sono logicamente uguali.|
|[CGdiObject::operatore HGDIOBJ](#operator_hgdiobj)|Recupera un HANDLE all'oggetto GDI di Windows associato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CGdiObject::m_hObject](#m_hobject)|Oggetto HANDLE contenente HBITMAP, HPALETTE, HRGN, HBRUSH, HPEN o HFONT associato a questo oggetto.|

## <a name="remarks"></a>Osservazioni

Non si `CGdiObject` crea mai un direttamente. È invece possibile creare un oggetto da `CPen` una `CBrush`delle relative classi derivate, ad esempio o .

Per ulteriori `CGdiObject`informazioni su , vedere [Oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CGdiObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cgdiobjectattach"></a><a name="attach"></a>CGdiObject::Associare

Associa un oggetto GDI di `CGdiObject` Windows a un oggetto.

```
BOOL Attach(HGDIOBJ hObject);
```

### <a name="parameters"></a>Parametri

*hOggetto*<br/>
Oggetto HANDLE a un oggetto GDI di Windows (ad esempio, HPEN o HBRUSH).

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'allegato ha esito positivo; in caso contrario 0.

## <a name="cgdiobjectcgdiobject"></a><a name="cgdiobject"></a>Oggetto CGdiObject::CGdiObject

Costruisce un oggetto `CGdiObject`.

```
CGdiObject();
```

### <a name="remarks"></a>Osservazioni

Non si `CGdiObject` crea mai un direttamente. È invece possibile creare un oggetto da `CPen` una `Cbrush`delle relative classi derivate, ad esempio o .

## <a name="cgdiobjectcreatestockobject"></a><a name="createstockobject"></a>Oggetto CGdiObject::CreateStockObject

Recupera un handle a una delle penne, pennelli o tipi di carattere GDI predefiniti `CGdiObject` e associa l'oggetto GDI all'oggetto.

```
BOOL CreateStockObject(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Costante che specifica il tipo di oggetto stock desiderato. Vedere il parametro *fnObject* per [GetStockObject](/windows/win32/api/wingdi/nf-wingdi-getstockobject) in Windows SDK per una descrizione dei valori appropriati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione con una delle classi derivate che corrisponde `CPen` al tipo di oggetto GDI di Windows, ad esempio per una penna predefinita.

## <a name="cgdiobjectdeleteobject"></a><a name="deleteobject"></a>Oggetto CGdiObject::DeleteObject

Elimina l'oggetto GDI di Windows associato dalla memoria liberando tutta l'archiviazione di sistema associata all'oggetto GDI di Windows.

```
BOOL DeleteObject();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto GDI è stato eliminato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'archiviazione associata all'oggetto `CGdiObject` non è interessata da questa chiamata. Un'applicazione non `DeleteObject` deve `CGdiObject` chiamare su un oggetto attualmente selezionato in un contesto di dispositivo.

Quando un pennello pattern viene eliminato, la bitmap associata al pennello non viene eliminata. La bitmap deve essere eliminata in modo indipendente.

## <a name="cgdiobjectdeletetempmap"></a><a name="deletetempmap"></a>CGdiObject::DeleteTempMap

Chiamato automaticamente `CWinApp` dal gestore del `DeleteTempMap` tempo di `CGdiObject` inattività, elimina tutti gli oggetti temporanei creati da `FromHandle`.

```
static void PASCAL DeleteTempMap();
```

### <a name="remarks"></a>Osservazioni

`DeleteTempMap`scollega l'oggetto GDI di Windows `CGdiObject` collegato a `CGdiObject` un oggetto temporaneo prima di eliminare l'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#175](../../mfc/codesnippet/cpp/cgdiobject-class_1.cpp)]

## <a name="cgdiobjectdetach"></a><a name="detach"></a>Oggetto CGdiObject::Detach

Scollega un oggetto GDI `CGdiObject` di Windows da un oggetto e restituisce un handle all'oggetto GDI di Windows.

```
HGDIOBJ Detach();
```

### <a name="return-value"></a>Valore restituito

A `HANDLE` all'oggetto GDI di Windows scollegato; in caso contrario NULL se non è associato alcun oggetto GDI.

## <a name="cgdiobjectfromhandle"></a><a name="fromhandle"></a>Oggetto CGdiObject::FromHandle

Restituisce un `CGdiObject` puntatore a un oggetto dato un handle a un oggetto GDI di Windows.

```
static CGdiObject* PASCAL FromHandle(HGDIOBJ hObject);
```

### <a name="parameters"></a>Parametri

*hOggetto*<br/>
Oggetto HANDLE a un oggetto GDI di Windows.

### <a name="return-value"></a>Valore restituito

Puntatore a `CGdiObject` un che può essere temporaneo o permanente.

### <a name="remarks"></a>Osservazioni

Se `CGdiObject` un oggetto non è già associato all'oggetto `CGdiObject` GDI di Windows, viene creato e associato un oggetto temporaneo.

Questo `CGdiObject` oggetto temporaneo è valido solo fino alla successiva inattività dell'applicazione nel ciclo di eventi, in cui vengono eliminati tutti gli oggetti grafici temporanei. Un altro modo per dire questo è che l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

## <a name="cgdiobjectgetobject"></a><a name="getobject"></a>Oggetto CGdiObject::GetObject

Riempie un buffer con dati che definiscono un oggetto specificato.

```
int GetObject(
    int nCount,
    LPVOID lpObject) const;
```

### <a name="parameters"></a>Parametri

*nConteggio*<br/>
Specifica il numero di byte da copiare nel buffer *lpObject.*

*Oggetto lp*<br/>
Punta a un buffer fornito dall'utente che deve ricevere le informazioni.

### <a name="return-value"></a>Valore restituito

Il numero di byte recuperati; in caso contrario 0 se si verifica un errore.

### <a name="remarks"></a>Osservazioni

La funzione recupera una struttura di dati il cui tipo dipende dal tipo di oggetto grafico, come illustrato nell'elenco seguente:

|Oggetto|Tipo di buffer|
|------------|-----------------|
|`CPen`|[LOGPEN (LOGPEN)](/windows/win32/api/Wingdi/ns-wingdi-logpen)|
|`CBrush`|[PENNELLO](/windows/win32/api/wingdi/ns-wingdi-logbrush)|
|`CFont`|[Logfont](/windows/win32/api/wingdi/ns-wingdi-logfontw)|
|`CBitmap`|[Bitmap](/windows/win32/api/wingdi/ns-wingdi-bitmap)|
|`CPalette`|WORD|
|`CRgn`|Non supportate|

Se l'oggetto `CBitmap` è `GetObject` un oggetto, restituisce solo la larghezza, l'altezza e le informazioni sul formato del colore della bitmap. I bit effettivi possono essere recuperati utilizzando [CBitmap::GetBitmapBits](../../mfc/reference/cbitmap-class.md#getbitmapbits).

Se l'oggetto `CPalette` è `GetObject` un oggetto, recupera un WORD che specifica il numero di voci nella tavolozza. La funzione non recupera la struttura [LOGPALETTE](/windows/win32/api/wingdi/ns-wingdi-logpalette) che definisce la tavolozza. Un'applicazione può ottenere informazioni sulle voci della tavolozza chiamando [CPalette::GetPaletteEntries](../../mfc/reference/cpalette-class.md#getpaletteentries).

## <a name="cgdiobjectgetobjecttype"></a><a name="getobjecttype"></a>Oggetto CGdiObject::GetObjectType

Recupera il tipo dell'oggetto GDI.

```
UINT GetObjectType() const;
```

### <a name="return-value"></a>Valore restituito

Il tipo dell'oggetto, se ha esito positivo; in caso contrario 0. I possibili valori sono i seguenti:

- OBJ_BITMAP Bitmap

- Pennello OBJ_BRUSH

- Tipo di carattere OBJ_FONT

- Tavolozza OBJ_PAL

- Penna OBJ_PEN

- penna OBJ_EXTPEN estesa

- Regione OBJ_REGION

- OBJ_DC il contesto del dispositivo

- Contesto di dispositivo OBJ_MEMDC Memory

- OBJ_METAFILE Metafile

- OBJ_METADC contesto di dispositivo metafile

- OBJ_ENHMETAFILE metafile avanzato

- OBJ_ENHMETADC contesto di dispositivo Enhanced-metafile

## <a name="cgdiobjectgetsafehandle"></a><a name="getsafehandle"></a>CGdiObject::GetSafeHandle

Restituisce `m_hObject` a meno che **non** sia NULL, nel qual caso viene restituito NULL.

```
HGDIOBJ GetSafeHandle() const;
```

### <a name="return-value"></a>Valore restituito

Handle all'oggetto GDI di Windows associato; in caso contrario NULL se non è associato alcun oggetto.

### <a name="remarks"></a>Osservazioni

Questo fa parte del paradigma generale dell'interfaccia di handle ed è utile quando NULL è un valore valido o speciale per un handle.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd::IsWindowEnabled](../../mfc/reference/cwnd-class.md#iswindowenabled).

## <a name="cgdiobjectm_hobject"></a><a name="m_hobject"></a>Oggetto CGdiObject::m_hObject

Oggetto HANDLE contenente HBITMAP, HRGN, HBRUSH, HPEN, HPALETTE o HFONT associato a questo oggetto.

```
HGDIOBJ m_hObject;
```

## <a name="cgdiobjectoperator-"></a><a name="operator_neq"></a>CGdiObject::operator !

Determina se due oggetti GDI non sono logicamente uguali.

```
BOOL operator!=(const CGdiObject& obj) const;
```

### <a name="parameters"></a>Parametri

*obj*<br/>
Puntatore a `CGdiObject`un file .

### <a name="remarks"></a>Osservazioni

Determina se un oggetto GDI sul lato sinistro non è uguale a un oggetto GDI sul lato destro.

## <a name="cgdiobjectoperator-"></a><a name="operator_eq_eq"></a>CGdiObject::operatore

Determina se due oggetti GDI sono logicamente uguali.

```
BOOL operator==(const CGdiObject& obj) const;
```

### <a name="parameters"></a>Parametri

*obj*<br/>
Riferimento a un `CGdiObject`file .

### <a name="remarks"></a>Osservazioni

Determina se un oggetto GDI sul lato sinistro è uguale a un oggetto GDI sul lato destro.

## <a name="cgdiobjectoperator-hgdiobj"></a><a name="operator_hgdiobj"></a>CGdiObject::operatore HGDIOBJ

Recupera un HANDLE all'oggetto GDI di Windows associato; in caso contrario NULL se non è associato alcun oggetto.

```
operator HGDIOBJ() const;
```

## <a name="cgdiobjectunrealizeobject"></a><a name="unrealizeobject"></a>Oggetto CGdiObject::UnrealizeObject

Reimposta l'origine di un pennello o reimposta una tavolozza logica.

```
BOOL UnrealizeObject();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Sebbene `UnrealizeObject` sia una `CGdiObject` funzione membro della classe, `CBrush` deve `CPalette` essere richiamata solo su o oggetti.

Per `CBrush` gli `UnrealizeObject` oggetti, indica al sistema di reimpostare l'origine del pennello specificato la volta successiva che viene selezionato in un contesto di dispositivo. Se l'oggetto `CPalette` è `UnrealizeObject` un oggetto, indica al sistema di realizzare la tavolozza come se non fosse stata realizzata in precedenza. La volta successiva che l'applicazione chiama la funzione [CDC::RealizePalette](../../mfc/reference/cdc-class.md#realizepalette) per la tavolozza specificata, il sistema rimappa completamente la tavolozza logica alla tavolozza di sistema.

La `UnrealizeObject` funzione non deve essere utilizzata con oggetti stock. La `UnrealizeObject` funzione deve essere chiamata ogni volta che viene impostata una nuova origine del pennello (tramite la funzione [CDC::SetBrushOrg).](../../mfc/reference/cdc-class.md#setbrushorg) La `UnrealizeObject` funzione non deve essere chiamata per il pennello attualmente selezionato o la tavolozza attualmente selezionata di qualsiasi contesto di visualizzazione.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CBitmap](../../mfc/reference/cbitmap-class.md)<br/>
[Classe CBrush](../../mfc/reference/cbrush-class.md)<br/>
[Classe CFont](../../mfc/reference/cfont-class.md)<br/>
[Classe CPalette](../../mfc/reference/cpalette-class.md)<br/>
[Classe CPen](../../mfc/reference/cpen-class.md)<br/>
[Classe CRgn](../../mfc/reference/crgn-class.md)
