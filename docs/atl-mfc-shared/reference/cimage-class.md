---
title: CImage (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 02/01/2018
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 762941834820edda09970750af752d4c8a9df61c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32366315"
---
# <a name="cimage-class"></a>CImage (classe)
`CImage` Fornisce il supporto avanzato per le bitmap, inclusa la possibilità di caricare e salvare le immagini in formato JPEG, GIF, BMP e grafica PNG (Portable Network).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
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
|[CImage::Attach](#attach)|Collega un `HBITMAP` per un `CImage` oggetto. È utilizzabile con bitmap di sezione non DIB o DIB sezione bitmap.|  
|[CImage::BitBlt](#bitblt)|Copia una bitmap dal contesto del dispositivo di origine in questo contesto di dispositivo corrente.|  
|[CImage::Create](#create)|Crea una bitmap di sezione DIB e lo collega a precedentemente costruito `CImage` oggetto.|  
|[CImage::CreateEx](#createex)|Crea una bitmap di sezione DIB (con parametri aggiuntivi) e lo collega a precedentemente costruito `CImage` oggetto.|  
|[CImage::Destroy](#destroy)|Scollega la bitmap dal `CImage` oggetto ed elimina la bitmap.|  
|[CImage::Detach](#detach)|Scollega la bitmap da un `CImage` oggetto.|  
|[CImage::Draw](#draw)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione. **Disegnare** allunga o comprime la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario e gestisce riempimenti con fusione alfa e colori trasparenti.|  
|[CImage::GetBits](#getbits)|Recupera un puntatore ai valori effettive in pixel della bitmap.|  
|[CImage::GetBPP](#getbpp)|Recupera i bit per pixel.|  
|[CImage::GetColorTable](#getcolortable)|Recupera i valori di colore rossi, verdi e blu (RGB) da un intervallo di voci nella tabella dei colori.|  
|[CImage::GetDC](#getdc)|Recupera il contesto di dispositivo in cui è stata selezionata la bitmap corrente.|  
|[CImage::GetExporterFilterString](#getexporterfilterstring)|Trova i formati di immagini disponibili e le relative descrizioni.|  
|[CImage::GetHeight](#getheight)|Recupera l'altezza dell'immagine in pixel.|  
|[CImage::GetImporterFilterString](#getimporterfilterstring)|Trova i formati di immagini disponibili e le relative descrizioni.|  
|[CImage::GetMaxColorTableEntries](#getmaxcolortableentries)|Recupera il numero massimo di voci nella tabella dei colori.|  
|[CImage::GetPitch](#getpitch)|Recupera il tono dell'immagine corrente, in byte.|  
|[CImage::GetPixel](#getpixel)|Recupera il colore del pixel specificato da *x* e *y*.|  
|[CImage::GetPixelAddress](#getpixeladdress)|Recupera l'indirizzo di un determinato pixel.|  
|[CImage::GetTransparentColor](#gettransparentcolor)|Recupera la posizione del colore trasparente nella tabella dei colori.|  
|[CImage::GetWidth](#getwidth)|Recupera la larghezza dell'immagine in pixel.|  
|[CImage::IsDIBSection](#isdibsection)|Determina se la bitmap associata è disponibile una sezione DIB.|  
|[CImage::IsIndexed](#isindexed)|Indica che vengono eseguito il mapping di colori di una bitmap per una tavolozza indicizzata.|  
|[CImage::IsNull](#isnull)|Indica se una bitmap di origine è attualmente caricata.|  
|[CImage:: IsTransparencySupported](#istransparencysupported)|Indica se l'applicazione supporta le bitmap trasparenti.|  
|[CImage::Load](#load)|Carica un'immagine dal file specificato.|  
|[CImage::LoadFromResource](#loadfromresource)|Carica un'immagine dalla risorsa specificata.|  
|[CImage::MaskBlt](#maskblt)|Combina i dati di colore per le bitmap di origine e di destinazione utilizzando la maschera specificata e l'operazione raster.|  
|[CImage::PlgBlt](#plgblt)|Esegue un trasferimento a blocchi di bit da un rettangolo in un contesto di dispositivo di origine in un parallelogramma in un contesto di dispositivo di destinazione.|  
|[CImage::ReleaseDC](#releasedc)|Rilascia il contesto di dispositivo che è stato recuperato con [CImage::GetDC](#getdc).|  
|[CImage::ReleaseGDIPlus](#releasegdiplus)|Rilascia le risorse utilizzate da GDI+. Deve essere chiamato per liberare risorse create da globale `CImage` oggetto.|  
|[CImage::Save](#save)|Salva un'immagine come il tipo specificato. **Salvare** non è possibile specificare le opzioni dell'immagine.|  
|[CImage::SetColorTable](#setcolortable)|Imposta RGB rosso, verde e blu) in un intervallo di voci nella tabella del colore della sezione DIB valori di colore.|  
|[CImage::SetPixel](#setpixel)|Imposta i pixel in corrispondenza delle coordinate specificate per il colore specificato.|  
|[CImage::SetPixelIndexed](#setpixelindexed)|Imposta il pixel in corrispondenza delle coordinate specificate per il colore in corrispondenza dell'indice specificato della tavolozza.|  
|[CImage::SetPixelRGB](#setpixelrgb)|Imposta i pixel in corrispondenza delle coordinate specificate al valore specificato rosso, verde, blu (RGB).|  
|[CImage::SetTransparentColor](#settransparentcolor)|Imposta l'indice del colore da trattare come trasparente. Solo un colore nella tavolozza può essere trasparente.|  
|[CImage::StretchBlt](#stretchblt)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione, allungando o comprimendo la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario.|  
|[CImage::TransparentBlt](#transparentblt)|Copia una bitmap con colore trasparente dal contesto del dispositivo di origine in questo contesto di dispositivo corrente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImage::operator HBITMAP](#operator_hbitmap)|Restituisce l'handle di Windows collegata la `CImage` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CImage` accetta le bitmap utilizzate come entrambi sezioni bitmap indipendente dalla periferica (DIB) o No. Tuttavia, è possibile utilizzare [Create](#create) oppure [CImage::Load](#load) con sezioni introduttive DIB solo. È possibile collegare una bitmap di sezione non DIB a un `CImage` utilizzando [collegamento](#attach), ma non è possibile utilizzare le seguenti `CImage` metodi che supportano solo le bitmap di sezione DIB:  
  
- [GetBits](#getbits)  
  
- [GetColorTable](#getcolortable)  
  
- [GetMaxColorTableEntries](#getmaxcolortableentries)  
  
- [GetPitch](#getpitch)  
  
- [GetPixelAddress](#getpixeladdress)  
  
- [IsIndexed](#isindexed)  
  
- [SetColorTable](#setcolortable)  
  
 Per determinare se una bitmap associata è disponibile una sezione DIB, chiamare [IsDibSection](#isdibsection)**.**  
  
> [!NOTE]
> **Nota** In Visual Studio .NET 2003, questa classe tiene il conteggio del numero di `CImage` gli oggetti creati. Quando il conteggio è pari a 0, la funzione **GdiplusShutdown** viene chiamato automaticamente per rilasciare le risorse utilizzate da GDI+. Ciò garantisce che qualsiasi `CImage` gli oggetti creati direttamente o indirettamente tramite le DLL vengono sempre eliminati correttamente e che **GdiplusShutdown** non viene chiamato da `DllMain`.  
  
> [!NOTE]
>  Utilizzando `CImage` oggetti in una DLL non è consigliata. Se è necessario utilizzare globale `CImage` oggetto in una DLL, chiamata [CImage::ReleaseGDIPlus](#releasegdiplus) rilasciare in modo esplicito le risorse utilizzate da GDI+.  
  
 `CImage` non è possibile selezionare in un nuovo [CDC](../../mfc/reference/cdc-class.md). `CImage` Crea il proprio **HDC** per l'immagine. Poiché un `HBITMAP` può essere selezionata solo in uno **HDC** contemporaneamente, il `HBITMAP` associato il `CImage` non possono essere selezionati in un altro **HDC**. Se è necessario un `CDC`, recuperare il **HDC** dal `CImage` e assegnarle a [CDC::FromHandle] (... /.. /MFC/Reference/CDC-Class.MD#cdc__fromhandle.  
  
## <a name="example"></a>Esempio  
```cpp  
// Get a CDC for the image
CDC* pDC = CDC::FromHandle(m_myImage.GetDC());

// Use pDC here
pDC->Rectangle(0, 40, 100, 50);
m_myImage.ReleaseDC();
```  
  
 Quando si utilizza `CImage` in un progetto MFC, tenere presente le funzioni membro del progetto prevedono un puntatore a un [CBitmap](../../mfc/reference/cbitmap-class.md) oggetto. Se si desidera utilizzare `CImage` con una funzione, ad esempio [CMenu:: AppendMenu](../../mfc/reference/cmenu-class.md#appendmenu), utilizzare [CBitmap::FromHandle](../../mfc/reference/cbitmap-class.md#fromhandle), passare il `CImage` `HBITMAP`e utilizzare il restituito`CBitmap*`.  

  
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

  
 Tramite `CImage`, si ha accesso ai bit effettivo di una sezione DIB. È possibile utilizzare un `CImage` dell'oggetto in qualsiasi punto in cui è utilizzato in precedenza una sezione HBITMAP Win32 o DIB.  
  
 È possibile utilizzare `CImage` da MFC o ATL.  
  
> [!NOTE]
>  Quando si crea un progetto utilizzando `CImage`, è necessario definire `CString` prima di includere `atlimage.h`. Se il progetto utilizza ATL senza MFC, includere `atlstr.h` prima di includere `atlimage.h`. Se il progetto utilizza MFC (o se si tratta di un progetto ATL con supporto MFC), includere `afxstr.h` prima di includere `atlimage.h`.  
>   
>  Analogamente, è necessario includere `atlimage.h` prima di includere `atlimpl.cpp`. A tale scopo facilmente, includere `atlimage.h` nel `stdafx.h`.  
  
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
 `hDestDC`  
 Handle per il contesto di dispositivo di destinazione.  
  
 `xDest`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `yDest`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 *bSrcAlpha*  
 Un valore di trasparenza alfa da utilizzare su una bitmap di origine. Il valore predefinito di 0xff (255) si presuppone che l'immagine è opaco e che si desidera utilizzare solo valori alfanumerici per pixel.  
  
 `bBlendOp`  
 La funzione di fusione alfa per origine e bitmap di destinazione, un valore alfa globale da applicare per la bitmap di origine e le informazioni sul formato per la bitmap di origine. Le funzioni di blend di origine e destinazione sono attualmente limitate a **AC_SRC_OVER**.  
  
 `pointDest`  
 Un riferimento a un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.  
  
 `nDestWidth`  
 La larghezza, in unità logiche, del rettangolo di destinazione.  
  
 `nDestHeight`  
 Altezza, in unità logiche, del rettangolo di destinazione.  
  
 `xSrc`  
 La logica coordinata x dell'angolo superiore sinistro del rettangolo di origine.  
  
 `ySrc`  
 La logica coordinata y dell'angolo superiore sinistro del rettangolo di origine.  
  
 `nSrcWidth`  
 La larghezza, in unità logiche, del rettangolo di origine.  
  
 `nSrcHeight`  
 Altezza, in unità logiche, del rettangolo di origine.  
  
 `rectDest`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura, che identifica la destinazione.  
  
 `rectSrc`  
 Un riferimento a un `RECT` struttura, che identifica l'origine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La fusione alfa bitmap supporta la sfumatura di colore sulla base di ogni pixel.  
  
 Quando `bBlendOp` è impostata sul valore predefinito di **AC_SRC_OVER**, la bitmap di origine viene posizionata sopra la bitmap di destinazione in base ai valori alfa dei pixel di origine.  

##  <a name="attach"></a>  CImage::Attach  
 Collega `hBitmap` per un `CImage` oggetto.  
  
```
void Attach(HBITMAP hBitmap, DIBOrientation eOrientation = DIBOR_DEFAULT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hBitmap`  
 Un handle a un `HBITMAP`.  
  
 *eOrientation*  
 Specifica l'orientamento della bitmap. Può essere uno dei seguenti:  
  
- **DIBOR_DEFAULT** l'orientamento della bitmap è determinata dal sistema operativo. Tuttavia, ciò può non sempre avere i risultati desiderati in tutti i sistemi operativi. Per ulteriori informazioni, vedere l'articolo della Knowledge Base ( **Q186586**): PRB: GetObject () sempre restituisce positivo altezza per DIB sezioni.  
  
- **DIBOR_BOTTOMUP** le righe della bitmap sono in ordine inverso. In questo modo [CImage::GetBits](#getbits) per restituire un puntatore verso la fine del buffer di bitmap e [CImage::GetPitch](#getpitch) per restituire un numero negativo.  
  
- **DIBOR_TOPDOWN** le righe della bitmap sono dall'alto verso il basso. In questo modo [CImage::GetBits](#getbits) per restituire un puntatore al primo byte del buffer di bitmap e [CImage::GetPitch](#getpitch) per restituire un numero positivo.  
  
### <a name="remarks"></a>Note  
 La bitmap può essere una bitmap di sezione non DIB o una bitmap di sezione DIB. Vedere [IsDIBSection](#isdibsection) per un elenco di metodi che è possibile utilizzare solo con DIB sezione bitmap.  
  
##  <a name="bitblt"></a>  CImage::BitBlt  
 Copia una bitmap dal contesto del dispositivo di origine in questo contesto di dispositivo corrente.  
  
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
 `hDestDC`  
 La destinazione **HDC**.  
  
 `xDest`  
 La logica coordinata x dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `yDest`  
 La logica coordinata y dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `dwROP`  
 L'operazione raster da eseguire. Codici di operazione raster definiscono esattamente come combinare i bit di origine, destinazione e il modello (come definito dal pennello selezionato) per formare la destinazione. Vedere [BitBlt](http://msdn.microsoft.com/library/windows/desktop/dd183370) in Windows SDK per un elenco di altri codici di operazione raster e delle relative descrizioni.  
  
 `pointDest`  
 Oggetto [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che indica l'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nDestWidth`  
 La larghezza, in unità logiche, del rettangolo di destinazione.  
  
 `nDestHeight`  
 Altezza, in unità logiche, del rettangolo di destinazione.  
  
 `xSrc`  
 La logica coordinata x dell'angolo superiore sinistro del rettangolo di origine.  
  
 `ySrc`  
 La logica coordinata y dell'angolo superiore sinistro del rettangolo di origine.  
  
 `rectDest`  
 Oggetto [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che indica il rettangolo di destinazione.  
  
 `pointSrc`  
 Oggetto **punto** struttura che indica l'angolo superiore sinistro del rettangolo di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [BitBlt](http://msdn.microsoft.com/library/windows/desktop/dd183370) in Windows SDK.  
  
##  <a name="cimage"></a>  CImage::CImage  
 Costruisce un oggetto `CImage`.  
  
```
CImage() throw();
```  
  
### <a name="remarks"></a>Note  
 Dopo avere costruito un oggetto, chiamare [crea](#create), [carico](#load), [LoadFromResource](#loadfromresource), o [collegamento](#attach) per collegare una bitmap per l'oggetto.  
  
 **Nota** In Visual Studio, questa classe tiene il conteggio del numero di `CImage` gli oggetti creati. Quando il conteggio è pari a 0, la funzione **GdiplusShutdown** viene chiamato automaticamente per rilasciare le risorse utilizzate da GDI+. Ciò garantisce che qualsiasi `CImage` gli oggetti creati direttamente o indirettamente tramite le DLL vengono sempre eliminati correttamente e che **GdiplusShutdown** non viene chiamato da DllMain.  
  
 Utilizzando `CImage` oggetti in una DLL non è consigliata. Se è necessario utilizzare globale `CImage` oggetto in una DLL, chiamata [CImage::ReleaseGDIPlus](#releasegdiplus) rilasciare in modo esplicito le risorse utilizzate da GDI+.  
  
##  <a name="create"></a>  CImage::Create  
 Crea un `CImage` bitmap e associarla a precedentemente costruito `CImage` oggetto.  
  
```
BOOL Create(
 int nWidth,
 int nHeight,
 int nBPP,
 DWORD dwFlags = 0) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nWidth`  
 La larghezza del `CImage` bitmap, in pixel.  
  
 `nHeight`  
 L'altezza del `CImage` bitmap, in pixel. Se `nHeight` è positivo, la bitmap è DIB dal basso in alto e l'origine è l'angolo inferiore sinistro. Se `nHeight` è negativo, la bitmap è DIB dall'alto in basso e l'origine è l'angolo superiore sinistro.  
  
 `nBPP`  
 Il numero di bit per pixel della bitmap. In genere 4, 8, 16, 24 o 32. Può essere 1 per la bitmap monocromatica o maschere.  
  
 `dwFlags`  
 Specifica se l'oggetto bitmap dispone di un canale alfa. Può essere una combinazione di zero o più dei seguenti valori:  
  
- **createAlphaChannel** può essere utilizzato solo se `nBPP` è 32, e `eCompression` viene **BI_RGB**. Se specificato, l'immagine creato ha un valore alfa (trasparenza) per ciascun pixel, archiviato in 4 byte di ogni pixel (non utilizzato in un'immagine a 32 bit non alfanumerici). Questo canale alfa viene utilizzato automaticamente quando si chiama [CImage::AlphaBlend](#alphablend).  
  
> [!NOTE]
>  Nelle chiamate a [CImage::Draw](#draw), le immagini con un canale alfa sono automaticamente alfa combinati nella destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="createex"></a>  CImage::CreateEx  
 Crea un `CImage` bitmap e associarla a precedentemente costruito `CImage` oggetto.  
  
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
 `nWidth`  
 La larghezza del `CImage` bitmap, in pixel.  
  
 `nHeight`  
 L'altezza del `CImage` bitmap, in pixel. Se `nHeight` è positivo, la bitmap è DIB dal basso in alto e l'origine è l'angolo inferiore sinistro. Se `nHeight` è negativo, la bitmap è DIB dall'alto in basso e l'origine è l'angolo superiore sinistro.  
  
 `nBPP`  
 Il numero di bit per pixel della bitmap. In genere 4, 8, 16, 24 o 32. Può essere 1 per la bitmap monocromatica o maschere.  
  
 `eCompression`  
 Specifica il tipo di compressione per una bitmap dal basso in alto compressa (DIB dall'alto in basso non può essere compressa). Il valore può essere uno dei seguenti:  
  
- **BI_RGB** il formato non compresso. Se si specifica questo valore quando si chiama `CImage::CreateEx` è equivalente alla chiamata `CImage::Create`.  
  
- **BI_BITFIELDS** il formato non compresso e la tabella dei colori è costituito da tre `DWORD` maschere di colore che specifica il rosso, verde e blu componenti, rispettivamente, di ogni pixel. Questo è valido se utilizzata con 16 e 32 bpp bitmap.  
  
 *pdwBitfields*  
 Utilizzato solo se `eCompression` è impostato su **BI_BITFIELDS**, in caso contrario deve essere **NULL**. Un puntatore a una matrice di tre `DWORD` maschere di bit, che specifica quali bit di ogni pixel vengono usati per il rosso, verde e blu del colore, i componenti, rispettivamente. Per informazioni sulle restrizioni per i campi di bit, vedere [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) in Windows SDK.  
  
 `dwFlags`  
 Specifica se l'oggetto bitmap dispone di un canale alfa. Può essere una combinazione di zero o più dei seguenti valori:  
  
- **createAlphaChannel** può essere utilizzato solo se `nBPP` è 32, e `eCompression` viene **BI_RGB**. Se specificato, l'immagine creato ha un valore alfa (trasparenza) per ciascun pixel, archiviato in 4 byte di ogni pixel (non utilizzato in un'immagine a 32 bit non alfanumerici). Questo canale alfa viene utilizzato automaticamente quando si chiama [CImage::AlphaBlend](#alphablend).  
  
    > [!NOTE]
    >  Nelle chiamate a [CImage::Draw](#draw), le immagini con un canale alfa sono automaticamente alfa combinati nella destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se ha esito positivo. In caso contrario **FALSE**.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente crea una bitmap 100 x 100 pixel, con 16 bit per codificare ogni pixel. Un pixel a 16 bit specificato, il componente rosso di codificare bit 0-3, 4 a 7 bit codificare verde e 8 a 11 bit codificare blu. I 4 bit rimanenti vengono utilizzati.  

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
 Un handle per la bitmap scollegato, o **NULL** se non è associata alcuna bitmap.  
  
##  <a name="draw"></a>  CImage::Draw  
 Copia una bitmap dal contesto del dispositivo di origine per il contesto di dispositivo corrente.  
  
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
 `hDestDC`  
 Handle per il contesto di dispositivo di destinazione.  
  
 `xDest`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `yDest`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nDestWidth`  
 La larghezza, in unità logiche, del rettangolo di destinazione.  
  
 `nDestHeight`  
 Altezza, in unità logiche, del rettangolo di destinazione.  
  
 `xSrc`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `ySrc`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `nSrcWidth`  
 La larghezza, in unità logiche, del rettangolo di origine.  
  
 `nSrcHeight`  
 Altezza, in unità logiche, del rettangolo di origine.  
  
 `rectDest`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura, che identifica la destinazione.  
  
 `rectSrc`  
 Un riferimento a un `RECT` struttura, che identifica l'origine.  
  
 `pointDest`  
 Un riferimento a un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 **Disegnare** esegue la stessa operazione come [StretchBlt](#stretchblt), a meno che l'immagine contiene un colore trasparente o canale alfa. In tal caso, **disegnare** esegue la stessa operazione come [TransparentBlt](#transparentblt) o [AlphaBlend](#alphablend) come richiesto.  
  
 Per le versioni di **disegnare** che non specificano un rettangolo di origine, l'intera immagine di origine è il valore predefinito. Per la versione di **disegnare** che non consente di specificare una dimensione per il rettangolo di destinazione, la dimensione dell'immagine di origine è il valore predefinito e senza estensione o riduzione si verifica.  
  
##  <a name="getbits"></a>  CImage::GetBits  
 Recupera un puntatore ai valori di bit effettivo di un pixel specifico in una bitmap.  
  
```
void* GetBits() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al buffer di bitmap. Se la bitmap DIB dal basso in alto, i punti di puntatore verso la fine del buffer. Se la bitmap DIB dall'alto in basso, il puntatore punta al primo byte del buffer.  
  
### <a name="remarks"></a>Note  
 Tramite questo puntatore, insieme al valore restituito da [GetPitch](#getpitch), è possibile individuare e modificare singoli pixel in un'immagine.  
  
> [!NOTE]
>  Questo metodo supporta solo le bitmap sezione DIB; di conseguenza, si accede pixel di un `CImage` allo stesso modo pixel di una sezione DIB dell'oggetto. Il puntatore restituito punta al pixel in corrispondenza della posizione (0, 0).  
  
##  <a name="getbpp"></a>  CImage::GetBPP  
 Recupera il valore di bit per pixel.  
  
```
int GetBPP() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di bit per pixel.  
  
### <a name="remarks"></a>Note  
 Questo valore determina il numero di bit che definiscono ogni pixel e il numero massimo di colori nella bitmap.  
  
 In genere, i bit per pixel è 1, 4, 8, 16, 24 o 32. Vedere il **biBitCount** membro di [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) in Windows SDK per ulteriori informazioni su questo valore.  
  
##  <a name="getcolortable"></a>  CImage::GetColorTable  
 Recupera i valori di colore rossi, verdi e blu (RGB) da un intervallo di voci nella tavolozza della sezione DIB.  
  
```
void GetColorTable(UINT iFirstColor,
 UINT nColors,
 RGBQUAD* prgbColors) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `iFirstColor`  
 L'indice della tabella del colore della prima voce da recuperare.  
  
 `nColors`  
 Il numero di voci della tabella colore da recuperare.  
  
 `prgbColors`  
 Un puntatore alla matrice di [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) strutture per recuperare il colore delle voci di tabella.  
  
##  <a name="getdc"></a>  CImage::GetDC  
 Recupera il contesto di dispositivo che ha attualmente l'immagine selezionata al suo interno.  
  
```
HDC GetDC() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per un contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
 Per ogni chiamata a `GetDC`, è necessario disporre di una chiamata successiva a [ReleaseDC](#releasedc).  
  
##  <a name="getexporterfilterstring"></a>  CImage::GetExporterFilterString  
 Trova i formati di immagine disponibile per il salvataggio delle immagini.  
  
```
static HRESULT GetExporterFilterString(CSimpleString& strExporters,
 CSimpleArray<GUID>& aguidFileTypes,
 LPCTSTR pszAllFilesDescription = NULL,
 DWORD dwExclude = excludeDefaultSave,
 TCHAR chSeparator = _T('|'));
```  
  
### <a name="parameters"></a>Parametri  
 *strExporters*  
 Un riferimento a un **CSimpleString** oggetto. Vedere **osservazioni** per ulteriori informazioni.  
  
 `aguidFileTypes`  
 Una matrice di GUID, con ogni elemento che corrisponde a uno dei tipi di file nella stringa. Nell'esempio di `pszAllFilesDescription` riportato di seguito, `aguidFileTypes`[0] è `GUID_NULL` e i restanti valori della matrice sono i formati di file di immagine supportati dal sistema operativo corrente.  
  
> [!NOTE]
>  Per un elenco completo delle costanti, vedere **costanti di formato di File di immagine** in Windows SDK.  
  
 `pszAllFilesDescription`  
 Se questo parametro non è **NULL**, la stringa di filtro sarà necessario un ulteriore filtro all'inizio dell'elenco. Questo filtro avrà il valore corrente di `pszAllFilesDescription` per la descrizione e accetta i file di estensione supportati da altre utilità di esportazione nell'elenco.  
  
 Ad esempio:  

```cpp  
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any exporter.
CImage::GetExporterFilterString(
    strExporters, aguidFileTypes, 
 _T("All Image Files"));
```  

  
 `dwExclude`  
 Set di flag di bit che specifica quali tipi di file da escludere dall'elenco. Flag consentiti sono:  
  
- **excludeGIF** = 0x01 esclude GIF (file).  
  
- **excludeBMP** = 0x02 esclude BMP (Bitmap di Windows) file.  
  
- **excludeEMF** = 0x04 esclude EMF (Enhanced Metafile) file.  
  
- **excludeWMF** = 0x08 esclude WMF (Windows Metafile) file.  
  
- **excludeJPEG** = 0x10 esclude JPEG (file).  
  
- **excludePNG** = file PNG esclude 0x20.  
  
- **excludeTIFF** = file TIFF esclude 0x40.  
  
- **excludeIcon** = 0x80 esclude ICO (icona di Windows) file.  
  
- **excludeOther** = 0x80000000 esclude qualsiasi altro tipo di file non elencato in precedenza.  
  
- **excludeDefaultLoad** = 0 per il carico, tutti i file con i tipi sono inclusi per impostazione predefinita  
  
- **excludeDefaultSave** = **excludeIcon &#124; excludeEMF &#124; excludeWMF** per il salvataggio, questi file sono esclusi per impostazione predefinita perché sono in genere sono necessari requisiti speciali.  
  
 `chSeparator`  
 Il separatore utilizzato tra i formati di immagine. Vedere **osservazioni** per ulteriori informazioni.  
  
### <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 È possibile passare la stringa di formato risultante il MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) formati di oggetto per esporre le estensioni di file dell'immagine disponibile nella finestra di dialogo Salva con nome.  
  
 Il parametro *strExporter* ha il formato:  
  
 file description0&#124;\*.ext0&#124;filedescription1&#124;\*Est1&#124;... file descrizione *n*&#124;\*ext *n*&#124;&#124;  
  
 in '&#124;' è il carattere di separazione specificato da `chSeparator`. Ad esempio:  
  
 `"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`  
  
 Utilizzare il separatore predefinito '&#124;' Se si passa la stringa a un MFC `CFileDialog` oggetto. Se si passa la stringa di un comune finestra di dialogo Salva File, utilizzare il separatore null '\0'.  
  
##  <a name="getheight"></a>  CImage::GetHeight  
 Recupera l'altezza, in pixel, di un'immagine.  
  
```
int GetHeight() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza, in pixel, di un'immagine.  
  
##  <a name="getimporterfilterstring"></a>  CImage::GetImporterFilterString  
 Trova i formati di immagine disponibile per il caricamento di immagini.  
  
```
static HRESULT GetImporterFilterString(CSimpleString& strImporters,
 CSimpleArray<GUID>& aguidFileTypes,
 LPCTSTR pszAllFilesDescription = NULL,
 DWORD dwExclude = excludeDefaultLoad,
 TCHAR chSeparator = _T('|'));
```  
  
### <a name="parameters"></a>Parametri  
 *strImporters*  
 Un riferimento a un **CSimpleString** oggetto. Vedere **osservazioni** per ulteriori informazioni.  
  
 `aguidFileTypes`  
 Una matrice di GUID, con ogni elemento che corrisponde a uno dei tipi di file nella stringa. Nell'esempio di `pszAllFilesDescription` riportato di seguito, `aguidFileTypes`[0] è `GUID_NULL` con la matrice restante valori sono i formati di file di immagine supportati dal sistema operativo corrente.  
  
> [!NOTE]
>  Per un elenco completo delle costanti, vedere **costanti di formato di File di immagine** in Windows SDK.  
  
 `pszAllFilesDescription`  
 Se questo parametro non è **NULL**, la stringa di filtro sarà necessario un ulteriore filtro all'inizio dell'elenco. Questo filtro avrà il valore corrente di `pszAllFilesDescription` per la descrizione e accetta i file di estensione supportati da altre utilità di esportazione nell'elenco.  
  
 Ad esempio:  

```cpp  
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any importer.
CImage::GetImporterFilterString(
    strImporters, aguidFileTypes, 
 _T("All Image Files"));
```  

  
 `dwExclude`  
 Set di flag di bit che specifica quali tipi di file da escludere dall'elenco. Flag consentiti sono:  
  
- **excludeGIF** = 0x01 esclude GIF (file).  
  
- **excludeBMP** = 0x02 esclude BMP (Bitmap di Windows) file.  
  
- **excludeEMF** = 0x04 esclude EMF (Enhanced Metafile) file.  
  
- **excludeWMF** = 0x08 esclude WMF (Windows Metafile) file.  
  
- **excludeJPEG** = 0x10 esclude JPEG (file).  
  
- **excludePNG** = file PNG esclude 0x20.  
  
- **excludeTIFF** = file TIFF esclude 0x40.  
  
- **excludeIcon** = 0x80 esclude ICO (icona di Windows) file.  
  
- **excludeOther** = 0x80000000 esclude qualsiasi altro tipo di file non elencato in precedenza.  
  
- **excludeDefaultLoad** = 0 per il carico, tutti i file con i tipi sono inclusi per impostazione predefinita  
  
- **excludeDefaultSave** = **excludeIcon &#124; excludeEMF &#124; excludeWMF** per il salvataggio, questi file sono esclusi per impostazione predefinita perché sono in genere sono necessari requisiti speciali.  
  
 `chSeparator`  
 Il separatore utilizzato tra i formati di immagine. Vedere **osservazioni** per ulteriori informazioni.  
  
### <a name="remarks"></a>Note  
 È possibile passare la stringa di formato risultante il MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) formati di oggetto per esporre le estensioni di file dell'immagine disponibile nel **Apri File** la finestra di dialogo.  
  
 Il parametro *strImporter* ha il formato:  
  
 file description0&#124;\*.ext0&#124;filedescription1&#124;\*Est1&#124;... file descrizione *n*&#124;\*ext *n*&#124;&#124;  
  
 in '&#124;' è il carattere di separazione specificato da `chSeparator`. Ad esempio:  
  
 `"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`  
  
 Utilizzare il separatore predefinito '&#124;' Se si passa la stringa a un MFC `CFileDialog` oggetto. Utilizzare il separatore null '\0' Se si passa la stringa di un comune **Apri File** la finestra di dialogo.  
  
##  <a name="getmaxcolortableentries"></a>  CImage::GetMaxColorTableEntries  
 Recupera il numero massimo di voci nella tabella dei colori.  
  
```
int GetMaxColorTableEntries() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di voci nella tabella dei colori.  
  
### <a name="remarks"></a>Note  
 Questo metodo supporta solo le bitmap di sezione DIB.  
  
##  <a name="getpitch"></a>  CImage::GetPitch  
 Recupera il passo di un'immagine.  
  
```
int GetPitch() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Passo dell'immagine. Se il valore restituito è negativo, il bitmap è DIB dal basso in alto e l'origine è l'angolo inferiore sinistro. Se il valore restituito è positivo, la bitmap è DIB dall'alto in basso e l'origine è l'angolo superiore sinistro.  
  
### <a name="remarks"></a>Note  
 Il passo è la distanza, espressa in byte, tra due indirizzi di memoria che rappresentano l'inizio di una riga di bitmap e l'inizio della riga successiva di bitmap. Perché il tono è misurata in byte, il tono di un'immagine consente di determinare il formato pixel. Il tono può anche includere memoria aggiuntiva, riservata per la bitmap.  
  
 Utilizzare `GetPitch` con [GetBits](#getbits) per trovare i singoli pixel di un'immagine.  
  
> [!NOTE]
>  Questo metodo supporta solo le bitmap di sezione DIB.  
  
##  <a name="getpixel"></a>  CImage::GetPixel  
 Recupera il colore del pixel nella posizione specificata da *x* e *y*.  
  
```
COLORREF GetPixel(int x,int y) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 La coordinata x del pixel.  
  
 *y*  
 La coordinata y del pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Valore (RGB) rosso, verde e blu del pixel. Se il pixel è di fuori l'area di visualizzazione corrente, il valore restituito è **CLR_INVALID**.  
  
##  <a name="getpixeladdress"></a>  CImage::GetPixelAddress  
 Recupera l'indirizzo esatto di un pixel.  
  
```
void* GetPixelAddress(int x,int y) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 La coordinata x del pixel.  
  
 *y*  
 La coordinata y del pixel.  
  
### <a name="remarks"></a>Note  
 L'indirizzo viene determinato in base alle coordinate di un pixel, il tono di bitmap e i bit per pixel.  
  
 Per i formati che hanno minore di 8 bit per pixel, questo metodo restituisce l'indirizzo del byte che contiene pixel. Ad esempio, se il formato di immagine è di 4 bit per pixel, `GetPixelAddress` restituisce l'indirizzo del primo pixel in byte ed è necessario calcolare di 2 pixel per byte.  
  
> [!NOTE]
>  Questo metodo supporta solo le bitmap di sezione DIB.  
  
##  <a name="gettransparentcolor"></a>  CImage::GetTransparentColor  
 Recupera la posizione indicizzata del colore trasparente della tavolozza dei colori.  
  
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
 La larghezza della bitmap in pixel.  
  
##  <a name="isdibsection"></a>  CImage::IsDIBSection  
 Determina se la bitmap associata è disponibile una sezione DIB.  
  
```
bool IsDIBSection() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 **true** se la bitmap associata è disponibile una sezione DIB. In caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Se la bitmap non è disponibile una sezione DIB, è possibile utilizzare le seguenti `CImage` metodi che supportano solo le bitmap di sezione DIB:  
  
- [GetBits](#getbits)  
  
- [GetColorTable](#getcolortable)  
  
- [GetMaxColorTableEntries](#getmaxcolortableentries)  
  
- [GetPitch](#getpitch)  
  
- [GetPixelAddress](#getpixeladdress)  
  
- [IsIndexed](#isindexed)  
  
- [SetColorTable](#setcolortable)  
  
##  <a name="isindexed"></a>  CImage::IsIndexed  
 Determina se viene eseguito il mapping di pixel della bitmap per una tavolozza dei colori.  
  
```
bool IsIndexed() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 **true** indicizzata; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce **true** solo se la bitmap è di 8 bit (256 colori) o meno.  
  
> [!NOTE]
>  Questo metodo supporta solo le bitmap di sezione DIB.  
  
##  <a name="isnull"></a>  CImage::IsNull  
 Determina se una bitmap è attualmente caricata.  
  
```
bool IsNull() const throw();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce **True** se una mappa di bit non è attualmente caricato; in caso contrario **False**.  
  
##  <a name="istransparencysupported"></a>  CImage:: IsTransparencySupported  
 Indica se l'applicazione supporta le bitmap trasparenti.  
  
```
static BOOL IsTransparencySupported() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la piattaforma corrente supporta la trasparenza. In caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il valore restituito è diverso da zero, se è supportata la trasparenza, una chiamata a [AlphaBlend](#alphablend), [TransparentBlt](#transparentblt), o [disegnare](#draw) gestirà colori trasparenti.  
  

##  <a name="load"></a>  CImage::Load  
 Carica un'immagine.  
  
```
HRESULT Load(LPCTSTR pszFileName) throw();
HRESULT Load(IStream* pStream) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszFileName`  
 Un puntatore a una stringa contenente il nome del file di immagine da caricare.  
  
 `pStream`  
 Puntatore a un flusso che contiene il nome del file di immagine da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Carica l'immagine specificata da *pszFileName* o `pStream`.  
  
 Tipi di immagine valido sono BMP, GIF, JPEG, PNG e TIFF.  
  
##  <a name="loadfromresource"></a>  CImage::LoadFromResource  
 Carica un'immagine da un `BITMAP` risorse.  
  
```
void LoadFromResource(
 HINSTANCE hInstance,
 LPCTSTR pszResourceName) throw();

void LoadFromResource(
 HINSTANCE hInstance,
 UINT nIDResource) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hInstance`  
 Handle per un'istanza del modulo che contiene l'immagine da caricare.  
  
 `pszResourceName`  
 Puntatore alla stringa contenente il nome della risorsa contenente l'immagine da caricare.  
  
 `nIDResource`  
 ID della risorsa da caricare.  
  
### <a name="remarks"></a>Note  
 La risorsa deve essere di tipo `BITMAP`.  
  
##  <a name="maskblt"></a>  CImage::MaskBlt  
 Combina i dati di colore per le bitmap di origine e di destinazione utilizzando la maschera specificata e l'operazione raster.  
  
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
 `hDestDC`  
 Handle per il modulo il cui file eseguibile contiene la risorsa.  
  
 `xDest`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `yDest`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nDestWidth`  
 La larghezza, in unità logiche, della bitmap di origine e rettangolo di destinazione.  
  
 `nDestHeight`  
 Altezza, in unità logiche, della bitmap di origine e rettangolo di destinazione.  
  
 `xSrc`  
 La logica coordinata x dell'angolo superiore sinistro della bitmap di origine.  
  
 `ySrc`  
 La logica coordinata y dell'angolo superiore sinistro della bitmap di origine.  
  
 `hbmMask`  
 Handle per la bitmap monocromatica maschera combinata con la bitmap a colori nel contesto di dispositivo di origine.  
  
 `xMask`  
 L'offset orizzontale in pixel per la bitmap di maschera specificata per il `hbmMask` parametro.  
  
 `yMask`  
 L'offset verticale in pixel per la bitmap di maschera specificata per il `hbmMask` parametro.  
  
 `dwROP`  
 Specifica i codici operazione raster ternario sfondo e primo piano che utilizza il metodo per controllare la combinazione di dati di origine e di destinazione. Il codice di operazione raster sfondo è archiviato nel byte più significativo della parola significativo di questo valore. il codice di operazione raster di primo piano viene archiviato in byte di ordine inferiore della parola significativo di questo valore. la parola meno significativa di questo valore viene ignorata e deve essere zero. Per una discussione di primo piano e sfondo nel contesto di questo metodo, vedere `MaskBlt` in Windows SDK. Per un elenco di codici di operazione raster comuni, vedere `BitBlt` in Windows SDK.  
  
 `rectDest`  
 Un riferimento a un `RECT` struttura, che identifica la destinazione.  
  
 `pointSrc`  
 Oggetto `POINT` struttura che indica l'angolo superiore sinistro del rettangolo di origine.  
  
 `pointMask`  
 Oggetto **punto** struttura indicando nell'angolo superiore sinistro dell'immagine bitmap della maschera.  
  
 `pointDest`  
 Un riferimento a un **punto** struttura che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo si applica a Windows NT, le versioni 4.0 e versioni successive soltanto.  
  
##  <a name="operator_hbitmap"></a>  CImage::operator HBITMAP  
 Utilizzare questo operatore per ottenere l'handle GDI di Windows associata del `CImage` oggetto. Questo è un operatore di cast, che supporta l'utilizzo diretto di un `HBITMAP` oggetto.  
  
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
 `hDestDC`  
 Handle per il contesto di dispositivo di destinazione.  
  
 *pPoints*  
 Un puntatore a una matrice di tre punti nello spazio logico che identificano le tre angoli del parallelogramma di destinazione. Nell'angolo superiore sinistro del rettangolo di origine viene eseguito il mapping al primo punto di questa matrice, nell'angolo superiore destro per il secondo punto di questa matrice e nell'angolo inferiore sinistro e il terzo punto. Nell'angolo inferiore destro del rettangolo di origine viene eseguito il mapping al quarto punto implicito in parallelogramma.  
  
 `hbmMask`  
 Handle per una bitmap monocromatica facoltativo utilizzato per mascherare i colori del rettangolo di origine.  
  
 `xSrc`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `ySrc`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `nSrcWidth`  
 La larghezza, in unità logiche, del rettangolo di origine.  
  
 `nSrcHeight`  
 Altezza, in unità logiche, del rettangolo di origine.  
  
 `xMask`  
 La coordinata x dell'angolo superiore sinistro della bitmap monocromatica.  
  
 `yMask`  
 La coordinata y dell'angolo superiore sinistro della bitmap monocromatica.  
  
 `rectSrc`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica le coordinate del rettangolo di origine.  
  
 `pointMask`  
 Oggetto [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura indicando nell'angolo superiore sinistro dell'immagine bitmap della maschera.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se `hbmMask` identifica una bitmap monocromatica valida, **PlgBit** utilizza questa bitmap per mascherare i bit di dati relativi al colore dal rettangolo di origine.  
  
 Questo metodo si applica a Windows NT, le versioni 4.0 e versioni successive soltanto. Vedere [PlgBlt](http://msdn.microsoft.com/library/windows/desktop/dd162804) in Windows SDK per informazioni più dettagliate.  
  
##  <a name="releasedc"></a>  CImage::ReleaseDC  
 Rilascia il contesto di dispositivo.  
  
```
void ReleaseDC() const throw();
```  
  
### <a name="remarks"></a>Note  
 Poiché solo una singola bitmap può essere selezionata in un contesto di dispositivo in un momento, è necessario chiamare `ReleaseDC` per ogni chiamata a [GetDC](#getdc).  
  
##  <a name="releasegdiplus"></a>  CImage::ReleaseGDIPlus  
 Rilascia le risorse utilizzate da GDI+.  
  
```
void ReleaseGDIPlus() throw();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo deve essere chiamato per liberare le risorse allocate da globale `CImage` oggetto. Vedere [CImage::CImage](#cimage).  
  
##  <a name="save"></a>  CImage::Save  
 Salva un'immagine in un file su disco o il flusso specificato.  
  
```
HRESULT Save(IStream* pStream,
 REFGUID guidFileType) const throw();

HRESULT Save(LPCTSTR pszFileName,
 REFGUID guidFileType= GUID_NULL) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 Un puntatore a un oggetto COM IStream contenente i dati di file dell'immagine.  
  
 *pszFileName*  
 Puntatore al nome del file per l'immagine.  
  
 `guidFileType`  
 Il tipo di file per salvare l'immagine come. Può essere uno dei seguenti:  
  
- **ImageFormatBMP** un'immagine bitmap non compresso.  
  
- **ImageFormatPNG** immagine compressa di un grafico PNG (Portable Network).  
  
- **ImageFormatJPEG** immagine compressa A JPEG.  
  
- **ImageFormatGIF** immagine compressa A GIF.  
  
> [!NOTE]
>  Per un elenco completo delle costanti, vedere **costanti di formato di File di immagine** in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per salvare l'immagine utilizzando un nome e tipo specificati. Se il `guidFileType` non è incluso, l'estensione del nome file verrà utilizzato per determinare il formato di immagine. Se nessuna estensione viene fornita, l'immagine verrà salvata in formato BMP.  
  
##  <a name="setcolortable"></a>  CImage::SetColorTable  
 Imposta i valori di colore (RGB) di rosso, verdi e blu per un intervallo di voci nella tavolozza della sezione DIB.  
  
```
void SetColorTable(
  UINT iFirstColor, 
  UINT nColors,
  const RGBQUAD* prgbColors) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `iFirstColor`  
 L'indice della tabella del colore della prima voce da impostare.  
  
 `nColors`  
 Il numero di voci della tabella colore da impostare.  
  
 `prgbColors`  
 Un puntatore alla matrice di [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) strutture per impostare il colore delle voci di tabella.  
  
### <a name="remarks"></a>Note  
 Questo metodo supporta solo le bitmap di sezione DIB.  
  
##  <a name="setpixel"></a>  CImage::SetPixel  
 Imposta il colore di un pixel in un percorso specificato nella mappa di bit.  
  
```
void SetPixel(int x, int y, COLORREF color) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 La posizione orizzontale del pixel da impostare.  
  
 *y*  
 La posizione verticale del pixel da impostare.  
  
 `color`  
 Il colore su cui è impostato il pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo non riesce se il pixel coordinate si trovano di fuori dell'area di visualizzazione selezionata.  
  
##  <a name="setpixelindexed"></a>  CImage::SetPixelIndexed  
 Imposta il colore dei pixel per il colore in `iIndex` della tavolozza dei colori.  
  
```
void SetPixelIndexed(int x, int y, int iIndex) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 La posizione orizzontale del pixel da impostare.  
  
 *y*  
 La posizione verticale del pixel da impostare.  
  
 `iIndex`  
 L'indice di un colore della tavolozza dei colori.  
  
##  <a name="setpixelrgb"></a>  CImage::SetPixelRGB  
 Imposta i pixel nei percorsi specificati da *x* e *y* ai colori indicati da *r*, *g*, e *b*, in un rosso, verde, blu immagine (RGB).  
  
```
void SetPixelRGB(  
 int x,
 int y,
 BYTE r,
 BYTE g,
 BYTE b) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 La posizione orizzontale del pixel da impostare.  
  
 *y*  
 La posizione verticale del pixel da impostare.  
  
 *r*  
 L'intensità di colore rosso.  
  
 *g*  
 L'intensità di colore verde.  
  
 *b*  
 L'intensità di colore blu.  
  
### <a name="remarks"></a>Note  
 I parametri di rossi, verde e blu ognuno sono rappresentati da un numero compreso tra 0 e 255. Se tutti e tre i parametri è impostato su zero, il colore risulta combinato è nero. Se si imposta tutte e tre i parametri a 255, il colore risulta combinato è bianco.  
  
##  <a name="settransparentcolor"></a>  CImage::SetTransparentColor  
 Imposta un colore in una posizione indicizzata specificata come trasparente.  
  
```
LONG SetTransparentColor(LONG iTransparentColor) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *iTransparentColor*  
 L'indice in una tavolozza dei colori, del colore per impostare a trasparente. Se-1, nessun colore è impostato su trasparente.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del colore impostato in precedenza come trasparente.  
  
##  <a name="stretchblt"></a>  CImage::StretchBlt  
 Copia una bitmap dal contesto del dispositivo di origine in questo contesto di dispositivo corrente.  
  
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
 `hDestDC`  
 Handle per il contesto di dispositivo di destinazione.  
  
 `xDest`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `yDest`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nDestWidth`  
 La larghezza, in unità logiche, del rettangolo di destinazione.  
  
 `nDestHeight`  
 Altezza, in unità logiche, del rettangolo di destinazione.  
  
 `dwROP`  
 L'operazione raster da eseguire. Codici di operazione raster definiscono esattamente come combinare i bit di origine, destinazione e il modello (come definito dal pennello selezionato) per formare la destinazione. Vedere [BitBlt](http://msdn.microsoft.com/library/windows/desktop/dd183370) in Windows SDK per un elenco di altri codici di operazione raster e delle relative descrizioni.  
  
 `rectDest`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura, che identifica la destinazione.  
  
 `xSrc`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `ySrc`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `nSrcWidth`  
 La larghezza, in unità logiche, del rettangolo di origine.  
  
 `nSrcHeight`  
 Altezza, in unità logiche, del rettangolo di origine.  
  
 `rectSrc`  
 Un riferimento a un `RECT` struttura, che identifica l'origine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [StretchBlt](http://msdn.microsoft.com/library/windows/desktop/dd145120) in Windows SDK.  
  
##  <a name="transparentblt"></a>  CImage::TransparentBlt  
 Copia una bitmap dal contesto del dispositivo di origine in questo contesto di dispositivo corrente.  
  
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
 `hDestDC`  
 Handle per il contesto di dispositivo di destinazione.  
  
 `xDest`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `yDest`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nDestWidth`  
 La larghezza, in unità logiche, del rettangolo di destinazione.  
  
 `nDestHeight`  
 Altezza, in unità logiche, del rettangolo di destinazione.  
  
 *crTransparent*  
 Il colore nella bitmap di origine da trattare come trasparente. Per impostazione predefinita, **CLR_INVALID**, che indica che il colore attualmente impostato come colore trasparente dell'immagine deve essere utilizzato.  
  
 `rectDest`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura, che identifica la destinazione.  
  
 `xSrc`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `ySrc`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `nSrcWidth`  
 La larghezza, in unità logiche, del rettangolo di origine.  
  
 `nSrcHeight`  
 Altezza, in unità logiche, del rettangolo di origine.  
  
 `rectSrc`  
 Un riferimento a un `RECT` struttura, che identifica l'origine.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se l'operazione riesce, in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 `TransparentBlt` è supportato per le bitmap di origine di 4 bit per pixel e 8 bit per pixel. Utilizzare [CImage::AlphaBlend](#alphablend) per specificare le bitmap a 32 bit per pixel con trasparenza.  
  
  
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
 [Esempio MMXSwarm](../../visual-cpp-samples.md)   
 [Esempio SimpleImage](../../visual-cpp-samples.md)   
 [Bitmap indipendente dal dispositivo](http://msdn.microsoft.com/library/windows/desktop/dd183562)   
 [CreateDIBSection](http://msdn.microsoft.com/library/windows/desktop/dd183494)   
 [I componenti COM Desktop ATL](../../atl/atl-com-desktop-components.md) [bitmap indipendente dal dispositivo](http://msdn.microsoft.com/library/windows/desktop/dd183562)   
 [CreateDIBSection](http://msdn.microsoft.com/library/windows/desktop/dd183494)   









