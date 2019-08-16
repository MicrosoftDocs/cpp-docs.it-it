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
ms.openlocfilehash: ea82e2c667dcbd476d22ed23085d409b448b27ed
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69506261"
---
# <a name="cgdiobject-class"></a>Classe CGdiObject

Fornisce una classe di base per diversi generi di oggetti GDI (Graphics Device Interface) di Windows, quali bitmap, aree, pennelli, penne, tavolozze e tipi di carattere.

## <a name="syntax"></a>Sintassi

```
class CGdiObject : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGdiObject::CGdiObject](#cgdiobject)|Costruisce un oggetto `CGdiObject`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGdiObject::Attach](#attach)|Connette un oggetto Windows GDI a un `CGdiObject` oggetto.|
|[CGdiObject::CreateStockObject](#createstockobject)|Recupera un handle per una delle penne predefinite, dei pennelli o dei tipi di carattere predefiniti di Windows.|
|[CGdiObject::DeleteObject](#deleteobject)|Elimina dalla memoria l'oggetto GDI Windows collegato `CGdiObject` all'oggetto liberando tutte le archiviazioni di sistema associate all'oggetto.|
|[CGdiObject::DeleteTempMap](#deletetempmap)|Elimina gli oggetti `CGdiObject` temporanei creati `FromHandle`da.|
|[CGdiObject::Detach](#detach)|Scollega un oggetto Windows GDI da un `CGdiObject` oggetto e restituisce un handle all'oggetto GDI di Windows.|
|[CGdiObject::FromHandle](#fromhandle)|Restituisce un puntatore a un `CGdiObject` oggetto dato un handle a un oggetto Windows GDI.|
|[CGdiObject::GetObject](#getobject)|Riempie un buffer con dati che descrivono l'oggetto GDI Windows collegato all' `CGdiObject` oggetto.|
|[CGdiObject::GetObjectType](#getobjecttype)|Recupera il tipo dell'oggetto GDI.|
|[CGdiObject::GetSafeHandle](#getsafehandle)|Restituisce `m_hObject` , a meno che non sia null, nel qual caso viene restituito null.|
|[CGdiObject::UnrealizeObject](#unrealizeobject)|Reimposta l'origine di un pennello o reimposta una tavolozza logica.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CGdiObject:: operator! =](#operator_neq)|Determina se due oggetti GDI non sono logicamente uguali.|
|[CGdiObject:: operator = =](#operator_eq_eq)|Determina se due oggetti GDI sono logicamente uguali.|
|[CGdiObject:: operator HGDIOBJ](#operator_hgdiobj)|Recupera un HANDLE all'oggetto GDI Windows collegato.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CGdiObject::m_hObject](#m_hobject)|HANDLE contenente HBITMAP, HPALETTE, HRGN, HBRUSH, HPEN o HFONT associato a questo oggetto.|

## <a name="remarks"></a>Note

Non è mai possibile `CGdiObject` creare direttamente un oggetto. Si crea invece un oggetto da una delle relative classi derivate, ad `CPen` esempio `CBrush`o.

Per ulteriori informazioni su `CGdiObject`, vedere [oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CGdiObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="attach"></a>CGdiObject:: Connetti

Connette un oggetto Windows GDI a un `CGdiObject` oggetto.

```
BOOL Attach(HGDIOBJ hObject);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
HANDLE per un oggetto GDI Windows (ad esempio, HPEN o HBRUSH).

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'allegato ha esito positivo; in caso contrario, 0.

##  <a name="cgdiobject"></a>CGdiObject:: CGdiObject

Costruisce un oggetto `CGdiObject`.

```
CGdiObject();
```

### <a name="remarks"></a>Note

Non è mai possibile `CGdiObject` creare direttamente un oggetto. Si crea invece un oggetto da una delle relative classi derivate, ad `CPen` esempio `Cbrush`o.

##  <a name="createstockobject"></a>  CGdiObject::CreateStockObject

Recupera un handle per una delle penne, i pennelli o i tipi di carattere predefiniti di Windows GDI, quindi connette l'oggetto GDI `CGdiObject` all'oggetto.

```
BOOL CreateStockObject(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Costante che specifica il tipo di oggetto azionario desiderato. Per una descrizione dei valori appropriati, vedere il parametro *fnObject* per [GetStockObject](/windows/win32/api/wingdi/nf-wingdi-getstockobject) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Chiamare questa funzione con una delle classi derivate che corrisponde al tipo di oggetto GDI di Windows, `CPen` ad esempio per una penna di azione.

##  <a name="deleteobject"></a>CGdiObject::D eleteObject

Elimina dalla memoria l'oggetto GDI Windows collegato liberando tutte le archiviazioni di sistema associate all'oggetto GDI di Windows.

```
BOOL DeleteObject();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto GDI è stato eliminato correttamente. in caso contrario, 0.

### <a name="remarks"></a>Note

La chiamata non ha effetto `CGdiObject` sullo spazio di archiviazione associato all'oggetto. Un'applicazione non deve chiamare `DeleteObject` su un `CGdiObject` oggetto attualmente selezionato in un contesto di dispositivo.

Quando viene eliminato un pennello di pattern, la bitmap associata al pennello non viene eliminata. La bitmap deve essere eliminata in modo indipendente.

##  <a name="deletetempmap"></a>CGdiObject::D eleteTempMap

Chiamato automaticamente dal gestore `CWinApp` del tempo di inattività `DeleteTempMap` , Elimina tutti `CGdiObject` gli oggetti temporanei creati da `FromHandle`.

```
static void PASCAL DeleteTempMap();
```

### <a name="remarks"></a>Note

`DeleteTempMap`Scollega l'oggetto GDI Windows collegato a un oggetto temporaneo `CGdiObject` prima di eliminare l' `CGdiObject` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#175](../../mfc/codesnippet/cpp/cgdiobject-class_1.cpp)]

##  <a name="detach"></a>CGdiObject::D etach

Scollega un oggetto Windows GDI da un `CGdiObject` oggetto e restituisce un handle all'oggetto GDI di Windows.

```
HGDIOBJ Detach();
```

### <a name="return-value"></a>Valore restituito

Oggetto `HANDLE` per l'oggetto GDI Windows scollegato; in caso contrario, null se non è associato alcun oggetto GDI.

##  <a name="fromhandle"></a>CGdiObject:: FromHandle

Restituisce un puntatore a un `CGdiObject` oggetto dato un handle a un oggetto Windows GDI.

```
static CGdiObject* PASCAL FromHandle(HGDIOBJ hObject);
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
HANDLE per un oggetto Windows GDI.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CGdiObject` che può essere temporaneo o permanente.

### <a name="remarks"></a>Note

Se un `CGdiObject` oggetto non è già collegato all'oggetto GDI di Windows, viene creato `CGdiObject` e collegato un oggetto temporaneo.

Questo oggetto `CGdiObject` temporaneo è valido solo fino alla successiva esecuzione del tempo di inattività dell'applicazione nel ciclo di eventi, quindi vengono eliminati tutti gli oggetti grafici temporanei. Un altro modo per affermare questo problema è che l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

##  <a name="getobject"></a>CGdiObject:: GetObject

Riempie un buffer con dati che definiscono un oggetto specificato.

```
int GetObject(
    int nCount,
    LPVOID lpObject) const;
```

### <a name="parameters"></a>Parametri

*nCount*<br/>
Specifica il numero di byte da copiare nel buffer *lpObject* .

*lpObject*<br/>
Punta a un buffer fornito dall'utente per ricevere le informazioni.

### <a name="return-value"></a>Valore restituito

Numero di byte recuperati; in caso contrario, 0 se si verifica un errore.

### <a name="remarks"></a>Note

La funzione recupera una struttura di dati il cui tipo dipende dal tipo di oggetto grafico, come illustrato nell'elenco seguente:

|Object|Tipo di buffer|
|------------|-----------------|
|`CPen`|[LOGPEN](/windows/win32/api/Wingdi/ns-wingdi-logpen)|
|`CBrush`|[LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush)|
|`CFont`|[LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw)|
|`CBitmap`|[BITMAP](/windows/win32/api/wingdi/ns-wingdi-bitmap)|
|`CPalette`|WORD|
|`CRgn`|Non supportate|

Se l'oggetto è un `CBitmap` oggetto, `GetObject` restituisce solo le informazioni sulla larghezza, l'altezza e il formato dei colori della bitmap. È possibile recuperare i bit effettivi utilizzando [CBitmap:: GetBitmapBits](../../mfc/reference/cbitmap-class.md#getbitmapbits).

Se l'oggetto è un `CPalette` oggetto, `GetObject` recupera una parola che specifica il numero di voci nella tavolozza. La funzione non recupera la struttura [LOGPALETTE](/windows/win32/api/wingdi/ns-wingdi-logpalette) che definisce la tavolozza. Un'applicazione può ottenere informazioni sulle voci della tavolozza chiamando [CPalette:: GetPaletteEntries](../../mfc/reference/cpalette-class.md#getpaletteentries).

##  <a name="getobjecttype"></a>CGdiObject:: GetObjectType

Recupera il tipo dell'oggetto GDI.

```
UINT GetObjectType() const;
```

### <a name="return-value"></a>Valore restituito

Tipo dell'oggetto, se ha esito positivo; in caso contrario, 0. Il valore può essere uno dei seguenti:

- OBJ_BITMAP Bitmap

- Pennello OBJ_BRUSH

- Tipo di carattere OBJ_FONT

- Tavolozza OBJ_PAL

- Penna OBJ_PEN

- Penna estesa OBJ_EXTPEN

- Area OBJ_REGION

- Contesto di dispositivo OBJ_DC

- Contesto di dispositivo di memoria OBJ_MEMDC

- Metafile OBJ_METAFILE

- Contesto di dispositivo metafile OBJ_METADC

- OBJ_ENHMETAFILE Enhanced Metafile

- OBJ_ENHMETADC Enhanced-contesto di dispositivo metafile

##  <a name="getsafehandle"></a>CGdiObject:: GetSafeHandle

Restituisce `m_hObject` , a meno che non sia null, nel qual caso viene restituito null.

```
HGDIOBJ GetSafeHandle() const;
```

### <a name="return-value"></a>Valore restituito

HANDLE per l'oggetto GDI Windows collegato; in caso contrario, NULL se non è associato alcun oggetto.

### <a name="remarks"></a>Note

Questo è parte del paradigma dell'interfaccia dell'handle generale ed è utile quando NULL è un valore valido o speciale per un handle.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd:: IsWindowEnabled](../../mfc/reference/cwnd-class.md#iswindowenabled).

##  <a name="m_hobject"></a>  CGdiObject::m_hObject

HANDLE contenente HBITMAP, HRGN, HBRUSH, HPEN, HPALETTE o HFONT associato a questo oggetto.

```
HGDIOBJ m_hObject;
```

##  <a name="operator_neq"></a>CGdiObject:: operator! =

Determina se due oggetti GDI non sono logicamente uguali.

```
BOOL operator!=(const CGdiObject& obj) const;
```

### <a name="parameters"></a>Parametri

*obj*<br/>
Puntatore a un oggetto esistente `CGdiObject`.

### <a name="remarks"></a>Note

Determina se un oggetto GDI sul lato sinistro non è uguale a un oggetto GDI a destra.

##  <a name="operator_eq_eq"></a>CGdiObject:: operator = =

Determina se due oggetti GDI sono logicamente uguali.

```
BOOL operator==(const CGdiObject& obj) const;
```

### <a name="parameters"></a>Parametri

*obj*<br/>
Riferimento a un oggetto esistente `CGdiObject`.

### <a name="remarks"></a>Note

Determina se un oggetto GDI sul lato sinistro è uguale a un oggetto GDI a destra.

##  <a name="operator_hgdiobj"></a>CGdiObject:: operator HGDIOBJ

Recupera un HANDLE all'oggetto GDI Windows collegato; in caso contrario, NULL se non è associato alcun oggetto.

```
operator HGDIOBJ() const;
```

##  <a name="unrealizeobject"></a>CGdiObject:: UnrealizeObject

Reimposta l'origine di un pennello o reimposta una tavolozza logica.

```
BOOL UnrealizeObject();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

While `UnrealizeObject` è una funzione membro `CGdiObject` della classe, deve essere richiamata solo sugli `CBrush` oggetti o `CPalette` .

Per `CBrush` gli oggetti `UnrealizeObject` , indica al sistema di reimpostare l'origine del pennello specificato la volta successiva che viene selezionata in un contesto di dispositivo. Se l'oggetto è un `CPalette` oggetto, `UnrealizeObject` indica al sistema di realizzare la tavolozza come se non fosse stata precedentemente realizzata. Alla successiva chiamata della funzione [CDC:: RealizePalette](../../mfc/reference/cdc-class.md#realizepalette) da parte dell'applicazione per la tavolozza specificata, il sistema esegue il mapping completo della tavolozza logica alla tavolozza di sistema.

La `UnrealizeObject` funzione non deve essere usata con gli oggetti Stock. La `UnrealizeObject` funzione deve essere chiamata ogni volta che viene impostata una nuova origine del pennello (mediante la funzione [CDC:: SetBrushOrg](../../mfc/reference/cdc-class.md#setbrushorg) ). La `UnrealizeObject` funzione non deve essere chiamata per il pennello attualmente selezionato o per la tavolozza attualmente selezionata di qualsiasi contesto di visualizzazione.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CBitmap](../../mfc/reference/cbitmap-class.md)<br/>
[Classe CBrush](../../mfc/reference/cbrush-class.md)<br/>
[Classe CFont](../../mfc/reference/cfont-class.md)<br/>
[Classe CPalette](../../mfc/reference/cpalette-class.md)<br/>
[Classe CPen](../../mfc/reference/cpen-class.md)<br/>
[Classe CRgn](../../mfc/reference/crgn-class.md)
