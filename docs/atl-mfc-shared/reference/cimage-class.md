---
title: CImage (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CImage
- ATL.CImage
- ATL::CImage
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
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: f74e5952401d6f9608425681cd91120b648e7b13
ms.lasthandoff: 02/24/2017

---
# <a name="cimage-class"></a>CImage (classe)
`CImage`fornisce il supporto bitmap avanzata, inclusa la possibilità di caricare e salvare le immagini in formati JPEG, GIF, BMP e grafica PNG (Portable Network).  
  
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
|[CImage::AlphaBlend](#alphablend)|Visualizza le bitmap con pixel trasparente o semitrasparente.|  
|[CImage::Attach](#attach)|Collega un `HBITMAP` per un `CImage` oggetto. È utilizzabile con bitmap di sezione non DIB o bitmap di sezione DIB.|  
|[CImage::BitBlt](#bitblt)|Copia una bitmap dal contesto del dispositivo di origine in tale contesto di dispositivo corrente.|  
|[CImage::Create](#create)|Crea una bitmap di sezione DIB e lo collega a precedentemente costruito `CImage` oggetto.|  
|[CImage::CreateEx](#createex)|Crea una bitmap di sezione DIB (con parametri aggiuntivi) e lo collega a precedentemente costruito `CImage` oggetto.|  
|[CImage::Destroy](#destroy)|Disconnette la bitmap dal `CImage` dell'oggetto ed elimina la bitmap.|  
|[CImage::Detach](#detach)|Disconnette la bitmap da un `CImage` oggetto.|  
|[CImage::Draw](#draw)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione. **Disegnare** allunga o comprime la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario e gestisce la fusione alfa e i colori trasparenti.|  
|[CImage::GetBits](#getbits)|Recupera un puntatore ai valori effettivi dei pixel della bitmap.|  
|[CImage::GetBPP](#getbpp)|Recupera i bit per pixel.|  
|[CImage::GetColorTable](#getcolortable)|Recupera i valori di colore rossi, verdi e blu (RGB) da un intervallo di voci nella tabella dei colori.|  
|[CImage::GetDC](#getdc)|Recupera il contesto di dispositivo in cui è selezionata la bitmap corrente.|  
|[CImage::GetExporterFilterString](#getexporterfilterstring)|Trova i formati di immagine disponibili e le relative descrizioni.|  
|[CImage::GetHeight](#getheight)|Recupera l'altezza dell'immagine in pixel.|  
|[CImage::GetImporterFilterString](#getimporterfilterstring)|Trova i formati di immagine disponibili e le relative descrizioni.|  
|[CImage::GetMaxColorTableEntries](#getmaxcolortableentries)|Recupera il numero massimo di voci nella tabella dei colori.|  
|[CImage::GetPitch](#getpitch)|Recupera il tono dell'immagine corrente, in byte.|  
|[CImage::GetPixel](#getpixel)|Recupera il colore del pixel specificato da *x* e *y*.|  
|[CImage::GetPixelAddress](#getpixeladdress)|Recupera l'indirizzo di un determinato pixel.|  
|[CImage::GetTransparentColor](#gettransparentcolor)|Recupera la posizione del colore trasparente nella tabella dei colori.|  
|[CImage::GetWidth](#getwidth)|Recupera la larghezza dell'immagine in pixel.|  
|[CImage::IsDIBSection](#isdibsection)|Determina se la bitmap associata è una sezione DIB.|  
|[CImage::IsIndexed](#isindexed)|Indica che la bitmap viene eseguito il mapping a una tavolozza indicizzata.|  
|[CImage::IsNull](#isnull)|Indica se una bitmap di origine è attualmente caricata.|  
|[CImage:: IsTransparencySupported](#istransparencysupported)|Indica se l'applicazione supporta le bitmap trasparenti e se è stata compilata per Windows 2000 o versione successiva.|  
|[CImage::Load](#load)|Carica un'immagine dal file specificato.|  
|[CImage::LoadFromResource](#loadfromresource)|Carica un'immagine dalla risorsa specificata.|  
|[CImage::MaskBlt](#maskblt)|Combina i dati di colore per le bitmap di origine e di destinazione mediante la maschera specificata e l'operazione raster.|  
|[CImage::PlgBlt](#plgblt)|Esegue un trasferimento a blocchi di bit da un rettangolo in un contesto di dispositivo di origine in un parallelogramma in un contesto di dispositivo di destinazione.|  
|[CImage::ReleaseDC](#releasedc)|Rilascia il contesto di dispositivo che è stato recuperato con [CImage::GetDC](#getdc).|  
|[CImage::ReleaseGDIPlus](#releasegdiplus)|Rilascia le risorse utilizzate da GDI+. Deve essere chiamato da liberare le risorse create globale `CImage` oggetto.|  
|[CImage::Save](#save)|Salva un'immagine del tipo specificato. **Salvare** non può specificare le opzioni dell'immagine.|  
|[CImage::SetColorTable](#setcolortable)|Imposta RGB rosso, verde, blu) i valori in un intervallo di voci nella tabella dei colori della sezione dell'immagine DIB a colori.|  
|[CImage::SetPixel](#setpixel)|Imposta i pixel delle coordinate specificate per il colore specificato.|  
|[CImage::SetPixelIndexed](#setpixelindexed)|Imposta i pixel alle coordinate specificate per il colore in corrispondenza dell'indice specificato della tavolozza.|  
|[CImage::SetPixelRGB](#setpixelrgb)|Imposta i pixel delle coordinate specificate al valore specificato rosso, verde, blu (RGB).|  
|[CImage::SetTransparentColor](#settransparentcolor)|Imposta l'indice del colore da trattare come trasparente. Solo un colore nella tavolozza può essere trasparente.|  
|[CImage::StretchBlt](#stretchblt)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione, allungando o comprimendo la bitmap per adattarla alle dimensioni del rettangolo di destinazione, se necessario.|  
|[CImage::TransparentBlt](#transparentblt)|Copia una bitmap con colore trasparente dal contesto del dispositivo di origine in tale contesto di dispositivo corrente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImage::operator HBITMAP](#operator_hbitmap)|Restituisce l'handle di Windows associata per la `CImage` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CImage`accetta le bitmap utilizzate due sezioni bitmap indipendente dalla periferica (DIB) o No. Tuttavia, è possibile utilizzare [crea](#create) o [CImage::Load](#load) con solo sezioni DIB. È possibile collegare una bitmap di sezione non DIB a un `CImage` utilizzando [Attach](#attach), ma non è possibile utilizzare le seguenti `CImage` metodi che supportano solo le bitmap di sezione DIB:  
  
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
>  Utilizzo globale `CImage` oggetti in una DLL non è consigliata. Se è necessario utilizzare globale `CImage` oggetto in una DLL, chiamata [CImage::ReleaseGDIPlus](#releasegdiplus) rilasciare in modo esplicito le risorse utilizzate da GDI+.  
  
 `CImage`non possono essere selezionati in un nuovo [CDC](../../mfc/reference/cdc-class.md). `CImage`Crea un proprio **HDC** per l'immagine. Poiché un `HBITMAP` può essere selezionato solo in un unico **HDC** contemporaneamente, il `HBITMAP` associato il `CImage` non possono essere selezionati in un altro **HDC**. Se è necessario un `CDC`, recuperare il **HDC** dal `CImage` e assegnargli [CDC::FromHandle] (... /.. /MFC/Reference/CDC-Class.MD#cdc__fromhandle.  
  
## <a name="example"></a>Esempio  
```cpp  
// Get a CDC for the image
CDC* pDC = CDC::FromHandle(m_myImage.GetDC());

// Use pDC here
pDC->Rectangle(0, 40, 100, 50);
m_myImage.ReleaseDC();
```  
  
 Quando si utilizza `CImage` in un progetto MFC, si noti che le funzioni membro nel progetto prevedono un puntatore a un [CBitmap](../../mfc/reference/cbitmap-class.md) oggetto. Se si desidera utilizzare `CImage` con una funzione, ad esempio [CMenu:: AppendMenu](../../mfc/reference/cmenu-class.md#appendmenu), utilizzare [CBitmap::FromHandle](../../mfc/reference/cbitmap-class.md#fromhandle), passarlo il `CImage` `HBITMAP`e utilizzare l'oggetto restituito `CBitmap*`.  

  
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

  
 Tramite `CImage`, si ha accesso ai bit effettivo di una sezione DIB. È possibile utilizzare un `CImage` oggetto ovunque si utilizzava una sezione HBITMAP Win32 o DIB.  
  
> [!NOTE]
>  Nell'esempio `CImage` metodi presentano limitazioni sul relativo uso:  
  
|Metodo|Limitazione|  
|------------|----------------|  
|[PlgBlt](#plgblt)|Funziona con solo Windows NT 4.0 o versione successiva. Non funziona in applicazioni eseguite in Windows 95/98 o versione successiva.|  
|[MaskBlt](#maskblt)|Funziona con solo Windows NT 4.0 o versione successiva. Non funziona in applicazioni eseguite in Windows 95/98 o versione successiva.|  
|[Elemento AlphaBlend](#alphablend)|Funziona con solo Windows 2000, Windows 98 e successive.|  
|[TransparentBlt](#transparentblt)|Funziona con solo Windows 2000, Windows 98 e successive.|  
|[Disegno](#draw)|Supporta la trasparenza con solo Windows 2000, Windows 98 e successive.|  
  
 È possibile utilizzare `CImage` da MFC o ATL.  
  
> [!NOTE]
>  Quando si crea un progetto usando `CImage`, è necessario definire `CString` prima di includere `atlimage.h`. Se il progetto utilizza ATL senza MFC, includere `atlstr.h` prima di includere `atlimage.h`. Se il progetto utilizza MFC (o se si tratta di un progetto ATL con supporto di MFC), includere `afxstr.h` prima di includere `atlimage.h`.  
>   
>  Analogamente, è necessario includere `atlimage.h` prima di includere `atlimpl.cpp`. A tale scopo facilmente, includere `atlimage.h` nel `stdafx.h`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlimage.h  
  
##  <a name="a-namealphablenda--cimagealphablend"></a><a name="alphablend"></a>CImage::AlphaBlend  
 Visualizza le bitmap con pixel trasparente o semitrasparente.  
  
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
 Un valore di trasparenza alfa da usare per la bitmap di origine. Il valore predefinito 0xff (255) si presuppone che l'immagine è opaco e che si desidera utilizzare solo valori alfa per pixel.  
  
 `bBlendOp`  
 La funzione fusione alfa per origine e destinazione bitmap, un valore alfa globale da applicare all'immagine bitmap di origine e informazioni sul formato per la bitmap di origine. Le funzioni di blend di origine e destinazione sono attualmente è limitate a **AC_SRC_OVER**.  
  
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
  
 Quando `bBlendOp` è impostata sul valore predefinito di **AC_SRC_OVER**, la bitmap di origine viene posizionata sopra la bitmap di destinazione in base ai valori dei pixel origine alfa.  

##  <a name="a-nameattacha--cimageattach"></a><a name="attach"></a>CImage::Attach  
 Collega `hBitmap` per un `CImage` oggetto.  
  
```
void Attach(HBITMAP hBitmap, DIBOrientation eOrientation = DIBOR_DEFAULT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hBitmap`  
 Un handle per un `HBITMAP`.  
  
 *eOrientation*  
 Specifica l'orientamento della bitmap. Può essere uno dei seguenti:  
  
- **DIBOR_DEFAULT** l'orientamento della bitmap è determinato dal sistema operativo. Tuttavia, ciò può non sempre essere i risultati desiderati in tutti i sistemi operativi. Per ulteriori informazioni, vedere l'articolo della Knowledge Base ( **Q186586**): PRB: GetObject () sempre restituisce positivo altezza per sezioni DIB.  
  
- **DIBOR_BOTTOMUP** le righe della bitmap sono in ordine inverso. In questo modo [CImage::GetBits](#getbits) per restituire un puntatore verso la fine del buffer di bitmap e [CImage::GetPitch](#getpitch) per restituire un numero negativo.  
  
- **DIBOR_TOPDOWN** le righe della bitmap sono dall'alto verso il basso. In questo modo [CImage::GetBits](#getbits) per restituire un puntatore al primo byte del buffer di bitmap e [CImage::GetPitch](#getpitch) per restituire un numero positivo.  
  
### <a name="remarks"></a>Note  
 La bitmap può essere una bitmap di sezione non DIB o una bitmap di sezione DIB. Vedere [IsDIBSection](#isdibsection) per un elenco di metodi che è possibile utilizzare solo con DIB sezione bitmap.  
  
##  <a name="a-namebitblta--cimagebitblt"></a><a name="bitblt"></a>CImage::BitBlt  
 Copia una bitmap dal contesto del dispositivo di origine in tale contesto di dispositivo corrente.  
  
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
 L'operazione raster da eseguire. Codici di operazione raster definiscono esattamente come combinare i bit dell'origine, destinazione e il modello (come definito dal pennello attualmente selezionato) per formare la destinazione. Vedere [BitBlt](http://msdn.microsoft.com/library/windows/desktop/dd183370) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)] per un elenco di altri codici di operazione raster e le relative descrizioni.  
  
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
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [BitBlt](http://msdn.microsoft.com/library/windows/desktop/dd183370) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-namecimagea--cimagecimage"></a><a name="cimage"></a>CImage::CImage  
 Costruisce un oggetto `CImage`.  
  
```
CImage() throw();
```  
  
### <a name="remarks"></a>Note  
 Dopo aver costruito l'oggetto, chiamare [crea](#create), [carico](#load), [LoadFromResource](#loadfromresource), o [collegamento](#attach) per collegare un'immagine bitmap all'oggetto.  
  
 **Nota** In Visual Studio, questa classe tiene il conteggio del numero di `CImage` gli oggetti creati. Quando il conteggio è pari a 0, la funzione **GdiplusShutdown** viene chiamato automaticamente per rilasciare le risorse utilizzate da GDI+. Ciò garantisce che qualsiasi `CImage` gli oggetti creati direttamente o indirettamente tramite le DLL vengono sempre eliminati correttamente e che **GdiplusShutdown** non viene chiamato da DllMain.  
  
 Utilizzo globale `CImage` oggetti in una DLL non è consigliata. Se è necessario utilizzare globale `CImage` oggetto in una DLL, chiamata [CImage::ReleaseGDIPlus](#releasegdiplus) rilasciare in modo esplicito le risorse utilizzate da GDI+.  
  
##  <a name="a-namecreatea--cimagecreate"></a><a name="create"></a>CImage::Create  
 Crea un `CImage` bitmap e collegarla a precedentemente costruito `CImage` oggetto.  
  
```
BOOL Create(
 int nWidth,
 int nHeight,
 int nBPP,
 DWORD dwFlags = 0) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nWidth`  
 La larghezza di `CImage` bitmap, in pixel.  
  
 `nHeight`  
 L'altezza di `CImage` bitmap, in pixel. Se `nHeight` è positivo, la bitmap DIB dal basso in alto e la sua origine nell'angolo inferiore sinistro. Se `nHeight` è negativo, la bitmap è DIB dall'alto in basso e l'origine è l'angolo superiore sinistro.  
  
 `nBPP`  
 Il numero di bit per pixel nella bitmap. In genere 4, 8, 16, 24 o 32. Può essere 1 per la bitmap monocromatica o maschere.  
  
 `dwFlags`  
 Specifica se l'oggetto bitmap dispone di un canale alfa. Può essere una combinazione di zero o più dei seguenti valori:  
  
- **createAlphaChannel** può essere utilizzato solo se `nBPP` è 32, e `eCompression` è **BI_RGB**. Se specificato, l'immagine creata ha un valore alfa (trasparenza) per ciascun pixel, archiviato in 4 byte di ogni pixel (non utilizzato in un'immagine a 32 bit non alfanumerici). Il canale alfa viene utilizzato automaticamente quando si chiama [CImage::AlphaBlend](#alphablend).  
  
> [!NOTE]
>  Nelle chiamate a [CImage::Draw](#draw), le immagini con un canale alfa sono automaticamente alfa blend alla destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="a-namecreateexa--cimagecreateex"></a><a name="createex"></a>CImage::CreateEx  
 Crea un `CImage` bitmap e collegarla a precedentemente costruito `CImage` oggetto.  
  
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
 La larghezza di `CImage` bitmap, in pixel.  
  
 `nHeight`  
 L'altezza di `CImage` bitmap, in pixel. Se `nHeight` è positivo, la bitmap DIB dal basso in alto e la sua origine nell'angolo inferiore sinistro. Se `nHeight` è negativo, la bitmap è DIB dall'alto in basso e l'origine è l'angolo superiore sinistro.  
  
 `nBPP`  
 Il numero di bit per pixel nella bitmap. In genere 4, 8, 16, 24 o 32. Può essere 1 per la bitmap monocromatica o maschere.  
  
 `eCompression`  
 Specifica il tipo di compressione per una bitmap dal basso in alto compressa (non può essere compressa DIB dall'alto in basso). Il valore può essere uno dei seguenti:  
  
- **BI_RGB** il formato è non compresso. Se si specifica questo valore quando si chiama `CImage::CreateEx` è equivalente alla chiamata `CImage::Create`.  
  
- **BI_BITFIELDS** il formato non compresso e la tabella color è costituito da tre `DWORD` maschere di colore che specifica il rosso, verde e blu componenti, rispettivamente, di ciascun pixel. Questo è valido quando utilizzato con le bitmap di 16 e 32 bpp.  
  
 *pdwBitfields*  
 Utilizzato solo se `eCompression` è impostato su **BI_BITFIELDS**, in caso contrario deve essere **NULL**. Un puntatore a una matrice di tre `DWORD` maschere di bit, che specifica quali bit di ciascun pixel vengono utilizzati per il rosso, verde e blu del colore, componenti, rispettivamente. Per informazioni sulle restrizioni per i campi di bit, vedere [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 `dwFlags`  
 Specifica se l'oggetto bitmap dispone di un canale alfa. Può essere una combinazione di zero o più dei seguenti valori:  
  
- **createAlphaChannel** può essere utilizzato solo se `nBPP` è 32, e `eCompression` è **BI_RGB**. Se specificato, l'immagine creata ha un valore alfa (trasparenza) per ciascun pixel, archiviato in 4 byte di ogni pixel (non utilizzato in un'immagine a 32 bit non alfanumerici). Il canale alfa viene utilizzato automaticamente quando si chiama [CImage::AlphaBlend](#alphablend).  
  
    > [!NOTE]
    >  Nelle chiamate a [CImage::Draw](#draw), le immagini con un canale alfa sono automaticamente alfa blend alla destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se ha esito positivo. In caso contrario **FALSE**.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente crea una bitmap 100 x 100 pixel, utilizzando a 16 bit per codificare ogni pixel. In un determinato pixel a 16 bit, bit 0-3 codificare il componente rosso, 4 a 7 bit codificare verde e 8 a 11 bit codificano il blu. I rimanenti 4 bit non sono stati utilizzati.  

```cpp  
DWORD adwBitmasks[3] = { 0x0000000f, 0x000000f0, 0x00000f00 };
m_myImage.CreateEx(100, 100, 16, BI_BITFIELDS, adwBitmasks, 0);
```


##  <a name="a-namedestroya--cimagedestroy"></a><a name="destroy"></a>CImage::Destroy  
 Disconnette la bitmap dal `CImage` dell'oggetto ed elimina la bitmap.  
  
```
void Destroy() throw();
```  
  
##  <a name="a-namedetacha--cimagedetach"></a><a name="detach"></a>CImage::Detach  
 Disconnette una bitmap da un `CImage` oggetto.  
  
```
HBITMAP Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per la bitmap scollegato, o **NULL** se non è associata alcuna bitmap.  
  
##  <a name="a-namedrawa--cimagedraw"></a><a name="draw"></a>CImage::Draw  
 Copia una bitmap dal contesto del dispositivo di origine al contesto di dispositivo corrente.  
  
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
 **Disegnare** esegue la stessa operazione [StretchBlt](#stretchblt), a meno che l'immagine contiene un canale alfa o colore trasparente. In tal caso, **disegnare** esegue la stessa operazione come [TransparentBlt](#transparentblt) o [AlphaBlend](#alphablend) come richiesto.  
  
 Per le versioni di **disegnare** che non specificano un rettangolo di origine, l'intera immagine di origine è il valore predefinito. Per la versione di **disegnare** che non specifica una dimensione per il rettangolo di destinazione, la dimensione dell'immagine di origine è il valore predefinito e senza estensione o riduzione si verifica.  
  
##  <a name="a-namegetbitsa--cimagegetbits"></a><a name="getbits"></a>CImage::GetBits  
 Recupera un puntatore ai valori di bit effettivo di un determinato pixel nella bitmap.  
  
```
void* GetBits() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al buffer di bitmap. Se la bitmap DIB dal basso in alto, punta il puntatore verso la fine del buffer. Se la bitmap DIB dall'alto in basso, il puntatore punta al primo byte del buffer.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo puntatore, insieme al valore restituito da [GetPitch](#getpitch), è possibile individuare e modificare singoli pixel in un'immagine.  
  
> [!NOTE]
>  Questo metodo supporta solo bitmap di sezione DIB; di conseguenza, si accede pixel di un `CImage` allo stesso modo pixel di una sezione DIB dell'oggetto. Il puntatore restituito punta a pixel nella posizione (0, 0).  
  
##  <a name="a-namegetbppa--cimagegetbpp"></a><a name="getbpp"></a>CImage::GetBPP  
 Recupera il valore di bit per pixel.  
  
```
int GetBPP() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di bit per pixel.  
  
### <a name="remarks"></a>Note  
 Questo valore determina il numero di bit che definiscono ogni pixel e il numero massimo di colori nella bitmap.  
  
 In genere, i bit per pixel è 1, 4, 8, 16, 24 o 32. Vedere il **biBitCount** membro del [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)] per ulteriori informazioni su questo valore.  
  
##  <a name="a-namegetcolortablea--cimagegetcolortable"></a><a name="getcolortable"></a>CImage::GetColorTable  
 Recupera i valori di colore rossi, verdi e blu (RGB) da un intervallo di voci della tavolozza della sezione DIB.  
  
```
void GetColorTable(UINT iFirstColor,
 UINT nColors,
 RGBQUAD* prgbColors) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `iFirstColor`  
 L'indice di tabella colori della prima voce da recuperare.  
  
 `nColors`  
 Il numero di voci della tabella colori da recuperare.  
  
 `prgbColors`  
 Un puntatore alla matrice di [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) strutture per recuperare il colore delle voci di tabella.  
  
##  <a name="a-namegetdca--cimagegetdc"></a><a name="getdc"></a>CImage::GetDC  
 Recupera il contesto di dispositivo che ha attualmente l'immagine selezionata al suo interno.  
  
```
HDC GetDC() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per un contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
 Per ogni chiamata a `GetDC`, è necessario disporre di una chiamata successiva a [ReleaseDC](#releasedc).  
  
##  <a name="a-namegetexporterfilterstringa--cimagegetexporterfilterstring"></a><a name="getexporterfilterstring"></a>CImage::GetExporterFilterString  
 Trova i formati di immagine disponibili per il salvataggio delle immagini.  
  
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
 Matrice di GUID, con ogni elemento corrispondente a uno dei tipi di file nella stringa. Nell'esempio di `pszAllFilesDescription` riportato di seguito, `aguidFileTypes`[0] è `GUID_NULL` e i valori di matrice rimanenti sono formati di file di immagine supportati dal sistema operativo corrente.  
  
> [!NOTE]
>  Per un elenco completo delle costanti, vedere **costanti di formato di File immagine** nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
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
  
- **excludeTIFF** = 0x40 esclude TIFF (file).  
  
- **excludeIcon** = 0x80 esclude ICO (icona di Windows) file.  
  
- **excludeOther** = 0x80000000 esclude qualsiasi altro tipo di file non elencato in precedenza.  
  
- **excludeDefaultLoad** = 0 per il caricamento, i file di tutti i tipi sono inclusi per impostazione predefinita  
  
- **excludeDefaultSave** = **excludeIcon | excludeEMF | excludeWMF** per il salvataggio, questi file vengono esclusi per impostazione predefinita perché hanno in genere requisiti speciali.  
  
 `chSeparator`  
 Il separatore utilizzato tra formati di immagine. Vedere **osservazioni** per ulteriori informazioni.  
  
### <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 È possibile passare la stringa di formato di MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) formati di oggetto per esporre le estensioni di file di immagine disponibile nella finestra di dialogo Salva con nome.  
  
 Il parametro *strExporter* ha il formato:  
  
 file description0 | \*.ext0 | filedescription1 | \*. Ext1 |... Descrizione file *n*|\*. ext *n*||  
  
 dove ' |' è specificato il carattere separatore da `chSeparator`. Ad esempio:  
  
 `"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`  
  
 Utilizzare il separatore predefinito ' |' Se si passa la stringa a un MFC `CFileDialog` oggetto. Se si passa la stringa a una comune finestra di dialogo Salva File, utilizzare il separatore null '\0'.  
  
##  <a name="a-namegetheighta--cimagegetheight"></a><a name="getheight"></a>CImage::GetHeight  
 Recupera l'altezza, in pixel, di un'immagine.  
  
```
int GetHeight() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza, in pixel, di un'immagine.  
  
##  <a name="a-namegetimporterfilterstringa--cimagegetimporterfilterstring"></a><a name="getimporterfilterstring"></a>CImage::GetImporterFilterString  
 Trova i formati di immagine disponibili per il caricamento delle immagini.  
  
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
 Matrice di GUID, con ogni elemento corrispondente a uno dei tipi di file nella stringa. Nell'esempio di `pszAllFilesDescription` riportato di seguito, `aguidFileTypes`[0] è `GUID_NULL` con la matrice resto valori sono i formati di file di immagine supportati dal sistema operativo corrente.  
  
> [!NOTE]
>  Per un elenco completo delle costanti, vedere **costanti di formato di File immagine** nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
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
  
- **excludeTIFF** = 0x40 esclude TIFF (file).  
  
- **excludeIcon** = 0x80 esclude ICO (icona di Windows) file.  
  
- **excludeOther** = 0x80000000 esclude qualsiasi altro tipo di file non elencato in precedenza.  
  
- **excludeDefaultLoad** = 0 per il caricamento, i file di tutti i tipi sono inclusi per impostazione predefinita  
  
- **excludeDefaultSave** = **excludeIcon | excludeEMF | excludeWMF** per il salvataggio, questi file vengono esclusi per impostazione predefinita perché hanno in genere requisiti speciali.  
  
 `chSeparator`  
 Il separatore utilizzato tra formati di immagine. Vedere **osservazioni** per ulteriori informazioni.  
  
### <a name="remarks"></a>Note  
 È possibile passare la stringa di formato di MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) oggetto di esporre le estensioni di file di immagine disponibile nei formati nel **Apri** la finestra di dialogo.  
  
 Il parametro *strImporter* ha il formato:  
  
 file description0 | \*.ext0 | filedescription1 | \*. Ext1 |... Descrizione file *n*|\*. ext *n*||  
  
 dove ' |' è specificato il carattere separatore da `chSeparator`. Ad esempio:  
  
 `"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`  
  
 Utilizzare il separatore predefinito ' |' Se si passa la stringa a un MFC `CFileDialog` oggetto. Utilizzare il separatore null '\0' Se si passa la stringa a un comune **Apri** la finestra di dialogo.  
  
##  <a name="a-namegetmaxcolortableentriesa--cimagegetmaxcolortableentries"></a><a name="getmaxcolortableentries"></a>CImage::GetMaxColorTableEntries  
 Recupera il numero massimo di voci nella tabella dei colori.  
  
```
int GetMaxColorTableEntries() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di voci nella tabella dei colori.  
  
### <a name="remarks"></a>Note  
 Questo metodo supporta solo bitmap di sezione DIB.  
  
##  <a name="a-namegetpitcha--cimagegetpitch"></a><a name="getpitch"></a>CImage::GetPitch  
 Recupera il passo di un'immagine.  
  
```
int GetPitch() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il passo dell'immagine. Se il valore restituito è negativo, la bitmap è DIB dal basso in alto e l'origine è l'angolo inferiore sinistro. Se il valore restituito è positivo, la bitmap è DIB dall'alto in basso e l'origine è l'angolo superiore sinistro.  
  
### <a name="remarks"></a>Note  
 Il passo è la distanza, espressa in byte, tra due indirizzi di memoria che rappresentano l'inizio di una riga, bitmap e l'inizio della riga successiva di bitmap. Poiché passo è misurato in byte, il passo di un'immagine consente di determinare il formato pixel. Il tono può anche includere memoria aggiuntiva, riservata per la bitmap.  
  
 Utilizzare `GetPitch` con [GetBits](#getbits) per trovare singoli pixel di un'immagine.  
  
> [!NOTE]
>  Questo metodo supporta solo bitmap di sezione DIB.  
  
##  <a name="a-namegetpixela--cimagegetpixel"></a><a name="getpixel"></a>CImage::GetPixel  
 Recupera il colore del pixel nella posizione specificata da *x* e *y*.  
  
```
COLORREF GetPixel(int x,int y) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Coordinata x del pixel.  
  
 *y*  
 Coordinata y del pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Valore (RGB) rosso, verde e blu del pixel. Se il pixel è di fuori dell'area di visualizzazione corrente, il valore restituito è **CLR_INVALID**.  
  
##  <a name="a-namegetpixeladdressa--cimagegetpixeladdress"></a><a name="getpixeladdress"></a>CImage::GetPixelAddress  
 Recupera l'indirizzo esatto di un pixel.  
  
```
void* GetPixelAddress(int x,int y) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Coordinata x del pixel.  
  
 *y*  
 Coordinata y del pixel.  
  
### <a name="remarks"></a>Note  
 L'indirizzo viene determinato in base alle coordinate di un pixel, il passo della bitmap e bit per pixel.  
  
 Per i formati con meno di 8 bit per pixel, questo metodo restituisce l'indirizzo di byte contenente il pixel. Ad esempio, se il formato di immagine dispone di 4 bit per pixel, `GetPixelAddress` restituisce l'indirizzo del primo pixel byte ed è necessario calcolare di 2 pixel per byte.  
  
> [!NOTE]
>  Questo metodo supporta solo bitmap di sezione DIB.  
  
##  <a name="a-namegettransparentcolora--cimagegettransparentcolor"></a><a name="gettransparentcolor"></a>CImage::GetTransparentColor  
 Recupera la posizione indicizzata del colore trasparente nella tavolozza dei colori.  
  
```
LONG GetTransparentColor() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice del colore trasparente.  
  
##  <a name="a-namegetwidtha--cimagegetwidth"></a><a name="getwidth"></a>CImage::GetWidth  
 Recupera la larghezza, in pixel, di un'immagine.  
  
```
int GetWidth() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza della bitmap, in pixel.  
  
##  <a name="a-nameisdibsectiona--cimageisdibsection"></a><a name="isdibsection"></a>CImage::IsDIBSection  
 Determina se la bitmap associata è una sezione DIB.  
  
```
bool IsDIBSection() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 **true** se la bitmap associata una sezione DIB. In caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Se la bitmap non è una sezione DIB, è possibile utilizzare la seguente `CImage` metodi che supportano solo le bitmap di sezione DIB:  
  
- [GetBits](#getbits)  
  
- [GetColorTable](#getcolortable)  
  
- [GetMaxColorTableEntries](#getmaxcolortableentries)  
  
- [GetPitch](#getpitch)  
  
- [GetPixelAddress](#getpixeladdress)  
  
- [IsIndexed](#isindexed)  
  
- [SetColorTable](#setcolortable)  
  
##  <a name="a-nameisindexeda--cimageisindexed"></a><a name="isindexed"></a>CImage::IsIndexed  
 Determina se i pixel della bitmap viene eseguito il mapping a una tavolozza colori.  
  
```
bool IsIndexed() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 **true** indicizzata; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce **true** solo se la bitmap è 8 bit (256 colori) o meno.  
  
> [!NOTE]
>  Questo metodo supporta solo bitmap di sezione DIB.  
  
##  <a name="a-nameisnulla--cimageisnull"></a><a name="isnull"></a>CImage::IsNull  
 Determina se una bitmap è attualmente caricata.  
  
```
bool IsNull() const throw();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce **True** se una bitmap non è attualmente caricato; in caso contrario **False**.  
  
##  <a name="a-nameistransparencysupporteda--cimageistransparencysupported"></a><a name="istransparencysupported"></a>CImage:: IsTransparencySupported  
 Indica se l'applicazione supporta le bitmap trasparenti e se è stata compilata per Windows 2000 o versione successiva.  
  
```
static BOOL IsTransparencySupported() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la piattaforma corrente supporta la trasparenza. In caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito è diverso da zero e la trasparenza è supportata, una chiamata a [AlphaBlend](#alphablend), [TransparentBlt](#transparentblt), o [disegnare](#draw) gestirà colori trasparenti.  
  
 Se l'applicazione viene compilata per l'utilizzo con sistemi operativi prima di Windows 2000 o Windows 98, questo metodo restituirà sempre 0, anche in sistemi operativi più recenti.  
  

##  <a name="a-nameloada--cimageload"></a><a name="load"></a>CImage::Load  
 Carica un'immagine.  
  
```
HRESULT Load(LPCTSTR pszFileName) throw();
HRESULT Load(IStream* pStream) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszFileName`  
 Un puntatore a una stringa contenente il nome del file di immagine da caricare.  
  
 `pStream`  
 Un puntatore a un flusso che contiene il nome del file di immagine da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Carica l'immagine specificata da *pszFileName* o `pStream`.  
  
 Tipi di immagine valido sono BMP, GIF, JPEG, PNG e TIFF.  
  
##  <a name="a-nameloadfromresourcea--cimageloadfromresource"></a><a name="loadfromresource"></a>CImage::LoadFromResource  
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
 L'ID della risorsa da caricare.  
  
### <a name="remarks"></a>Note  
 La risorsa deve essere di tipo `BITMAP`.  
  
##  <a name="a-namemaskblta--cimagemaskblt"></a><a name="maskblt"></a>CImage::MaskBlt  
 Combina i dati di colore per le bitmap di origine e di destinazione mediante la maschera specificata e l'operazione raster.  
  
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
 Handle per il modulo i cui file eseguibile contiene la risorsa.  
  
 `xDest`  
 Coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `yDest`  
 Coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nDestWidth`  
 La larghezza, in unità logiche di bitmap di origine e rettangolo di destinazione.  
  
 `nDestHeight`  
 L'altezza, in unità logiche di bitmap di origine e rettangolo di destinazione.  
  
 `xSrc`  
 La logica coordinata x dell'angolo superiore sinistro della bitmap di origine.  
  
 `ySrc`  
 La logica coordinata y dell'angolo superiore sinistro della bitmap di origine.  
  
 `hbmMask`  
 Handle per la bitmap di maschera monocromatica combinata con la bitmap a colori nel contesto di dispositivo di origine.  
  
 `xMask`  
 L'offset orizzontale in pixel della bitmap maschera specificato dal `hbmMask` parametro.  
  
 `yMask`  
 L'offset verticale in pixel della bitmap maschera specificato dal `hbmMask` parametro.  
  
 `dwROP`  
 Specifica sfondo e primo piano codici di operazione raster ternaria che utilizza il metodo per controllare la combinazione di dati di origine e destinazione. Il codice di operazione raster in background viene archiviato nel byte più significativo della parola significativa di questo valore. il codice di operazione raster in primo piano viene archiviato nel byte meno significativo della parola più significativa di questo valore. la parola meno significativa di questo valore viene ignorata e deve essere zero. Per una descrizione di primo piano e sfondo nel contesto di questo metodo, vedere `MaskBlt` nel [!INCLUDE[winSDK](./includes/winsdk_md.md)]. Per un elenco dei codici di operazione raster comuni, vedere `BitBlt` nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
 `rectDest`  
 Un riferimento a un `RECT` struttura, che identifica la destinazione.  
  
 `pointSrc`  
 Oggetto `POINT` struttura che indica l'angolo superiore sinistro del rettangolo di origine.  
  
 `pointMask`  
 Oggetto **punto** struttura che indica l'angolo superiore sinistro dell'immagine bitmap della maschera.  
  
 `pointDest`  
 Un riferimento a un **punto** struttura che identifica l'angolo superiore sinistro del rettangolo di destinazione, in unità logiche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo si applica a Windows NT 4.0 e versioni successive sola versioni.  
  
##  <a name="a-nameoperatorhbitmapa--cimageoperator-hbitmap"></a><a name="operator_hbitmap"></a>CImage::operator HBITMAP  
 Utilizzare questo operatore per ottenere l'handle GDI Windows collegato di `CImage` oggetto. Questo è un operatore di cast, che supporta l'utilizzo diretto di un `HBITMAP` oggetto.  
  
##  <a name="a-nameplgblta--cimageplgblt"></a><a name="plgblt"></a>CImage::PlgBlt  
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
 Un puntatore a una matrice di tre punti nello spazio logico che identificano altri tre angoli del parallelogramma di destinazione. L'angolo superiore sinistro del rettangolo di origine viene eseguito il mapping al primo punto di questa matrice, nell'angolo superiore destro e il secondo punto della matrice e l'angolo inferiore sinistro al terzo punto. Nell'angolo inferiore destro del rettangolo di origine viene eseguito il mapping al quarto punto implicito in parallelogramma.  
  
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
 Coordinata x dell'angolo superiore sinistro della bitmap monocromatica.  
  
 `yMask`  
 Coordinata y dell'angolo superiore sinistro della bitmap monocromatica.  
  
 `rectSrc`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica le coordinate del rettangolo di origine.  
  
 `pointMask`  
 Oggetto [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che indica l'angolo superiore sinistro dell'immagine bitmap della maschera.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se `hbmMask` identifica una bitmap monocromatica valida, **PlgBit** utilizza questa bitmap per creare una maschera di bit di dati di colore dal rettangolo di origine.  
  
 Questo metodo si applica a Windows NT 4.0 e versioni successive sola versioni. Vedere [PlgBlt](http://msdn.microsoft.com/library/windows/desktop/dd162804) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)] per informazioni più dettagliate.  
  
##  <a name="a-namereleasedca--cimagereleasedc"></a><a name="releasedc"></a>CImage::ReleaseDC  
 Rilascia il contesto di dispositivo.  
  
```
void ReleaseDC() const throw();
```  
  
### <a name="remarks"></a>Note  
 Poiché solo una bitmap può essere selezionata in un contesto di dispositivo alla volta, è necessario chiamare `ReleaseDC` per ogni chiamata a [GetDC](#getdc).  
  
##  <a name="a-namereleasegdiplusa--cimagereleasegdiplus"></a><a name="releasegdiplus"></a>CImage::ReleaseGDIPlus  
 Rilascia le risorse utilizzate da GDI+.  
  
```
void ReleaseGDIPlus() throw();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo deve essere chiamato da liberare le risorse allocate da globale `CImage` oggetto. Vedere [CImage::CImage](#cimage).  
  
##  <a name="a-namesavea--cimagesave"></a><a name="save"></a>CImage::Save  
 Salva un'immagine nel file su disco o il flusso specificato.  
  
```
HRESULT Save(IStream* pStream,
 REFGUID guidFileType) const throw();

HRESULT Save(LPCTSTR pszFileName,
 REFGUID guidFileType= GUID_NULL) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 Un puntatore a un oggetto IStream COM che contiene i dati di file immagine.  
  
 *pszFileName*  
 Puntatore al nome del file per l'immagine.  
  
 `guidFileType`  
 Il tipo di file per salvare l'immagine come. Può essere uno dei seguenti:  
  
- **ImageFormatBMP** un'immagine bitmap non compresso.  
  
- **ImageFormatPNG** immagine compressa di un grafico PNG (Portable Network).  
  
- **ImageFormatJPEG** immagine compressa A JPEG.  
  
- **ImageFormatGIF** immagine compressa di un GIF.  
  
> [!NOTE]
>  Per un elenco completo delle costanti, vedere **costanti di formato di File immagine** nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per salvare l'immagine utilizzando un nome e tipo specificati. Se il `guidFileType` parametro non è incluso, l'estensione del nome file verrà utilizzato per determinare il formato di immagine. Se nessuna estensione viene specificata, verrà salvata l'immagine in formato BMP.  
  
##  <a name="a-namesetcolortablea--cimagesetcolortable"></a><a name="setcolortable"></a>CImage::SetColorTable  
 Imposta i valori di colore (RGB) rossi, verdi e blu per un intervallo di voci della tavolozza della sezione DIB.  
  
```
void SetColorTable(
  UINT iFirstColor, 
  UINT nColors,
  const RGBQUAD* prgbColors) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `iFirstColor`  
 L'indice di tabella colori della prima voce da impostare.  
  
 `nColors`  
 Il numero di voci della tabella colori per impostare.  
  
 `prgbColors`  
 Un puntatore alla matrice di [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) strutture per impostare il colore delle voci di tabella.  
  
### <a name="remarks"></a>Note  
 Questo metodo supporta solo bitmap di sezione DIB.  
  
##  <a name="a-namesetpixela--cimagesetpixel"></a><a name="setpixel"></a>CImage::SetPixel  
 Imposta il colore di un pixel in una posizione specificata nella bitmap.  
  
```
void SetPixel(int x, int y, COLORREF color) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Posizione orizzontale del pixel da impostare.  
  
 *y*  
 Posizione verticale del pixel da impostare.  
  
 `color`  
 Il colore in cui impostare il pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo non riesce se il pixel le coordinate si trovano di fuori dell'area di visualizzazione selezionato.  
  
##  <a name="a-namesetpixelindexeda--cimagesetpixelindexed"></a><a name="setpixelindexed"></a>CImage::SetPixelIndexed  
 Imposta il colore del pixel sul colore nella `iIndex` nella tavolozza dei colori.  
  
```
void SetPixelIndexed(int x, int y, int iIndex) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Posizione orizzontale del pixel da impostare.  
  
 *y*  
 Posizione verticale del pixel da impostare.  
  
 `iIndex`  
 L'indice di un colore nella tavolozza dei colori.  
  
##  <a name="a-namesetpixelrgba--cimagesetpixelrgb"></a><a name="setpixelrgb"></a>CImage::SetPixelRGB  
 Imposta i pixel nei percorsi specificati da *x* e *y* per i colori indicati da *r*, *g*, e *b*, un colore rosso, verde, blu immagine (RGB).  
  
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
 Posizione orizzontale del pixel da impostare.  
  
 *y*  
 Posizione verticale del pixel da impostare.  
  
 *r*  
 L'intensità di colore rosso.  
  
 *g*  
 L'intensità di colore verde.  
  
 *b*  
 L'intensità di colore blu.  
  
### <a name="remarks"></a>Note  
 I parametri di colore rossi, verdi e blu sono ogni rappresentati da un numero compreso tra 0 e 255. Se tutti e tre i parametri è impostato su zero, il colore risulta combinato è nero. Se si imposta tutti i tre parametri su 255, il colore risulta combinato è bianco.  
  
##  <a name="a-namesettransparentcolora--cimagesettransparentcolor"></a><a name="settransparentcolor"></a>CImage::SetTransparentColor  
 Imposta il colore in una posizione indicizzata specificata come trasparente.  
  
```
LONG SetTransparentColor(LONG iTransparentColor) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *iTransparentColor*  
 L'indice in una tavolozza dei colori, del colore per impostare a trasparente. Se –&1;, nessun colore è impostato su trasparente.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del colore impostato in precedenza come trasparente.  
  
##  <a name="a-namestretchblta--cimagestretchblt"></a><a name="stretchblt"></a>CImage::StretchBlt  
 Copia una bitmap dal contesto del dispositivo di origine in tale contesto di dispositivo corrente.  
  
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
 L'operazione raster da eseguire. Codici di operazione raster definiscono esattamente come combinare i bit dell'origine, destinazione e il modello (come definito dal pennello attualmente selezionato) per formare la destinazione. Vedere [BitBlt](http://msdn.microsoft.com/library/windows/desktop/dd183370) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)] per un elenco di altri codici di operazione raster e le relative descrizioni.  
  
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
 Per ulteriori informazioni, vedere [StretchBlt](http://msdn.microsoft.com/library/windows/desktop/dd145120) nel [!INCLUDE[winSDK](./includes/winsdk_md.md)].  
  
##  <a name="a-nametransparentblta--cimagetransparentblt"></a><a name="transparentblt"></a>CImage::TransparentBlt  
 Copia una bitmap dal contesto del dispositivo di origine in tale contesto di dispositivo corrente.  
  
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
 **TRUE** se ha esito positivo, in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 `TransparentBlt`è supportato per le bitmap di origine di 4 bit per pixel e a 8 bit per pixel. Utilizzare [CImage::AlphaBlend](#alphablend) per specificare le bitmap di pixel a 32 bit con trasparenza.  
  
  
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
 [Device-Independent Bitmap](http://msdn.microsoft.com/library/windows/desktop/dd183562)   
 [CreateDIBSection](http://msdn.microsoft.com/library/windows/desktop/dd183494)   
 [I componenti COM Desktop ATL](../../atl/atl-com-desktop-components.md)
 [Device-Independent Bitmap](http://msdn.microsoft.com/library/windows/desktop/dd183562)   
 [CreateDIBSection](http://msdn.microsoft.com/library/windows/desktop/dd183494)   










