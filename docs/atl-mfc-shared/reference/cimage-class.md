---
title: Classe CImage
ms.date: 08/19/2019
f1_keywords:
- CImage
- ATLIMAGE/ATL::CImage
- ATLIMAGE/ATL::CImage::CImage
- ATLIMAGE/ATL::CImage::AlphaBlend
- ATLIMAGE/ATL::CImage::Attach
- ATLIMAGE/ATL::CImage::BitBlt
- ATLIMAGE/ATL::CImage::Create
- ATLIMAGE/ATL::CImage::CreateEx
- ATLIMAGE/ATL::CImage::Destroy
- ATLIMAGE/ATL::CImage::Detach
- ATLIMAGE/ATL::CImage::Draw
- ATLIMAGE/ATL::CImage::GetBits
- ATLIMAGE/ATL::CImage::GetBPP
- ATLIMAGE/ATL::CImage::GetColorTable
- ATLIMAGE/ATL::CImage::GetDC
- ATLIMAGE/ATL::CImage::GetExporterFilterString
- ATLIMAGE/ATL::CImage::GetHeight
- ATLIMAGE/ATL::CImage::GetImporterFilterString
- ATLIMAGE/ATL::CImage::GetMaxColorTableEntries
- ATLIMAGE/ATL::CImage::GetPitch
- ATLIMAGE/ATL::CImage::GetPixel
- ATLIMAGE/ATL::CImage::GetPixelAddress
- ATLIMAGE/ATL::CImage::GetTransparentColor
- ATLIMAGE/ATL::CImage::GetWidth
- ATLIMAGE/ATL::CImage::IsDIBSection
- ATLIMAGE/ATL::CImage::IsIndexed
- ATLIMAGE/ATL::CImage::IsNull
- ATLIMAGE/ATL::CImage::IsTransparencySupported
- ATLIMAGE/ATL::CImage::Load
- ATLIMAGE/ATL::CImage::LoadFromResource
- ATLIMAGE/ATL::CImage::MaskBlt
- ATLIMAGE/ATL::CImage::PlgBlt
- ATLIMAGE/ATL::CImage::ReleaseDC
- ATLIMAGE/ATL::CImage::ReleaseGDIPlus
- ATLIMAGE/ATL::CImage::Save
- ATLIMAGE/ATL::CImage::SetColorTable
- ATLIMAGE/ATL::CImage::SetPixel
- ATLIMAGE/ATL::CImage::SetPixelIndexed
- ATLIMAGE/ATL::CImage::SetPixelRGB
- ATLIMAGE/ATL::CImage::SetTransparentColor
- ATLIMAGE/ATL::CImage::StretchBlt
- ATLIMAGE/ATL::CImage::TransparentBlt
helpviewer_keywords:
- jpeg files
- bitmaps [C++], ATL and MFC support for
- images [C++], ATL and MFC support for
- gif files, ATL and MFC support
- .gif files, ATL and MFC support
- PNG files, ATL and MFC support
- CImage class
- transparent color
ms.assetid: 52861e3d-bf7e-481f-a240-90e88f76c490
ms.openlocfilehash: 5b5ef833a3755b07e42a60b24464b1f260062d16
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317817"
---
# <a name="cimage-class"></a>Classe CImage

`CImage`fornisce un supporto bitmap avanzato, inclusa la possibilità di caricare e salvare immagini in formato JPEG, GIF, BMP e PNG (Portable Network Graphics).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CImage
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImage::CImage](#cimage)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImage::AlphaBlend](#alphablend)|Visualizza bitmap con pixel trasparenti o semitrasparenti.|
|[CImage::Attach](#attach)|Associa un HBITMAP a `CImage` un oggetto. Può essere utilizzato con bitmap di sezione non DIB o bitmap della sezione DIB.|
|[Immagine::BitBlt](#bitblt)|Copia una bitmap dal contesto di dispositivo di origine al contesto di dispositivo corrente.|
|[CImage::Create](#create)|Crea una bitmap della sezione DIB e `CImage` la associa all'oggetto costruito in precedenza.|
|[Immagine::CreateEx](#createex)|Crea una bitmap della sezione DIB (con parametri aggiuntivi) `CImage` e la associa all'oggetto costruito in precedenza.|
|[CImage::Destroy](#destroy)|Scollega la bitmap `CImage` dall'oggetto ed elimina la bitmap.|
|[CImage::Detach](#detach)|Scollega la bitmap `CImage` da un oggetto.|
|[CImage::Draw](#draw)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione. `Draw`estende o comprime la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario, e gestisce la fusione alfa e i colori trasparenti.|
|[CImage::GetBits](#getbits)|Recupera un puntatore ai valori effettivi dei pixel della bitmap.|
|[Immagine: :GetBPP](#getbpp)|Recupera i bit per pixel.|
|[CImage::GetColorTable](#getcolortable)|Recupera i valori di colore rosso, verde, blu (RGB) da un intervallo di voci nella tabella dei colori.|
|[CImage::GetDC](#getdc)|Recupera il contesto di dispositivo in cui è selezionata la bitmap corrente.|
|[CImage::GetExporterFilterString](#getexporterfilterstring)|Trova i formati di immagine disponibili e le relative descrizioni.|
|[CImage::GetHeight](#getheight)|Recupera l'altezza dell'immagine corrente in pixel.|
|[CImage::GetImporterFilterString](#getimporterfilterstring)|Trova i formati di immagine disponibili e le relative descrizioni.|
|[CImage::GetMaxColorTableEntries](#getmaxcolortableentries)|Recupera il numero massimo di voci nella tabella dei colori.|
|[Immagine::GetPitch](#getpitch)|Recupera l'altezza dell'immagine corrente, in byte.|
|[CImage::GetPixel](#getpixel)|Recupera il colore del pixel specificato da *x* e *y*.|
|[CImage::GetPixelAddress](#getpixeladdress)|Recupera l'indirizzo di un pixel specificato.|
|[CImage::GetTransparentColor](#gettransparentcolor)|Recupera la posizione del colore trasparente nella tavola colori.|
|[Immagine::GetWidth](#getwidth)|Recupera la larghezza dell'immagine corrente in pixel.|
|[CImage::IsDIBSezione](#isdibsection)|Determina se la bitmap associata è una sezione DIB.|
|[CImage::IsIndexed](#isindexed)|Indica che i colori di una bitmap sono mappati a una tavolozza indicizzata.|
|[CImage::IsNull](#isnull)|Indica se una bitmap di origine è attualmente caricata.|
|[CImage::IsTransparencySupported](#istransparencysupported)|Indica se l'applicazione supporta le bitmap trasparenti.|
|[CImage::Load](#load)|Carica un'immagine dal file specificato.|
|[Immagine::LoadFromResourceCImage::LoadFromResource](#loadfromresource)|Carica un'immagine dalla risorsa specificata.|
|[CImage::MaskBlt](#maskblt)|Combina i dati di colore per le bitmap di origine e di destinazione utilizzando la maschera e l'operazione raster specificate.|
|[CImage::PlgBlt](#plgblt)|Esegue un trasferimento a blocchi di bit da un rettangolo in un contesto di dispositivo di origine in un parallelogramma in un contesto di dispositivo di destinazione.|
|[CImage::ReleaseDC](#releasedc)|Rilascia il contesto di dispositivo recuperato con [CImage::GetDC](#getdc).|
|[Immagine::ReleaseGDIPlus](#releasegdiplus)|Rilascia le risorse utilizzate da GDI. Deve essere chiamato per liberare `CImage` le risorse create da un oggetto globale.|
|[CImage::Salva](#save)|Salva un'immagine come tipo specificato. `Save`non è possibile specificare le opzioni dell'immagine.|
|[CImage::SetColorTable](#setcolortable)|Imposta i valori di colore rosso, verde, blu RGB) in un intervallo di voci nella tabella dei colori della sezione DIB.|
|[CImage::SetPixel](#setpixel)|Imposta il pixel in corrispondenza delle coordinate specificate sul colore specificato.|
|[CImage::SetPixelIndexed](#setpixelindexed)|Imposta il pixel in corrispondenza delle coordinate specificate sul colore in corrispondenza dell'indice specificato della tavolozza.|
|[Immagine: :SetPixelRGBCImage::SetPixelRGB](#setpixelrgb)|Imposta il pixel in corrispondenza delle coordinate specificate sul valore rosso, verde, blu (RGB) specificato.|
|[CImage::SetTransparentColor](#settransparentcolor)|Imposta l'indice del colore da trattare come trasparente. Solo un colore in una tavolozza può essere trasparente.|
|[Immagine: :StretchBlt](#stretchblt)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione, allungando o comprimendo la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario.|
|[CImage::TransparentBlt](#transparentblt)|Copia una bitmap con colore trasparente dal contesto di periferica di origine a questo contesto di dispositivo corrente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImage::operatore HBITMAP](#operator_hbitmap)|Restituisce l'handle di `CImage` Windows associato all'oggetto.|

## <a name="remarks"></a>Osservazioni

`CImage`accetta bitmap che sono o meno sezioni di bitmap indipendenti dal dispositivo (DIB); Tuttavia, è possibile utilizzare [Create](#create) o [CImage::Load](#load) solo con sezioni DIB. È possibile associare una bitmap di `CImage` sezione non DIB a un `CImage` oggetto utilizzando [Attach](#attach), ma non è possibile utilizzare i metodi seguenti, che supportano solo le bitmap della sezione DIB:

- [GetBits](#getbits)

- [GetColorTable](#getcolortable)

- [GetMaxColorTableEvoci](#getmaxcolortableentries)

- [GetPitch](#getpitch)

- [Informazioni su GetPixelAddress](#getpixeladdress)

- [IsIndexed](#isindexed)

- [SetColorTable](#setcolortable)

Per determinare se una bitmap associata è una sezione DIB, chiamare [IsDibSection](#isdibsection).

> [!NOTE]
> In Visual Studio .NET 2003, questa classe `CImage` mantiene un conteggio del numero di oggetti creati. Ogni volta che il conteggio `GdiplusShutdown` è pari a 0, la funzione viene chiamata automaticamente per rilasciare le risorse utilizzate da GDI. In questo modo `CImage` si garantisce che tutti gli oggetti creati direttamente `GdiplusShutdown` o indirettamente `DllMain`dalle DLL vengano sempre eliminati correttamente e che non vengano chiamati da .

> [!NOTE]
> L'utilizzo di oggetti globali `CImage` in una DLL non è consigliato. Se è necessario utilizzare `CImage` un oggetto globale in una DLL, chiamare [CImage::ReleaseGDIPlus](#releasegdiplus) per rilasciare in modo esplicito le risorse utilizzate da GDI.

`CImage`non può essere selezionato in un nuovo [CDC](../../mfc/reference/cdc-class.md). `CImage`crea il proprio HDC per l'immagine. Poiché un HBITMAP può essere selezionato solo in un HDC `CImage` alla volta, l'HBITMAP associato a non può essere selezionato in un altro HDC. Se è necessario un CDC, recuperare `CImage` l'HDC da e assegnarlo a [CDC::FromHandle](../../mfc/reference/cdc-class.md#fromhandle).

## <a name="example"></a>Esempio

```cpp
// Get a CDC for the image
CDC* pDC = CDC::FromHandle(m_myImage.GetDC());

// Use pDC here
pDC->Rectangle(0, 40, 100, 50);
m_myImage.ReleaseDC();
```

Quando si `CImage` utilizza in un progetto MFC, si noti quali funzioni membro nel progetto prevedono un puntatore a un [CBitmap](../../mfc/reference/cbitmap-class.md) oggetto. Se si desidera `CImage` utilizzare con una funzione di questo tipo, ad esempio [CMenu::AppendMenu](../../mfc/reference/cmenu-class.md#appendmenu), utilizzare [CBitmap::FromHandle](../../mfc/reference/cbitmap-class.md#fromhandle), passarla `CImage` HBITMAP e utilizzare l'oggetto restituito. `CBitmap*`

## <a name="example"></a>Esempio

```cpp
void CMyDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
    UNREFERENCED_PARAMETER(nFlags);

    CBitmap* pBitmap = CBitmap::FromHandle(m_myImage);
    m_pmenuPop->AppendMenu(0, ID_BMPCOMMAND, pBitmap);
    ClientToScreen(&point);
    m_pmenuPop->TrackPopupMenu(TPM_RIGHTBUTTON | TPM_LEFTALIGN, point.x,
    point.y, this);
}
```

Tramite `CImage`, è possibile accedere ai bit effettivi di una sezione DIB. È possibile `CImage` utilizzare un oggetto ovunque sia stata utilizzata in precedenza una sezione Win32 HBITMAP o DIB.

È possibile `CImage` utilizzare da MFC o ATL.

> [!NOTE]
> Quando si crea `CImage`un progetto `CString` utilizzando , è necessario definire prima di includere *atlimage.h*. Se il progetto utilizza ATL senza MFC, includere *atlstr.h* prima di includere *atlimage.h*. Se il progetto utilizza MFC (o se si tratta di un progetto ATL con supporto MFC), includere *afxstr.h* prima di includere *atlimage.h*.<br/>
> <br/>
> Analogamente, è necessario includere *atlimage.h* prima di includere *atlimpl.cpp*. Per eseguire questa operazione facilmente, includere *atlimage.h* in *pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlimage.h

## <a name="cimagealphablend"></a><a name="alphablend"></a>CImage::AlphaBlend

Visualizza bitmap con pixel trasparenti o semitrasparenti.

```
BOOL AlphaBlend(
    HDC hDestDC,
    int xDest,
    int yDest,
    BYTE bSrcAlpha = 0xff,
    BYTE bBlendOp = AC_SRC_OVER) const throw();

BOOL AlphaBlend(
    HDC hDestDC,
    const POINT& pointDest,
    BYTE bSrcAlpha = 0xff,
    BYTE bBlendOp = AC_SRC_OVER) const throw();

BOOL AlphaBlend(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    BYTE bSrcAlpha = 0xff,
    BYTE bBlendOp = AC_SRC_OVER);

BOOL AlphaBlend(
    HDC hDestDC,
    const RECT& rectDest,
    const RECT& rectSrc,
    BYTE bSrcAlpha = 0xff,
    BYTE bBlendOp = AC_SRC_OVER);
```

### <a name="parameters"></a>Parametri

*hDestDC (hDestDC)*<br/>
Gestire il contesto di dispositivo di destinazione.

*xDest (informazioni in base al tsome*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*bSrcAlfa*<br/>
Valore di trasparenza alfa da utilizzare sull'intera bitmap di origine. Il valore predefinito 0xff (255) presuppone che l'immagine sia opaca e che si desideri utilizzare solo valori alfa per pixel.

*bBlendOp (informazioni in base a un opa*<br/>
La funzione di fusione alfa per le bitmap di origine e di destinazione, un valore alfa globale da applicare all'intera bitmap di origine e le informazioni sul formato per la bitmap di origine. Le funzioni di blend di origine e di destinazione sono attualmente limitate a AC_SRC_OVER.

*pointDest*<br/>
Riferimento a una struttura [POINT](/previous-versions/dd162805\(v=vs.85\)) che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.

*NDestWidth (larghezza in stato infuso)*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight (informazioni in base a un'unità incui*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*XSrc*<br/>
Coordinata x logica dell'angolo superiore sinistro del rettangolo di origine.

*YSrc*<br/>
Coordinata y logica dell'angolo superiore sinistro del rettangolo di origine.

*NSrcLarghezza*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*NSrcHeight (informazioni in base all'alto in*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectDest (rectDest)*<br/>
Riferimento a una struttura [RECT,](/previous-versions/dd162897\(v=vs.85\)) che identifica la destinazione.

*rectSrc*<br/>
Riferimento a `RECT` una struttura, che identifica l'origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Le bitmap alfa-blend supportano la fusione dei colori per pixel.

Quando *bBlendOp* è impostato sul valore predefinito di AC_SRC_OVER, la bitmap di origine viene posizionata sopra la bitmap di destinazione in base ai valori alfa dei pixel di origine.

## <a name="cimageattach"></a><a name="attach"></a>CImage::Attach

Associa *hBitmap* a `CImage` un oggetto.

```
void Attach(HBITMAP hBitmap, DIBOrientation eOrientation = DIBOR_DEFAULT) throw();
```

### <a name="parameters"></a>Parametri

*Hbitmap*<br/>
Handle di un HBITMAP.

*eOrientamento*<br/>
Specifica l'orientamento della bitmap. Può essere uno dei valori seguenti:

- DIBOR_DEFAULT L'orientamento della bitmap è determinato dal sistema operativo.

- DIBOR_BOTTOMUP Le righe della bitmap sono in ordine inverso. In questo modo [CImage::GetBits](#getbits) restituire un puntatore alla fine del buffer bitmap e [CImage::GetPitch](#getpitch) per restituire un numero negativo.

- DIBOR_TOPDOWN Le righe della bitmap sono in ordine dall'alto verso il basso. In questo modo [CImage::GetBits](#getbits) restituire un puntatore al primo byte del buffer bitmap e [CImage::GetPitch](#getpitch) per restituire un numero positivo.

### <a name="remarks"></a>Osservazioni

La bitmap può essere una bitmap di sezione non DIB o una bitmap della sezione DIB. Vedere [IsDIBSection](#isdibsection) per un elenco dei metodi che è possibile utilizzare solo con le bitmap della sezione DIB.

## <a name="cimagebitblt"></a><a name="bitblt"></a>Immagine::BitBlt

Copia una bitmap dal contesto di dispositivo di origine al contesto di dispositivo corrente.

```
BOOL BitBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    DWORD dwROP = SRCCOPY) const throw();

BOOL BitBlt(
    HDC hDestDC,
    const POINT& pointDest,
    DWORD dwROP = SRCCOPY) const throw();

BOOL BitBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    DWORD dwROP = SRCCOPY) const throw();

BOOL BitBlt(
    HDC hDestDC,
    const RECT& rectDest,
    const POINT& pointSrc,
    DWORD dwROP = SRCCOPY) const throw();
```

### <a name="parameters"></a>Parametri

*hDestDC (hDestDC)*<br/>
L'HDC di destinazione.

*xDest (informazioni in base al tsome*<br/>
Coordinata x logica dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y logica dell'angolo superiore sinistro del rettangolo di destinazione.

*dwROP*<br/>
Operazione raster da eseguire. I codici di operazione raster definiscono esattamente come combinare i bit dell'origine, la destinazione e il modello (come definito dal pennello attualmente selezionato) per formare la destinazione. Vedere [BitBlt](/windows/win32/api/wingdi/nf-wingdi-bitblt) in Windows SDK per un elenco di altri codici di funzionamento raster e le relative descrizioni.

*pointDest*<br/>
Struttura [POINT](/previous-versions/dd162805\(v=vs.85\)) che indica l'angolo superiore sinistro del rettangolo di destinazione.

*NDestWidth (larghezza in stato infuso)*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight (informazioni in base a un'unità incui*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*XSrc*<br/>
Coordinata x logica dell'angolo superiore sinistro del rettangolo di origine.

*YSrc*<br/>
Coordinata y logica dell'angolo superiore sinistro del rettangolo di origine.

*rectDest (rectDest)*<br/>
Struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che indica il rettangolo di destinazione.

*pointSrc*<br/>
Struttura `POINT` che indica l'angolo superiore sinistro del rettangolo di origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [BitBlt](/windows/win32/api/wingdi/nf-wingdi-bitblt) in Windows SDK.

## <a name="cimagecimage"></a><a name="cimage"></a>CImage::CImage

Costruisce un oggetto `CImage`.

```
CImage() throw();
```

### <a name="remarks"></a>Osservazioni

Una volta costruito l'oggetto, chiamare [Create](#create), [Load](#load), [LoadFromResource](#loadfromresource)o [Attach](#attach) per associare una bitmap all'oggetto.

**Nota:** In Visual Studio, questa classe mantiene `CImage` un conteggio del numero di oggetti creati. Ogni volta che il conteggio `GdiplusShutdown` è pari a 0, la funzione viene chiamata automaticamente per rilasciare le risorse utilizzate da GDI. In questo modo `CImage` si garantisce che tutti gli oggetti creati direttamente `GdiplusShutdown` o indirettamente dalle DLL vengano sempre eliminati correttamente e che non vengano chiamati da DllMain.

L'utilizzo di oggetti globali `CImage` in una DLL non è consigliato. Se è necessario utilizzare `CImage` un oggetto globale in una DLL, chiamare [CImage::ReleaseGDIPlus](#releasegdiplus) per rilasciare in modo esplicito le risorse utilizzate da GDI.

## <a name="cimagecreate"></a><a name="create"></a>CImage::Create

Crea `CImage` una bitmap e la `CImage` associa all'oggetto costruito in precedenza.

```
BOOL Create(
    int nWidth,
    int nHeight,
    int nBPP,
    DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*nLarghezza*<br/>
Larghezza della `CImage` bitmap, in pixel.

*nAltezza*<br/>
`CImage` Altezza della bitmap, in pixel. Se *nHeight* è positivo, la bitmap è una DIB dal basso verso l'alto e la sua origine è l'angolo inferiore sinistro. Se *nHeight* è negativo, la bitmap è una DIB dall'alto verso il basso e la sua origine è l'angolo superiore sinistro.

*Nbpp*<br/>
Numero di bit per pixel nella bitmap. Di solito 4, 8, 16, 24 o 32. Può essere 1 per bitmap o maschere monocromatiche.

*dwFlags*<br/>
Specifica se l'oggetto bitmap dispone di un canale alfa. Può essere una combinazione di zero o più dei seguenti valori:

- *createAlphaChannel* Può essere utilizzato solo se *nBPP* è 32 e *eCompression* è BI_RGB. Se specificato, l'immagine creata ha un valore alfa (trasparenza) per ogni pixel, memorizzato nel quarto byte di ogni pixel (inutilizzato in un'immagine non alfa a 32 bit). Questo canale alfa viene utilizzato automaticamente quando si chiama [CImage::AlphaBlend](#alphablend).

> [!NOTE]
> Nelle chiamate a [CImage::Draw](#draw), le immagini con un canale alfa vengono automaticamente miscelate alfa nella destinazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="cimagecreateex"></a><a name="createex"></a>Immagine::CreateEx

Crea `CImage` una bitmap e la `CImage` associa all'oggetto costruito in precedenza.

```
BOOL CreateEx(
    int nWidth,
    int nHeight,
    int nBPP,
    DWORD eCompression,
    const DWORD* pdwBitmasks = NULL,
    DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*nLarghezza*<br/>
Larghezza della `CImage` bitmap, in pixel.

*nAltezza*<br/>
`CImage` Altezza della bitmap, in pixel. Se *nHeight* è positivo, la bitmap è una DIB dal basso verso l'alto e la sua origine è l'angolo inferiore sinistro. Se *nHeight* è negativo, la bitmap è una DIB dall'alto verso il basso e la sua origine è l'angolo superiore sinistro.

*Nbpp*<br/>
Numero di bit per pixel nella bitmap. Di solito 4, 8, 16, 24 o 32. Può essere 1 per bitmap o maschere monocromatiche.

*eCompressione*<br/>
Specifica il tipo di compressione per una bitmap compressa dal basso verso l'alto (i DIB dall'alto verso il basso non possono essere compressi). I possibili valori sono i seguenti:

- BI_RGB Il formato non è compresso. Specificare questo valore `CImage::CreateEx` quando si `CImage::Create`chiama equivale a chiamare .

- BI_BITFIELDS Il formato non è compresso e la tabella dei colori è costituita da tre maschere di colori DWORD che specificano rispettivamente i componenti rosso, verde e blu di ogni pixel. Questo è valido se utilizzato con bitmap a 16 e 32 bpp.

*campi pdwBit*<br/>
Utilizzato solo se *eCompression* è impostato su BI_BITFIELDS, altrimenti deve essere NULL. Puntatore a una matrice di tre maschere di bit DWORD, specificando quali bit di ogni pixel vengono utilizzati rispettivamente per i componenti rosso, verde e blu del colore. Per informazioni sulle restrizioni per i campi di bit, vedere [BITMAPINFOHEADER](/previous-versions//dd183376\(v=vs.85\)) in Windows SDK.

*dwFlags*<br/>
Specifica se l'oggetto bitmap dispone di un canale alfa. Può essere una combinazione di zero o più dei seguenti valori:

- *createAlphaChannel* Può essere utilizzato solo se *nBPP* è 32 e *eCompression* è BI_RGB. Se specificato, l'immagine creata ha un valore alfa (trasparenza) per ogni pixel, memorizzato nel quarto byte di ogni pixel (inutilizzato in un'immagine non alfa a 32 bit). Questo canale alfa viene utilizzato automaticamente quando si chiama [CImage::AlphaBlend](#alphablend).

   > [!NOTE]
   > Nelle chiamate a [CImage::Draw](#draw), le immagini con un canale alfa vengono automaticamente miscelate alfa nella destinazione.

### <a name="return-value"></a>Valore restituito

TRUE in caso di esito positivo. In caso contrario, FALSE.

### <a name="example"></a>Esempio

L'esempio seguente crea una bitmap di 100x100 pixel, usando 16 bit per codificare ogni pixel. In un determinato pixel a 16 bit, i bit 0-3 codificano il componente rosso, i bit 4-7 codificano in verde e i bit 8-11 codificano in blu. I restanti 4 bit sono inutilizzati.

```cpp
DWORD adwBitmasks[3] = { 0x0000000f, 0x000000f0, 0x00000f00 };
m_myImage.CreateEx(100, 100, 16, BI_BITFIELDS, adwBitmasks, 0);
```

## <a name="cimagedestroy"></a><a name="destroy"></a>CImage::Destroy

Scollega la bitmap `CImage` dall'oggetto ed elimina la bitmap.

```
void Destroy() throw();
```

## <a name="cimagedetach"></a><a name="detach"></a>CImage::Detach

Scollega una bitmap `CImage` da un oggetto.

```
HBITMAP Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Handle per la bitmap scollegata oppure NULL se non è associata alcuna bitmap.

## <a name="cimagedraw"></a><a name="draw"></a>CImage::Draw

Copia una bitmap dal contesto di dispositivo di origine al contesto di dispositivo corrente.

```
BOOL Draw(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight) const throw();

BOOL Draw(
    HDC hDestDC,
    const RECT& rectDest,
    const RECT& rectSrc) const throw();

BOOL Draw(
    HDC hDestDC,
    int xDest,
    int yDest) const throw();

BOOL Draw(
    HDC hDestDC,
    const POINT& pointDest) const throw();

BOOL Draw(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight) const throw();

BOOL Draw(
    HDC hDestDC,
    const RECT& rectDest) const throw();
```

### <a name="parameters"></a>Parametri

*hDestDC (hDestDC)*<br/>
Handle per il contesto di dispositivo di destinazione.

*xDest (informazioni in base al tsome*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*NDestWidth (larghezza in stato infuso)*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight (informazioni in base a un'unità incui*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*XSrc*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*YSrc*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*NSrcLarghezza*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*NSrcHeight (informazioni in base all'alto in*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectDest (rectDest)*<br/>
Riferimento a una struttura [RECT,](/previous-versions/dd162897\(v=vs.85\)) che identifica la destinazione.

*rectSrc*<br/>
Riferimento a `RECT` una struttura, che identifica l'origine.

*pointDest*<br/>
Riferimento a una struttura [POINT](/previous-versions/dd162805\(v=vs.85\)) che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

`Draw`esegue la stessa operazione di [StretchBlt](#stretchblt), a meno che l'immagine non contenga un colore trasparente o un canale alfa. In tal `Draw` caso, esegue la stessa operazione di [TransparentBlt](#transparentblt) o [AlphaBlend](#alphablend) come richiesto.

Per le `Draw` versioni che non specificano un rettangolo di origine, l'intera immagine di origine è l'impostazione predefinita. Per la `Draw` versione di che non specifica una dimensione per il rettangolo di destinazione, la dimensione dell'immagine di origine è quella predefinita e non si verifica alcuna estensione o riduzione.

## <a name="cimagegetbits"></a><a name="getbits"></a>CImage::GetBits

Recupera un puntatore ai valori di bit effettivi di un pixel specificato in una bitmap.

```
void* GetBits() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer bitmap. Se la bitmap è una DIB dal basso verso l'alto, il puntatore punta verso la fine del buffer. Se la bitmap è una DIB dall'alto verso il basso, il puntatore punta al primo byte del buffer.

### <a name="remarks"></a>Osservazioni

Utilizzando questo puntatore, insieme al valore restituito da [GetPitch](#getpitch), è possibile individuare e modificare singoli pixel in un'immagine.

> [!NOTE]
> Questo metodo supporta solo le bitmap della sezione DIB; di conseguenza, si accede `CImage` ai pixel di un oggetto nello stesso modo in cui si accede ai pixel di una sezione DIB. Il puntatore restituito punta al pixel nella posizione (0, 0).

## <a name="cimagegetbpp"></a><a name="getbpp"></a>Immagine: :GetBPP

Recupera il valore bits per pixel.

```
int GetBPP() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero di bit per pixel.

### <a name="remarks"></a>Osservazioni

Questo valore determina il numero di bit che definiscono ogni pixel e il numero massimo di colori nella bitmap.

I bit per pixel sono in genere 1, 4, 8, 16, 24 o 32. Per `biBitCount` ulteriori informazioni su questo valore, vedere il membro di [BITMAPINFOHEADER](/previous-versions//dd183376\(v=vs.85\)) in Windows SDK.

## <a name="cimagegetcolortable"></a><a name="getcolortable"></a>CImage::GetColorTable

Recupera i valori di colore rosso, verde, blu (RGB) da un intervallo di voci nella tavolozza della sezione DIB.

```
void GetColorTable(
    UINT iFirstColor,
    UINT nColors,
    RGBQUAD* prgbColors) const throw();
```

### <a name="parameters"></a>Parametri

*IFirstColor (colore)*<br/>
Indice della tabella dei colori della prima voce da recuperare.

*nColori*<br/>
Numero di voci della tabella dei colori da recuperare.

*prgbColori*<br/>
Puntatore alla matrice di strutture [RGBQUAD](/windows/win32/api/wingdi/ns-wingdi-rgbquad) per recuperare le voci della tabella dei colori.

## <a name="cimagegetdc"></a><a name="getdc"></a>CImage::GetDC

Recupera il contesto di dispositivo che attualmente contiene l'immagine selezionata.

```
HDC GetDC() const throw();
```

### <a name="return-value"></a>Valore restituito

Handle per un contesto di dispositivo.

### <a name="remarks"></a>Osservazioni

Per ogni `GetDC`chiamata a , è necessario disporre di una chiamata successiva a [ReleaseDC](#releasedc).

## <a name="cimagegetexporterfilterstring"></a><a name="getexporterfilterstring"></a>CImage::GetExporterFilterString

Trova i formati di immagine disponibili per il salvataggio delle immagini.

```
static HRESULT GetExporterFilterString(
    CSimpleString& strExporters,
    CSimpleArray<GUID>& aguidFileTypes,
    LPCTSTR pszAllFilesDescription = NULL,
    DWORD dwExclude = excludeDefaultSave,
    TCHAR chSeparator = _T('|'));
```

### <a name="parameters"></a>Parametri

*strExporters (strExporters)*<br/>
Riferimento a un oggetto `CSimpleString`. Vedere **osservazioni** Per ulteriori informazioni.

*aguidFileTypes*<br/>
Matrice di GUID, con ogni elemento corrispondente a uno dei tipi di file nella stringa. Nell'esempio riportato di seguito in *pszAllFilesDescription,* *aguidFileTypes*[0] è GUID_NULL e i restanti valori di matrice sono i formati di file di immagine supportati dal sistema operativo corrente.

> [!NOTE]
> Per un elenco completo delle costanti, vedere Costanti del formato del file di **immagine** in Windows SDK.

*pszAllFilesDescrizione*<br/>
Se questo parametro non è NULL, la stringa di filtro avrà un filtro aggiuntivo all'inizio dell'elenco. Questo filtro avrà il valore corrente di *pszAllFilesDescription* per la relativa descrizione e accetta i file di qualsiasi estensione supportata da qualsiasi altro esportatore nell'elenco.

Ad esempio:

```cpp
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any exporter.
CImage::GetExporterFilterString(
    strExporters, aguidFileTypes,
_T("All Image Files"));
```

*DwExclude*<br/>
Set di flag di bit che specificano i tipi di file da escludere dall'elenco. I flag consentiti sono:

- `excludeGIF`0x01 Esclude i file GIF.

- `excludeBMP`0x02 esclude i file BMP (Bitmap di Windows).

- `excludeEMF`0x04 esclude i file EMF (Enhanced Metafile).

- `excludeWMF`0x08 Esclude i file WMF (Windows Metafile).

- `excludeJPEG`0x10 Esclude i file JPEG.

- `excludePNG`0x20 Esclude i file PNG.

- `excludeTIFF`0x40 Esclude i file TIFF.

- `excludeIcon`0x80 Esclude i file ICO (Icona di Windows).

- `excludeOther`0x80000000 Esclude qualsiasi altro tipo di file non elencato in precedenza.

- `excludeDefaultLoad`0 Per il caricamento, tutti i tipi di file sono inclusi per impostazione predefinita

- `excludeDefaultSave` = `excludeIcon &#124; excludeEMF &#124; excludeWMF`Per il salvataggio, questi file sono esclusi per impostazione predefinita perché di solito hanno requisiti speciali.

*chSeparator*<br/>
Separatore utilizzato tra i formati immagine. Vedere **osservazioni** Per ulteriori informazioni.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

È possibile passare la stringa di formato risultante all'oggetto MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) per esporre le estensioni di file dei formati di immagine disponibili nella finestra di dialogo Salva con nome.

Il parametro *strExporter* ha il formato:

descrizione del \*file0&#124;.ext0 \*&#124;filedescription1&#124;.ext1&#124;... descrizione *n* del \*file n&#124;.ext *n*&#124;&#124;

dove '&#124;' è il `chSeparator`carattere separatore specificato da . Ad esempio:

`"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`

Utilizzare il separatore predefinito '&#124;' se `CFileDialog` si passa questa stringa a un oggetto MFC. Se si passa questa stringa a una finestra di dialogo comune per il salvataggio di file, utilizzare il separatore null ''0''.</a0>

## <a name="cimagegetheight"></a><a name="getheight"></a>CImage::GetHeight

Recupera l'altezza, in pixel, di un'immagine.

```
int GetHeight() const throw();
```

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, di un'immagine.

## <a name="cimagegetimporterfilterstring"></a><a name="getimporterfilterstring"></a>CImage::GetImporterFilterString

Trova i formati immagine disponibili per il caricamento delle immagini.

```
static HRESULT GetImporterFilterString(
    CSimpleString& strImporters,
    CSimpleArray<GUID>& aguidFileTypes,
    LPCTSTR pszAllFilesDescription = NULL,
    DWORD dwExclude = excludeDefaultLoad,
    TCHAR chSeparator = _T('|'));
```

### <a name="parameters"></a>Parametri

*strImporters*<br/>
Riferimento a un oggetto `CSimpleString`. Vedere **osservazioni** Per ulteriori informazioni.

*aguidFileTypes*<br/>
Matrice di GUID, con ogni elemento corrispondente a uno dei tipi di file nella stringa. Nell'esempio riportato di seguito in *pszAllFilesDescription,* *aguidFileTypes*[0] è GUID_NULL con i restanti valori di matrice sono i formati di file di immagine supportati dal sistema operativo corrente.

> [!NOTE]
> Per un elenco completo delle costanti, vedere Costanti del formato del file di **immagine** in Windows SDK.

*pszAllFilesDescrizione*<br/>
Se questo parametro non è NULL, la stringa di filtro avrà un filtro aggiuntivo all'inizio dell'elenco. Questo filtro avrà il valore corrente di *pszAllFilesDescription* per la relativa descrizione e accetta i file di qualsiasi estensione supportata da qualsiasi altro esportatore nell'elenco.

Ad esempio:

```cpp
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any importer.
CImage::GetImporterFilterString(
    strImporters, aguidFileTypes,
_T("All Image Files"));
```

*DwExclude*<br/>
Set di flag di bit che specificano i tipi di file da escludere dall'elenco. I flag consentiti sono:

- `excludeGIF`0x01 Esclude i file GIF.

- `excludeBMP`0x02 esclude i file BMP (Bitmap di Windows).

- `excludeEMF`0x04 esclude i file EMF (Enhanced Metafile).

- `excludeWMF`0x08 Esclude i file WMF (Windows Metafile).

- `excludeJPEG`0x10 Esclude i file JPEG.

- `excludePNG`0x20 Esclude i file PNG.

- `excludeTIFF`0x40 Esclude i file TIFF.

- `excludeIcon`0x80 Esclude i file ICO (Icona di Windows).

- `excludeOther`0x80000000 Esclude qualsiasi altro tipo di file non elencato in precedenza.

- `excludeDefaultLoad`0 Per il caricamento, tutti i tipi di file sono inclusi per impostazione predefinita

- `excludeDefaultSave` = `excludeIcon &#124; excludeEMF &#124; excludeWMF`Per il salvataggio, questi file sono esclusi per impostazione predefinita perché di solito hanno requisiti speciali.

*chSeparator*<br/>
Separatore utilizzato tra i formati immagine. Vedere **osservazioni** Per ulteriori informazioni.

### <a name="remarks"></a>Osservazioni

È possibile passare la stringa di formato risultante all'oggetto MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) per esporre le estensioni di file dei formati immagine disponibili nella finestra di dialogo **Apri file.**

Il parametro *strImporter* ha il formato:

descrizione del \*file0&#124;.ext0 \*&#124;filedescription1&#124;.ext1&#124;... descrizione *n* del \*file n&#124;.ext *n*&#124;&#124;

dove '&#124;' è il carattere separatore specificato da *chSeparator*. Ad esempio:

`"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`

Utilizzare il separatore predefinito '&#124;' se `CFileDialog` si passa questa stringa a un oggetto MFC. Se si passa questa stringa a una finestra di dialogo **di apertura file** comune, utilizzare il separatore null ''0''.

## <a name="cimagegetmaxcolortableentries"></a><a name="getmaxcolortableentries"></a>CImage::GetMaxColorTableEntries

Recupera il numero massimo di voci nella tabella dei colori.

```
int GetMaxColorTableEntries() const throw();
```

### <a name="return-value"></a>Valore restituito

Il numero di voci nella tabella dei colori.

### <a name="remarks"></a>Osservazioni

Questo metodo supporta solo le bitmap della sezione DIB.

## <a name="cimagegetpitch"></a><a name="getpitch"></a>Immagine::GetPitch

Recupera l'altezza di un'immagine.

```
int GetPitch() const throw();
```

### <a name="return-value"></a>Valore restituito

L'altezza dell'immagine. Se il valore restituito è negativo, la bitmap è una DIB dal basso verso l'alto e la sua origine è l'angolo inferiore sinistro. Se il valore restituito è positivo, la bitmap è una DIB dall'alto verso il basso e la sua origine è l'angolo superiore sinistro.

### <a name="remarks"></a>Osservazioni

Il passo è la distanza, in byte, tra due indirizzi di memoria che rappresentano l'inizio di una riga bitmap e l'inizio della riga bitmap successiva. Poiché l'altezza viene misurata in byte, l'altezza di un'immagine consente di determinare il formato pixel. Il passo può anche includere memoria aggiuntiva, riservata per la bitmap.

Utilizzare `GetPitch` con [GetBits](#getbits) per trovare singoli pixel di un'immagine.

> [!NOTE]
> Questo metodo supporta solo le bitmap della sezione DIB.

## <a name="cimagegetpixel"></a><a name="getpixel"></a>CImage::GetPixel

Recupera il colore del pixel nella posizione specificata da *x* e *y*.

```
COLORREF GetPixel(int x, int y) const throw();
```

### <a name="parameters"></a>Parametri

*X*<br/>
Coordinata x del pixel.

*Y*<br/>
Coordinata y del pixel.

### <a name="return-value"></a>Valore restituito

Il valore rosso, verde, blu (RGB) del pixel. Se il pixel si trova al di fuori dell'area di ritaglio corrente, il valore restituito viene CLR_INVALID.

## <a name="cimagegetpixeladdress"></a><a name="getpixeladdress"></a>CImage::GetPixelAddress

Recupera l'indirizzo esatto di un pixel.

```
void* GetPixelAddress(int x, int y) throw();
```

### <a name="parameters"></a>Parametri

*X*<br/>
Coordinata x del pixel.

*Y*<br/>
Coordinata y del pixel.

### <a name="remarks"></a>Osservazioni

L'indirizzo viene determinato in base alle coordinate di un pixel, all'altezza della bitmap e ai bit per pixel.

Per i formati con meno di 8 bit per pixel, questo metodo restituisce l'indirizzo del byte contenente il pixel. Ad esempio, se il formato dell'immagine `GetPixelAddress` ha 4 bit per pixel, restituisce l'indirizzo del primo pixel nel byte ed è necessario calcolare per 2 pixel per byte.

> [!NOTE]
> Questo metodo supporta solo le bitmap della sezione DIB.

## <a name="cimagegettransparentcolor"></a><a name="gettransparentcolor"></a>CImage::GetTransparentColor

Recupera la posizione indicizzata del colore trasparente nella tavolozza dei colori.

```
LONG GetTransparentColor() const throw();
```

### <a name="return-value"></a>Valore restituito

Indice del colore trasparente.

## <a name="cimagegetwidth"></a><a name="getwidth"></a>Immagine::GetWidth

Recupera la larghezza, in pixel, di un'immagine.

```
int GetWidth() const throw();
```

### <a name="return-value"></a>Valore restituito

Larghezza della bitmap, in pixel.

## <a name="cimageisdibsection"></a><a name="isdibsection"></a>CImage::IsDIBSezione

Determina se la bitmap associata è una sezione DIB.

```
bool IsDIBSection() const throw();
```

### <a name="return-value"></a>Valore restituito

TRUESe la bitmap associata è una sezione DIB. In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se la bitmap non è una sezione DIB, non è possibile utilizzare i metodi seguenti, `CImage` che supportano solo le bitmap della sezione DIB:

- [GetBits](#getbits)

- [GetColorTable](#getcolortable)

- [GetMaxColorTableEvoci](#getmaxcolortableentries)

- [GetPitch](#getpitch)

- [Informazioni su GetPixelAddress](#getpixeladdress)

- [IsIndexed](#isindexed)

- [SetColorTable](#setcolortable)

## <a name="cimageisindexed"></a><a name="isindexed"></a>CImage::IsIndexed

Determina se i pixel di una bitmap sono mappati a una tavolozza di colori.

```
bool IsIndexed() const throw();
```

### <a name="return-value"></a>Valore restituito

TRUESe indicizzato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce TRUE solo se la bitmap è a 8 bit (256 colori) o meno.

> [!NOTE]
> Questo metodo supporta solo le bitmap della sezione DIB.

## <a name="cimageisnull"></a><a name="isnull"></a>CImage::IsNull

Determina se una bitmap è attualmente caricata.

```
bool IsNull() const throw();
```

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce TRUE se una bitmap non è attualmente caricata; in caso contrario, FALSE.

## <a name="cimageistransparencysupported"></a><a name="istransparencysupported"></a>CImage::IsTransparencySupported

Indica se l'applicazione supporta le bitmap trasparenti.

```
static BOOL IsTransparencySupported() throw();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la piattaforma corrente supporta la trasparenza. In caso contrario, 0

### <a name="remarks"></a>Osservazioni

Se il valore restituito è diverso da zero e la trasparenza è supportata, una chiamata ad [AlphaBlend](#alphablend), [TransparentBlt](#transparentblt)o [Draw](#draw) gestirà i colori trasparenti.

## <a name="cimageload"></a><a name="load"></a>CImage::Load

Carica un'immagine.

```
HRESULT Load(LPCTSTR pszFileName) throw();
HRESULT Load(IStream* pStream) throw();
```

### <a name="parameters"></a>Parametri

*pszFileName*<br/>
Puntatore a una stringa contenente il nome del file di immagine da caricare.

*pStream (corso)*<br/>
Puntatore a un flusso contenente il nome del file di immagine da caricare.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

Carica l'immagine specificata da *pszFileName* o *pStream*.

I tipi di immagine validi sono BMP, GIF, JPEG, PNG e TIFF.

## <a name="cimageloadfromresource"></a><a name="loadfromresource"></a>Immagine::LoadFromResourceCImage::LoadFromResource

Carica un'immagine da una risorsa BITMAP.

```
void LoadFromResource(
    HINSTANCE hInstance,
    LPCTSTR pszResourceName) throw();

void LoadFromResource(
    HINSTANCE hInstance,
    UINT nIDResource) throw();
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
Handle a un'istanza del modulo che contiene l'immagine da caricare.

*nomedi risorsa psz*<br/>
Puntatore alla stringa contenente il nome della risorsa contenente l'immagine da caricare.

*nIDResource*<br/>
ID della risorsa da caricare.

### <a name="remarks"></a>Osservazioni

La risorsa deve essere di tipo BITMAP.

## <a name="cimagemaskblt"></a><a name="maskblt"></a>CImage::MaskBlt

Combina i dati di colore per le bitmap di origine e di destinazione utilizzando la maschera e l'operazione raster specificate.

```
BOOL MaskBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    HBITMAP hbmMask,
    int xMask,
    int yMask,
    DWORD dwROP = SRCCOPY) const throw();

BOOL MaskBlt(
    HDC hDestDC,
    const RECT& rectDest,
    const POINT& pointSrc,
    HBITMAP hbmMask,
    const POINT& pointMask,
    DWORD dwROP = SRCCOPY) const throw();

BOOL MaskBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    HBITMAP hbmMask,
    DWORD dwROP = SRCCOPY) const throw();

BOOL MaskBlt(
    HDC hDestDC,
    const POINT& pointDest,
    HBITMAP hbmMask,
    DWORD dwROP = SRCCOPY) const throw();
```

### <a name="parameters"></a>Parametri

*hDestDC (hDestDC)*<br/>
Handle per il modulo il cui eseguibile contiene la risorsa.

*xDest (informazioni in base al tsome*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*NDestWidth (larghezza in stato infuso)*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione e della bitmap di origine.

*nDestHeight (informazioni in base a un'unità incui*<br/>
Altezza, in unità logiche, del rettangolo di destinazione e della bitmap di origine.

*XSrc*<br/>
Coordinata x logica dell'angolo superiore sinistro della bitmap di origine.

*YSrc*<br/>
Coordinata y logica dell'angolo superiore sinistro della bitmap di origine.

*hbmMaschera*<br/>
Gestire la bitmap della maschera monocromatica combinata con la bitmap del colore nel contesto di periferica di origine.

*Mascherax*<br/>
Offset del pixel orizzontale per la bitmap della maschera specificata dal parametro *hbmMask.*

*yMaschera*<br/>
Offset in pixel verticale per la bitmap della maschera specificata dal parametro *hbmMask.*

*dwROP*<br/>
Specifica i codici operativi raster ternari in primo piano e in background utilizzati dal metodo per controllare la combinazione di dati di origine e di destinazione. Il codice dell'operazione raster in background viene archiviato nel byte più significativo della parola più ordine di questo valore; il codice dell'operazione raster in primo piano viene memorizzato nel byte meno significativo della parola più ordine di questo valore; la parola di ordine basso di questo valore viene ignorata e deve essere zero. Per una discussione di primo piano e `MaskBlt` di sfondo nel contesto di questo metodo, vedere in Windows SDK. Per un elenco dei codici operativi `BitBlt` raster comuni, vedere Windows SDK.

*rectDest (rectDest)*<br/>
Riferimento a `RECT` una struttura, che identifica la destinazione.

*pointSrc*<br/>
Struttura `POINT` che indica l'angolo superiore sinistro del rettangolo di origine.

*maschera punto*<br/>
Struttura `POINT` che indica l'angolo superiore sinistro della bitmap della maschera.

*pointDest*<br/>
Riferimento a `POINT` una struttura che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo si applica solo a Windows NT, versioni 4.0 e successive.

## <a name="cimageoperator-hbitmap"></a><a name="operator_hbitmap"></a>CImage::operatore HBITMAP

Utilizzare questo operatore per ottenere l'handle `CImage` GDI di Windows associato dell'oggetto. Questo operatore è un operatore di cast, che supporta l'utilizzo diretto di un oggetto HBITMAP.

## <a name="cimageplgblt"></a><a name="plgblt"></a>CImage::PlgBlt

Esegue un trasferimento a blocchi di bit da un rettangolo in un contesto di dispositivo di origine in un parallelogramma in un contesto di dispositivo di destinazione.

```
BOOL PlgBlt(
    HDC hDestDC,
    const POINT* pPoints,
    HBITMAP hbmMask = NULL) const throw();

BOOL PlgBlt(
    HDC hDestDC,
    const POINT* pPoints,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    HBITMAP hbmMask = NULL,
    int xMask = 0,
    int yMask = 0) const throw();

BOOL PlgBlt(
    HDC hDestDC,
    const POINT* pPoints,
    const RECT& rectSrc,
    HBITMAP hbmMask = NULL,
    const POINT& pointMask = CPoint(0, 0)) const throw();
```

### <a name="parameters"></a>Parametri

*hDestDC (hDestDC)*<br/>
Handle per il contesto di dispositivo di destinazione.

*pPunti*<br/>
Puntatore a una matrice di tre punti nello spazio logico che identifica tre angoli del parallelogramma di destinazione. L'angolo superiore sinistro del rettangolo di origine viene mappato al primo punto della matrice, l'angolo superiore destro al secondo punto della matrice e l'angolo inferiore sinistro al terzo punto. L'angolo inferiore destro del rettangolo di origine viene mappato al quarto punto implicito nel parallelogramma.

*hbmMaschera*<br/>
Handle per una bitmap monocromatica facoltativa utilizzata per mascherare i colori del rettangolo di origine.

*XSrc*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*YSrc*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*NSrcLarghezza*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*NSrcHeight (informazioni in base all'alto in*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*Mascherax*<br/>
Coordinata x dell'angolo superiore sinistro della bitmap monocromatica.

*yMaschera*<br/>
Coordinata y dell'angolo superiore sinistro della bitmap monocromatica.

*rectSrc*<br/>
Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che specifica le coordinate del rettangolo di origine.

*maschera punto*<br/>
Struttura [POINT](/previous-versions/dd162805\(v=vs.85\)) che indica l'angolo superiore sinistro della bitmap della maschera.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se *hbmMask* identifica una bitmap `PlgBit` monocromatica valida, utilizza questa bitmap per mascherare i bit dei dati di colore dal rettangolo di origine.

Questo metodo si applica solo a Windows NT, versioni 4.0 e successive. Per informazioni più dettagliate, vedere [PlgBlt](/windows/win32/api/wingdi/nf-wingdi-plgblt) in Windows SDK.

## <a name="cimagereleasedc"></a><a name="releasedc"></a>CImage::ReleaseDC

Rilascia il contesto di dispositivo.

```
void ReleaseDC() const throw();
```

### <a name="remarks"></a>Osservazioni

Poiché è possibile selezionare una sola bitmap in `ReleaseDC` un contesto di periferica alla volta, è necessario chiamare per ogni chiamata a [GetDC](#getdc).

## <a name="cimagereleasegdiplus"></a><a name="releasegdiplus"></a>Immagine::ReleaseGDIPlus

Rilascia le risorse utilizzate da GDI.

```
void ReleaseGDIPlus() throw();
```

### <a name="remarks"></a>Osservazioni

Questo metodo deve essere chiamato per `CImage` liberare le risorse allocate da un oggetto globale. Vedere [CImage::CImage](#cimage).

## <a name="cimagesave"></a><a name="save"></a>CImage::Salva

Salva un'immagine nel flusso o nel file specificato su disco.

```
HRESULT Save(
    IStream* pStream,
    REFGUID guidFileType) const throw();

HRESULT Save(
    LPCTSTR pszFileName,
    REFGUID guidFileType = GUID_NULL) const throw();
```

### <a name="parameters"></a>Parametri

*pStream (corso)*<br/>
Puntatore a un oggetto COM IStream contenente i dati dell'immagine del file.

*pszFileName*<br/>
Puntatore al nome del file per l'immagine.

*guidFileType (Tipo di file guida)*<br/>
Tipo di file con cui salvare l'immagine. Può essere uno dei valori seguenti:

- `ImageFormatBMP`Immagine bitmap non compressa.

- `ImageFormatPNG`Un'immagine compressa PNG (Portable Network Graphic).

- `ImageFormatJPEG`Immagine compressa JPEG.

- `ImageFormatGIF`Immagine compressa GIF.

> [!NOTE]
> Per un elenco completo delle costanti, vedere Costanti del formato del file di **immagine** in Windows SDK.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per salvare l'immagine utilizzando un nome e un tipo specificati. Se il parametro *guidFileType* non è incluso, l'estensione del nome file verrà utilizzata per determinare il formato dell'immagine. Se non viene fornita alcuna estensione, l'immagine verrà salvata in formato BMP.

## <a name="cimagesetcolortable"></a><a name="setcolortable"></a>CImage::SetColorTable

Imposta i valori di colore rosso, verde e blu (RGB) per un intervallo di voci nella tavolozza della sezione DIB.

```
void SetColorTable(
    UINT iFirstColor,
    UINT nColors,
    const RGBQUAD* prgbColors) throw();
```

### <a name="parameters"></a>Parametri

*IFirstColor (colore)*<br/>
Indice della tabella dei colori della prima voce da impostare.

*nColori*<br/>
Numero di voci della tabella dei colori da impostare.

*prgbColori*<br/>
Puntatore alla matrice di strutture [RGBQUAD](/windows/win32/api/wingdi/ns-wingdi-rgbquad) per impostare le voci della tabella dei colori.

### <a name="remarks"></a>Osservazioni

Questo metodo supporta solo le bitmap della sezione DIB.

## <a name="cimagesetpixel"></a><a name="setpixel"></a>CImage::SetPixel

Imposta il colore di un pixel in una determinata posizione nella bitmap.

```
void SetPixel(int x, int y, COLORREF color) throw();
```

### <a name="parameters"></a>Parametri

*X*<br/>
Posizione orizzontale del pixel da impostare.

*Y*<br/>
Posizione verticale del pixel da impostare.

*Colore*<br/>
Colore impostato per il pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo se le coordinate dei pixel si trovano all'esterno dell'area di ritaglio selezionata.

## <a name="cimagesetpixelindexed"></a><a name="setpixelindexed"></a>CImage::SetPixelIndexed

Imposta il colore del pixel sul colore situato in *iIndex* nella tavolozza dei colori.

```
void SetPixelIndexed(int x, int y, int iIndex) throw();
```

### <a name="parameters"></a>Parametri

*X*<br/>
Posizione orizzontale del pixel da impostare.

*Y*<br/>
Posizione verticale del pixel da impostare.

*Iindex*<br/>
Indice di un colore nella tavolozza dei colori.

## <a name="cimagesetpixelrgb"></a><a name="setpixelrgb"></a>Immagine: :SetPixelRGBCImage::SetPixelRGB

Imposta il pixel nelle posizioni specificate da *x* e *y* sui colori indicati da *r*, *g*e *b*, in un'immagine rossa, verde, blu (RGB).

```
void SetPixelRGB(
    int x,
    int y,
    BYTE r,
    BYTE g,
    BYTE b) throw();
```

### <a name="parameters"></a>Parametri

*X*<br/>
Posizione orizzontale del pixel da impostare.

*Y*<br/>
Posizione verticale del pixel da impostare.

*R*<br/>
L'intensità del colore rosso.

*G*<br/>
L'intensità del colore verde.

*B*<br/>
L'intensità del colore blu.

### <a name="remarks"></a>Osservazioni

I parametri rosso, verde e blu sono rappresentati da un numero compreso tra 0 e 255. Se si impostano tutti e tre i parametri su zero, il colore risultante combinato è nero. Se si impostano tutti e tre i parametri su 255, il colore risultante combinato è bianco.

## <a name="cimagesettransparentcolor"></a><a name="settransparentcolor"></a>CImage::SetTransparentColor

Imposta un colore in una determinata posizione indicizzata come trasparente.

```
LONG SetTransparentColor(LONG iTransparentColor) throw();
```

### <a name="parameters"></a>Parametri

*ITransparentColor (Colore)*<br/>
Indice, in una tavolozza di colori, del colore da impostare su trasparente. Se -1, nessun colore è impostato su trasparente.

### <a name="return-value"></a>Valore restituito

Indice del colore precedentemente impostato come trasparente.

## <a name="cimagestretchblt"></a><a name="stretchblt"></a>Immagine: :StretchBlt

Copia una bitmap dal contesto di dispositivo di origine al contesto di dispositivo corrente.

```
BOOL StretchBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    DWORD dwROP = SRCCOPY) const throw();

BOOL StretchBlt(
    HDC hDestDC,
    const RECT& rectDest,
    DWORD dwROP = SRCCOPY) const throw();

BOOL StretchBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    DWORD dwROP = SRCCOPY) const throw();

BOOL StretchBlt(
    HDC hDestDC,
    const RECT& rectDest,
    const RECT& rectSrc,
    DWORD dwROP = SRCCOPY) const throw();
```

### <a name="parameters"></a>Parametri

*hDestDC (hDestDC)*<br/>
Handle per il contesto di dispositivo di destinazione.

*xDest (informazioni in base al tsome*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*NDestWidth (larghezza in stato infuso)*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight (informazioni in base a un'unità incui*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*dwROP*<br/>
Operazione raster da eseguire. I codici di operazione raster definiscono esattamente come combinare i bit dell'origine, la destinazione e il modello (come definito dal pennello attualmente selezionato) per formare la destinazione. Vedere [BitBlt](/windows/win32/api/wingdi/nf-wingdi-bitblt) in Windows SDK per un elenco di altri codici di funzionamento raster e le relative descrizioni.

*rectDest (rectDest)*<br/>
Riferimento a una struttura [RECT,](/previous-versions/dd162897\(v=vs.85\)) che identifica la destinazione.

*XSrc*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*YSrc*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*NSrcLarghezza*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*NSrcHeight (informazioni in base all'alto in*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectSrc*<br/>
Riferimento a `RECT` una struttura, che identifica l'origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [StretchBlt](/windows/win32/api/wingdi/nf-wingdi-stretchblt) in Windows SDK.

## <a name="cimagetransparentblt"></a><a name="transparentblt"></a>CImage::TransparentBlt

Copia una bitmap dal contesto di dispositivo di origine al contesto di dispositivo corrente.

```
BOOL TransparentBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    UINT crTransparent = CLR_INVALID) const throw();

BOOL TransparentBlt(
    HDC hDestDC,
    const RECT& rectDest,
    UINT crTransparent = CLR_INVALID) const throw();

BOOL TransparentBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    UINT crTransparent = CLR_INVALID) const throw();

BOOL TransparentBlt(
    HDC hDestDC,
    const RECT& rectDest,
    const RECT& rectSrc,
    UINT crTransparent = CLR_INVALID) const throw();
```

### <a name="parameters"></a>Parametri

*hDestDC (hDestDC)*<br/>
Handle per il contesto di dispositivo di destinazione.

*xDest (informazioni in base al tsome*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*NDestWidth (larghezza in stato infuso)*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight (informazioni in base a un'unità incui*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*crTransparent (Trasparente)*<br/>
Colore nella bitmap di origine da trattare come trasparente. Per impostazione predefinita, CLR_INVALID, che indica che deve essere utilizzato il colore attualmente impostato come colore trasparente dell'immagine.

*rectDest (rectDest)*<br/>
Riferimento a una struttura [RECT,](/previous-versions/dd162897\(v=vs.85\)) che identifica la destinazione.

*XSrc*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*YSrc*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*NSrcLarghezza*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*NSrcHeight (informazioni in base all'alto in*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectSrc*<br/>
Riferimento a `RECT` una struttura, che identifica l'origine.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario FALSE.

### <a name="remarks"></a>Osservazioni

`TransparentBlt`è supportato per le bitmap di origine di 4 bit per pixel e 8 bit per pixel. Utilizzare [CImage::AlphaBlend](#alphablend) per specificare bitmap a 32 bit per pixel con trasparenza.

### <a name="example"></a>Esempio

```cpp
// Performs a transparent blit from the source image to the destination
// image using the images' current transparency settings
BOOL TransparentBlt(CImage* pSrcImage, CImage* pDstImage,
       int xDest, int yDest, int nDestWidth, int nDestHeight)
{
    HDC hDstDC = NULL;
    BOOL bResult;

    if(pSrcImage == NULL || pDstImage == NULL)
    {
        // Invalid parameter
        return FALSE;
    }

    // Obtain a DC to the destination image
    hDstDC = pDstImage->GetDC();
    // Perform the blit
    bResult = pSrcImage->TransparentBlt(hDstDC, xDest, yDest, nDestWidth, nDestHeight);

    // Release the destination DC
    pDstImage->ReleaseDC();

    return bResult;
}
```

## <a name="see-also"></a>Vedere anche

[Esempio MMXSwarm](../../overview/visual-cpp-samples.md)<br/>
[Esempio SimpleImage](../../overview/visual-cpp-samples.md)<br/>
[Bitmap indipendenti dal dispositivoDevice-Independent Bitmaps](/windows/win32/gdi/device-independent-bitmaps)<br/>
[CreateDIBSection](/windows/win32/api/wingdi/nf-wingdi-createdibsection)<br/>
[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)<br/>
[Bitmap indipendenti dal dispositivoDevice-Independent Bitmaps](/windows/win32/gdi/device-independent-bitmaps)<br/>
[CreateDIBSection](/windows/win32/api/wingdi/nf-wingdi-createdibsection)
