---
title: Classe CBitmap
ms.date: 11/04/2016
f1_keywords:
- CBitmap
- AFXWIN/CBitmap
- AFXWIN/CBitmap::CBitmap
- AFXWIN/CBitmap::CreateBitmap
- AFXWIN/CBitmap::CreateBitmapIndirect
- AFXWIN/CBitmap::CreateCompatibleBitmap
- AFXWIN/CBitmap::CreateDiscardableBitmap
- AFXWIN/CBitmap::FromHandle
- AFXWIN/CBitmap::GetBitmap
- AFXWIN/CBitmap::GetBitmapBits
- AFXWIN/CBitmap::GetBitmapDimension
- AFXWIN/CBitmap::LoadBitmap
- AFXWIN/CBitmap::LoadMappedBitmap
- AFXWIN/CBitmap::LoadOEMBitmap
- AFXWIN/CBitmap::SetBitmapBits
- AFXWIN/CBitmap::SetBitmapDimension
helpviewer_keywords:
- CBitmap [MFC], CBitmap
- CBitmap [MFC], CreateBitmap
- CBitmap [MFC], CreateBitmapIndirect
- CBitmap [MFC], CreateCompatibleBitmap
- CBitmap [MFC], CreateDiscardableBitmap
- CBitmap [MFC], FromHandle
- CBitmap [MFC], GetBitmap
- CBitmap [MFC], GetBitmapBits
- CBitmap [MFC], GetBitmapDimension
- CBitmap [MFC], LoadBitmap
- CBitmap [MFC], LoadMappedBitmap
- CBitmap [MFC], LoadOEMBitmap
- CBitmap [MFC], SetBitmapBits
- CBitmap [MFC], SetBitmapDimension
ms.assetid: 3980616a-c59d-495a-86e6-62bd3889c84c
ms.openlocfilehash: 9a33a6e1bea601422e043d7f2a80029c72d97e50
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352739"
---
# <a name="cbitmap-class"></a>Classe CBitmap

Incapsula una bitmap GDI (Graphics Device Interface) di Windows e fornisce funzioni membro per la modifica della bitmap.

## <a name="syntax"></a>Sintassi

```
class CBitmap : public CGdiObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmap::CBitmap](#cbitmap)|Costruisce un oggetto `CBitmap`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmap::CreateBitmap](#createbitmap)|Inizializza l'oggetto con una bitmap di memoria dipendente dal dispositivo con una larghezza, un'altezza e un modello di bit specificati.|
|[CBitmap::CreateBitmapIndiretto](#createbitmapindirect)|Inizializza l'oggetto con una bitmap con la larghezza, l'altezza e `BITMAP` il modello di bit (se specificato) in una struttura.|
|[CBitmap::CreateCompatibleBitmap](#createcompatiblebitmap)|Inizializza l'oggetto con una bitmap in modo che sia compatibile con un dispositivo specificato.|
|[CBitmap::CreateDiscardableBitmap](#creatediscardablebitmap)|Inizializza l'oggetto con una bitmap eliminabile compatibile con un dispositivo specificato.|
|[CBitmap::FromHandle](#fromhandle)|Restituisce un `CBitmap` puntatore a un oggetto `HBITMAP` quando viene fornito un handle a una bitmap di Windows.|
|[Oggetto CBitmap::GetBitmap](#getbitmap)|Riempie `BITMAP` una struttura con informazioni sulla bitmap.|
|[Oggetto CBitmap::GetBitmapBits](#getbitmapbits)|Copia i bit della bitmap specificata nel buffer specificato.|
|[CBitmap::GetBitmapDimension](#getbitmapdimension)|Restituisce la larghezza e l'altezza della bitmap. Si presuppone che l'altezza e la larghezza siano state impostate in precedenza dalla funzione membro [SetBitmapDimension.](#setbitmapdimension)|
|[Oggetto CBitmap::LoadBitmap](#loadbitmap)|Inizializza l'oggetto caricando una risorsa bitmap denominata dal file eseguibile dell'applicazione e associando la bitmap all'oggetto.|
|[CBitmap::LoadMappedBitmap](#loadmappedbitmap)|Carica una bitmap ed esegue il mapping dei colori ai colori di sistema correnti.|
|[CBitmap::LoadOEMBitmap](#loadoembitmap)|Inizializza l'oggetto caricando una bitmap di Windows predefinita e associandola all'oggetto.|
|[CBitmap::SetBitmapBits](#setbitmapbits)|Imposta i bit di una bitmap sui valori di bit specificati.|
|[CBitmap::SetBitmapDimension](#setbitmapdimension)|Assegna una larghezza e un'altezza a una bitmap in unità da 0,1 millimetri.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmap::operatore HBITMAP](#operator_hbitmap)|Restituisce l'handle di `CBitmap` Windows associato all'oggetto.|

## <a name="remarks"></a>Osservazioni

Per utilizzare `CBitmap` un oggetto, costruire l'oggetto, associarvi un handle bitmap con una delle funzioni membro di inizializzazione e quindi chiamare le funzioni membro dell'oggetto.

Per ulteriori informazioni sull'utilizzo di oggetti grafici come `CBitmap`, vedere Oggetti [grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CBitmap`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cbitmapcbitmap"></a><a name="cbitmap"></a>CBitmap::CBitmap

Costruisce un oggetto `CBitmap`.

```
CBitmap();
```

### <a name="remarks"></a>Osservazioni

L'oggetto risultante deve essere inizializzato con una delle funzioni membro di inizializzazione.

## <a name="cbitmapcreatebitmap"></a><a name="createbitmap"></a>CBitmap::CreateBitmap

Inizializza una bitmap in memoria dipendente dal dispositivo che presenta la larghezza, l'altezza e lo schema di bit specificati.

```
BOOL CreateBitmap(
    int nWidth,
    int nHeight,
    UINT nPlanes,
    UINT nBitcount,
    const void* lpBits);
```

### <a name="parameters"></a>Parametri

*nLarghezza*<br/>
Specifica la larghezza della bitmap (in pixel).

*nAltezza*<br/>
Specifica l'altezza della bitmap (in pixel).

*nAerei*<br/>
Specifica il numero dei piani di colore nella bitmap.

*nBitcount*<br/>
Specifica il numero di bit di colore per pixel visualizzato.

*lpBit*<br/>
Punta a una matrice di byte che contiene i valori iniziali dei bit della bitmap. Se è NULL, la nuova bitmap rimane non inizializzata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per una bitmap a colori, il parametro *nPlanes* o *nBitcount* deve essere impostato su 1. Se entrambi i parametri vengono impostati su 1, `CreateBitmap` crea una bitmap monocromatica.

Sebbene non sia possibile selezionare direttamente una bitmap per un dispositivo di visualizzazione, è possibile selezionarla come bitmap corrente per un "contesto di dispositivo in memoria" usando [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) e copiarla in qualsiasi contesto di dispositivo compatibile con la funzione [CDC::BitBlt](../../mfc/reference/cdc-class.md#bitblt) .

Terminate le operazioni sull'oggetto `CBitmap` creato dalla funzione `CreateBitmap` , selezionare la bitmap dal contesto di memoria, quindi eliminare l'oggetto `CBitmap` .

Per ulteriori informazioni, vedere `bmBits` la descrizione `BITMAP` del campo nella struttura. La struttura [BITMAP](/windows/win32/api/wingdi/ns-wingdi-bitmap) è descritta nella funzione membro [CBitmap::CreateBitmapIndirect](#createbitmapindirect) .

## <a name="cbitmapcreatebitmapindirect"></a><a name="createbitmapindirect"></a>CBitmap::CreateBitmapIndiretto

Inizializza una bitmap con la larghezza, l'altezza e il modello di bit (se specificato) nella struttura a cui punta *lpBitmap*.

```
BOOL CreateBitmapIndirect(LPBITMAP lpBitmap);
```

### <a name="parameters"></a>Parametri

*lpBitmap (informazioni in base all'immagine l*<br/>
Punta a una struttura [BITMAP](/windows/win32/api/wingdi/ns-wingdi-bitmap) che contiene informazioni sulla bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Anche se una bitmap non può essere selezionata direttamente per un dispositivo di visualizzazione, può essere selezionata come bitmap corrente per un contesto di periferica di memoria utilizzando [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) e copiata in qualsiasi contesto di periferica compatibile utilizzando la funzione [CDC::BitBlt](../../mfc/reference/cdc-class.md#bitblt) o [CDC::StretchBlt](../../mfc/reference/cdc-class.md#stretchblt) . La funzione [CDC::PatBlt](../../mfc/reference/cdc-class.md#patblt) può copiare la bitmap per il pennello corrente direttamente nel contesto di periferica di visualizzazione.

Se `BITMAP` la struttura a cui fa riferimento il *lpBitmap* parametro è stato compilato utilizzando la `GetObject` funzione, i bit della bitmap non sono specificati e la bitmap non è inizializzata. Per inizializzare la bitmap, un'applicazione può utilizzare una funzione come [CDC::BitBlt](../../mfc/reference/cdc-class.md#bitblt) o [SetDIBits](/windows/win32/api/wingdi/nf-wingdi-setdibits) `CGdiObject::GetObject` per copiare `CreateBitmapIndirect`i bit dalla bitmap identificata dal primo parametro di nella bitmap creata da .

Al termine dell'oggetto `CBitmap` `CreateBitmapIndirect` creato con function, selezionare prima la bitmap `CBitmap` dal contesto di periferica, quindi eliminare l'oggetto.

## <a name="cbitmapcreatecompatiblebitmap"></a><a name="createcompatiblebitmap"></a>CBitmap::CreateCompatibleBitmap

Inizializza una bitmap compatibile con il dispositivo specificato da *pDC.*

```
BOOL CreateCompatibleBitmap(
    CDC* pDC,
    int nWidth,
    int nHeight);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Specifica il contesto di periferica.

*nLarghezza*<br/>
Specifica la larghezza della bitmap (in pixel).

*nAltezza*<br/>
Specifica l'altezza della bitmap (in pixel).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La bitmap ha lo stesso numero di piani di colore o lo stesso formato bit per pixel del contesto di periferica specificato. Può essere selezionata come bitmap corrente per qualsiasi dispositivo di memoria compatibile con quello specificato da *pDC*.

Se *pDC* è un contesto di dispositivo di memoria, la bitmap restituita ha lo stesso formato della bitmap attualmente selezionata in tale contesto di dispositivo. Un "contesto di periferica di memoria" è un blocco di memoria che rappresenta una superficie di visualizzazione. Può essere utilizzato per preparare le immagini in memoria prima di copiarle sulla superficie di visualizzazione effettiva del dispositivo compatibile.

Quando viene creato un contesto di dispositivo di memoria, GDI seleziona automaticamente una bitmap di riserva monocromatica per tale contesto.

Poiché un contesto di dispositivo della memoria a colori può avere bitmap `CreateCompatibleBitmap` a colori o monocromatiche selezionate, il formato della bitmap restituita dalla funzione non è sempre lo stesso; Tuttavia, il formato di una bitmap compatibile per un contesto di dispositivo non di memoria è sempre nel formato del dispositivo.

Al termine dell'oggetto `CBitmap` creato `CreateCompatibleBitmap` con la funzione, selezionare prima la `CBitmap` bitmap dal contesto di periferica, quindi eliminare l'oggetto.

## <a name="cbitmapcreatediscardablebitmap"></a><a name="creatediscardablebitmap"></a>CBitmap::CreateDiscardableBitmap

Inizializza una bitmap eliminabile compatibile con il contesto di periferica identificato da *pDC.*

```
BOOL CreateDiscardableBitmap(
    CDC* pDC,
    int nWidth,
    int nHeight);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Specifica un contesto di periferica.

*nLarghezza*<br/>
Specifica la larghezza (in bit) della bitmap.

*nAltezza*<br/>
Specifica l'altezza (in bit) della bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La bitmap ha lo stesso numero di piani di colore o lo stesso formato bit per pixel del contesto di periferica specificato. Un'applicazione può selezionare questa bitmap come bitmap corrente per un dispositivo di memoria compatibile con quello specificato da *pDC*.

Windows può eliminare una bitmap creata da questa funzione solo se un'applicazione non l'ha selezionata in un contesto di visualizzazione. Se Windows elimina la bitmap quando non è selezionata e l'applicazione tenta successivamente di selezionarla, la funzione [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) restituirà NULL.

Al termine dell'oggetto `CBitmap` creato `CreateDiscardableBitmap` con la funzione, selezionare prima la `CBitmap` bitmap dal contesto di periferica, quindi eliminare l'oggetto.

## <a name="cbitmapfromhandle"></a><a name="fromhandle"></a>CBitmap::FromHandle

Restituisce un `CBitmap` puntatore a un oggetto quando viene fornito un handle per una bitmap GDI di Windows.

```
static CBitmap* PASCAL FromHandle(HBITMAP hBitmap);
```

### <a name="parameters"></a>Parametri

*Hbitmap*<br/>
Specifica una bitmap GDI di Windows.

### <a name="return-value"></a>Valore restituito

Un puntatore `CBitmap` a un oggetto se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se `CBitmap` un oggetto non è già associato `CBitmap` alla maniglia, viene creato e associato un oggetto temporaneo. Questo `CBitmap` oggetto temporaneo è valido solo fino alla successiva inattività dell'applicazione nel ciclo di eventi, in cui vengono eliminati tutti gli oggetti grafici temporanei. Un altro modo per dire questo è che l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

## <a name="cbitmapgetbitmap"></a><a name="getbitmap"></a>Oggetto CBitmap::GetBitmap

Recupera le proprietà dell'immagine per la bitmap associata.

```
int GetBitmap(BITMAP* pBitMap);
```

### <a name="parameters"></a>Parametri

*PBitMappa*<br/>
Puntatore a una struttura [BITMAP](/windows/win32/api/wingdi/ns-wingdi-bitmap) che riceverà le proprietà dell'immagine. Questo parametro non deve essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

## <a name="cbitmapgetbitmapbits"></a><a name="getbitmapbits"></a>Oggetto CBitmap::GetBitmapBits

Copia il modello di bit della bitmap associata nel buffer specificato.

```
DWORD GetBitmapBits(
    DWORD dwCount,
    LPVOID lpBits) const;
```

### <a name="parameters"></a>Parametri

*dwCount (conta informazioni su dwCount)*<br/>
Numero di byte da copiare nel buffer.

*lpBit*<br/>
Puntatore al buffer che riceverà la bitmap.

### <a name="return-value"></a>Valore restituito

Numero di byte copiati nel buffer se il metodo ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare [CBitmap::GetBitmap](#getbitmap) per determinare la dimensione del buffer necessaria.

## <a name="cbitmapgetbitmapdimension"></a><a name="getbitmapdimension"></a>CBitmap::GetBitmapDimension

Restituisce la larghezza e l'altezza della bitmap.

```
CSize GetBitmapDimension() const;
```

### <a name="return-value"></a>Valore restituito

La larghezza e l'altezza della bitmap, misurate in unità di 0,1 millimetri. L'altezza `cy` è nel `CSize` membro dell'oggetto e `cx` la larghezza è nel membro. Se la larghezza e l'altezza `SetBitmapDimension`della bitmap non sono state impostate utilizzando , il valore restituito è 0.

### <a name="remarks"></a>Osservazioni

Si presuppone che l'altezza e la larghezza siano state impostate in precedenza utilizzando la funzione membro [SetBitmapDimension](#setbitmapdimension) .

## <a name="cbitmaploadbitmap"></a><a name="loadbitmap"></a>Oggetto CBitmap::LoadBitmap

Carica la risorsa bitmap denominata da *lpszResourceName* o identificata dal numero ID in *nIDResource* dal file eseguibile dell'applicazione.

```
BOOL LoadBitmap(LPCTSTR lpszResourceName);
BOOL LoadBitmap(UINT nIDResource);
```

### <a name="parameters"></a>Parametri

*LpszResourceName (nome della risorsa)*<br/>
Punta a una stringa con terminazione null che contiene il nome della risorsa bitmap.

*nIDResource*<br/>
Specifica il numero ID della risorsa bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La bitmap caricata viene `CBitmap` associata all'oggetto.

Se la bitmap identificata da *lpszResourceName* non esiste o se la memoria non è sufficiente per caricare la bitmap, la funzione restituisce 0.

È possibile utilizzare la funzione [CGdiObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) `LoadBitmap` per eliminare `CBitmap` la bitmap caricata dalla funzione, altrimenti il distruttore eliminerà automaticamente l'oggetto.

> [!CAUTION]
> Prima di eliminare l'oggetto, assicurarsi che non sia selezionato in un contesto di dispositivo.

Le seguenti bitmap sono state aggiunte a Windows versioni 3.1 e successive:

OBM_UPARRROWIOBM_DNARROWIOBM_RGARROWIOBM_LFARROWI

Queste bitmap non vengono trovate nei driver di dispositivo per Windows versioni 3.0 e precedenti. Per un elenco completo delle bitmap e una visualizzazione del relativo aspetto, vedere Windows SDK.

## <a name="cbitmaploadmappedbitmap"></a><a name="loadmappedbitmap"></a>CBitmap::LoadMappedBitmap

Chiamare questa funzione membro per caricare una bitmap ed eseguire il mapping dei colori ai colori di sistema correnti.

```
BOOL LoadMappedBitmap(
    UINT nIDBitmap,
    UINT nFlags = 0,
    LPCOLORMAP lpColorMap = NULL,
    int nMapSize = 0);
```

### <a name="parameters"></a>Parametri

*nIDBitmap (informazioni in stato inquestoss*<br/>
ID della risorsa bitmap.

*Nflags*<br/>
Flag per una bitmap. Può essere zero o CMB_MASKED.

*LpColorMap (mappa di colore)*<br/>
Puntatore a `COLORMAP` una struttura che contiene le informazioni sui colori necessarie per eseguire il mapping delle bitmap. Se questo parametro è NULL, la funzione utilizza la mappa dei colori predefinita.

*nMapSize (informazioni in base alla proprietà)*<br/>
Numero di mappe colore a cui punta *lpColorMap*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `LoadMappedBitmap` verrà mappato i colori comunemente utilizzati nei glifi dei pulsanti.

Per informazioni sulla creazione di una bitmap mappata, vedere la funzione Windows [CreateMappedBitmap](https://go.microsoft.com/fwlink/p/?linkid=230562) e la struttura [COLORMAP](/windows/win32/api/commctrl/ns-commctrl-colormap) in Windows SDK.

## <a name="cbitmaploadoembitmap"></a><a name="loadoembitmap"></a>CBitmap::LoadOEMBitmap

Carica una bitmap predefinita utilizzata da Windows.

```
BOOL LoadOEMBitmap(UINT nIDBitmap);
```

### <a name="parameters"></a>Parametri

*nIDBitmap (informazioni in stato inquestoss*<br/>
Numero ID della bitmap di Windows predefinita. I valori possibili sono elencati di seguito da WINDOWS. H:

|||
|-|-|
|OBM_BTNCORNERS|OBM_OLD_RESTORE|
|OBM_BTSIZE|OBM_OLD_RGARROW|
|OBM_CHECK|OBM_OLD_UPARROW|
|OBM_CHECKBOXES|OBM_OLD_ZOOM|
|OBM_CLOSE|OBM_REDUCE|
|OBM_COMBO|OBM_REDUCED|
|OBM_DNARROW|OBM_RESTORE|
|OBM_DNARROWD|OBM_RESTORED|
|OBM_DNARROWI|OBM_RGARROW|
|OBM_LFARROW|OBM_RGARROWD|
|OBM_LFARROWD|OBM_RGARROWI|
|OBM_LFARROWI|OBM_SIZE|
|OBM_MNARROW|OBM_UPARROW|
|OBM_OLD_CLOSE|OBM_UPARROWD|
|OBM_OLD_DNARROW|OBM_UPARROW|
|OBM_OLD_LFARROW|OBM_ZOOM|
|OBM_OLD_REDUCE|OBM_ZOOMD|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

I nomi bitmap che iniziano con OBM_OLD rappresentano le bitmap utilizzate dalle versioni di Windows precedenti alla 3.0.

Si noti che la costante OEMRESOURCE deve essere definita prima di includere WINDOWS. H per utilizzare una qualsiasi delle costanti **OBM_.**

## <a name="cbitmapoperator-hbitmap"></a><a name="operator_hbitmap"></a>CBitmap::operatore HBITMAP

Utilizzare questo operatore per ottenere l'handle `CBitmap` GDI di Windows associato dell'oggetto.

```
operator HBITMAP() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un `CBitmap` handle per l'oggetto GDI di Windows rappresentato dall'oggetto; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo operatore è un operatore di `HBITMAP` cast, che supporta l'utilizzo diretto di un oggetto.

Per altre informazioni sull'uso di oggetti grafici, vedere [Oggetti grafici](/windows/win32/gdi/graphic-objects) in Windows SDK.

## <a name="cbitmapsetbitmapbits"></a><a name="setbitmapbits"></a>CBitmap::SetBitmapBits

Imposta i bit di una bitmap sui valori di bit specificati da *lpBits*.

```
DWORD SetBitmapBits(
    DWORD dwCount,
    const void* lpBits);
```

### <a name="parameters"></a>Parametri

*dwCount (conta informazioni su dwCount)*<br/>
Specifica il numero di byte a cui punta *lpBits*.

*lpBit*<br/>
Punta alla matrice BYTE che contiene i valori `CBitmap` in pixel da copiare nell'oggetto. Affinché la bitmap sia in grado di eseguire correttamente il rendering dell'immagine, i valori devono essere formattati in modo da essere conformi ai valori di altezza, larghezza e profondità del colore specificati al momento della creazione dell'istanza CBitmap. Per ulteriori informazioni, vedere [CBitmap::CreateBitmap](#createbitmap).

### <a name="return-value"></a>Valore restituito

Numero di byte utilizzati nell'impostazione dei bit bitmap; 0 se la funzione ha esito negativo.

## <a name="cbitmapsetbitmapdimension"></a><a name="setbitmapdimension"></a>CBitmap::SetBitmapDimension

Assegna una larghezza e un'altezza a una bitmap in unità da 0,1 millimetri.

```
CSize SetBitmapDimension(
    int nWidth,
    int nHeight);
```

### <a name="parameters"></a>Parametri

*nLarghezza*<br/>
Specifica la larghezza della bitmap (in unità da 0,1 millimetri).

*nAltezza*<br/>
Specifica l'altezza della bitmap (in unità da 0,1 millimetri).

### <a name="return-value"></a>Valore restituito

Dimensioni bitmap precedenti. Height si `cy` trova nella `CSize` variabile membro dell'oggetto `cx` e width nella variabile membro.

### <a name="remarks"></a>Osservazioni

Il GDI non utilizza questi valori se non per restituirli quando un'applicazione chiama il [GetBitmapDimension](#getbitmapdimension) funzione membro.

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
