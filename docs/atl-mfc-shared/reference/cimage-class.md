---
title: CImage (classe)
ms.date: 02/01/2018
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
ms.openlocfilehash: 0b61d38d141392dc85a150ddd2caf50b28146ae7
ms.sourcegitcommit: ecf274bcfe3a977c48745aaa243e5e731f1fdc5f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2019
ms.locfileid: "66503177"
---
# <a name="cimage-class"></a>CImage (classe)

`CImage` Fornisce il supporto avanzato per le bitmap, inclusa la possibilità di caricare e salvare le immagini in formato JPEG, GIF, BMP e grafica PNG (Portable Network).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

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
|[CImage::AlphaBlend](#alphablend)|Consente di visualizzare le bitmap con pixel trasparente o semitrasparente.|
|[CImage::Attach](#attach)|Associa un oggetto HBITMAP per un `CImage` oggetto. Può essere utilizzato con non DIB sezione bitmap o DIB sezione bitmap.|
|[CImage::BitBlt](#bitblt)|Copia una bitmap dal contesto di dispositivo di origine in questo contesto di dispositivo corrente.|
|[CImage::Create](#create)|Crea una bitmap di sezione DIB e lo associa alla precedenza costruito `CImage` oggetto.|
|[CImage::CreateEx](#createex)|Crea una bitmap di sezione DIB (con parametri aggiuntivi) e lo associa alla precedenza costruito `CImage` oggetto.|
|[CImage::Destroy](#destroy)|Scollega la bitmap dal `CImage` oggetto ed elimina la bitmap.|
|[CImage::Detach](#detach)|Scollega la bitmap da un `CImage` oggetto.|
|[CImage::Draw](#draw)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione. `Draw` Allunga o comprime la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario e gestisce la fusione alfa e dei colori trasparenti.|
|[CImage::GetBits](#getbits)|Recupera un puntatore ai valori effettivi in pixel della bitmap.|
|[CImage::GetBPP](#getbpp)|Recupera i bit per pixel.|
|[CImage::GetColorTable](#getcolortable)|Recupera i valori di colore rossi, verdi, blu (RGB) da un intervallo di voci nella tabella dei colori.|
|[CImage::GetDC](#getdc)|Recupera il contesto di dispositivo in cui la bitmap corrente sia selezionata.|
|[CImage::GetExporterFilterString](#getexporterfilterstring)|Trova i formati di immagine disponibile e le relative descrizioni.|
|[CImage::GetHeight](#getheight)|Recupera l'altezza dell'immagine corrente espressa in pixel.|
|[CImage::GetImporterFilterString](#getimporterfilterstring)|Trova i formati di immagine disponibile e le relative descrizioni.|
|[CImage::GetMaxColorTableEntries](#getmaxcolortableentries)|Recupera il numero massimo di voci nella tabella dei colori.|
|[CImage::GetPitch](#getpitch)|Recupera il passo dell'immagine corrente, espressa in byte.|
|[CImage::GetPixel](#getpixel)|Recupera il colore del pixel specificato da *x* e *y*.|
|[CImage::GetPixelAddress](#getpixeladdress)|Recupera l'indirizzo di un pixel specifico.|
|[CImage::GetTransparentColor](#gettransparentcolor)|Recupera la posizione del colore trasparente nella tabella dei colori.|
|[CImage::GetWidth](#getwidth)|Recupera la larghezza dell'immagine corrente espressa in pixel.|
|[CImage::IsDIBSection](#isdibsection)|Determina se la bitmap associata è una sezione DIB.|
|[CImage::IsIndexed](#isindexed)|Indica che la bitmap viene eseguito il mapping a una tavolozza indicizzata.|
|[CImage::IsNull](#isnull)|Indica se una bitmap di origine è attualmente caricata.|
|[CImage::IsTransparencySupported](#istransparencysupported)|Indica se l'applicazione supporta le bitmap trasparenti.|
|[CImage::Load](#load)|Carica un'immagine dal file specificato.|
|[CImage::LoadFromResource](#loadfromresource)|Carica un'immagine dalla risorsa specificata.|
|[CImage::MaskBlt](#maskblt)|Combina i dati relativi al colore per la bitmap di origine e di destinazione utilizzando il filtro specificato e l'operazione raster.|
|[CImage::PlgBlt](#plgblt)|Esegue un trasferimento a blocchi di bit da un rettangolo in un contesto di dispositivo di origine in un parallelogramma in un contesto di dispositivo di destinazione.|
|[CImage::ReleaseDC](#releasedc)|Rilascia il contesto di dispositivo che sono stato recuperato con [CImage::GetDC](#getdc).|
|[CImage::ReleaseGDIPlus](#releasegdiplus)|Rilascia le risorse usate da GDI+. Deve essere chiamato per liberare le risorse create da globale `CImage` oggetto.|
|[CImage::Save](#save)|Salva un'immagine del tipo specificato. `Save` non è possibile specificare le opzioni dell'immagine.|
|[CImage::SetColorTable](#setcolortable)|Imposta RGB rosso, verde, blu) i valori in un intervallo di voci nella tabella di colore della sezione DIB dei colori.|
|[CImage::SetPixel](#setpixel)|Imposta i pixel in corrispondenza delle coordinate specificate sul colore specificato.|
|[CImage::SetPixelIndexed](#setpixelindexed)|Imposta i pixel alle coordinate specificate per il colore in corrispondenza dell'indice specificato della tavolozza.|
|[CImage::SetPixelRGB](#setpixelrgb)|Imposta i pixel in corrispondenza delle coordinate specificate al valore specificato rosso, verde, blu (RGB).|
|[CImage::SetTransparentColor](#settransparentcolor)|Imposta l'indice del colore da trattare come trasparente. Un solo colore nella tavolozza può essere trasparente.|
|[CImage::StretchBlt](#stretchblt)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione, allungando o comprimendo la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario.|
|[CImage::TransparentBlt](#transparentblt)|Copia una bitmap con colore trasparente dal contesto di dispositivo di origine in questo contesto di dispositivo corrente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CImage::operator HBITMAP](#operator_hbitmap)|Restituisce l'handle di Windows associato ai `CImage` oggetto.|

## <a name="remarks"></a>Note

`CImage` accetta le bitmap che sono entrambi sezioni bitmap indipendente dalla periferica (DIB) o No. Tuttavia, è possibile usare [Create](#create) oppure [CImage::Load](#load) con solo le sezioni DIB. È possibile collegare una bitmap di sezione non DIB a un `CImage` dell'oggetto usando [Attach](#attach), ma non è possibile utilizzare quanto segue `CImage` metodi che supportano solo le bitmap sezione DIB:

- [GetBits](#getbits)

- [GetColorTable](#getcolortable)

- [GetMaxColorTableEntries](#getmaxcolortableentries)

- [GetPitch](#getpitch)

- [GetPixelAddress](#getpixeladdress)

- [IsIndexed](#isindexed)

- [SetColorTable](#setcolortable)

Per determinare se un oggetto bitmap associata è una sezione DIB, chiamare [IsDibSection](#isdibsection).

> [!NOTE]
> In Visual Studio .NET 2003, questa classe viene mantenuto un conteggio del numero di `CImage` gli oggetti creati. Quando il conteggio è pari a 0, la funzione `GdiplusShutdown` viene chiamato automaticamente per rilasciare le risorse utilizzate da GDI+. Ciò garantisce che eventuali `CImage` gli oggetti creati direttamente o indirettamente tramite le DLL vengono sempre eliminati definitivamente in modo corretto e che `GdiplusShutdown` non viene chiamato da `DllMain`.

> [!NOTE]
> Utilizzo globale `CImage` gli oggetti in una DLL non è consigliata. Se è necessario usare un globali `CImage` oggetti in una DLL, chiamata [CImage::ReleaseGDIPlus](#releasegdiplus) rilasciare in modo esplicito le risorse usate da GDI+.

`CImage` non possono essere selezionati in un nuovo [CDC](../../mfc/reference/cdc-class.md). `CImage` Crea un proprio HDC per l'immagine. Poiché un oggetto HBITMAP può essere selezionato solo in uno HDC alla volta, HBITMAP associato il `CImage` non possono essere selezionati in un altro HDC. Se è necessario una CDC, recuperare il HDC dal `CImage` e assegnarle a [CDC::FromHandle](../../mfc/reference/cdc-class.md#fromhandle).

## <a name="example"></a>Esempio

```cpp
// Get a CDC for the image
CDC* pDC = CDC::FromHandle(m_myImage.GetDC());

// Use pDC here
pDC->Rectangle(0, 40, 100, 50);
m_myImage.ReleaseDC();
```

Quando si usa `CImage` in un progetto MFC, si noti che le funzioni membro nel progetto prevedono un puntatore a un [CBitmap](../../mfc/reference/cbitmap-class.md) oggetto. Se si desidera utilizzare `CImage` con tali funzioni, ad esempio [CMenu:: AppendMenu](../../mfc/reference/cmenu-class.md#appendmenu), usare [CBitmap::FromHandle](../../mfc/reference/cbitmap-class.md#fromhandle), passarlo il `CImage` HBITMAP e utilizzare l'oggetto restituito `CBitmap*`.

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

Tramite `CImage`, si ha accesso ai bit effettivo di una sezione DIB. È possibile usare un `CImage` dell'oggetto in un punto qualsiasi usato in precedenza una sezione HBITMAP Win32 o DIB.

È possibile usare `CImage` da MFC o ATL.

> [!NOTE]
> Quando si crea un progetto mediante `CImage`, è necessario definire `CString` prima di includere `atlimage.h`. Se il progetto usa ATL senza MFC, includere `atlstr.h` prima di includere `atlimage.h`. Se il progetto Usa MFC (o se si tratta di un progetto ATL grazie al supporto MFC), includere `afxstr.h` prima di includere `atlimage.h`.<br/>
> <br/>
> Analogamente, è necessario includere `atlimage.h` prima di includere `atlimpl.cpp`. Per eseguire questa operazione con facilità, includere `atlimage.h` nella `stdafx.h`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlimage.h

##  <a name="alphablend"></a>  CImage::AlphaBlend

Consente di visualizzare le bitmap con pixel trasparente o semitrasparente.

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
La coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
La coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*bSrcAlpha*<br/>
Un valore di trasparenza alfa da usare per la bitmap di origine intera. Il valore predefinito 0xff (255) presuppone che l'immagine è opaco e che si desidera utilizzare solo valori alfa per pixel.

*bBlendOp*<br/>
La funzione di fusione alfa per origine e destinazione bitmap, un valore alfa globale da applicare per l'intera origine bitmap e informazioni sul formato di bitmap di origine. Le funzioni di blend di origine e destinazione sono attualmente limitate ai AC_SRC_OVER.

*pointDest*<br/>
Un riferimento a un [punto](/previous-versions/dd162805\(v=vs.85\)) struttura che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.

*nDestWidth*<br/>
La larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*xSrc*<br/>
La logica coordinata x dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
La logica coordinata y dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
La larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectDest*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura, che identifica la destinazione.

*rectSrc*<br/>
Un riferimento a un `RECT` struttura, che identifica l'origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La fusione alfa bitmap supportino la sfumatura di colore in base al pixel.

Quando *bBlendOp* è impostata sul valore predefinito di AC_SRC_OVER, la bitmap di origine viene posizionata sopra la bitmap di destinazione in base ai valori alfa dei pixel origine.

##  <a name="attach"></a>  CImage::Attach

Allega *hBitmap* a un `CImage` oggetto.

```
void Attach(HBITMAP hBitmap, DIBOrientation eOrientation = DIBOR_DEFAULT) throw();
```

### <a name="parameters"></a>Parametri

*hBitmap*<br/>
Handle a un oggetto HBITMAP.

*eOrientation*<br/>
Specifica l'orientamento della bitmap. Può essere uno dei seguenti:

- DIBOR_DEFAULT l'orientamento della bitmap è determinato dal sistema operativo.

- DIBOR_BOTTOMUP le righe della bitmap sono in ordine inverso. In questo modo [CImage::GetBits](#getbits) per restituire un puntatore verso la fine del buffer di bitmap e [CImage::GetPitch](#getpitch) per restituire un numero negativo.

- DIBOR_TOPDOWN le righe della bitmap sono dall'alto verso il basso. In questo modo [CImage::GetBits](#getbits) per restituire un puntatore al primo byte del buffer di bitmap e [CImage::GetPitch](#getpitch) per restituire un numero positivo.

### <a name="remarks"></a>Note

La bitmap può essere una bitmap di sezione non DIB o una bitmap di sezione DIB. Visualizzare [IsDIBSection](#isdibsection) per un elenco di metodi che è possibile usare solo con DIB sezione bitmap.

##  <a name="bitblt"></a>  CImage::BitBlt

Copia una bitmap dal contesto di dispositivo di origine in questo contesto di dispositivo corrente.

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
La destinazione HDC.

*xDest*<br/>
La logica coordinata x dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
La logica coordinata y dell'angolo superiore sinistro del rettangolo di destinazione.

*dwROP*<br/>
L'operazione raster da eseguire. Codici di operazione raster definiscono esattamente come combinare i bit di origine, destinazione e il modello (come definito dal pennello attualmente selezionato) per formare la destinazione. Visualizzare [BitBlt](/windows/desktop/api/wingdi/nf-wingdi-bitblt) nel SDK di Windows per un elenco di altri codici di operazione raster e le relative descrizioni.

*pointDest*<br/>
Oggetto [punto](/previous-versions/dd162805\(v=vs.85\)) struttura che indica l'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
La larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*xSrc*<br/>
La logica coordinata x dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
La logica coordinata y dell'angolo superiore sinistro del rettangolo di origine.

*rectDest*<br/>
Oggetto [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che indica il rettangolo di destinazione.

*pointSrc*<br/>
Oggetto `POINT` struttura che indica l'angolo superiore sinistro del rettangolo di origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [BitBlt](/windows/desktop/api/wingdi/nf-wingdi-bitblt) nel SDK di Windows.

##  <a name="cimage"></a>  CImage::CImage

Costruisce un oggetto `CImage`.

```
CImage() throw();
```

### <a name="remarks"></a>Note

Dopo avere costruito un oggetto, chiamare [Create](#create), [carico](#load), [LoadFromResource](#loadfromresource), oppure [Attach](#attach) per collegare un'immagine bitmap all'oggetto.

**Nota** In Visual Studio, questa classe viene mantenuto un conteggio del numero di `CImage` gli oggetti creati. Quando il conteggio è pari a 0, la funzione `GdiplusShutdown` viene chiamato automaticamente per rilasciare le risorse utilizzate da GDI+. Ciò garantisce che eventuali `CImage` gli oggetti creati direttamente o indirettamente tramite le DLL vengono sempre eliminati definitivamente in modo corretto e che `GdiplusShutdown` non viene chiamato da DllMain.

Utilizzo globale `CImage` gli oggetti in una DLL non è consigliata. Se è necessario usare un globali `CImage` oggetti in una DLL, chiamata [CImage::ReleaseGDIPlus](#releasegdiplus) rilasciare in modo esplicito le risorse usate da GDI+.

##  <a name="create"></a>  CImage::Create

Crea una `CImage` bitmap e collegarlo alla precedenza costruito `CImage` oggetto.

```
BOOL Create(
    int nWidth,
    int nHeight,
    int nBPP,
    DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*nWidth*<br/>
La larghezza del `CImage` bitmap in pixel.

*nHeight*<br/>
L'altezza del `CImage` bitmap in pixel. Se *nHeight* è positivo, la bitmap è un DIB dal basso in alto e l'origine è nell'angolo inferiore sinistro. Se *nHeight* è negativo, la bitmap è un DIB dall'alto in basso e l'origine è nell'angolo superiore sinistro.

*nBPP*<br/>
Il numero di bit per pixel nella bitmap. In genere 4, 8, 16, 24 o 32. Può essere 1 per le bitmap monocromatiche o maschere.

*dwFlags*<br/>
Specifica se l'oggetto bitmap dispone di un canale alfa. Può essere una combinazione di zero o più dei valori seguenti:

- *createAlphaChannel* può essere usato solo se *nBPP* più di 32, e *eCompression* è BI_RGB. Se specificato, l'immagine creata ha un valore alfa (trasparenza) per ogni pixel, archiviato in 4 byte di ogni pixel (non usato in un'immagine a 32 bit non alfanumerici). Questo canale alfa sia usato automaticamente quando si chiama [CImage::AlphaBlend](#alphablend).

> [!NOTE]
> Nelle chiamate a [CImage::Draw](#draw), immagini con un canale alfa sono automaticamente alpha blending nella destinazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="createex"></a>  CImage::CreateEx

Crea una `CImage` bitmap e collegarlo alla precedenza costruito `CImage` oggetto.

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
La larghezza del `CImage` bitmap in pixel.

*nHeight*<br/>
L'altezza del `CImage` bitmap in pixel. Se *nHeight* è positivo, la bitmap è un DIB dal basso in alto e l'origine è nell'angolo inferiore sinistro. Se *nHeight* è negativo, la bitmap è un DIB dall'alto in basso e l'origine è nell'angolo superiore sinistro.

*nBPP*<br/>
Il numero di bit per pixel nella bitmap. In genere 4, 8, 16, 24 o 32. Può essere 1 per le bitmap monocromatiche o maschere.

*eCompression*<br/>
Specifica il tipo di compressione per una bitmap dal basso in alto compressa (DIB dall'alto in basso non può essere compressa). Il valore può essere uno dei seguenti:

- Il formato BI_RGB non sono compressi. Se si specifica questo valore quando si chiama `CImage::CreateEx` è equivalente alla chiamata `CImage::Create`.

- Il formato BI_BITFIELDS sono compressi e la tabella dei colori è costituito da tre maschere di colore DWORD che specificano i componenti rossi, verdi e blu, rispettivamente, di ciascun pixel. Questo è valido se utilizzato con - 16 e 32 bpp bitmap.

*pdwBitfields*<br/>
Usato solo se *eCompression* è impostato per BI_BITFIELDS, in caso contrario, deve essere NULL. Un puntatore a una matrice di tre maschere di bit DWORD, che specifica quali bit di ogni pixel vengono usati per i componenti rossi, verdi e blu del colore, rispettivamente. Per informazioni sulle restrizioni per i campi di bit, vedere [BITMAPINFOHEADER](/previous-versions//dd183376\(v=vs.85\)) nel SDK di Windows.

*dwFlags*<br/>
Specifica se l'oggetto bitmap dispone di un canale alfa. Può essere una combinazione di zero o più dei valori seguenti:

- *createAlphaChannel* può essere usato solo se *nBPP* più di 32, e *eCompression* è BI_RGB. Se specificato, l'immagine creata ha un valore alfa (trasparenza) per ogni pixel, archiviato in 4 byte di ogni pixel (non usato in un'immagine a 32 bit non alfanumerici). Questo canale alfa sia usato automaticamente quando si chiama [CImage::AlphaBlend](#alphablend).

   > [!NOTE]
   > Nelle chiamate a [CImage::Draw](#draw), immagini con un canale alfa sono automaticamente alpha blending nella destinazione.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo. In caso contrario, FALSE.

### <a name="example"></a>Esempio

L'esempio seguente crea una bitmap di 100 x 100 pixel, con 16 bit da codificare ogni pixel. In un pixel a 16 bit specificato, bits 0-3 codificare il componente rossa, bits 4-7 codificare verde e 8 a 11 bit codificano il blu. I restanti bit 4 sono inutilizzati.

```cpp
DWORD adwBitmasks[3] = { 0x0000000f, 0x000000f0, 0x00000f00 };
m_myImage.CreateEx(100, 100, 16, BI_BITFIELDS, adwBitmasks, 0);
```

##  <a name="destroy"></a>  CImage::Destroy

Scollega la bitmap dal `CImage` oggetto ed elimina la bitmap.

```
void Destroy() throw();
```

##  <a name="detach"></a>  CImage::Detach

Scollega una bitmap da un `CImage` oggetto.

```
HBITMAP Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Un handle alla bitmap scollegato, o NULL se nessun bitmap è collegato.

##  <a name="draw"></a>  CImage::Draw

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
La coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
La coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
La larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*xSrc*<br/>
La coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
La coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
La larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectDest*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura, che identifica la destinazione.

*rectSrc*<br/>
Un riferimento a un `RECT` struttura, che identifica l'origine.

*pointDest*<br/>
Un riferimento a un [punto](/previous-versions/dd162805\(v=vs.85\)) struttura che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

`Draw` esegue la stessa operazione [StretchBlt](#stretchblt), a meno che l'immagine contiene un colore trasparente o un canale alfa. In tal caso, `Draw` esegue la stessa operazione uno [TransparentBlt](#transparentblt) oppure [AlphaBlend](#alphablend) in base alle necessità.

Per le versioni di `Draw` che non specificano un rettangolo di origine, l'immagine di origine intera è il valore predefinito. Per la versione di `Draw` che non specifica una dimensione per il rettangolo di destinazione, la dimensione dell'immagine di origine è il valore predefinito e nessun allungamento o la compattazione viene eseguita.

##  <a name="getbits"></a>  CImage::GetBits

Recupera un puntatore ai valori effettivi bit di un pixel specifico in una bitmap.

```
void* GetBits() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer di bitmap. Se la bitmap è un DIB dal basso in alto, punta il puntatore verso la fine del buffer. Se la bitmap è un DIB dall'alto in basso, il puntatore punta al primo byte del buffer.

### <a name="remarks"></a>Note

Tramite questo puntatore, insieme al valore restituito da [GetPitch](#getpitch), è possibile individuare e modificare singoli pixel in un'immagine.

> [!NOTE]
> Questo metodo supporta solo le bitmap sezione DIB; di conseguenza, è accedere i pixel di un `CImage` farebbe il pixel di una sezione DIB dell'oggetto. Il puntatore restituito punta al pixel in corrispondenza della posizione (0, 0).

##  <a name="getbpp"></a>  CImage::GetBPP

Recupera il valore di bit per pixel.

```
int GetBPP() const throw();
```

### <a name="return-value"></a>Valore restituito

Il numero di bit per pixel.

### <a name="remarks"></a>Note

Questo valore determina il numero di bit che definiscono ogni pixel e il numero massimo di colori della bitmap.

In genere, i bit per pixel è 1, 4, 8, 16, 24 o 32. Vedere le `biBitCount` appartenente [BITMAPINFOHEADER](/previous-versions//dd183376\(v=vs.85\)) nel SDK di Windows per altre informazioni su questo valore.

##  <a name="getcolortable"></a>  CImage::GetColorTable

Recupera i valori di colore rossi, verdi, blu (RGB) da un intervallo delle voci della tavolozza della sezione DIB.

```
void GetColorTable(
    UINT iFirstColor,
    UINT nColors,
    RGBQUAD* prgbColors) const throw();
```

### <a name="parameters"></a>Parametri

*iFirstColor*<br/>
L'indice di tabella di colore della prima voce da recuperare.

*nColors*<br/>
Il numero di voci tabella colori da recuperare.

*prgbColors*<br/>
Un puntatore alla matrice di [RGBQUAD](/windows/desktop/api/wingdi/ns-wingdi-tagrgbquad) strutture per recuperare il colore di voci di tabella.

##  <a name="getdc"></a>  CImage::GetDC

Recupera il contesto di dispositivo che ha attualmente l'immagine selezionata al suo interno.

```
HDC GetDC() const throw();
```

### <a name="return-value"></a>Valore restituito

Handle per un contesto di dispositivo.

### <a name="remarks"></a>Note

Per ogni chiamata a `GetDC`, è necessario disporre di una chiamata successiva [ReleaseDC](#releasedc).

##  <a name="getexporterfilterstring"></a>  CImage::GetExporterFilterString

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
Riferimento a un oggetto `CSimpleString`. Visualizzare **osservazioni** per altre informazioni.

*aguidFileTypes*<br/>
Una matrice di GUID, con ogni elemento corrispondente a uno dei tipi di file nella stringa. Nell'esempio nella *pszAllFilesDescription* seguente *aguidFileTypes*[0] è GUID_NULL e i valori della matrice rimanenti sono formati di file di immagine supportati dal sistema operativo corrente.

> [!NOTE]
> Per un elenco completo delle costanti, vedere **costanti di formato di File di immagine** nel SDK di Windows.

*pszAllFilesDescription*<br/>
Se questo parametro non è NULL, la stringa di filtro sarà necessario un ulteriore filtro all'inizio dell'elenco. Questo filtro avrà il valore corrente del *pszAllFilesDescription* per la relativa descrizione e accetta i file di qualsiasi estensione supportati da qualsiasi altra utilità di esportazione nell'elenco.

Ad esempio:

```cpp
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any exporter.
CImage::GetExporterFilterString(
    strExporters, aguidFileTypes,
_T("All Image Files"));
```

*dwExclude*<br/>
Set di flag di bit che specifica quali tipi di file da escludere dall'elenco. Flag consentiti sono:

- `excludeGIF` = 0x01 GIF esclude i file.

- `excludeBMP` = 0x02 esclude BMP (mappa di bit di Windows) file.

- `excludeEMF` = 0x04 esclude EMF (Enhanced Metafile) file.

- `excludeWMF` = file di 0x08 esclude WMF (Windows Metafile).

- `excludeJPEG` = file JPEG esclude 0x10.

- `excludePNG` = file PNG esclude 0x20.

- `excludeTIFF` = file TIFF consente di escludere 0x40.

- `excludeIcon` = 0x80 esclude ICO (icona di Windows) file.

- `excludeOther` = 0x80000000 esclude qualsiasi altro tipo di file non elencato in precedenza.

- `excludeDefaultLoad` = 0 per il carico, i file di tutti i tipi sono inclusi per impostazione predefinita

- `excludeDefaultSave` = `excludeIcon &#124; excludeEMF &#124; excludeWMF` Per il salvataggio, questi file sono esclusi per impostazione predefinita perché in genere presentano requisiti speciali.

*chSeparator*<br/>
Il separatore utilizzato tra i formati di immagine. Visualizzare **osservazioni** per altre informazioni.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

È possibile passare la stringa di formato risultante di MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) formati di oggetto di esporre le estensioni di file dell'immagine disponibile nella finestra di dialogo Salva con nome File.

Il parametro *strExporter* ha il formato:

file description0&#124;\*.ext0&#124;filedescription1&#124;\*.ext1&#124;...file description *n*&#124;\*.ext *n*&#124;&#124;

dove '&#124;' è il carattere separatore specificato da `chSeparator`. Ad esempio:

`"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`

Usare il separatore predefinito '&#124;' Se si passa questa stringa a un MFC `CFileDialog` oggetto. Usa il separatore null '\0' Se si passa questa stringa a una finestra di dialogo Salva File comune.

##  <a name="getheight"></a>  CImage::GetHeight

Recupera l'altezza, in pixel, di un'immagine.

```
int GetHeight() const throw();
```

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, di un'immagine.

##  <a name="getimporterfilterstring"></a>  CImage::GetImporterFilterString

Cerca formati di immagine disponibili per il caricamento di immagini.

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
Riferimento a un oggetto `CSimpleString`. Visualizzare **osservazioni** per altre informazioni.

*aguidFileTypes*<br/>
Una matrice di GUID, con ogni elemento corrispondente a uno dei tipi di file nella stringa. Nell'esempio nella *pszAllFilesDescription* seguente *aguidFileTypes*[0] è GUID_NULL con i valori della matrice rimanenti sono formati di file di immagine supportati dal sistema operativo corrente.

> [!NOTE]
> Per un elenco completo delle costanti, vedere **costanti di formato di File di immagine** nel SDK di Windows.

*pszAllFilesDescription*<br/>
Se questo parametro non è NULL, la stringa di filtro sarà necessario un ulteriore filtro all'inizio dell'elenco. Questo filtro avrà il valore corrente del *pszAllFilesDescription* per la relativa descrizione e accetta i file di qualsiasi estensione supportati da qualsiasi altra utilità di esportazione nell'elenco.

Ad esempio:

```cpp
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any importer.
CImage::GetImporterFilterString(
    strImporters, aguidFileTypes,
_T("All Image Files"));
```

*dwExclude*<br/>
Set di flag di bit che specifica quali tipi di file da escludere dall'elenco. Flag consentiti sono:

- `excludeGIF` = 0x01 GIF esclude i file.

- `excludeBMP` = 0x02 esclude BMP (mappa di bit di Windows) file.

- `excludeEMF` = 0x04 esclude EMF (Enhanced Metafile) file.

- `excludeWMF` = file di 0x08 esclude WMF (Windows Metafile).

- `excludeJPEG` = file JPEG esclude 0x10.

- `excludePNG` = file PNG esclude 0x20.

- `excludeTIFF` = file TIFF consente di escludere 0x40.

- `excludeIcon` = 0x80 esclude ICO (icona di Windows) file.

- `excludeOther` = 0x80000000 esclude qualsiasi altro tipo di file non elencato in precedenza.

- `excludeDefaultLoad` = 0 per il carico, i file di tutti i tipi sono inclusi per impostazione predefinita

- `excludeDefaultSave` = `excludeIcon &#124; excludeEMF &#124; excludeWMF` Per il salvataggio, questi file sono esclusi per impostazione predefinita perché in genere presentano requisiti speciali.

*chSeparator*<br/>
Il separatore utilizzato tra i formati di immagine. Visualizzare **osservazioni** per altre informazioni.

### <a name="remarks"></a>Note

È possibile passare la stringa di formato risultante di MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) oggetto di esporre le estensioni di file dell'immagine disponibile nei formati nel **Apri File** nella finestra di dialogo.

Il parametro *strImporter* ha il formato:

file description0&#124;\*.ext0&#124;filedescription1&#124;\*.ext1&#124;...file description *n*&#124;\*.ext *n*&#124;&#124;

dove '&#124;' è il separatore specificato da *chSeparator*. Ad esempio:

`"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`

Usare il separatore predefinito '&#124;' Se si passa questa stringa a un MFC `CFileDialog` oggetto. Usare il separatore di null '\0' Se si passa questa stringa a un comune **Apri File** nella finestra di dialogo.

##  <a name="getmaxcolortableentries"></a>  CImage::GetMaxColorTableEntries

Recupera il numero massimo di voci nella tabella dei colori.

```
int GetMaxColorTableEntries() const throw();
```

### <a name="return-value"></a>Valore restituito

Il numero di voci nella tabella dei colori.

### <a name="remarks"></a>Note

Questo metodo supporta solo le bitmap sezione DIB.

##  <a name="getpitch"></a>  CImage::GetPitch

Recupera il passo di un'immagine.

```
int GetPitch() const throw();
```

### <a name="return-value"></a>Valore restituito

Il passo dell'immagine. Se il valore restituito è negativo, la bitmap è un DIB dal basso in alto e l'origine è nell'angolo inferiore sinistro. Se il valore restituito è positivo, la bitmap è un DIB dall'alto in basso e l'origine è nell'angolo superiore sinistro.

### <a name="remarks"></a>Note

Il tono rappresenta la distanza, espressa in byte, tra due indirizzi di memoria che rappresentano l'inizio di una riga di bitmap e l'inizio della riga successiva bitmap. Poiché il passo viene misurato in byte, il tono di un'immagine ti aiuta a determinare il formato pixel. Il tono può anche includere memoria aggiuntiva, riservata per la bitmap.

Uso `GetPitch` con [GetBits](#getbits) per trovare singoli pixel di un'immagine.

> [!NOTE]
> Questo metodo supporta solo le bitmap sezione DIB.

##  <a name="getpixel"></a>  CImage::GetPixel

Recupera il colore del pixel in corrispondenza della posizione specificata da *x* e *y*.

```
COLORREF GetPixel(int x, int y) const throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
La coordinata x del pixel.

*y*<br/>
Coordinata y del pixel.

### <a name="return-value"></a>Valore restituito

Il rosso, verde, blu (RGB) valore di pixel. Se il pixel è all'esterno dell'area di ritaglio corrente, il valore restituito è CLR_INVALID.

##  <a name="getpixeladdress"></a>  CImage::GetPixelAddress

Recupera l'indirizzo esatto di un pixel.

```
void* GetPixelAddress(int x, int y) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
La coordinata x del pixel.

*y*<br/>
Coordinata y del pixel.

### <a name="remarks"></a>Note

L'indirizzo viene determinato in base alle coordinate di un pixel, il tono di bitmap e bit per pixel.

Per i formati che hanno meno di 8 bit per pixel, questo metodo restituisce l'indirizzo del byte che contiene il pixel. Ad esempio, se il formato di immagine ha 4 bit per pixel, `GetPixelAddress` restituisce l'indirizzo del primo pixel in byte e si deve calcolare di 2 pixel per byte.

> [!NOTE]
> Questo metodo supporta solo le bitmap sezione DIB.

##  <a name="gettransparentcolor"></a>  CImage::GetTransparentColor

Recupera la posizione indicizzata del colore trasparente nella tavolozza dei colori.

```
LONG GetTransparentColor() const throw();
```

### <a name="return-value"></a>Valore restituito

Indice del colore trasparente.

##  <a name="getwidth"></a>  CImage::GetWidth

Recupera la larghezza, in pixel, di un'immagine.

```
int GetWidth() const throw();
```

### <a name="return-value"></a>Valore restituito

Larghezza della bitmap in pixel.

##  <a name="isdibsection"></a>  CImage::IsDIBSection

Determina se la bitmap associata è una sezione DIB.

```
bool IsDIBSection() const throw();
```

### <a name="return-value"></a>Valore restituito

TRUE se la bitmap associata è una sezione DIB. In caso contrario, FALSE.

### <a name="remarks"></a>Note

Se la bitmap non è una sezione DIB, è possibile usare quanto segue `CImage` metodi che supportano solo le bitmap sezione DIB:

- [GetBits](#getbits)

- [GetColorTable](#getcolortable)

- [GetMaxColorTableEntries](#getmaxcolortableentries)

- [GetPitch](#getpitch)

- [GetPixelAddress](#getpixeladdress)

- [IsIndexed](#isindexed)

- [SetColorTable](#setcolortable)

##  <a name="isindexed"></a>  CImage::IsIndexed

Determina se i pixel della bitmap viene eseguito il mapping a una tavolozza dei colori.

```
bool IsIndexed() const throw();
```

### <a name="return-value"></a>Valore restituito

TRUE se indicizzate. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo restituisce TRUE solo se la bitmap è 8 bit (256 colori) o meno.

> [!NOTE]
> Questo metodo supporta solo le bitmap sezione DIB.

##  <a name="isnull"></a>  CImage::IsNull

Determina se una bitmap è attualmente caricata.

```
bool IsNull() const throw();
```

### <a name="remarks"></a>Note

Questo metodo restituisce TRUE se una mappa di bit non è attualmente caricato; in caso contrario, FALSE.

##  <a name="istransparencysupported"></a>  CImage::IsTransparencySupported

Indica se l'applicazione supporta le bitmap trasparenti.

```
static BOOL IsTransparencySupported() throw();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la piattaforma corrente supporta la trasparenza. In caso contrario 0.

### <a name="remarks"></a>Note

Se il valore restituito è diverso da zero e la trasparenza è supportata, una chiamata a [AlphaBlend](#alphablend), [TransparentBlt](#transparentblt), o [disegnare](#draw) gestirà i colori trasparenti.

##  <a name="load"></a>  CImage::Load

Carica un'immagine.

```
HRESULT Load(LPCTSTR pszFileName) throw();
HRESULT Load(IStream* pStream) throw();
```

### <a name="parameters"></a>Parametri

*pszFileName*<br/>
Un puntatore a una stringa contenente il nome del file di immagine da caricare.

*pStream*<br/>
Un puntatore a un flusso che contiene il nome del file di immagine da caricare.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Carica l'immagine specificata dalla *pszFileName* oppure *pStream*.

I tipi di immagine valido sono BMP, GIF, JPEG, PNG e TIFF.

##  <a name="loadfromresource"></a>  CImage::LoadFromResource

Carica un'immagine da una risorsa della BITMAP.

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
Handle per un'istanza del modulo che contiene l'immagine da caricare.

*pszResourceName*<br/>
Puntatore alla stringa contenente il nome della risorsa che contiene l'immagine da caricare.

*nIDResource*<br/>
ID della risorsa da caricare.

### <a name="remarks"></a>Note

La risorsa deve essere di tipo immagine BITMAP.

##  <a name="maskblt"></a>  CImage::MaskBlt

Combina i dati relativi al colore per la bitmap di origine e di destinazione utilizzando il filtro specificato e l'operazione raster.

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
Handle per il modulo cui eseguibile contiene la risorsa.

*xDest*<br/>
La coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
La coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
La larghezza, in unità logiche, della bitmap di origine e del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, della bitmap di origine e rettangolo di destinazione.

*xSrc*<br/>
La logica coordinata x dell'angolo superiore sinistro della bitmap di origine.

*ySrc*<br/>
La logica coordinata y dell'angolo superiore sinistro della bitmap di origine.

*hbmMask*<br/>
Handle per la mappa di bit di maschera monocromatica combinato con la bitmap a colori nel contesto di dispositivo di origine.

*xMask*<br/>
L'offset orizzontale in pixel per la mappa di bit di maschera specificata dal *hbmMask* parametro.

*yMask*<br/>
L'offset verticale in pixel della bitmap di maschera specificata dal *hbmMask* parametro.

*dwROP*<br/>
Specifica in primo piano e sfondo codici di operazione raster ternaria che usa il metodo per controllare la combinazione di dati di origine e destinazione. Il codice di operazione raster in background viene archiviato nel byte più significativa della parola più significativa di questo valore. il codice di operazione raster in primo piano viene archiviato nel byte meno significativi della parola più significativa di questo valore. la parola meno significativa di questo valore viene ignorata e deve essere zero. Per una discussione di primo piano e sfondo nel contesto di questo metodo, vedere `MaskBlt` nel SDK di Windows. Per un elenco di codici di operazione raster comuni, vedere `BitBlt` nel SDK di Windows.

*rectDest*<br/>
Un riferimento a un `RECT` struttura, che identifica la destinazione.

*pointSrc*<br/>
Oggetto `POINT` struttura che indica l'angolo superiore sinistro del rettangolo di origine.

*pointMask*<br/>
Oggetto `POINT` struttura che indica l'angolo superiore sinistro dell'immagine bitmap della maschera.

*pointDest*<br/>
Un riferimento a un `POINT` struttura che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, altrimenti 0.

### <a name="remarks"></a>Note

Questo metodo si applica a Windows NT, le versioni 4.0 e versioni successive sola.

##  <a name="operator_hbitmap"></a>  CImage::operator HBITMAP

Utilizzare questo operatore per ottenere l'handle GDI di Windows associata del `CImage` oggetto. Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HBITMAP.

##  <a name="plgblt"></a>  CImage::PlgBlt

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
Un puntatore a una matrice di tre punti nello spazio logico che identificano i tre angoli del parallelogramma di destinazione. L'angolo superiore sinistro del rettangolo di origine viene eseguito il mapping al primo punto di questa matrice, l'angolo superiore destro e il secondo punto nella matrice e l'angolo inferiore sinistro e il terzo punto. L'angolo inferiore destro del rettangolo di origine viene mappato al quarto punto nel parallelogramma implicito.

*hbmMask*<br/>
Handle per una bitmap monocromatica facoltativo utilizzato per mascherare i colori del rettangolo di origine.

*xSrc*<br/>
La coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
La coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
La larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*xMask*<br/>
La coordinata x dell'angolo superiore sinistro della bitmap monocromatica.

*yMask*<br/>
La coordinata y dell'angolo superiore sinistro della bitmap monocromatica.

*rectSrc*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che specifica le coordinate del rettangolo di origine.

*pointMask*<br/>
Oggetto [punto](/previous-versions/dd162805\(v=vs.85\)) struttura che indica l'angolo superiore sinistro dell'immagine bitmap della maschera.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, altrimenti 0.

### <a name="remarks"></a>Note

Se *hbmMask* identifica una bitmap monocromatica valida, `PlgBit` Usa questa bitmap per creare una maschera di bit di dati relativi al colore dal rettangolo di origine.

Questo metodo si applica a Windows NT, le versioni 4.0 e versioni successive sola. Visualizzare [PlgBlt](/windows/desktop/api/wingdi/nf-wingdi-plgblt) nel SDK di Windows per informazioni più dettagliate.

##  <a name="releasedc"></a>  CImage::ReleaseDC

Rilascia il contesto di dispositivo.

```
void ReleaseDC() const throw();
```

### <a name="remarks"></a>Note

Poiché solo una singola bitmap può essere selezionata in un contesto di dispositivo in un momento, è necessario chiamare `ReleaseDC` per ogni chiamata a [GetDC](#getdc).

##  <a name="releasegdiplus"></a>  CImage::ReleaseGDIPlus

Rilascia le risorse usate da GDI+.

```
void ReleaseGDIPlus() throw();
```

### <a name="remarks"></a>Note

Questo metodo deve essere chiamato per liberare le risorse allocate da globale `CImage` oggetto. Visualizzare [CImage::CImage](#cimage).

##  <a name="save"></a>  CImage::Save

Salva un'immagine nel file su disco o il flusso specificato.

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
Un puntatore a un oggetto IStream COM che contiene i dati di immagine del file.

*pszFileName*<br/>
Puntatore al nome del file per l'immagine.

*guidFileType*<br/>
Il tipo di file per salvare l'immagine. Può essere uno dei seguenti:

- `ImageFormatBMP` Un'immagine bitmap non compresso.

- `ImageFormatPNG` Un'immagine compressa di grafica PNG (Portable Network).

- `ImageFormatJPEG` Immagine JPEG compressa.

- `ImageFormatGIF` Un'immagine compressa GIF.

> [!NOTE]
> Per un elenco completo delle costanti, vedere **costanti di formato di File di immagine** nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Chiamare questa funzione per salvare l'immagine usando un nome e tipo specificati. Se il *guidFileType* non è incluso, l'estensione del nome file verrà utilizzato per determinare il formato di immagine. Se nessuna estensione viene fornita, l'immagine verrà salvato in formato BMP.

##  <a name="setcolortable"></a>  CImage::SetColorTable

Imposta i valori di colore (RGB) di rosso, verdi, blu per un intervallo delle voci della tavolozza della sezione DIB.

```
void SetColorTable(
    UINT iFirstColor,
    UINT nColors,
    const RGBQUAD* prgbColors) throw();
```

### <a name="parameters"></a>Parametri

*iFirstColor*<br/>
L'indice di tabella di colore della prima voce da impostare.

*nColors*<br/>
Il numero di voci tabella colori da impostare.

*prgbColors*<br/>
Un puntatore alla matrice di [RGBQUAD](/windows/desktop/api/wingdi/ns-wingdi-tagrgbquad) strutture per impostare il colore delle voci di tabella.

### <a name="remarks"></a>Note

Questo metodo supporta solo le bitmap sezione DIB.

##  <a name="setpixel"></a>  CImage::SetPixel

Imposta il colore di un pixel in una posizione specificata nella bitmap.

```
void SetPixel(int x, int y, COLORREF color) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Posizione orizzontale del pixel da impostare.

*y*<br/>
Posizione verticale del pixel da impostare.

*color*<br/>
Il colore a cui è impostato il pixel.

### <a name="remarks"></a>Note

Questo metodo ha esito negativo se il pixel le coordinate si trovano di fuori dell'area di visualizzazione selezionato.

##  <a name="setpixelindexed"></a>  CImage::SetPixelIndexed

Imposta il colore del pixel sul colore che si trova in *iIndex* nella tavolozza dei colori.

```
void SetPixelIndexed(int x, int y, int iIndex) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Posizione orizzontale del pixel da impostare.

*y*<br/>
Posizione verticale del pixel da impostare.

*iIndex*<br/>
L'indice di un colore nella tavolozza dei colori.

##  <a name="setpixelrgb"></a>  CImage::SetPixelRGB

Imposta i pixel nei percorsi specificati da *x* e *y* con i colori indicati dal *r*, *g*, e *b*, in una di colore rosso, verde, blu immagine (RGB).

```
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
L'intensità del colore rosso.

*g*<br/>
L'intensità del colore verde.

*b*<br/>
L'intensità del colore blu.

### <a name="remarks"></a>Note

I parametri di rossi, verdi e blu sono ognuno rappresentati da un numero compreso tra 0 e 255. Se si imposta tutti i tre parametri su zero, il colore risulta combinato è nero. Se si imposta tutti i tre parametri fino a 255, il colore risulta combinato è il bianco.

##  <a name="settransparentcolor"></a>  CImage::SetTransparentColor

Imposta un colore in una posizione indicizzata specificata come trasparente.

```
LONG SetTransparentColor(LONG iTransparentColor) throw();
```

### <a name="parameters"></a>Parametri

*iTransparentColor*<br/>
L'indice in una tavolozza dei colori, del colore su impostato su trasparente. Se-1, nessun colore è impostato su trasparente.

### <a name="return-value"></a>Valore restituito

L'indice del colore impostato in precedenza come trasparente.

##  <a name="stretchblt"></a>  CImage::StretchBlt

Copia una bitmap dal contesto di dispositivo di origine in questo contesto di dispositivo corrente.

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
La coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
La coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
La larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*dwROP*<br/>
L'operazione raster da eseguire. Codici di operazione raster definiscono esattamente come combinare i bit di origine, destinazione e il modello (come definito dal pennello attualmente selezionato) per formare la destinazione. Visualizzare [BitBlt](/windows/desktop/api/wingdi/nf-wingdi-bitblt) nel SDK di Windows per un elenco di altri codici di operazione raster e le relative descrizioni.

*rectDest*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura, che identifica la destinazione.

*xSrc*<br/>
La coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
La coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
La larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectSrc*<br/>
Un riferimento a un `RECT` struttura, che identifica l'origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, altrimenti 0.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [StretchBlt](/windows/desktop/api/wingdi/nf-wingdi-stretchblt) nel SDK di Windows.

##  <a name="transparentblt"></a>  CImage::TransparentBlt

Copia una bitmap dal contesto di dispositivo di origine in questo contesto di dispositivo corrente.

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
La coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*yDest*<br/>
La coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.

*nDestWidth*<br/>
La larghezza, in unità logiche, del rettangolo di destinazione.

*nDestHeight*<br/>
Altezza, in unità logiche, del rettangolo di destinazione.

*crTransparent*<br/>
Il colore nella bitmap di origine da trattare come trasparente. Per impostazione predefinita, CLR_INVALID, che indica che il colore attualmente impostato come colore trasparente dell'immagine deve essere utilizzato.

*rectDest*<br/>
Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura, che identifica la destinazione.

*xSrc*<br/>
La coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*ySrc*<br/>
La coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.

*nSrcWidth*<br/>
La larghezza, in unità logiche, del rettangolo di origine.

*nSrcHeight*<br/>
Altezza, in unità logiche, del rettangolo di origine.

*rectSrc*<br/>
Un riferimento a un `RECT` struttura, che identifica l'origine.

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario, FALSE.

### <a name="remarks"></a>Note

`TransparentBlt` è supportato per le bitmap di origine di 4 bit per pixel e a 8 bit per pixel. Uso [CImage::AlphaBlend](#alphablend) per specificare le bitmap a 32 bit per pixel con la trasparenza.

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
[Device-Independent Bitmap](/windows/desktop/gdi/device-independent-bitmaps)<br/>
[CreateDIBSection](/windows/desktop/api/wingdi/nf-wingdi-createdibsection)<br/>
[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)<br/>
[Device-Independent Bitmap](/windows/desktop/gdi/device-independent-bitmaps)<br/>
[CreateDIBSection](/windows/desktop/api/wingdi/nf-wingdi-createdibsection)
