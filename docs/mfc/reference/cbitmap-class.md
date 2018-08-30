---
title: Classe CBitmap | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4a0c6b9a9f01746788a01b6528a7508db141089e
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43195852"
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
|[CBitmap::CreateBitmap](#createbitmap)|Inizializza l'oggetto con una bitmap in memoria dipendente dalla periferica che ha un larghezza specificata, altezza e schema di bit.|  
|[CBitmap:: Createbitmapindirect](#createbitmapindirect)|Inizializza l'oggetto con una bitmap con la larghezza, altezza e schema di bit (se ne è specificata una) fornito un `BITMAP` struttura.|  
|[CBitmap::CreateCompatibleBitmap](#createcompatiblebitmap)|Inizializza l'oggetto con una mappa di bit in modo che risulti compatibile con un dispositivo specifico.|  
|[CBitmap::CreateDiscardableBitmap](#creatediscardablebitmap)|Inizializza l'oggetto con una bitmap annullabile che è compatibile con un dispositivo specifico.|  
|[CBitmap::FromHandle](#fromhandle)|Restituisce un puntatore a un `CBitmap` dell'oggetto se viene fornito un handle a un Windows `HBITMAP` bitmap.|  
|[CBitmap::GetBitmap](#getbitmap)|Riempie un `BITMAP` struttura con le informazioni della bitmap.|  
|[CBitmap::GetBitmapBits](#getbitmapbits)|Copia i bit della bitmap specificata nel buffer specificato.|  
|[CBitmap::GetBitmapDimension](#getbitmapdimension)|Restituisce la larghezza e altezza della bitmap. L'altezza e larghezza si presuppone che sia stato impostato in precedenza dal [SetBitmapDimension](#setbitmapdimension) funzione membro.|  
|[LoadBitmap](#loadbitmap)|Inizializza l'oggetto per il caricamento di una risorsa della bitmap denominata dal file eseguibile dell'applicazione e il collegamento della bitmap all'oggetto.|  
|[CBitmap::LoadMappedBitmap](#loadmappedbitmap)|Carica una bitmap e viene eseguito il mapping dei colori con i colori di sistema corrente.|  
|[CBitmap::LoadOEMBitmap](#loadoembitmap)|Inizializza l'oggetto caricamento di una bitmap di Windows predefinita e collegando la bitmap all'oggetto.|  
|[CBitmap::SetBitmapBits](#setbitmapbits)|Imposta i bit di una bitmap per i valori di bit specificato.|  
|[CBitmap::SetBitmapDimension](#setbitmapdimension)|Assegna una larghezza e altezza per una bitmap in unità di 0,1 millimetro.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmap::operator HBITMAP](#operator_hbitmap)|Restituisce l'handle di Windows associato ai `CBitmap` oggetto.|  
  
## <a name="remarks"></a>Note  
 Usare un `CBitmap` dell'oggetto, costruire l'oggetto, collegare un handle di bitmap con una delle funzioni membro di inizializzazione e quindi chiamare le funzioni membro dell'oggetto.  
  
 Per altre informazioni sull'uso di oggetti grafici, ad esempio `CBitmap`, vedere [gli oggetti di grafica](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CBitmap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cbitmap"></a>  CBitmap::CBitmap  
 Costruisce un oggetto `CBitmap`.  
  
```  
CBitmap();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto risultante deve essere inizializzata con una delle funzioni membro di inizializzazione.  
  
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
 *nWidth*  
 Specifica la larghezza della bitmap (in pixel).  
  
 *nHeight*  
 Specifica l'altezza della bitmap (in pixel).  
  
 *nPlanes*  
 Specifica il numero dei piani di colore nella bitmap.  
  
 *nBitcount*  
 Specifica il numero di bit di colore per pixel visualizzato.  
  
 *lpBits*  
 Punta a una matrice di byte che contiene i valori iniziali dei bit della bitmap. Se è NULL, la nuova bitmap rimane non inizializzata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per una bitmap a colori, entrambi i *nPlanes* oppure *nBitcount* parametro deve essere impostato su 1. Se entrambi i parametri vengono impostati su 1, `CreateBitmap` crea una bitmap monocromatica.  
  
 Anche se non è possibile selezionare direttamente una bitmap per un dispositivo di visualizzazione, è possibile selezionarla come bitmap corrente per un "contesto di dispositivo memoria" usando [CDC:: SelectObject](../../mfc/reference/cdc-class.md#selectobject) e copiarla in qualsiasi contesto di dispositivo compatibili con la [CDC:: BitBlt](../../mfc/reference/cdc-class.md#bitblt) (funzione).  
  
 Terminate le operazioni sull'oggetto `CBitmap` creato dalla funzione `CreateBitmap` , selezionare la bitmap dal contesto di memoria, quindi eliminare l'oggetto `CBitmap` .  
  
 Per altre informazioni, vedere la descrizione del `bmBits` campo il `BITMAP` struttura. Il [BITMAP](../../mfc/reference/bitmap-structure.md) struttura descritto sotto il [CBitmap:: Createbitmapindirect](#createbitmapindirect) funzione membro.  
  
##  <a name="createbitmapindirect"></a>  CBitmap:: Createbitmapindirect  
 Inizializza una bitmap con la larghezza, altezza e schema di bit (se ne è specificata una) specificato nella struttura a cui punta *lpBitmap*.  
  
```  
BOOL CreateBitmapIndirect(LPBITMAP lpBitmap);
```  
  
### <a name="parameters"></a>Parametri  
 *lpBitmap*  
 Punta a un [BITMAP](../../mfc/reference/bitmap-structure.md) struttura che contiene informazioni sulle bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Anche se non è possibile selezionare direttamente una bitmap per un dispositivo di visualizzazione, è possibile selezionarla come bitmap corrente per un contesto di dispositivo di memoria usando [CDC:: SelectObject](../../mfc/reference/cdc-class.md#selectobject) e copiarla in qualsiasi contesto di dispositivo compatibili con la [CDC:: BitBlt](../../mfc/reference/cdc-class.md#bitblt) oppure [CDC::StretchBlt](../../mfc/reference/cdc-class.md#stretchblt) (funzione). (Il [CDC::PatBlt](../../mfc/reference/cdc-class.md#patblt) funzione possibile copiare la bitmap per il pennello corrente direttamente nel contesto di dispositivo di visualizzazione.)  
  
 Se il `BITMAP` struttura a cui punta il *lpBitmap* parametro è stato compilato utilizzando la `GetObject` (funzione), non vengono specificati i bit della bitmap e la mappa di bit non è inizializzata. Per inizializzare la bitmap, un'applicazione può utilizzare una funzione, ad esempio [CDC:: BitBlt](../../mfc/reference/cdc-class.md#bitblt) oppure [SetDIBits](/windows/desktop/api/wingdi/nf-wingdi-setdibits) per copiare i bit da bitmap identificata dal primo parametro di `CGdiObject::GetObject` alla bitmap creata da `CreateBitmapIndirect`.  
  
 Una volta terminato con il `CBitmap` oggetto creato con `CreateBitmapIndirect` funzionare, innanzitutto selezionare la bitmap dal contesto di dispositivo, quindi eliminare il `CBitmap` oggetto.  
  
##  <a name="createcompatiblebitmap"></a>  CBitmap::CreateCompatibleBitmap  
 Inizializza una bitmap che è compatibile con il dispositivo specificato dal *pDC*.  
  
```  
BOOL CreateCompatibleBitmap(
    CDC* pDC,  
    int nWidth,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Specifica il contesto di dispositivo.  
  
 *nWidth*  
 Specifica la larghezza della bitmap (in pixel).  
  
 *nHeight*  
 Specifica l'altezza della bitmap (in pixel).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La bitmap non ha lo stesso numero di regolatori di colore o lo stesso formato di bit per pixel come contesto di dispositivo specificato. È possibile selezionarla come bitmap corrente per qualsiasi dispositivo di memoria che è compatibile con quella specificata dal *pDC*.  
  
 Se *pDC* è un contesto di dispositivo di memoria, la bitmap restituita ha lo stesso formato di bitmap attualmente selezionato in tale contesto di dispositivo. Un "contesto di dispositivo memoria" è un blocco di memoria che rappresenta una superficie di visualizzazione. Può essere utilizzato per preparare immagini in memoria prima di copiarli all'area di visualizzazione effettivo del dispositivo compatibile.  
  
 Quando viene creato un contesto di dispositivo di memoria, GDI seleziona automaticamente una bitmap monocromatica azionario appositamente.  
  
 Poiché un contesto di dispositivo di memoria colore può avere un colore o Bitmap monocromatica selezionata, il formato della bitmap restituito dal `CreateCompatibleBitmap` funzione non è sempre lo stesso, tuttavia, il formato di una mappa di bit compatibile per un contesto di dispositivo nonmemory è sempre nel formato del dispositivo.  
  
 Una volta terminato con il `CBitmap` oggetto creato con il `CreateCompatibleBitmap` funzionare, innanzitutto selezionare la bitmap dal contesto di dispositivo, quindi eliminare il `CBitmap` oggetto.  
  
##  <a name="creatediscardablebitmap"></a>  CBitmap::CreateDiscardableBitmap  
 Inizializza una bitmap scaricabile compatibile con il contesto di periferica identificato da *pDC*.  
  
```  
BOOL CreateDiscardableBitmap(
    CDC* pDC,  
    int nWidth,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Specifica un contesto di dispositivo.  
  
 *nWidth*  
 Specifica la larghezza (espressa in bit) della bitmap.  
  
 *nHeight*  
 Specifica l'altezza (espressa in bit) della bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La bitmap non ha lo stesso numero di regolatori di colore o lo stesso formato di bit per pixel come contesto di dispositivo specificato. Un'applicazione è possibile selezionare questa bitmap come bitmap corrente per un dispositivo di memoria che è compatibile con quella specificata dal *pDC*.  
  
 Windows può eliminare una mappa di bit creato da questa funzione solo se un'applicazione non è stato selezionato in un contesto di visualizzazione. Se Windows elimina il bitmap quando non è selezionato e in un secondo momento l'applicazione tenta di selezionare il [CDC:: SelectObject](../../mfc/reference/cdc-class.md#selectobject) la funzione restituisce NULL.  
  
 Una volta terminato con il `CBitmap` oggetto creato con il `CreateDiscardableBitmap` funzionare, innanzitutto selezionare la bitmap dal contesto di dispositivo, quindi eliminare il `CBitmap` oggetto.  
  
##  <a name="fromhandle"></a>  CBitmap::FromHandle  
 Restituisce un puntatore a un `CBitmap` quando viene specificato un handle di una bitmap GDI di Windows.  
  
```  
static CBitmap* PASCAL FromHandle(HBITMAP hBitmap);
```  
  
### <a name="parameters"></a>Parametri  
 *hBitmap*  
 Specifica una bitmap GDI di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CBitmap` oggetto se riesce; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Se un `CBitmap` oggetto non è ancora connesso per l'handle, una variabile temporanea `CBitmap` oggetto viene creato e collegato. Questo temporaneo `CBitmap` oggetto è valido solo fino a quando non la volta successiva che l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, a cui ora l'immagine di tutti i temporanei vengono eliminati gli oggetti. In altre parole, ciò è che l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.  
  
##  <a name="getbitmap"></a>  CBitmap::GetBitmap  
 Recupera le proprietà dell'immagine per la bitmap associata.  
  
```  
int GetBitmap(BITMAP* pBitMap);
```  
  
### <a name="parameters"></a>Parametri  
 *pBitMap*  
 Puntatore a un [struttura di BITMAP](../../mfc/reference/bitmap-structure.md) struttura che riceverà le proprietà dell'immagine. Questo parametro non deve essere NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getbitmapbits"></a>  CBitmap::GetBitmapBits  
 Copia lo schema di bit della bitmap associata nel buffer specificato.  
  
```  
DWORD GetBitmapBits(
    DWORD dwCount,  
    LPVOID lpBits) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *dwCount*  
 Numero di byte da copiare nel buffer.  
  
 *lpBits*  
 Puntatore al buffer che riceverà la bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di byte copiati nel buffer se il metodo ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Uso [CBitmap::GetBitmap](#getbitmap) per determinare le dimensioni del buffer richiesto.  
  
##  <a name="getbitmapdimension"></a>  CBitmap::GetBitmapDimension  
 Restituisce la larghezza e altezza della bitmap.  
  
```  
CSize GetBitmapDimension() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza e altezza della bitmap, misurata in unità di 0,1 millimetro. L'altezza è nel `cy` membro della `CSize` oggetto e la larghezza è nel `cx` membro. Se la larghezza della bitmap e l'altezza non sono state impostate con `SetBitmapDimension`, il valore restituito è 0.  
  
### <a name="remarks"></a>Note  
 L'altezza e larghezza si presuppone che sono state impostate in precedenza usando il [SetBitmapDimension](#setbitmapdimension) funzione membro.  
  
##  <a name="loadbitmap"></a>  LoadBitmap  
 Carica la risorsa del bitmap denominata da *lpszResourceName* o identificata dal numero di ID nelle *nIDResource* dal file eseguibile dell'applicazione.  
  
```  
BOOL LoadBitmap(LPCTSTR lpszResourceName);  
BOOL LoadBitmap(UINT nIDResource);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszResourceName*  
 Punta a una stringa con terminazione null che contiene il nome della risorsa bitmap.  
  
 *nIDResource*  
 Specifica il numero di ID risorsa della risorsa bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La bitmap caricata è collegata al `CBitmap` oggetto.  
  
 Se la bitmap è identificato da *lpszResourceName* non esiste o se è presente memoria insufficiente per caricare la bitmap, la funzione restituisce 0.  
  
 È possibile usare la [CGdiObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione eliminare bitmap caricato dal `LoadBitmap` funzione, o il `CBitmap` distruttore l'oggetto verrà eliminato automaticamente.  
  
> [!CAUTION]
>  Prima di eliminare l'oggetto, assicurarsi che non è selezionata in un contesto di dispositivo.  
  
 Le bitmap seguenti sono state aggiunte a Windows 3.1 e versioni successive:  
  
 OBM_UPARRROWIOBM_DNARROWIOBM_RGARROWIOBM_LFARROWI  
  
 Tali bitmap non presenti nei driver di dispositivo per le versioni di Windows 3.0 e versioni precedenti. Per un elenco completo di una visualizzazione del proprio aspetto e bitmap, vedere il SDK di Windows.  
  
##  <a name="loadmappedbitmap"></a>  CBitmap::LoadMappedBitmap  
 Chiamare questa funzione membro per caricare una bitmap e mappare i colori per i colori di sistema corrente.  
  
```  
BOOL LoadMappedBitmap(
    UINT nIDBitmap,  
    UINT nFlags = 0,  
    LPCOLORMAP lpColorMap = NULL,  
    int nMapSize = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDBitmap*  
 L'ID della risorsa bitmap.  
  
 *nFlags*  
 Flag per una bitmap. Può essere zero o CMB_MASKED.  
  
 *lpColorMap*  
 Un puntatore a un `COLORMAP` struttura che contiene le informazioni sul colore necessari per eseguire il mapping le bitmap. Se questo parametro è NULL, la funzione Usa la mappa dei colori predefinita.  
  
 *nMapSize*  
 Il numero di mappe dei colori a cui punta *lpColorMap*.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `LoadMappedBitmap` verrà eseguito il mapping dei colori comunemente usati in glifi pulsante.  
  
 Per informazioni sulla creazione di una bitmap con mapping, vedere la funzione di Windows [CreateMappedBitmap](http://go.microsoft.com/fwlink/p/?linkid=230562) e il [COLORMAP](/windows/desktop/api/commctrl/ns-commctrl-_colormap) struttura nel SDK di Windows.  
  
##  <a name="loadoembitmap"></a>  CBitmap::LoadOEMBitmap  
 Carica una bitmap predefinita utilizzata da Windows.  
  
```  
BOOL LoadOEMBitmap(UINT nIDBitmap);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDBitmap*  
 Numero di ID della bitmap di Windows predefinite. I valori possibili sono elencati di seguito da WINDOWS. H:  
  
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
 Nomi delle bitmap che iniziano con OBM_OLD rappresentano le bitmap utilizzate per le versioni di Windows precedenti alla 3.0.  
  
 Si noti che la costante OEMRESOURCE deve essere definita prima tra cui WINDOWS. H per usare la **OBM_** costanti.  
  
##  <a name="operator_hbitmap"></a>  CBitmap::operator HBITMAP  
 Utilizzare questo operatore per ottenere l'handle GDI di Windows associata del `CBitmap` oggetto.  
  
```  
operator HBITMAP() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle all'oggetto GDI di Windows rappresentato dal `CBitmap` oggetto; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Questo è un operatore di cast, che supporta l'uso diretto di un `HBITMAP` oggetto.  
  
 Per altre informazioni sull'uso di oggetti grafici, vedere [gli oggetti di grafica](/windows/desktop/gdi/graphic-objects) nel SDK di Windows.  
  
##  <a name="setbitmapbits"></a>  CBitmap::SetBitmapBits  
 Imposta i bit di una bitmap per i valori di bit specificati da *lpBits*.  
  
```  
DWORD SetBitmapBits(
    DWORD dwCount,  
    const void* lpBits);
```  
  
### <a name="parameters"></a>Parametri  
 *dwCount*  
 Specifica il numero di byte a cui punta *lpBits*.  
  
 *lpBits*  
 Fa riferimento alla matrice di BYTE che contiene i valori di pixel in cui copiare il `CBitmap` oggetto. Affinché la bitmap essere in grado di eseguire il rendering correttamente la propria immagine, i valori devono essere formattati per essere conformi ai valori di profondità di altezza, larghezza e il colore che sono stati specificati quando è stata creata l'istanza CBitmap. Per altre informazioni, vedere [CBitmap::CreateBitmap](#createbitmap).  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di byte utilizzati nel impostando i bit della bitmap. 0 se la funzione ha esito negativo.  
  
##  <a name="setbitmapdimension"></a>  CBitmap::SetBitmapDimension  
 Assegna una larghezza e altezza per una bitmap in unità di 0,1 millimetro.  
  
```  
CSize SetBitmapDimension(
    int nWidth,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 *nWidth*  
 Specifica la larghezza della bitmap (in unità di 0,1 millimetro).  
  
 *nHeight*  
 Specifica l'altezza della bitmap (in unità di 0,1 millimetro).  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni di mappa di bit precedente. Altezza è nel `cy` variabile membro della `CSize` oggetti e la larghezza è nel `cx` variabile membro.  
  
### <a name="remarks"></a>Note  
 GDI non usa questi valori, ad eccezione to restituirle quando un'applicazione chiama il [GetBitmapDimension](#getbitmapdimension) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)

