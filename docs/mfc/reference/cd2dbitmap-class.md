---
title: "Classe CD2DBitmap | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DBitmap"
  - "CD2DBitmap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DBitmap (classe)"
ms.assetid: 2b3686f1-812c-462b-b449-9f0cb6949bf6
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe CD2DBitmap
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1Bitmap.  
  
## Sintassi  
  
```  
class CD2DBitmap : public CD2DResource;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmap::CD2DBitmap](../Topic/CD2DBitmap::CD2DBitmap.md)|Di overload.  Costruisce un oggetto CD2DBitmap da HBITMAP.|  
|[CD2DBitmap::~CD2DBitmap](../Topic/CD2DBitmap::~CD2DBitmap.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto bitmap D2D.|  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmap::CD2DBitmap](../Topic/CD2DBitmap::CD2DBitmap.md)|Di overload.  Costruisce un oggetto CD2DBitmap.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmap::Attach](../Topic/CD2DBitmap::Attach.md)|Allega l'interfaccia della risorsa esistente all'oggetto|  
|[CD2DBitmap::CopyFromBitmap](../Topic/CD2DBitmap::CopyFromBitmap.md)|Copia la regione specificata dalla bitmap specificata nella bitmap corrente|  
|[CD2DBitmap::CopyFromMemory](../Topic/CD2DBitmap::CopyFromMemory.md)|Copia la regione specificata dalla memoria nella bitmap corrente|  
|[CD2DBitmap::CopyFromRenderTarget](../Topic/CD2DBitmap::CopyFromRenderTarget.md)|Copia la regione specificata dalla destinazione di rendering specificata nella bitmap corrente|  
|[CD2DBitmap::Create](../Topic/CD2DBitmap::Create.md)|Crea un CD2DBitmap.  \(Esegue l'override di [CD2DResource::Create](../Topic/CD2DResource::Create.md)\).|  
|[CD2DBitmap::Destroy](../Topic/CD2DBitmap::Destroy.md)|Elimina un oggetto CD2DBitmap.  \(Esegue l'override di [CD2DResource::Destroy](../Topic/CD2DResource::Destroy.md).\)|  
|[CD2DBitmap::Detach](../Topic/CD2DBitmap::Detach.md)|Disconnette l'interfaccia della risorsa dall'oggetto|  
|[CD2DBitmap::Get](../Topic/CD2DBitmap::Get.md)|Restituisce l'interfaccia ID2D1Bitmap|  
|[CD2DBitmap::GetDPI](../Topic/CD2DBitmap::GetDPI.md)|Restituisce i punti per pollice punti per pollice \(DPI, dot per inch\) della bitmap.|  
|[CD2DBitmap::GetPixelFormat](../Topic/CD2DBitmap::GetPixelFormat.md)|Recupera il formato pixel e la modalità alfa della bitmap|  
|[CD2DBitmap::GetPixelSize](../Topic/CD2DBitmap::GetPixelSize.md)|Restituisce la dimensione, nelle unità dipendenti dal dispositivo \(pixel\), della bitmap|  
|[CD2DBitmap::GetSize](../Topic/CD2DBitmap::GetSize.md)|Restituisce la dimensione, in DIP \(Device Independent Pixel\), della bitmap|  
|[CD2DBitmap::IsValid](../Topic/CD2DBitmap::IsValid.md)|Controlla la validità della risorsa \(Esegue l'override di [CD2DResource::IsValid](../Topic/CD2DResource::IsValid.md).\)|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmap::CommonInit](../Topic/CD2DBitmap::CommonInit.md)|Inizializza l'oggetto.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmap::operator ID2D1Bitmap\*](../Topic/CD2DBitmap::operator%20ID2D1Bitmap*.md)|Restituisce l'interfaccia ID2D1Bitmap|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmap::m\_bAutoDestroyHBMP](../Topic/CD2DBitmap::m_bAutoDestroyHBMP.md)|TRUE se m\_hBmpSrc deve essere eliminato; in caso contrario è FALSE.|  
|[CD2DBitmap::m\_hBmpSrc](../Topic/CD2DBitmap::m_hBmpSrc.md)|Handle della bitmap di origine.|  
|[CD2DBitmap::m\_lpszType](../Topic/CD2DBitmap::m_lpszType.md)|Tipo di risorsa.|  
|[CD2DBitmap::m\_pBitmap](../Topic/CD2DBitmap::m_pBitmap.md)|Archivia un puntatore a un oggetto ID2D1Bitmap.|  
|[CD2DBitmap::m\_sizeDest](../Topic/CD2DBitmap::m_sizeDest.md)|Dimensione di destinazione bitmap.|  
|[CD2DBitmap::m\_strPath](../Topic/CD2DBitmap::m_strPath.md)|Percorso del file botmap.|  
|[CD2DBitmap::m\_uiResID](../Topic/CD2DBitmap::m_uiResID.md)|ID della risorsa bitmap.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBitmap](../../mfc/reference/cd2dbitmap-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)