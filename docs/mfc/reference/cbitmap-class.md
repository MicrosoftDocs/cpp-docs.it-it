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
ms.openlocfilehash: 3cd194d0b6303c6d337d7157a521c825f77fc312
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916228"
---
# <a name="cbitmap-class"></a>Classe CBitmap

Incapsula una bitmap GDI (Graphics Device Interface) di Windows e fornisce funzioni membro per la modifica della bitmap.

## <a name="syntax"></a>Sintassi

```
class CBitmap : public CGdiObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmap::CBitmap](#cbitmap)|Costruisce un oggetto `CBitmap`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmap::CreateBitmap](#createbitmap)|Inizializza l'oggetto con una bitmap di memoria dipendente dal dispositivo con una larghezza, un'altezza e uno schema di bit specificati.|
|[CBitmap::CreateBitmapIndirect](#createbitmapindirect)|Inizializza l'oggetto con una bitmap con la larghezza, l'altezza e lo schema di bit (se ne viene specificato uno) `BITMAP` specificati in una struttura.|
|[CBitmap::CreateCompatibleBitmap](#createcompatiblebitmap)|Inizializza l'oggetto con una bitmap in modo che sia compatibile con un dispositivo specificato.|
|[CBitmap::CreateDiscardableBitmap](#creatediscardablebitmap)|Inizializza l'oggetto con una bitmap eliminabile compatibile con un dispositivo specificato.|
|[CBitmap::FromHandle](#fromhandle)|Restituisce un puntatore a un `CBitmap` oggetto quando viene fornito un handle a una `HBITMAP` bitmap di Windows.|
|[CBitmap::GetBitmap](#getbitmap)|Compila una `BITMAP` struttura con le informazioni sulla bitmap.|
|[CBitmap::GetBitmapBits](#getbitmapbits)|Copia i bit della bitmap specificata nel buffer specificato.|
|[CBitmap::GetBitmapDimension](#getbitmapdimension)|Restituisce la larghezza e l'altezza della bitmap. Si presuppone che l'altezza e la larghezza siano state impostate in precedenza dalla funzione membro [SetBitmapDimension](#setbitmapdimension) .|
|[CBitmap::LoadBitmap](#loadbitmap)|Inizializza l'oggetto caricando una risorsa bitmap denominata dal file eseguibile dell'applicazione e connettendo la bitmap all'oggetto.|
|[CBitmap::LoadMappedBitmap](#loadmappedbitmap)|Carica una bitmap ed esegue il mapping di colori ai colori di sistema correnti.|
|[CBitmap::LoadOEMBitmap](#loadoembitmap)|Inizializza l'oggetto caricando una bitmap di Windows predefinita e connettendo la bitmap all'oggetto.|
|[CBitmap::SetBitmapBits](#setbitmapbits)|Imposta i bit di una bitmap sui valori di bit specificati.|
|[CBitmap::SetBitmapDimension](#setbitmapdimension)|Assegna una larghezza e un'altezza a una bitmap in unità da 0,1 millimetri.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmap:: operator HBITMAP](#operator_hbitmap)|Restituisce l'handle di Windows collegato all' `CBitmap` oggetto.|

## <a name="remarks"></a>Note

Per usare un `CBitmap` oggetto, costruire l'oggetto, associarvi un handle bitmap con una delle funzioni membro di inizializzazione, quindi chiamare le funzioni membro dell'oggetto.

Per ulteriori informazioni sull'utilizzo di oggetti grafici `CBitmap`come, vedere [oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CBitmap`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cbitmap"></a>CBitmap:: CBitmap

Costruisce un oggetto `CBitmap`.

```
CBitmap();
```

### <a name="remarks"></a>Note

L'oggetto risultante deve essere inizializzato con una delle funzioni membro di inizializzazione.

##  <a name="createbitmap"></a>  CBitmap::CreateBitmap

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

*nWidth*<br/>
Specifica la larghezza della bitmap (in pixel).

*nHeight*<br/>
Specifica l'altezza della bitmap (in pixel).

*nPlanes*<br/>
Specifica il numero dei piani di colore nella bitmap.

*nBitcount*<br/>
Specifica il numero di bit di colore per pixel visualizzato.

*lpBits*<br/>
Punta a una matrice di byte che contiene i valori iniziali dei bit della bitmap. Se è NULL, la nuova bitmap rimane non inizializzata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Per una bitmap a colori, il parametro *nPlanes* o *nBitcount* deve essere impostato su 1. Se entrambi i parametri vengono impostati su 1, `CreateBitmap` crea una bitmap monocromatica.

Sebbene non sia possibile selezionare direttamente una bitmap per un dispositivo di visualizzazione, è possibile selezionarla come bitmap corrente per un "contesto di dispositivo in memoria" usando [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) e copiarla in qualsiasi contesto di dispositivo compatibile con la funzione [CDC::BitBlt](../../mfc/reference/cdc-class.md#bitblt) .

Terminate le operazioni sull'oggetto `CBitmap` creato dalla funzione `CreateBitmap` , selezionare la bitmap dal contesto di memoria, quindi eliminare l'oggetto `CBitmap` .

Per ulteriori informazioni, vedere la descrizione del `bmBits` campo `BITMAP` nella struttura. La struttura [BITMAP](/windows/desktop/api/wingdi/ns-wingdi-tagbitmap) è descritta nella funzione membro [CBitmap::CreateBitmapIndirect](#createbitmapindirect) .

##  <a name="createbitmapindirect"></a>CBitmap:: CreateBitmapIndirect

Inizializza una bitmap con la larghezza, l'altezza e lo schema di bit (se ne è stato specificato uno) nella struttura a cui punta *lpBitmap*.

```
BOOL CreateBitmapIndirect(LPBITMAP lpBitmap);
```

### <a name="parameters"></a>Parametri

*lpBitmap*<br/>
Punta a una struttura [bitmap](/windows/desktop/api/wingdi/ns-wingdi-tagbitmap) che contiene informazioni sulla bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Sebbene non sia possibile selezionare direttamente una bitmap per un dispositivo di visualizzazione, è possibile selezionarla come bitmap corrente per un contesto di dispositivo di memoria utilizzando [CDC:: SelezionaOggetto](../../mfc/reference/cdc-class.md#selectobject) e copiata in qualsiasi contesto di dispositivo compatibile utilizzando [CDC:: BitBlt](../../mfc/reference/cdc-class.md#bitblt) o [CDC:: Funzione StretchBlt](../../mfc/reference/cdc-class.md#stretchblt) . La funzione [CDC::P atblt](../../mfc/reference/cdc-class.md#patblt) può copiare la bitmap per il pennello corrente direttamente nel contesto del dispositivo di visualizzazione.

Se la `BITMAP` struttura a cui punta il parametro *lpBitmap* è stata compilata usando la `GetObject` funzione, i bit della bitmap non vengono specificati e la bitmap non è inizializzata. Per inizializzare la bitmap, un'applicazione può utilizzare una funzione come [CDC:: BitBlt](../../mfc/reference/cdc-class.md#bitblt) o [SetDIBits](/windows/desktop/api/wingdi/nf-wingdi-setdibits) per copiare i bit dalla bitmap identificata dal primo parametro di `CGdiObject::GetObject` alla bitmap creata da. `CreateBitmapIndirect`

Al termine dell'oggetto creato `CBitmap` con `CreateBitmapIndirect` la funzione, selezionare prima di tutto la bitmap dal contesto di dispositivo, quindi eliminare l' `CBitmap` oggetto.

##  <a name="createcompatiblebitmap"></a>  CBitmap::CreateCompatibleBitmap

Inizializza una bitmap compatibile con il dispositivo specificato da *PDC*.

```
BOOL CreateCompatibleBitmap(
    CDC* pDC,
    int nWidth,
    int nHeight);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Specifica il contesto di dispositivo.

*nWidth*<br/>
Specifica la larghezza della bitmap (in pixel).

*nHeight*<br/>
Specifica l'altezza della bitmap (in pixel).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La bitmap ha lo stesso numero di piani di colore o lo stesso formato bits per pixel del contesto di dispositivo specificato. Può essere selezionato come bitmap corrente per qualsiasi dispositivo di memoria compatibile con quello specificato da *PDC*.

Se *PDC* è un contesto di dispositivo di memoria, la bitmap restituita ha lo stesso formato della bitmap attualmente selezionata in quel contesto di dispositivo. Un "contesto di dispositivo di memoria" è un blocco di memoria che rappresenta una superficie di visualizzazione. Può essere usato per preparare le immagini in memoria prima di copiarle nell'area di visualizzazione effettiva del dispositivo compatibile.

Quando viene creato un contesto di dispositivo di memoria, GDI seleziona automaticamente una bitmap di magazzino monocromatico.

Poiché per un contesto di dispositivo di memoria colore possono essere selezionate bitmap colorate o monocromatiche, il formato della bitmap restituita `CreateCompatibleBitmap` dalla funzione non è sempre lo stesso; tuttavia, il formato di una bitmap compatibile per un contesto di dispositivo non memoria è sempre nel formato del dispositivo.

Al termine dell' `CBitmap` oggetto creato con la `CreateCompatibleBitmap` funzione, selezionare prima di tutto la bitmap dal contesto di dispositivo, quindi eliminare l' `CBitmap` oggetto.

##  <a name="creatediscardablebitmap"></a>  CBitmap::CreateDiscardableBitmap

Inizializza una bitmap che è compatibile con il contesto di dispositivo identificato da *PDC*.

```
BOOL CreateDiscardableBitmap(
    CDC* pDC,
    int nWidth,
    int nHeight);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Specifica un contesto di dispositivo.

*nWidth*<br/>
Specifica la larghezza in bit della bitmap.

*nHeight*<br/>
Specifica l'altezza in bit della bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La bitmap ha lo stesso numero di piani di colore o lo stesso formato bits per pixel del contesto di dispositivo specificato. Un'applicazione può selezionare questa bitmap come bitmap corrente per un dispositivo di memoria compatibile con quello specificato da *PDC*.

Windows può rimuovere una bitmap creata da questa funzione solo se non è stata selezionata da un'applicazione in un contesto di visualizzazione. Se Windows ignora la bitmap quando non è selezionata e l'applicazione tenta successivamente di selezionarla, la funzione [CDC:: SelezionaOggetto](../../mfc/reference/cdc-class.md#selectobject) restituirà null.

Al termine dell' `CBitmap` oggetto creato con la `CreateDiscardableBitmap` funzione, selezionare prima di tutto la bitmap dal contesto di dispositivo, quindi eliminare l' `CBitmap` oggetto.

##  <a name="fromhandle"></a>CBitmap:: FromHandle

Restituisce un puntatore a un `CBitmap` oggetto quando viene fornito un handle a una bitmap GDI di Windows.

```
static CBitmap* PASCAL FromHandle(HBITMAP hBitmap);
```

### <a name="parameters"></a>Parametri

*hBitmap*<br/>
Specifica una bitmap GDI di Windows.

### <a name="return-value"></a>Valore restituito

Puntatore a un `CBitmap` oggetto in caso di esito positivo; in caso contrario null.

### <a name="remarks"></a>Note

Se un `CBitmap` oggetto non è già collegato all'handle, viene creato e `CBitmap` collegato un oggetto temporaneo. Questo oggetto `CBitmap` temporaneo è valido solo fino alla successiva esecuzione del tempo di inattività dell'applicazione nel ciclo di eventi, quindi vengono eliminati tutti gli oggetti grafici temporanei. Un altro modo per affermare questo problema è che l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

##  <a name="getbitmap"></a>  CBitmap::GetBitmap

Recupera le proprietà dell'immagine per la bitmap collegata.

```
int GetBitmap(BITMAP* pBitMap);
```

### <a name="parameters"></a>Parametri

*pBitMap*<br/>
Puntatore a una struttura [bitmap](/windows/desktop/api/wingdi/ns-wingdi-tagbitmap) che riceverà le proprietà dell'immagine. Questo parametro non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

##  <a name="getbitmapbits"></a>CBitmap:: GetBitmapBits

Copia il modello di bit della bitmap collegata nel buffer specificato.

```
DWORD GetBitmapBits(
    DWORD dwCount,
    LPVOID lpBits) const;
```

### <a name="parameters"></a>Parametri

*dwCount*<br/>
Numero di byte da copiare nel buffer.

*lpBits*<br/>
Puntatore al buffer che riceverà la bitmap.

### <a name="return-value"></a>Valore restituito

Numero di byte copiati nel buffer se il metodo ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Usare [CBitmap:: GetBitmap](#getbitmap) per determinare le dimensioni del buffer richieste.

##  <a name="getbitmapdimension"></a>CBitmap:: GetBitmapDimension

Restituisce la larghezza e l'altezza della bitmap.

```
CSize GetBitmapDimension() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza e altezza della bitmap, misurata in unità di 0,1 millimetri. L'altezza si trova nel `cy` membro `CSize` dell'oggetto e `cx` la larghezza si trova nel membro. Se la larghezza e l'altezza della bitmap non sono state impostate `SetBitmapDimension`utilizzando, il valore restituito è 0.

### <a name="remarks"></a>Note

Si presuppone che l'altezza e la larghezza siano state impostate in precedenza utilizzando la funzione membro [SetBitmapDimension](#setbitmapdimension) .

##  <a name="loadbitmap"></a>CBitmap:: LoadBitmap

Carica la risorsa bitmap denominata da *lpszResourceName* o identificata dal numero ID in *nIDResource* dal file eseguibile dell'applicazione.

```
BOOL LoadBitmap(LPCTSTR lpszResourceName);
BOOL LoadBitmap(UINT nIDResource);
```

### <a name="parameters"></a>Parametri

*lpszResourceName*<br/>
Punta a una stringa con terminazione null che contiene il nome della risorsa bitmap.

*nIDResource*<br/>
Specifica il numero ID della risorsa bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La bitmap caricata è associata all' `CBitmap` oggetto.

Se la bitmap identificata da *lpszResourceName* non esiste o se la memoria disponibile non è sufficiente per caricare la bitmap, la funzione restituisce 0.

È possibile usare la funzione [CGdiObject::D eleteobject](../../mfc/reference/cgdiobject-class.md#deleteobject) per eliminare la bitmap caricata `LoadBitmap` dalla funzione oppure il `CBitmap` distruttore eliminerà l'oggetto.

> [!CAUTION]
>  Prima di eliminare l'oggetto, assicurarsi che non sia selezionato in un contesto di dispositivo.

Le bitmap seguenti sono state aggiunte alle versioni di Windows 3,1 e successive:

OBM_UPARRROWIOBM_DNARROWIOBM_RGARROWIOBM_LFARROWI

Queste bitmap non sono disponibili nei driver di dispositivo per le versioni di Windows 3,0 e precedenti. Per un elenco completo delle bitmap e una visualizzazione del relativo aspetto, vedere la Windows SDK.

##  <a name="loadmappedbitmap"></a>CBitmap:: LoadMappedBitmap

Chiamare questa funzione membro per caricare una bitmap ed eseguire il mapping dei colori ai colori di sistema correnti.

```
BOOL LoadMappedBitmap(
    UINT nIDBitmap,
    UINT nFlags = 0,
    LPCOLORMAP lpColorMap = NULL,
    int nMapSize = 0);
```

### <a name="parameters"></a>Parametri

*nIDBitmap*<br/>
ID della risorsa bitmap.

*nFlags*<br/>
Flag per una bitmap. Può essere zero o CMB_MASKED.

*lpColorMap*<br/>
Puntatore a una `COLORMAP` struttura che contiene le informazioni sul colore necessarie per eseguire il mapping delle bitmap. Se questo parametro è NULL, la funzione utilizzerà la mappa dei colori predefinita.

*nMapSize*<br/>
Numero di mappe a colori a cui punta *lpColorMap*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Per impostazione predefinita `LoadMappedBitmap` , eseguirà il mapping dei colori usati comunemente nei glifi dei pulsanti.

Per informazioni sulla creazione di una mappa di bit mappata, vedere la funzione di Windows [CreateMappedBitmap](https://go.microsoft.com/fwlink/p/?linkid=230562) e la struttura [mappatura](/windows/desktop/api/commctrl/ns-commctrl-colormap) nella Windows SDK.

##  <a name="loadoembitmap"></a>  CBitmap::LoadOEMBitmap

Carica una bitmap predefinita utilizzata da Windows.

```
BOOL LoadOEMBitmap(UINT nIDBitmap);
```

### <a name="parameters"></a>Parametri

*nIDBitmap*<br/>
ID del bitmap di Windows predefinito. I valori possibili sono elencati di seguito da WINDOWS. H

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

### <a name="remarks"></a>Note

I nomi di bitmap che iniziano con OBM_OLD rappresentano le bitmap usate dalle versioni di Windows precedenti alla 3,0.

Si noti che la costante OEMRESOURCE deve essere definita prima dell'inclusione di WINDOWS. H per usare qualsiasi costante **OBM_** .

##  <a name="operator_hbitmap"></a>CBitmap:: operator HBITMAP

Utilizzare questo operatore per ottenere l'handle di Windows GDI associato dell' `CBitmap` oggetto.

```
operator HBITMAP() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un handle per l'oggetto GDI Windows `CBitmap` rappresentato dall'oggetto; in caso contrario, null.

### <a name="remarks"></a>Note

Questo operatore è un operatore di cast che supporta l'uso diretto di `HBITMAP` un oggetto.

Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere [oggetti grafici](/windows/desktop/gdi/graphic-objects) nell'Windows SDK.

##  <a name="setbitmapbits"></a>  CBitmap::SetBitmapBits

Imposta i bit di una bitmap sui valori di bit forniti da *lpBits*.

```
DWORD SetBitmapBits(
    DWORD dwCount,
    const void* lpBits);
```

### <a name="parameters"></a>Parametri

*dwCount*<br/>
Specifica il numero di byte a cui punta *lpBits*.

*lpBits*<br/>
Punta alla matrice di byte che contiene i valori dei pixel da copiare `CBitmap` nell'oggetto. Affinché la bitmap sia in grado di eseguire correttamente il rendering dell'immagine, i valori devono essere formattati in modo da essere conformi ai valori di altezza, larghezza e profondità del colore specificati al momento della creazione dell'istanza di CBitmap. Per ulteriori informazioni, vedere [CBitmap:: CreateBitmap](#createbitmap).

### <a name="return-value"></a>Valore restituito

Numero di byte utilizzati per l'impostazione dei bit bitmap; 0 se la funzione ha esito negativo.

##  <a name="setbitmapdimension"></a>CBitmap:: SetBitmapDimension

Assegna una larghezza e un'altezza a una bitmap in unità da 0,1 millimetri.

```
CSize SetBitmapDimension(
    int nWidth,
    int nHeight);
```

### <a name="parameters"></a>Parametri

*nWidth*<br/>
Specifica la larghezza della bitmap (in unità 0,1 millimetri).

*nHeight*<br/>
Specifica l'altezza della bitmap (in unità 0,1 millimetri).

### <a name="return-value"></a>Valore restituito

Dimensioni bitmap precedenti. L'altezza si trova `cy` nella variabile membro `CSize` dell'oggetto e la `cx` larghezza si trova nella variabile membro.

### <a name="remarks"></a>Note

GDI non utilizza questi valori eccetto per restituirli quando un'applicazione chiama la funzione membro [GetBitmapDimension](#getbitmapdimension) .

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
