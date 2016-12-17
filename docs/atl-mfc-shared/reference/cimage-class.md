---
title: "CImage Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CImage"
  - "ATL.CImage"
  - "ATL::CImage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".gif (file), ATL and MFC support"
  - "bitmap [C++], ATL and MFC support for"
  - "CImage class"
  - "gif (file), ATL and MFC support"
  - "immagini [C++], ATL and MFC support for"
  - "jpeg (file)"
  - "PNG (file), ATL and MFC support"
  - "transparent color"
ms.assetid: 52861e3d-bf7e-481f-a240-90e88f76c490
caps.latest.revision: 20
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CImage Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CImage` fornisce supporto bitmap avanzato, tra cui la possibilità di caricare e salvare le immagini in JPEG, GIF, in BMP e nei formati portabili \(PNG\) grafiche di rete.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CImage  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImage::CImage](../Topic/CImage::CImage.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImage::AlphaBlend](../Topic/CImage::AlphaBlend.md)|Visualizzare le bitmap con pixel trasparenti o semitrasparenti.|  
|[CImage::Attach](../Topic/CImage::Attach.md)|Associa `HBITMAP` a un oggetto `CImage`.  Può essere utilizzato con non FILE DIB le bitmap nella sezione o FILE DIB le bitmap nella sezione.|  
|[CImage::BitBlt](../Topic/CImage::BitBlt.md)|Copia una bitmap dal contesto di dispositivo di origine al contesto di dispositivo corrente.|  
|[CImage::Create](../Topic/CImage::Create.md)|Crea una bitmap della sezione della DIB e allegarlo all'oggetto precedentemente costruzione `CImage`.|  
|[CImage::CreateEx](../Topic/CImage::CreateEx.md)|Crea una bitmap della sezione della DIB \(con parametri aggiuntivi\) e si connette all'oggetto precedentemente costruzione `CImage`.|  
|[CImage::Destroy](../Topic/CImage::Destroy.md)|Rimuove la bitmap dall'oggetto `CImage` ed elimina la bitmap.|  
|[CImage::Detach](../Topic/CImage::Detach.md)|Rimuove la bitmap da un oggetto `CImage`.|  
|[CImage::Draw](../Topic/CImage::Draw.md)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione.  **Disegno** appropriata o comprimere la bitmap per adattare le dimensioni del rettangolo di destinazione se necessario e gestisce la fusione alfa dei colori trasparenti.|  
|[CImage::GetBits](../Topic/CImage::GetBits.md)|Recupera un puntatore ai valori in pixel della bitmap.|  
|[CImage::GetBPP](../Topic/CImage::GetBPP.md)|Recupera i bit per pixel.|  
|[CImage::GetColorTable](../Topic/CImage::GetColorTable.md)|Recupera i valori di colore rosso, verde, blu di \(RGB\) da un intervallo delle voci nella tabella dei colori.|  
|[CImage::GetDC](../Topic/CImage::GetDC.md)|Recupera il contesto di dispositivo in cui la bitmap corrente è selezionata.|  
|[CImage::GetExporterFilterString](../Topic/CImage::GetExporterFilterString.md)|Cerca i formati immagine disponibili e le relative descrizioni.|  
|[CImage::GetHeight](../Topic/CImage::GetHeight.md)|Recupera l'altezza dell'immagine corrente in pixel.|  
|[CImage::GetImporterFilterString](../Topic/CImage::GetImporterFilterString.md)|Cerca i formati immagine disponibili e le relative descrizioni.|  
|[CImage::GetMaxColorTableEntries](../Topic/CImage::GetMaxColorTableEntries.md)|Recupera il numero massimo delle voci nella tabella dei colori.|  
|[CImage::GetPitch](../Topic/CImage::GetPitch.md)|Recupera il passo dell'immagine corrente, in byte.|  
|[CImage::GetPixel](../Topic/CImage::GetPixel.md)|Recupera il colore del pixel specificato dalla *x* e *Y da.*|  
|[CImage::GetPixelAddress](../Topic/CImage::GetPixelAddress.md)|Viene recuperato l'indirizzo di un dato pixel.|  
|[CImage::GetTransparentColor](../Topic/CImage::GetTransparentColor.md)|Recupera il percorso del colore completamente trasparente nella tabella dei colori.|  
|[CImage::GetWidth](../Topic/CImage::GetWidth.md)|Recupera la larghezza corrente dell'immagine in pixel.|  
|[CImage::IsDIBSection](../Topic/CImage::IsDIBSection.md)|Determina se la bitmap associata è una sezione della DIB.|  
|[CImage::IsIndexed](../Topic/CImage::IsIndexed.md)|Indica che i colori di una bitmap sono mappate a una tavolozza indicizzata.|  
|[CImage::IsNull](../Topic/CImage::IsNull.md)|Indica se una bitmap di risorsa attualmente caricata.|  
|[CImage::IsTransparencySupported](../Topic/CImage::IsTransparencySupported.md)|Indica se l'applicazione supporta le bitmap transparent ed è stato compilato per Windows 2000 o versioni successive.|  
|[CImage::Load](../Topic/CImage::Load.md)|Carica un'immagine dal file specificato.|  
|[CImage::LoadFromResource](../Topic/CImage::LoadFromResource.md)|Carica un'immagine dalla risorsa specificata.|  
|[CImage::MaskBlt](../Topic/CImage::MaskBlt.md)|Combina i dati di colore per le bitmap di origine e di destinazione utilizzando la maschera e dell'operazione raster specificate.|  
|[CImage::PlgBlt](../Topic/CImage::PlgBlt.md)|Esegue un trasferimento di blocchi di bit da un rettangolo in un contesto di dispositivo di origine in un parallelogramma in un contesto di dispositivo di destinazione.|  
|[CImage::ReleaseDC](../Topic/CImage::ReleaseDC.md)|Rilascia il contesto di dispositivo che è stato recuperato da [CImage::GetDC](../Topic/CImage::GetDC.md).|  
|[CImage::ReleaseGDIPlus](../Topic/CImage::ReleaseGDIPlus.md)|Liberare le risorse utilizzate da GDI\+.  Deve essere chiamato per liberare risorse create da un oggetto globale `CImage`.|  
|[CImage::Save](../Topic/CImage::Save.md)|Salva un'immagine come tipo specificato.  **Salva** impossibile specificare le opzioni di immagine.|  
|[CImage::SetColorTable](../Topic/CImage::SetColorTable.md)|Imposta i valori di colore rosso, verde, blu RGB\) in un intervallo delle voci nella tabella dei colori della DIB.|  
|[CImage::SetPixel](../Topic/CImage::SetPixel.md)|Imposta il pixel alle coordinate specificate nel colore specificato.|  
|[CImage::SetPixelIndexed](../Topic/CImage::SetPixelIndexed.md)|Imposta il pixel alle coordinate specificate nel colore l'indice specificato della tavolozza.|  
|[CImage::SetPixelRGB](../Topic/CImage::SetPixelRGB.md)|Imposta il pixel alle coordinate specificate al valore rosso, verde, blu specificato di \(RGB\).|  
|[CImage::SetTransparentColor](../Topic/CImage::SetTransparentColor.md)|Imposta il valore del colore da considerare come trasparente.  Solo un colore da una tavolozza può essere trasparente.|  
|[CImage::StretchBlt](../Topic/CImage::StretchBlt.md)|Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione, adattante o pacchetti la bitmap per adattare le dimensioni del rettangolo di destinazione, se necessario.|  
|[CImage::TransparentBlt](../Topic/CImage::TransparentBlt.md)|Copia una bitmap con un colore completamente trasparente dal contesto di dispositivo di origine al contesto di dispositivo corrente.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImage::operator HBITMAP](../Topic/CImage::operator%20HBITMAP.md)|Restituisce un handle di Windows incluse nell'oggetto `CImage`.|  
  
## Note  
 `CImage` accetta le bitmap cioé sezioni di \(DIB\) della bitmap indipendente dal dispositivo o meno, tuttavia, è possibile utilizzare [Crea](../Topic/CImage::Create.md) o [CImage::Load](../Topic/CImage::Load.md) solo con DIB le sezioni.  È possibile connettere una bitmap nella sezione di non DIB a un oggetto `CImage` utilizzando [Connetti](../Topic/CImage::Attach.md), ma se invece non è possibile utilizzare i seguenti metodi `CImage`, che supportano solo FILE DIB le bitmap nella sezione:  
  
-   [GetBits](../Topic/CImage::GetBits.md)  
  
-   [GetColorTable](../Topic/CImage::GetColorTable.md)  
  
-   [GetMaxColorTableEntries](../Topic/CImage::GetMaxColorTableEntries.md)  
  
-   [GetPitch](../Topic/CImage::GetPitch.md)  
  
-   [GetPixelAddress](../Topic/CImage::GetPixelAddress.md)  
  
-   [IsIndexed](../Topic/CImage::IsIndexed.md)  
  
-   [SetColorTable](../Topic/CImage::SetColorTable.md)  
  
 Per determinare se una bitmap associata è una sezione della DIB, chiamare [IsDibSection](../Topic/CImage::IsDIBSection.md)**.**  
  
> [!NOTE]
>  **Note** in Visual Studio .NET 2003., questa classe mantiene un conteggio del numero di oggetti `CImage` creato.  Ogni volta che il conteggio fino a 0, la funzione [GdiplusShutdown](_gdiplus_func_gdiplusshutdown_) automaticamente viene chiamata per liberare le risorse utilizzate da GDI\+.  In questo modo tutti gli oggetti `CImage` creati direttamente o da DLL si distruggano indirettamente sempre correttamente e che **GdiplusShutdown** non viene chiamato da `DllMain`.  
  
> [!NOTE]
>  Utilizzando `CImage` globale gli oggetti in una DLL non è consigliata.  Se è necessario utilizzare un oggetto globale `CImage` in una DLL, la chiamata [CImage::ReleaseGDIPlus](../Topic/CImage::ReleaseGDIPlus.md) in modo esplicito per liberare le risorse utilizzate da GDI\+.  
  
 `CImage` non può essere selezionato nella [CDC](../../mfc/reference/cdc-class.md).  `CImage` crea il proprio **HDC** per l'immagine.  Poiché `HBITMAP` è possibile selezionare solo in un **HDC** per volta, `HBITMAP` associato a `CImage` non può essere selezionato in un altro **HDC**.  Se è necessario `CDC`, recuperare **HDC** da `CImage` e immetterlo in [CDC::FromHandle](../Topic/CDC::FromHandle.md).  
  
## Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#70](../../atl-mfc-shared/codesnippet/CPP/cimage-class_1.cpp)]  
  
 Quando si utilizza `CImage` in un progetto MFC, alle funzioni membro nel progetto prevedono un puntatore a un oggetto [CBitmap](../../mfc/reference/cbitmap-class.md).  Se si desidera utilizzare `CImage` con tale funzione, come [CMenu::AppendMenu](../Topic/CMenu::AppendMenu.md), utilizzare [CBitmap::FromHandle](../Topic/CBitmap::FromHandle.md), per passare il `CImage``HBITMAP`e utilizzare `CBitmap*`restituito.  
  
## Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#71](../../atl-mfc-shared/codesnippet/CPP/cimage-class_2.cpp)]  
  
 Con `CImage`, è possibile accedere agli effettivi bit di una sezione della DIB.  È possibile utilizzare un oggetto `CImage` ovunque precedentemente utilizzato un oggetto Win32 HBITMAP o che PESCATE DIB la sezione.  
  
> [!NOTE]
>  I seguenti metodi `CImage` presentano limitazioni di utilizzo:  
  
|Metodo|Limitazione|  
|------------|-----------------|  
|[PlgBlt](../Topic/CImage::PlgBlt.md)|Funziona solo con Windows NT 4.0 o successiva.  Non tutte le applicazioni in esecuzione su Windows 95\/98 o versione successiva.|  
|[MaskBlt](../Topic/CImage::MaskBlt.md)|Funziona solo con Windows NT 4.0 o successiva.  Non tutte le applicazioni in esecuzione su Windows 95\/98 o versione successiva.|  
|[AlphaBlend](../Topic/CImage::AlphaBlend.md)|Funziona solo con Windows 2000, Windows 98 e sistemi successivi.|  
|[TransparentBlt](../Topic/CImage::TransparentBlt.md)|Funziona solo con Windows 2000, Windows 98 e sistemi successivi.|  
|[Disegno](../Topic/CImage::Draw.md)|Supporta la trasparenza solo con Windows 2000, Windows 98 e sistemi successivi.|  
  
 Vedere [Limitazioni di CImage con i sistemi operativi precedenti](../../mfc/cimage-limitations-with-earlier-operating-systems.md) per informazioni più dettagliate sulle limitazioni di questi metodi.  
  
 È possibile utilizzare `CImage` da MFC o da ATL.  
  
> [!NOTE]
>  Quando si crea un progetto utilizzando `CImage`, è necessario definire `CString` prima di importare `atlimage.h`.  Se il progetto utilizza ATL senza MFC, includere `atlstr.h` prima di importare `atlimage.h`.  Se il progetto utilizza MFC \(o se è un progetto ATL con supporto MFC\), includere `afxstr.h` prima di importare `atlimage.h`.  
>   
>  Inoltre, è necessario includere `atlimage.h` prima di importare `atlimpl.cpp`.  A tale scopo, includere facilmente `atlimage.h` nel `stdafx.h`.  
  
## Requisiti  
 **Header:** atlimage.h  
  
## Vedere anche  
 [Esempio MMXSwarm](../../top/visual-cpp-samples.md)   
 [Esempio SimpleImage](../../top/visual-cpp-samples.md)   
 [Device\-Independent Bitmaps](http://msdn.microsoft.com/library/windows/desktop/dd183562)   
 [CreateDIBSection](http://msdn.microsoft.com/library/windows/desktop/dd183494)   
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)