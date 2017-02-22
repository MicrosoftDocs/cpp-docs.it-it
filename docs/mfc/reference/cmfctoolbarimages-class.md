---
title: "CMFCToolBarImages Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBarImages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarImages class"
ms.assetid: d4e50518-9ffc-406f-9996-f79e5cd38155
caps.latest.revision: 31
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 33
---
# CMFCToolBarImages Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le immagini in una barra degli strumenti.  La classe `CMFCToolBarImages` mantiene immagini della barra degli strumenti caricati dalle risorse dell'applicazione o file.  
  
## Sintassi  
  
```  
class CMFCToolBarImages : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarImages::CMFCToolBarImages](../Topic/CMFCToolBarImages::CMFCToolBarImages.md)|Costruisce un oggetto `CMFCToolBarImages`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarImages::AdaptColors](../Topic/CMFCToolBarImages::AdaptColors.md)||  
|[CMFCToolBarImages::AddIcon](../Topic/CMFCToolBarImages::AddIcon.md)|Aggiungere un'icona alle immagini della barra degli strumenti.|  
|[CMFCToolBarImages::AddImage](../Topic/CMFCToolBarImages::AddImage.md)|Aggiunge una bitmap immagini della barra degli strumenti.|  
|[CMFCToolBarImages::CleanUp](../Topic/CMFCToolBarImages::CleanUp.md)||  
|[CMFCToolBarImages::Clear](../Topic/CMFCToolBarImages::Clear.md)|Libera le risorse di sistema allocati a questo oggetto.|  
|[CMFCToolBarImages::ConvertTo32Bits](../Topic/CMFCToolBarImages::ConvertTo32Bits.md)|Bitmap sottolineate convertiti in 32 immagini di bpp.|  
|[CMFCToolBarImages::CopyImageToClipboard](../Topic/CMFCToolBarImages::CopyImageToClipboard.md)||  
|[CMFCToolBarImages::CopyTo](../Topic/CMFCToolBarImages::CopyTo.md)||  
|[CMFCToolBarImages::CreateFromImageList](../Topic/CMFCToolBarImages::CreateFromImageList.md)|Inizializza le immagini della barra degli strumenti da un elenco immagini \([CImageList Class](../../mfc/reference/cimagelist-class.md)\).|  
|[CMFCToolBarImages::CreateRegionFromImage](../Topic/CMFCToolBarImages::CreateRegionFromImage.md)||  
|[CMFCToolBarImages::DeleteImage](../Topic/CMFCToolBarImages::DeleteImage.md)|Elimina l'immagine con indice specificato dalle immagini della barra degli strumenti se questo set di immagini della barra degli strumenti contiene le immagini definite dall'utente.|  
|[CMFCToolBarImages::Draw](../Topic/CMFCToolBarImages::Draw.md)|Disegna una singola immagine della barra degli strumenti \(pulsante\).|  
|[CMFCToolBarImages::DrawEx](../Topic/CMFCToolBarImages::DrawEx.md)||  
|[CMFCToolBarImages::EnableRTL](../Topic/CMFCToolBarImages::EnableRTL.md)||  
|[CMFCToolBarImages::EndDrawImage](../Topic/CMFCToolBarImages::EndDrawImage.md)|Libera le risorse di sistema dopo che un'immagine della barra degli strumenti viene disegnata.|  
|[CMFCToolBarImages::ExtractIcon](../Topic/CMFCToolBarImages::ExtractIcon.md)|Restituisce l'icona con indice specificato di immagine dalle immagini della barra degli strumenti.|  
|[CMFCToolBarImages::FillDitheredRect](../Topic/CMFCToolBarImages::FillDitheredRect.md)|Inserisce un rettangolo utilizzando un pennello con i colori di sfondo della barra degli strumenti.|  
|[CMFCToolBarImages::GetAlwaysLight](../Topic/CMFCToolBarImages::GetAlwaysLight.md)||  
|[CMFCToolBarImages::GetBitsPerPixel](../Topic/CMFCToolBarImages::GetBitsPerPixel.md)|Restituisce la risoluzione corrente di immagini sottolineate.|  
|[CMFCToolBarImages::GetCount](../Topic/CMFCToolBarImages::GetCount.md)|Restituisce il numero delle immagini sulla barra degli strumenti.|  
|[CMFCToolBarImages::GetDisabledImageAlpha](../Topic/CMFCToolBarImages::GetDisabledImageAlpha.md)|Restituisce il valore del canale alfa utilizzato per immagini disabilitate.|  
|[CMFCToolBarImages::GetFadedImageAlpha](../Topic/CMFCToolBarImages::GetFadedImageAlpha.md)||  
|[CMFCToolBarImages::GetImageSize](../Topic/CMFCToolBarImages::GetImageSize.md)|Recupera una delle dimensioni delle immagini della barra degli strumenti archiviate in memoria \(dimensione di origine\), o le dimensioni delle immagini della barra degli strumenti che sono attinte lo schermo \(dimensione di destinazione.|  
|[CMFCToolBarImages::GetImageWell](../Topic/CMFCToolBarImages::GetImageWell.md)|Restituisce l'handle la bitmap che contiene tutte le immagini della barra degli strumenti.|  
|[CMFCToolBarImages::GetImageWellLight](../Topic/CMFCToolBarImages::GetImageWellLight.md)||  
|[CMFCToolBarImages::GetLastImageRect](../Topic/CMFCToolBarImages::GetLastImageRect.md)||  
|[CMFCToolBarImages::GetLightPercentage](../Topic/CMFCToolBarImages::GetLightPercentage.md)||  
|[CMFCToolBarImages::GetMapTo3DColors](../Topic/CMFCToolBarImages::GetMapTo3DColors.md)||  
|[CMFCToolBarImages::GetMask](../Topic/CMFCToolBarImages::GetMask.md)||  
|[CMFCToolBarImages::GetResourceOffset](../Topic/CMFCToolBarImages::GetResourceOffset.md)|Restituisce l'indice di immagini per un ID di risorsa|  
|[CMFCToolBarImages::GetScale](../Topic/CMFCToolBarImages::GetScale.md)|Rapporto corrente della scala di restituzione di immagini sottolineate.|  
|[CMFCToolBarImages::GetTransparentColor](../Topic/CMFCToolBarImages::GetTransparentColor.md)||  
|[CMFCToolBarImages::GrayImages](../Topic/CMFCToolBarImages::GrayImages.md)|Ingrigisce le immagini della barra degli strumenti per renderli il essere disabilitato.|  
|[CMFCToolBarImages::Is32BitTransparencySupported](../Topic/CMFCToolBarImages::Is32BitTransparencySupported.md)|Determina se la fusione alfa pari a 32 bit del sistema operativo supporta.|  
|[CMFCToolBarImages::IsPreMultiplyAutoCheck](../Topic/CMFCToolBarImages::IsPreMultiplyAutoCheck.md)||  
|[CMFCToolBarImages::IsRTL](../Topic/CMFCToolBarImages::IsRTL.md)|Determina se il supporto da destra a sinistra di \(RTL\) è abilitato.|  
|[CMFCToolBarImages::IsReadOnly](../Topic/CMFCToolBarImages::IsReadOnly.md)|Determina se le immagini della barra degli strumenti sono di sola lettura.|  
|[CMFCToolBarImages::IsScaled](../Topic/CMFCToolBarImages::IsScaled.md)|Indica se le immagini sottolineate vengono ridimensionate o meno.|  
|[CMFCToolBarImages::IsUserImagesList](../Topic/CMFCToolBarImages::IsUserImagesList.md)|Determina se questo set di immagini della barra degli strumenti contiene le immagini definite dall'utente.|  
|[CMFCToolBarImages::IsValid](../Topic/CMFCToolBarImages::IsValid.md)|Determina se questo set di immagini della barra degli strumenti contiene un'immagine valida della barra degli strumenti.|  
|[CMFCToolBarImages::Load](../Topic/CMFCToolBarImages::Load.md)|Immagini della barra degli strumenti carica le risorse di sistema o da un file.|  
|[CMFCToolBarImages::LoadStr](../Topic/CMFCToolBarImages::LoadStr.md)||  
|[CMFCToolBarImages::MapFromSysColor](../Topic/CMFCToolBarImages::MapFromSysColor.md)||  
|[CMFCToolBarImages::MapTo3dColors](../Topic/CMFCToolBarImages::MapTo3dColors.md)||  
|[CMFCToolBarImages::MapToSysColor](../Topic/CMFCToolBarImages::MapToSysColor.md)||  
|[CMFCToolBarImages::MapToSysColorAlpha](../Topic/CMFCToolBarImages::MapToSysColorAlpha.md)||  
|[CMFCToolBarImages::Mirror](../Topic/CMFCToolBarImages::Mirror.md)|Orizzontalmente rispecchia tutte le immagini della barra degli strumenti.|  
|[CMFCToolBarImages::MirrorBitmap](../Topic/CMFCToolBarImages::MirrorBitmap.md)|Orizzontalmente rispecchia una bitmap.|  
|[CMFCToolBarImages::MirrorBitmapVert](../Topic/CMFCToolBarImages::MirrorBitmapVert.md)||  
|[CMFCToolBarImages::MirrorVert](../Topic/CMFCToolBarImages::MirrorVert.md)||  
|[CMFCToolBarImages::OnSysColorChange](../Topic/CMFCToolBarImages::OnSysColorChange.md)||  
|[CMFCToolBarImages::PrepareDrawImage](../Topic/CMFCToolBarImages::PrepareDrawImage.md)|Alloca le risorse necessarie per disegnare un'immagine della barra degli strumenti su una dimensione specifica.|  
|[CMFCToolBarImages::Save](../Topic/CMFCToolBarImages::Save.md)|Archivia le immagini della barra degli strumenti in un file se questo set di immagini della barra degli strumenti contiene le immagini definite dall'utente.|  
|[CMFCToolBarImages::SetAlwaysLight](../Topic/CMFCToolBarImages::SetAlwaysLight.md)||  
|[CMFCToolBarImages::SetDisabledImageAlpha](../Topic/CMFCToolBarImages::SetDisabledImageAlpha.md)|Imposta il valore del canale alfa utilizzato per immagini disabilitate.|  
|[CMFCToolBarImages::SetFadedImageAlpha](../Topic/CMFCToolBarImages::SetFadedImageAlpha.md)||  
|[CMFCToolBarImages::SetImageSize](../Topic/CMFCToolBarImages::SetImageSize.md)|Imposta la dimensione di un'immagine della barra degli strumenti \(dimensione di origine.|  
|[CMFCToolBarImages::SetLightPercentage](../Topic/CMFCToolBarImages::SetLightPercentage.md)||  
|[CMFCToolBarImages::SetMapTo3DColors](../Topic/CMFCToolBarImages::SetMapTo3DColors.md)||  
|[CMFCToolBarImages::SetPreMultiplyAutoCheck](../Topic/CMFCToolBarImages::SetPreMultiplyAutoCheck.md)||  
|[CMFCToolBarImages::SetSingleImage](../Topic/CMFCToolBarImages::SetSingleImage.md)||  
|[CMFCToolBarImages::SetTransparentColor](../Topic/CMFCToolBarImages::SetTransparentColor.md)|Imposta il colore completamente trasparente immagini della barra degli strumenti.|  
|[CMFCToolBarImages::SmoothResize](../Topic/CMFCToolBarImages::SmoothResize.md)|Ridimensionare agevolmente le immagini sottolineate.|  
|[CMFCToolBarImages::UpdateImage](../Topic/CMFCToolBarImages::UpdateImage.md)|Aggiorna un'immagine definita dall'utente della barra degli strumenti da una bitmap.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarImages::PreMultiplyAlpha](../Topic/CMFCToolBarImages::PreMultiplyAlpha.md)||  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarImages::m\_bDisableTrueColorAlpha](../Topic/CMFCToolBarImages::m_bDisableTrueColorAlpha.md)|`TRUE` se la fusione alfa di truecolor \(colori a 32 bit\) è disabilitato.|  
  
## Note  
 La bitmap completo delle immagini della barra degli strumenti gestite da `CMFCToolbarImages` è costituito da uno o più piccole immagini della barra degli strumenti \(pulsanti\) di dimensioni fisse.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare un oggetto `CMFCToolBarImages` utilizzando i diversi metodi nella classe `CMFCToolBarImages`.  L'esempio mostra come impostare la dimensione dell'immagine della barra degli strumenti, caricare un'immagine e impostare il colore trasparenza dell'immagine.  Questo frammento di codice fa parte [Esempio demo di Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#32](../../mfc/codesnippet/CPP/cmfctoolbarimages-class_1.h)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#33](../../mfc/codesnippet/CPP/cmfctoolbarimages-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md)  
  
## Requisiti  
 **intestazione:** afxtoolbarimages.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)