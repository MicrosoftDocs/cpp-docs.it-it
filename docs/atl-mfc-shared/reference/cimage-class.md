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
ms.openlocfilehash: a79012e7f2750a4eab12318ffcd52e5e15c30c83
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825605"
---
# <a name="cimage-class"></a>Classe CImage

`CImage`offre supporto ottimizzato per le bitmap, inclusa la possibilità di caricare e salvare immagini in formati JPEG, GIF, BMP e Portable Network Graphics (PNG).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CImage
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImage:: CImage](#cimage)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImage:: AlphaBlend](#alphablend)|Visualizza le bitmap con pixel trasparenti o semitrasparenti.|
|[CImage:: Connetti](#attach)|Connette un HBITMAP a un `CImage` oggetto. Può essere usato con bitmap di sezione non DIB o bitmap di sezione DIB.|
|[CImage:: BitBlt](#bitblt)|Copia una bitmap dal contesto di dispositivo di origine a questo contesto di dispositivo corrente.|
|[CImage:: create](#create)|Crea una bitmap di sezione DIB e la collega all'oggetto costruito `CImage` in precedenza.|
|[CImage:: CreateEx](#createex)|Crea una bitmap di sezione DIB (con parametri aggiuntivi) e la associa all'oggetto costruito `CImage` in precedenza.|
|[CImage::D estroy](#destroy)|Scollega la bitmap dall' `CImage` oggetto ed elimina la bitmap.|
|[CImage::D etach](#detach)|Scollega la bitmap da un `CImage` oggetto.|
|[CImage::D RAW](#draw)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione. `Draw`estende o comprime la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario, e gestisce la fusione alfa e i colori trasparenti.|
|[CImage:: GetBits](#getbits)|Recupera un puntatore ai valori effettivi dei pixel della bitmap.|
|[CImage:: GetBPP](#getbpp)|Recupera i bit per pixel.|
|[CImage:: GetColorTable](#getcolortable)|Recupera i valori di colore rosso, verde, blu (RGB) da un intervallo di voci nella tabella dei colori.|
|[CImage:: GetDC](#getdc)|Recupera il contesto di dispositivo in cui è selezionata la bitmap corrente.|
|[CImage:: GetExporterFilterString](#getexporterfilterstring)|Trova i formati di immagine disponibili e le relative descrizioni.|
|[CImage:: GetHeight](#getheight)|Recupera l'altezza dell'immagine corrente in pixel.|
|[CImage:: GetImporterFilterString](#getimporterfilterstring)|Trova i formati di immagine disponibili e le relative descrizioni.|
|[CImage:: GetMaxColorTableEntries](#getmaxcolortableentries)|Recupera il numero massimo di voci nella tabella dei colori.|
|[CImage:: GetPitch](#getpitch)|Recupera il passo dell'immagine corrente, in byte.|
|[CImage:: GetPixel](#getpixel)|Recupera il colore del pixel specificato da *x* e *y*.|
|[CImage:: GetPixelAddress](#getpixeladdress)|Recupera l'indirizzo di un determinato pixel.|
|[CImage:: GetTransparentColor](#gettransparentcolor)|Recupera la posizione del colore trasparente nella tabella dei colori.|
|[CImage:: GetWidth](#getwidth)|Recupera la larghezza dell'immagine corrente in pixel.|
|[CImage:: IsDIBSection](#isdibsection)|Determina se la bitmap collegata è una sezione DIB.|
|[CImage:: inindexed](#isindexed)|Indica che viene eseguito il mapping dei colori di una bitmap a una tavolozza indicizzata.|
|[CImage:: IsNull](#isnull)|Indica se una bitmap di origine è attualmente caricata.|
|[CImage:: IsTransparencySupported](#istransparencysupported)|Indica se l'applicazione supporta le bitmap trasparenti.|
|[CImage:: Load](#load)|Carica un'immagine dal file specificato.|
|[CImage:: LoadFromResource](#loadfromresource)|Carica un'immagine dalla risorsa specificata.|
|[CImage:: MaskBlt](#maskblt)|Combina i dati relativi al colore per le bitmap di origine e di destinazione utilizzando la maschera e l'operazione raster specificate.|
|[CImage::P lgBlt](#plgblt)|Esegue un trasferimento a blocchi di bit da un rettangolo in un contesto di dispositivo di origine in un parallelogramma in un contesto di dispositivo di destinazione.|
|[CImage:: ReleaseDC](#releasedc)|Rilascia il contesto di dispositivo recuperato con [CImage:: GetDC](#getdc).|
|[CImage:: ReleaseGDIPlus](#releasegdiplus)|Rilascia le risorse utilizzate da GDI+. Deve essere chiamato per liberare risorse create da un oggetto `CImage` globale.|
|[CImage:: Save](#save)|Salva un'immagine come tipo specificato. `Save`Impossibile specificare le opzioni per le immagini.|
|[CImage:: SetColorTable](#setcolortable)|Imposta i valori di colore rosso, verde, blu) in un intervallo di voci nella tabella dei colori della sezione DIB.|
|[CImage:: sepixel](#setpixel)|Imposta il pixel in corrispondenza delle coordinate specificate sul colore specificato.|
|[CImage:: SetPixelIndexed](#setpixelindexed)|Imposta il pixel in corrispondenza delle coordinate specificate sul colore in corrispondenza dell'indice specificato della tavolozza.|
|[CImage:: SetPixelRGB](#setpixelrgb)|Imposta il pixel in corrispondenza delle coordinate specificate sul valore rosso, verde, blu (RGB) specificato.|
|[CImage:: SetTransparentColor](#settransparentcolor)|Imposta l'indice del colore da trattare come trasparente. Un solo colore in una tavolozza può essere trasparente.|
|[CImage:: StretchBlt](#stretchblt)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione, allungando o comprimendo la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario.|
|[CImage:: TransparentBlt](#transparentblt)|Copia una bitmap con colore trasparente dal contesto del dispositivo di origine a questo contesto di dispositivo corrente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImage:: operator HBITMAP](#operator_hbitmap)|Restituisce l'handle di Windows collegato all' `CImage` oggetto.|

## <a name="remarks"></a>Osservazioni

`CImage`accetta le bitmap che sono sezioni di bitmap indipendenti dal dispositivo (DIB); Tuttavia, è possibile usare [create](#create) o [CImage:: Load](#load) solo con le sezioni DIB. È possibile alleghi una bitmap di sezione non DIB a `CImage` un oggetto utilizzando [Connetti](#attach), ma non è possibile utilizzare i `CImage` metodi seguenti, che supportano solo bitmap di sezione DIB:

- [GetBits](#getbits)

- [GetColorTable](#getcolortable)

- [GetMaxColorTableEntries](#getmaxcolortableentries)

- [GetPitch](#getpitch)

- [GetPixelAddress](#getpixeladdress)

- [IsIndexed](#isindexed)

- [SetColorTable](#setcolortable)

Per determinare se una bitmap collegata è una sezione DIB, chiamare [IsDibSection](#isdibsection).

> [!NOTE]
> In Visual Studio .NET 2003 questa classe mantiene un conteggio del numero di `CImage` oggetti creati. Ogni volta che il conteggio passa a 0, `GdiplusShutdown` la funzione viene chiamata automaticamente per rilasciare le risorse utilizzate da GDI+. Ciò garantisce che tutti `CImage` gli oggetti creati direttamente o indirettamente dalle DLL vengano sempre eliminati correttamente e `GdiplusShutdown` che non vengano chiamati `DllMain`da.

> [!NOTE]
> Non è `CImage` consigliabile usare gli oggetti globali in una dll. Se è necessario usare un oggetto globale `CImage` in una dll, chiamare [CImage:: ReleaseGDIPlus](#releasegdiplus) per rilasciare in modo esplicito le risorse usate da GDI+.

`CImage`non può essere selezionato in un nuovo [CDC](../../mfc/reference/cdc-class.md). `CImage`Crea il proprio HDC per l'immagine. Poiché un HBITMAP può essere selezionato solo in un HDC alla volta, il HBITMAP associato a `CImage` non può essere selezionato in un altro HDC. Se è necessario un CDC, recuperare l'HDC da `CImage` e assegnarlo a [CDC:: FromHandle](../../mfc/reference/cdc-class.md#fromhandle).

## <a name="example"></a>Esempio

```cpp
// Get a CDC for the image
CDC* pDC = CDC::FromHandle(m_myImage.GetDC());

// Use pDC here
pDC->Rectangle(0, 40, 100, 50);
m_myImage.ReleaseDC();
```

Quando si usa `CImage` in un progetto MFC, tenere presente quali funzioni membro nel progetto prevedono un puntatore a un oggetto [CBitmap](../../mfc/reference/cbitmap-class.md) . Se si `CImage` vuole usare con una funzione di questo tipo, ad esempio [CMenu:: AppendMenu](../../mfc/reference/cmenu-class.md#appendmenu), usare [CBitmap:: FromHandle](../../mfc/reference/cbitmap-class.md#fromhandle), passare `CImage` il HBITMAP e usare l'oggetto `CBitmap*`restituito.

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

Tramite `CImage`, è possibile accedere ai bit effettivi di una sezione DIB. È possibile usare un `CImage` oggetto in qualsiasi punto in cui in precedenza è stata usata una sezione Win32 HBITMAP o DIB.

È possibile utilizzare `CImage` da MFC o ATL.

> [!NOTE]
> Quando si crea un progetto utilizzando `CImage`, è necessario definire `CString` prima di includere *atlimage. h*. Se il progetto usa ATL senza MFC, includere *atlstr. h* prima di includere *atlimage. h*. Se il progetto Usa MFC (o se è un progetto ATL con supporto MFC), includere *afxstr. h* prima di includere *atlimage. h*.
>
> Analogamente, è necessario includere *atlimage. h* prima di includere *Atlimpl. cpp*. Per eseguire questa operazione in modo semplice, includere *atlimage. h* in *PCH.* h (*stdafx. h* in Visual Studio 2017 e versioni precedenti).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlimage. h

## <a name="cimagealphablend"></a><a name="alphablend"></a>CImage:: AlphaBlend

Visualizza le bitmap con pixel trasparenti o semitrasparenti.

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

*hDestDC*<br/>
Handle per il contesto di dispositivo di destinazione.

*xDest*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*bSrcAlpha*<br/>
Valore di trasparenza alfa da utilizzare sull'intera bitmap di origine. Il valore predefinito 0xFF (255) presuppone che l'immagine sia opaca e che si desideri utilizzare solo i valori alfa per pixel.

*bBlendOp*<br/>
Funzione di fusione alfa per le bitmap di origine e di destinazione, un valore alfa globale da applicare all'intera bitmap di origine e informazioni sul formato per la bitmap di origine. Le funzioni Blend di origine e di destinazione sono attualmente limitate ai AC_SRC_OVER.

*pointDest*<br/>
Riferimento a una struttura di [punti](/windows/win32/api/windef/ns-windef-point) che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.

*nDestWidth*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*xSrc*<br/>
Coordinata x logica dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
Coordinata y logica dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectDest*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) , che identifica la destinazione.

*rectSrc*<br/>
Riferimento a una `RECT` struttura che identifica l'origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Le bitmap Alpha-Blend supportano la fusione di colori in base ai singoli pixel.

Quando *bBlendOp* è impostato sul valore predefinito di AC_SRC_OVER, la bitmap di origine viene posizionata sulla bitmap di destinazione in base ai valori alfa dei pixel di origine.

## <a name="cimageattach"></a><a name="attach"></a>CImage:: Connetti

Connette *HBITMAP* a un `CImage` oggetto.

```cpp
void Attach(HBITMAP hBitmap, DIBOrientation eOrientation = DIBOR_DEFAULT) throw();
```

### <a name="parameters"></a>Parametri

*hBitmap*<br/>
Handle per un HBITMAP.

*eOrientation*<br/>
Specifica l'orientamento della bitmap. Può essere uno dei seguenti:

- DIBOR_DEFAULT l'orientamento della bitmap è determinato dal sistema operativo.

- DIBOR_BOTTOMUP le righe della bitmap sono in ordine inverso. In questo modo [, CImage:: GetBits](#getbits) restituisce un puntatore vicino alla fine del buffer bitmap e [CImage:: GetPitch](#getpitch) per restituire un numero negativo.

- DIBOR_TOPDOWN le righe della bitmap si trovano nell'ordine dall'alto verso il basso. In questo modo [, CImage:: GetBits](#getbits) restituisce un puntatore al primo byte del buffer bitmap e [CImage:: GetPitch](#getpitch) per restituire un numero positivo.

### <a name="remarks"></a>Osservazioni

La bitmap può essere una bitmap di sezione non DIB o una bitmap di sezione DIB. Vedere [IsDibSection](#isdibsection) per un elenco di metodi che è possibile usare solo con le bitmap della sezione DIB.

## <a name="cimagebitblt"></a><a name="bitblt"></a>CImage:: BitBlt

Copia una bitmap dal contesto di dispositivo di origine a questo contesto di dispositivo corrente.

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

*hDestDC*<br/>
HDC di destinazione.

*xDest*<br/>
Coordinata x logica dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y logica dell'angolo superiore sinistro del rettangolo di destinazione.

*dwROP*<br/>
Operazione raster da eseguire. I codici delle operazioni raster definiscono esattamente come combinare i bit dell'origine, della destinazione e del criterio (come definito dal pennello attualmente selezionato) per formare la destinazione. Vedere [BitBlt](/windows/win32/api/wingdi/nf-wingdi-bitblt) nel Windows SDK per un elenco di altri codici delle operazioni raster e le relative descrizioni.

*pointDest*<br/>
Struttura [Point](/windows/win32/api/windef/ns-windef-point) che indica l'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*xSrc*<br/>
Coordinata x logica dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
Coordinata y logica dell'angolo superiore sinistro del rettangolo di origine.

*rectDest*<br/>
Struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che indica il rettangolo di destinazione.

*pointSrc*<br/>
`POINT` Struttura che indica l'angolo superiore sinistro del rettangolo di origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [BitBlt](/windows/win32/api/wingdi/nf-wingdi-bitblt) nel Windows SDK.

## <a name="cimagecimage"></a><a name="cimage"></a>CImage:: CImage

Costruisce un oggetto `CImage`.

```
CImage() throw();
```

### <a name="remarks"></a>Osservazioni

Una volta creato l'oggetto, chiamare [create](#create), [Load](#load), [LoadFromResource](#loadfromresource)o [Connetti](#attach) per alleghiare una bitmap all'oggetto.

**Nota** In Visual Studio questa classe mantiene un conteggio del numero di `CImage` oggetti creati. Ogni volta che il conteggio passa a 0, `GdiplusShutdown` la funzione viene chiamata automaticamente per rilasciare le risorse utilizzate da GDI+. Ciò garantisce che tutti `CImage` gli oggetti creati direttamente o indirettamente dalle DLL vengano sempre eliminati correttamente e `GdiplusShutdown` che non vengano chiamati da DllMain.

Non è `CImage` consigliabile usare gli oggetti globali in una dll. Se è necessario usare un oggetto globale `CImage` in una dll, chiamare [CImage:: ReleaseGDIPlus](#releasegdiplus) per rilasciare in modo esplicito le risorse usate da GDI+.

## <a name="cimagecreate"></a><a name="create"></a>CImage:: create

Crea una `CImage` bitmap e la collega all'oggetto costruito `CImage` in precedenza.

```
BOOL Create(
    int nWidth,
    int nHeight,
    int nBPP,
    DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*nWidth*<br/>
Larghezza della `CImage` bitmap, espressa in pixel.

*nHeight*<br/>
Altezza della `CImage` bitmap, espressa in pixel. Se *nHeight* è un valore positivo, la bitmap è una DIB dal basso verso l'alto e l'origine è l'angolo in basso a sinistra. Se *nHeight* è negativo, la bitmap è un DIB dall'alto verso il basso e l'origine è l'angolo superiore sinistro.

*nBPP*<br/>
Numero di bit per pixel nella bitmap. In genere 4, 8, 16, 24 o 32. Può essere 1 per le bitmap o le maschere monocromatiche.

*dwFlags*<br/>
Specifica se l'oggetto bitmap ha un canale alfa. Può essere una combinazione di zero o più dei valori seguenti:

- *createAlphaChannel* Può essere usato solo se *NBPP* è 32 e *eCompression* è BI_RGB. Se specificato, l'immagine creata ha un valore alfa (trasparenza) per ogni pixel, memorizzato nel quarto byte di ogni pixel (non usato in un'immagine a 32 bit non Alpha). Questo canale alfa viene usato automaticamente quando si chiama [CImage:: AlphaBlend](#alphablend).

> [!NOTE]
> Nelle chiamate a [CImage::D RAW](#draw), le immagini con un canale alfa vengono automaticamente combinate alla destinazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="cimagecreateex"></a><a name="createex"></a>CImage:: CreateEx

Crea una `CImage` bitmap e la collega all'oggetto costruito `CImage` in precedenza.

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

*nWidth*<br/>
Larghezza della `CImage` bitmap, espressa in pixel.

*nHeight*<br/>
Altezza della `CImage` bitmap, espressa in pixel. Se *nHeight* è un valore positivo, la bitmap è una DIB dal basso verso l'alto e l'origine è l'angolo in basso a sinistra. Se *nHeight* è negativo, la bitmap è un DIB dall'alto verso il basso e l'origine è l'angolo superiore sinistro.

*nBPP*<br/>
Numero di bit per pixel nella bitmap. In genere 4, 8, 16, 24 o 32. Può essere 1 per le bitmap o le maschere monocromatiche.

*eCompression*<br/>
Specifica il tipo di compressione per una bitmap compressa dal basso verso l'alto. I possibili valori sono i seguenti:

- BI_RGB il formato non è compresso. L'impostazione di questo valore `CImage::CreateEx` quando si chiama è `CImage::Create`equivalente alla chiamata a.

- BI_BITFIELDS il formato non è compresso e la tabella dei colori è costituita da tre maschere colori DWORD che specificano rispettivamente i componenti rosso, verde e blu di ogni pixel. Questo valore è valido se usato con bitmap a 16 e 32 BPP.

*pdwBitfields*<br/>
Usato solo se *eCompression* è impostato su BI_BITFIELDS; in caso contrario, deve essere null. Puntatore a una matrice di tre maschere di bit DWORD, che specificano i bit di ogni pixel utilizzati rispettivamente per i componenti rosso, verde e blu del colore. Per informazioni sulle restrizioni per campi, vedere [BITMAPINFOHEADER](/windows/win32/api/wingdi/ns-wingdi-bitmapinfoheader) nel Windows SDK.

*dwFlags*<br/>
Specifica se l'oggetto bitmap ha un canale alfa. Può essere una combinazione di zero o più dei valori seguenti:

- *createAlphaChannel* Può essere usato solo se *NBPP* è 32 e *eCompression* è BI_RGB. Se specificato, l'immagine creata ha un valore alfa (trasparenza) per ogni pixel, memorizzato nel quarto byte di ogni pixel (non usato in un'immagine a 32 bit non Alpha). Questo canale alfa viene usato automaticamente quando si chiama [CImage:: AlphaBlend](#alphablend).

   > [!NOTE]
   > Nelle chiamate a [CImage::D RAW](#draw), le immagini con un canale alfa vengono automaticamente combinate alla destinazione.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione ha esito positivo. In caso contrario, FALSE.

### <a name="example"></a>Esempio

L'esempio seguente crea una bitmap da 100x100 pixel, usando 16 bit per codificare ogni pixel. In un determinato pixel a 16 bit, BITS 0-3 codifica il componente rosso, BITS 4-7 Encode Green e bits 8-11 codificano Blue. I rimanenti 4 bit non vengono usati.

```cpp
DWORD adwBitmasks[3] = { 0x0000000f, 0x000000f0, 0x00000f00 };
m_myImage.CreateEx(100, 100, 16, BI_BITFIELDS, adwBitmasks, 0);
```

## <a name="cimagedestroy"></a><a name="destroy"></a>CImage::D estroy

Scollega la bitmap dall' `CImage` oggetto ed elimina la bitmap.

```cpp
void Destroy() throw();
```

## <a name="cimagedetach"></a><a name="detach"></a>CImage::D etach

Scollega una bitmap da un `CImage` oggetto.

```
HBITMAP Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Handle per la bitmap scollegato o NULL se non è collegata alcuna bitmap.

## <a name="cimagedraw"></a><a name="draw"></a>CImage::D RAW

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

*hDestDC*<br/>
Handle per il contesto di dispositivo di destinazione.

*xDest*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*xSrc*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectDest*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) , che identifica la destinazione.

*rectSrc*<br/>
Riferimento a una `RECT` struttura che identifica l'origine.

*pointDest*<br/>
Riferimento a una struttura di [punti](/windows/win32/api/windef/ns-windef-point) che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

`Draw`esegue la stessa operazione di [StretchBlt](#stretchblt), a meno che l'immagine non contenga un colore trasparente o un canale alfa. In tal caso, `Draw` esegue la stessa operazione di [TransparentBlt](#transparentblt) o [AlphaBlend](#alphablend) secondo le esigenze.

Per le versioni `Draw` di che non specificano un rettangolo di origine, l'intera immagine di origine è l'impostazione predefinita. Per la versione di `Draw` che non specifica una dimensione per il rettangolo di destinazione, la dimensione dell'immagine di origine è l'impostazione predefinita e non si verifica alcuna estensione o compattazione.

## <a name="cimagegetbits"></a><a name="getbits"></a>CImage:: GetBits

Recupera un puntatore ai valori di bit effettivi di un determinato pixel in una bitmap.

```cpp
void* GetBits() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer bitmap. Se la bitmap è una DIB dal basso in alto, il puntatore punta alla fine del buffer. Se la bitmap è una DIB dall'alto verso il basso, il puntatore punta al primo byte del buffer.

### <a name="remarks"></a>Osservazioni

Utilizzando questo puntatore, insieme al valore restituito da [GetPitch](#getpitch), è possibile individuare e modificare i singoli pixel in un'immagine.

> [!NOTE]
> Questo metodo supporta solo bitmap di sezione DIB; di conseguenza, si accede ai pixel di `CImage` un oggetto allo stesso modo dei pixel di una sezione DIB. Il puntatore restituito punta al pixel nella posizione (0,0).

## <a name="cimagegetbpp"></a><a name="getbpp"></a>CImage:: GetBPP

Recupera il valore bits per pixel.

```
int GetBPP() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero di bit per pixel.

### <a name="remarks"></a>Osservazioni

Questo valore determina il numero di bit che definiscono ogni pixel e il numero massimo di colori nella bitmap.

I bit per pixel sono in genere 1, 4, 8, 16, 24 o 32. Per ulteriori `biBitCount` informazioni su questo valore, vedere il membro di [BITMAPINFOHEADER](/windows/win32/api/wingdi/ns-wingdi-bitmapinfoheader) nel Windows SDK.

## <a name="cimagegetcolortable"></a><a name="getcolortable"></a>CImage:: GetColorTable

Recupera i valori di colore rosso, verde, blu (RGB) da un intervallo di voci nella tavolozza della sezione DIB.

```cpp
void GetColorTable(
    UINT iFirstColor,
    UINT nColors,
    RGBQUAD* prgbColors) const throw();
```

### <a name="parameters"></a>Parametri

*iFirstColor*<br/>
Indice della tabella dei colori della prima voce da recuperare.

*nColors*<br/>
Numero di voci della tabella dei colori da recuperare.

*prgbColors*<br/>
Puntatore alla matrice di strutture [RGBQUAD](/windows/win32/api/wingdi/ns-wingdi-rgbquad) per recuperare le voci della tabella dei colori.

## <a name="cimagegetdc"></a><a name="getdc"></a>CImage:: GetDC

Recupera il contesto di dispositivo in cui è attualmente selezionata l'immagine.

```
HDC GetDC() const throw();
```

### <a name="return-value"></a>Valore restituito

Handle per un contesto di dispositivo.

### <a name="remarks"></a>Osservazioni

Per ogni chiamata a `GetDC`, è necessario avere una chiamata successiva a [ReleaseDC](#releasedc).

## <a name="cimagegetexporterfilterstring"></a><a name="getexporterfilterstring"></a>CImage:: GetExporterFilterString

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

*strExporters*<br/>
Riferimento a un oggetto `CSimpleString`. Vedere **osservazioni** Per ulteriori informazioni.

*aguidFileTypes*<br/>
Matrice di GUID, con ogni elemento corrispondente a uno dei tipi di file nella stringa. Nell'esempio riportato di *pszAllFilesDescription* seguito, pszAllFilesDescription riportato *aguidFileTypes*[0] è GUID_NULL e i valori della matrice rimanenti sono i formati di file di immagine supportati dal sistema operativo corrente.

> [!NOTE]
> Per un elenco completo di costanti, vedere **costanti del formato del file di immagine** nel Windows SDK.

*pszAllFilesDescription riportato*<br/>
Se questo parametro non è NULL, la stringa di filtro disporrà di un filtro aggiuntivo all'inizio dell'elenco. Questo filtro avrà il valore corrente di *pszAllFilesDescription riportato* per la descrizione e accetterà i file di qualsiasi estensione supportata da qualsiasi altro esportatore nell'elenco.

Ad esempio:

```cpp
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any exporter.
CImage::GetExporterFilterString(
    strExporters, aguidFileTypes,
_T("All Image Files"));
```

*dwExclude*<br/>
Set di flag di bit che specificano i tipi di file da escludere dall'elenco. I flag consentiti sono:

- `excludeGIF`= 0x01 esclude i file GIF.

- `excludeBMP`= 0x02 esclude i file BMP (bitmap di Windows).

- `excludeEMF`= 0x04 esclude i file EMF (Enhanced Metafile).

- `excludeWMF`= 0x08 esclude i file WMF (Windows Metafile).

- `excludeJPEG`= 0x10 esclude i file JPEG.

- `excludePNG`= 0x20 esclude i file PNG.

- `excludeTIFF`= 0x40 esclude i file TIFF.

- `excludeIcon`= 0x80 esclude i file ICO (icona di Windows).

- `excludeOther`= 0x80000000 esclude qualsiasi altro tipo di file non elencato sopra.

- `excludeDefaultLoad`= 0 per il caricamento, tutti i tipi di file sono inclusi per impostazione predefinita

- `excludeDefaultSave` = `excludeIcon &#124; excludeEMF &#124; excludeWMF`Per il salvataggio, questi file vengono esclusi per impostazione predefinita perché in genere presentano requisiti speciali.

*chSeparator*<br/>
Separatore usato tra i formati di immagine. Vedere **osservazioni** Per ulteriori informazioni.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

È possibile passare la stringa di formato risultante all'oggetto [CFILEDIALOG](../../mfc/reference/cfiledialog-class.md) MFC per esporre le estensioni di file dei formati di immagine disponibili nella finestra di dialogo Salva con nome.

Il formato del parametro *strExporter* è il seguente:

file description0&#124;\*. ext0&#124;filedescription1&#124;\*. EXT1&#124;... Descrizione file *n*&#124;\*. ext *n*&#124;&#124;

dove ' &#124;' è il carattere separatore specificato `chSeparator`da. Ad esempio:

`"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`

Se si passa questa stringa a un oggetto MFC `CFileDialog` , utilizzare il separatore predefinito ' &#124;'. Usare il separatore null ' \ 0' se si passa questa stringa a una finestra di dialogo Salva file comune.

## <a name="cimagegetheight"></a><a name="getheight"></a>CImage:: GetHeight

Recupera l'altezza, in pixel, di un'immagine.

```
int GetHeight() const throw();
```

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, di un'immagine.

## <a name="cimagegetimporterfilterstring"></a><a name="getimporterfilterstring"></a>CImage:: GetImporterFilterString

Trova i formati di immagine disponibili per il caricamento di immagini.

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
Matrice di GUID, con ogni elemento corrispondente a uno dei tipi di file nella stringa. Nell'esempio di *pszAllFilesDescription riportato* riportato di seguito, *aguidFileTypes*[0] è GUID_NULL con i valori di matrice rimanenti sono i formati di file di immagine supportati dal sistema operativo corrente.

> [!NOTE]
> Per un elenco completo di costanti, vedere **costanti del formato del file di immagine** nel Windows SDK.

*pszAllFilesDescription riportato*<br/>
Se questo parametro non è NULL, la stringa di filtro disporrà di un filtro aggiuntivo all'inizio dell'elenco. Questo filtro avrà il valore corrente di *pszAllFilesDescription riportato* per la descrizione e accetterà i file di qualsiasi estensione supportata da qualsiasi altro esportatore nell'elenco.

Ad esempio:

```cpp
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any importer.
CImage::GetImporterFilterString(
    strImporters, aguidFileTypes,
_T("All Image Files"));
```

*dwExclude*<br/>
Set di flag di bit che specificano i tipi di file da escludere dall'elenco. I flag consentiti sono:

- `excludeGIF`= 0x01 esclude i file GIF.

- `excludeBMP`= 0x02 esclude i file BMP (bitmap di Windows).

- `excludeEMF`= 0x04 esclude i file EMF (Enhanced Metafile).

- `excludeWMF`= 0x08 esclude i file WMF (Windows Metafile).

- `excludeJPEG`= 0x10 esclude i file JPEG.

- `excludePNG`= 0x20 esclude i file PNG.

- `excludeTIFF`= 0x40 esclude i file TIFF.

- `excludeIcon`= 0x80 esclude i file ICO (icona di Windows).

- `excludeOther`= 0x80000000 esclude qualsiasi altro tipo di file non elencato sopra.

- `excludeDefaultLoad`= 0 per il caricamento, tutti i tipi di file sono inclusi per impostazione predefinita

- `excludeDefaultSave` = `excludeIcon &#124; excludeEMF &#124; excludeWMF`Per il salvataggio, questi file vengono esclusi per impostazione predefinita perché in genere presentano requisiti speciali.

*chSeparator*<br/>
Separatore usato tra i formati di immagine. Vedere **osservazioni** Per ulteriori informazioni.

### <a name="remarks"></a>Osservazioni

È possibile passare la stringa di formato risultante all'oggetto [CFILEDIALOG](../../mfc/reference/cfiledialog-class.md) MFC per esporre le estensioni di file dei formati di immagine disponibili nella finestra di dialogo **Apri file** .

Il formato del parametro *strImporter* è il seguente:

file description0&#124;\*. ext0&#124;filedescription1&#124;\*. EXT1&#124;... Descrizione file *n*&#124;\*. ext *n*&#124;&#124;

dove ' &#124;' è il carattere separatore specificato da *chSeparator*. Ad esempio:

`"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`

Se si passa questa stringa a un oggetto MFC `CFileDialog` , utilizzare il separatore predefinito ' &#124;'. Se si passa questa stringa a una finestra di dialogo **Apri file** comune, utilizzare il separatore null ' \ 0'.

## <a name="cimagegetmaxcolortableentries"></a><a name="getmaxcolortableentries"></a>CImage:: GetMaxColorTableEntries

Recupera il numero massimo di voci nella tabella dei colori.

```
int GetMaxColorTableEntries() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero di voci nella tabella dei colori.

### <a name="remarks"></a>Osservazioni

Questo metodo supporta solo bitmap di sezione DIB.

## <a name="cimagegetpitch"></a><a name="getpitch"></a>CImage:: GetPitch

Recupera il passo di un'immagine.

```
int GetPitch() const throw();
```

### <a name="return-value"></a>Valore restituito

Il passo dell'immagine. Se il valore restituito è negativo, la bitmap è una DIB dal basso verso l'alto e l'origine è l'angolo inferiore sinistro. Se il valore restituito è positivo, la bitmap è una DIB dall'alto verso il basso e la relativa origine è l'angolo superiore sinistro.

### <a name="remarks"></a>Osservazioni

Il pitch è la distanza, in byte, tra due indirizzi di memoria che rappresentano l'inizio di una riga bitmap e l'inizio della riga bitmap successiva. Poiché il pitch viene misurato in byte, il passo di un'immagine consente di determinare il formato pixel. Il pitch può includere anche memoria aggiuntiva, riservata per la bitmap.

Usare `GetPitch` with [GetBits](#getbits) per trovare i singoli pixel di un'immagine.

> [!NOTE]
> Questo metodo supporta solo bitmap di sezione DIB.

## <a name="cimagegetpixel"></a><a name="getpixel"></a>CImage:: GetPixel

Recupera il colore del pixel nella posizione specificata da *x* e *y*.

```
COLORREF GetPixel(int x, int y) const throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Coordinata x del pixel.

*y*<br/>
Coordinata y del pixel.

### <a name="return-value"></a>Valore restituito

Valore rosso, verde, blu (RGB) del pixel. Se il pixel è esterno all'area di ritaglio corrente, il valore restituito viene CLR_INVALID.

## <a name="cimagegetpixeladdress"></a><a name="getpixeladdress"></a>CImage:: GetPixelAddress

Recupera l'indirizzo esatto di un pixel.

```cpp
void* GetPixelAddress(int x, int y) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Coordinata x del pixel.

*y*<br/>
Coordinata y del pixel.

### <a name="remarks"></a>Osservazioni

L'indirizzo viene determinato in base alle coordinate di un pixel, al passo della bitmap e ai bit per pixel.

Per i formati con meno di 8 bit per pixel, questo metodo restituisce l'indirizzo del byte contenente il pixel. Se, ad esempio, il formato dell'immagine ha 4 bit per `GetPixelAddress` pixel, restituisce l'indirizzo del primo pixel nel byte ed è necessario calcolare per 2 pixel per byte.

> [!NOTE]
> Questo metodo supporta solo bitmap di sezione DIB.

## <a name="cimagegettransparentcolor"></a><a name="gettransparentcolor"></a>CImage:: GetTransparentColor

Recupera la posizione indicizzata del colore trasparente nella tavolozza dei colori.

```
LONG GetTransparentColor() const throw();
```

### <a name="return-value"></a>Valore restituito

Indice del colore trasparente.

## <a name="cimagegetwidth"></a><a name="getwidth"></a>CImage:: GetWidth

Recupera la larghezza, in pixel, di un'immagine.

```
int GetWidth() const throw();
```

### <a name="return-value"></a>Valore restituito

Larghezza della bitmap, espressa in pixel.

## <a name="cimageisdibsection"></a><a name="isdibsection"></a>CImage:: IsDIBSection

Determina se la bitmap collegata è una sezione DIB.

```
bool IsDIBSection() const throw();
```

### <a name="return-value"></a>Valore restituito

TRUE se la bitmap collegata è una sezione DIB. In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se la bitmap non è una sezione DIB, non è possibile usare i `CImage` metodi seguenti, che supportano solo bitmap di sezione DIB:

- [GetBits](#getbits)

- [GetColorTable](#getcolortable)

- [GetMaxColorTableEntries](#getmaxcolortableentries)

- [GetPitch](#getpitch)

- [GetPixelAddress](#getpixeladdress)

- [IsIndexed](#isindexed)

- [SetColorTable](#setcolortable)

## <a name="cimageisindexed"></a><a name="isindexed"></a>CImage:: inindexed

Determina se i pixel di una bitmap vengono mappati a una tavolozza dei colori.

```
bool IsIndexed() const throw();
```

### <a name="return-value"></a>Valore restituito

TRUE se indicizzato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce TRUE solo se la bitmap è a 8 bit (colori 256) o meno.

> [!NOTE]
> Questo metodo supporta solo bitmap di sezione DIB.

## <a name="cimageisnull"></a><a name="isnull"></a>CImage:: IsNull

Determina se una bitmap è attualmente caricata.

```
bool IsNull() const throw();
```

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce TRUE se una bitmap non è attualmente caricata. in caso contrario, FALSE.

## <a name="cimageistransparencysupported"></a><a name="istransparencysupported"></a>CImage:: IsTransparencySupported

Indica se l'applicazione supporta le bitmap trasparenti.

```
static BOOL IsTransparencySupported() throw();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la piattaforma corrente supporta la trasparenza. In caso contrario, 0

### <a name="remarks"></a>Osservazioni

Se il valore restituito è diverso da zero e la trasparenza è supportata, una chiamata a [AlphaBlend](#alphablend), [TransparentBlt](#transparentblt)o a [disegni](#draw) gestirà i colori trasparenti.

## <a name="cimageload"></a><a name="load"></a>CImage:: Load

Carica un'immagine.

```
HRESULT Load(LPCTSTR pszFileName) throw();
HRESULT Load(IStream* pStream) throw();
```

### <a name="parameters"></a>Parametri

*pszFileName*<br/>
Puntatore a una stringa che contiene il nome del file di immagine da caricare.

*pStream*<br/>
Puntatore a un flusso contenente il nome del file di immagine da caricare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Carica l'immagine specificata da *pszFileName* o *pStream*.

I tipi di immagine validi sono BMP, GIF, JPEG, PNG e TIFF.

## <a name="cimageloadfromresource"></a><a name="loadfromresource"></a>CImage:: LoadFromResource

Carica un'immagine da una risorsa BITMAP.

```cpp
void LoadFromResource(
    HINSTANCE hInstance,
    LPCTSTR pszResourceName) throw();

void LoadFromResource(
    HINSTANCE hInstance,
    UINT nIDResource) throw();
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
Handle per un'istanza del modulo che contiene l'immagine da caricare.

*pszResourceName*<br/>
Puntatore alla stringa che contiene il nome della risorsa che contiene l'immagine da caricare.

*nIDResource*<br/>
ID della risorsa da caricare.

### <a name="remarks"></a>Osservazioni

La risorsa deve essere di tipo BITMAP.

## <a name="cimagemaskblt"></a><a name="maskblt"></a>CImage:: MaskBlt

Combina i dati relativi al colore per le bitmap di origine e di destinazione utilizzando la maschera e l'operazione raster specificate.

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

*hDestDC*<br/>
Handle per il modulo il cui eseguibile contiene la risorsa.

*xDest*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione e della bitmap di origine.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione e della bitmap di origine.

*xSrc*<br/>
Coordinata x logica dell'angolo superiore sinistro della bitmap di origine.

*ySrc*<br/>
Coordinata y logica dell'angolo superiore sinistro della bitmap di origine.

*hbmMask*<br/>
Handle per la bitmap maschera monocromatica combinata con la bitmap del colore nel contesto del dispositivo di origine.

*xMask*<br/>
Offset pixel orizzontale per la bitmap della maschera specificata dal parametro *hbmMask* .

*yMask*<br/>
Offset pixel verticale per la bitmap della maschera specificata dal parametro *hbmMask* .

*dwROP*<br/>
Specifica i codici operativi raster ternari in primo piano e in background usati dal metodo per controllare la combinazione di dati di origine e di destinazione. Il codice dell'operazione raster in background viene archiviato nel byte più significativo della parola più ordinata di questo valore. il codice dell'operazione raster in primo piano viene archiviato nel byte di ordine inferiore della parola più significativa di questo valore. la parola di ordine inferiore di questo valore viene ignorata e deve essere zero. Per una descrizione di primo piano e sfondo nel contesto di questo metodo, vedere `MaskBlt` nella Windows SDK. Per un elenco dei codici operativi raster comuni, vedere `BitBlt` nella Windows SDK.

*rectDest*<br/>
Riferimento a una `RECT` struttura che identifica la destinazione.

*pointSrc*<br/>
`POINT` Struttura che indica l'angolo superiore sinistro del rettangolo di origine.

*pointMask*<br/>
`POINT` Struttura che indica l'angolo superiore sinistro della bitmap della maschera.

*pointDest*<br/>
Riferimento a una `POINT` struttura che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo si applica solo a Windows NT, versioni 4,0 e successive.

## <a name="cimageoperator-hbitmap"></a><a name="operator_hbitmap"></a>CImage:: operator HBITMAP

Utilizzare questo operatore per ottenere l'handle di Windows GDI associato dell' `CImage` oggetto. Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HBITMAP.

## <a name="cimageplgblt"></a><a name="plgblt"></a>CImage::P lgBlt

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

*hDestDC*<br/>
Handle per il contesto di dispositivo di destinazione.

*pPoints*<br/>
Puntatore a una matrice di tre punti nello spazio logico che identificano tre angoli del parallelogramma di destinazione. Viene eseguito il mapping dell'angolo superiore sinistro del rettangolo di origine al primo punto di questa matrice, all'angolo superiore destro al secondo punto della matrice e all'angolo inferiore sinistro al terzo punto. L'angolo inferiore destro del rettangolo di origine viene mappato al quarto punto implicito nel parallelogramma.

*hbmMask*<br/>
Handle per una bitmap monocromatica facoltativa utilizzata per mascherare i colori del rettangolo di origine.

*xSrc*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*xMask*<br/>
Coordinata x dell'angolo superiore sinistro della bitmap monocromatica.

*yMask*<br/>
Coordinata y dell'angolo superiore sinistro della bitmap monocromatica.

*rectSrc*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che specifica le coordinate del rettangolo di origine.

*pointMask*<br/>
Struttura [Point](/windows/win32/api/windef/ns-windef-point) che indica l'angolo superiore sinistro della bitmap della maschera.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se *hbmMask* identifica una bitmap monocromatica valida `PlgBit` , usa questa bitmap per mascherare i bit dei dati relativi al colore dal rettangolo di origine.

Questo metodo si applica solo a Windows NT, versioni 4,0 e successive. Per informazioni più dettagliate, vedere [PlgBlt](/windows/win32/api/wingdi/nf-wingdi-plgblt) nel Windows SDK.

## <a name="cimagereleasedc"></a><a name="releasedc"></a>CImage:: ReleaseDC

Rilascia il contesto di dispositivo.

```cpp
void ReleaseDC() const throw();
```

### <a name="remarks"></a>Osservazioni

Poiché è possibile selezionare una sola bitmap in un contesto di dispositivo alla volta, è necessario chiamare `ReleaseDC` per ogni chiamata a [GetDC](#getdc).

## <a name="cimagereleasegdiplus"></a><a name="releasegdiplus"></a>CImage:: ReleaseGDIPlus

Rilascia le risorse utilizzate da GDI+.

```cpp
void ReleaseGDIPlus() throw();
```

### <a name="remarks"></a>Osservazioni

Questo metodo deve essere chiamato per liberare risorse allocate da un `CImage` oggetto globale. Vedere [CImage:: CImage](#cimage).

## <a name="cimagesave"></a><a name="save"></a>CImage:: Save

Salva un'immagine nel flusso o nel file specificato sul disco.

```
HRESULT Save(
    IStream* pStream,
    REFGUID guidFileType) const throw();

HRESULT Save(
    LPCTSTR pszFileName,
    REFGUID guidFileType = GUID_NULL) const throw();
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
Puntatore a un oggetto IStream COM contenente i dati dell'immagine del file.

*pszFileName*<br/>
Puntatore al nome file dell'immagine.

*guidFileType*<br/>
Tipo di file in cui salvare l'immagine. Può essere uno dei seguenti:

- `ImageFormatBMP`Immagine bitmap non compressa.

- `ImageFormatPNG`Immagine compressa di Portable Network Graphic (PNG).

- `ImageFormatJPEG`Immagine compressa JPEG.

- `ImageFormatGIF`Immagine compressa GIF.

> [!NOTE]
> Per un elenco completo di costanti, vedere **costanti del formato del file di immagine** nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per salvare l'immagine usando il nome e il tipo specificati. Se il parametro *guidFileType* non è incluso, verrà utilizzata l'estensione di file del nome file per determinare il formato dell'immagine. Se non viene specificata alcuna estensione, l'immagine verrà salvata in formato BMP.

## <a name="cimagesetcolortable"></a><a name="setcolortable"></a>CImage:: SetColorTable

Imposta i valori di colore rosso, verde, blu (RGB) per un intervallo di voci nella tavolozza della sezione DIB.

```cpp
void SetColorTable(
    UINT iFirstColor,
    UINT nColors,
    const RGBQUAD* prgbColors) throw();
```

### <a name="parameters"></a>Parametri

*iFirstColor*<br/>
Indice della tabella dei colori della prima voce da impostare.

*nColors*<br/>
Numero di voci della tabella dei colori da impostare.

*prgbColors*<br/>
Puntatore alla matrice di strutture [RGBQUAD](/windows/win32/api/wingdi/ns-wingdi-rgbquad) per impostare le voci della tabella dei colori.

### <a name="remarks"></a>Osservazioni

Questo metodo supporta solo bitmap di sezione DIB.

## <a name="cimagesetpixel"></a><a name="setpixel"></a>CImage:: sepixel

Imposta il colore di un pixel in una posizione specificata nella bitmap.

```cpp
void SetPixel(int x, int y, COLORREF color) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Posizione orizzontale del pixel da impostare.

*y*<br/>
Posizione verticale del pixel da impostare.

*color*<br/>
Il colore in cui si imposta il pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo se le coordinate dei pixel si trovano al di fuori dell'area di visualizzazione selezionata.

## <a name="cimagesetpixelindexed"></a><a name="setpixelindexed"></a>CImage:: SetPixelIndexed

Imposta il colore del pixel sul colore situato in *iIndex* nella tavolozza dei colori.

```cpp
void SetPixelIndexed(int x, int y, int iIndex) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Posizione orizzontale del pixel da impostare.

*y*<br/>
Posizione verticale del pixel da impostare.

*iIndex*<br/>
Indice di un colore nella tavolozza dei colori.

## <a name="cimagesetpixelrgb"></a><a name="setpixelrgb"></a>CImage:: SetPixelRGB

Imposta il pixel nei percorsi specificati da *x* e *y* sui colori indicati da *r*, *g*e *b*, in un'immagine rossa, verde, blu (RGB).

```cpp
void SetPixelRGB(
    int x,
    int y,
    BYTE r,
    BYTE g,
    BYTE b) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Posizione orizzontale del pixel da impostare.

*y*<br/>
Posizione verticale del pixel da impostare.

*r*<br/>
Intensità del colore rosso.

*g*<br/>
Intensità del colore verde.

*b*<br/>
Intensità del colore blu.

### <a name="remarks"></a>Osservazioni

I parametri rosso, verde e blu sono rappresentati da un numero compreso tra 0 e 255. Se si impostano tutti e tre i parametri su zero, il colore risultante combinato è nero. Se si impostano tutti e tre i parametri su 255, il colore risultante combinato è bianco.

## <a name="cimagesettransparentcolor"></a><a name="settransparentcolor"></a>CImage:: SetTransparentColor

Imposta un colore in una determinata posizione indicizzata come trasparente.

```
LONG SetTransparentColor(LONG iTransparentColor) throw();
```

### <a name="parameters"></a>Parametri

*iTransparentColor*<br/>
Indice, in una tavolozza dei colori, del colore da impostare su Transparent. Se-1, nessun colore è impostato su Transparent.

### <a name="return-value"></a>Valore restituito

Indice del colore precedentemente impostato come Transparent.

## <a name="cimagestretchblt"></a><a name="stretchblt"></a>CImage:: StretchBlt

Copia una bitmap dal contesto di dispositivo di origine a questo contesto di dispositivo corrente.

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

*hDestDC*<br/>
Handle per il contesto di dispositivo di destinazione.

*xDest*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*dwROP*<br/>
Operazione raster da eseguire. I codici delle operazioni raster definiscono esattamente come combinare i bit dell'origine, della destinazione e del criterio (come definito dal pennello attualmente selezionato) per formare la destinazione. Vedere [BitBlt](/windows/win32/api/wingdi/nf-wingdi-bitblt) nel Windows SDK per un elenco di altri codici delle operazioni raster e le relative descrizioni.

*rectDest*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) , che identifica la destinazione.

*xSrc*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectSrc*<br/>
Riferimento a una `RECT` struttura che identifica l'origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [StretchBlt](/windows/win32/api/wingdi/nf-wingdi-stretchblt) nel Windows SDK.

## <a name="cimagetransparentblt"></a><a name="transparentblt"></a>CImage:: TransparentBlt

Copia una bitmap dal contesto di dispositivo di origine a questo contesto di dispositivo corrente.

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

*hDestDC*<br/>
Handle per il contesto di dispositivo di destinazione.

*xDest*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
Larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*crTransparent*<br/>
Colore della bitmap di origine da considerare trasparente. Per impostazione predefinita, CLR_INVALID, che indica che deve essere utilizzato il colore attualmente impostato come colore trasparente dell'immagine.

*rectDest*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) , che identifica la destinazione.

*xSrc*<br/>
Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
Larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectSrc*<br/>
Riferimento a una `RECT` struttura che identifica l'origine.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario FALSE.

### <a name="remarks"></a>Osservazioni

`TransparentBlt`è supportato per le bitmap di origine di 4 bit per pixel e 8 bit per pixel. Usare [CImage:: AlphaBlend](#alphablend) per specificare 32 bitmap con bit per pixel con trasparenza.

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
[Bitmap indipendenti dal dispositivo](/windows/win32/gdi/device-independent-bitmaps)<br/>
[CreateDIBSection](/windows/win32/api/wingdi/nf-wingdi-createdibsection)<br/>
[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)<br/>
[Bitmap indipendenti dal dispositivo](/windows/win32/gdi/device-independent-bitmaps)<br/>
[CreateDIBSection](/windows/win32/api/wingdi/nf-wingdi-createdibsection)
