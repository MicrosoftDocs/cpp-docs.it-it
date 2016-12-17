---
title: "Classe CRenderTarget | Microsoft Docs"
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
  - "CRenderTarget"
  - "afxrendertarget/CRenderTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRenderTarget (classe)"
ms.assetid: 30d1607d-68d3-4d14-ac36-fdbd0ef903a1
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CRenderTarget
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1RenderTarget.  
  
## Sintassi  
  
```  
class CRenderTarget : public CObject;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRenderTarget::CRenderTarget](../Topic/CRenderTarget::CRenderTarget.md)|Costruisce un oggetto CRenderTarget.|  
|[CRenderTarget::~CRenderTarget](../Topic/CRenderTarget::~CRenderTarget.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto destinazione di rendering.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRenderTarget::Attach](../Topic/CRenderTarget::Attach.md)|Allega l'interfaccia della destinazione di rendering esistente all'oggetto|  
|[CRenderTarget::BeginDraw](../Topic/CRenderTarget::BeginDraw.md)|Avvia il disegno in questa destinazione di rendering.|  
|[CRenderTarget::Clear](../Topic/CRenderTarget::Clear.md)|Cancella l'area di disegno al colore specificato.|  
|[CRenderTarget::COLORREF\_TO\_D2DCOLOR](../Topic/CRenderTarget::COLORREF_TO_D2DCOLOR.md)|Converte il colore GDI e i valori alfa nell'oggetto D2D1\_COLOR\_F.|  
|[CRenderTarget::CreateCompatibleRenderTarget](../Topic/CRenderTarget::CreateCompatibleRenderTarget.md)|Crea una nuova destinazione di rendering della bitmap per l'utilizzo durante il disegno fuori schermo intermedio compatibile con la destinazione di rendering corrente.|  
|[CRenderTarget::Destroy](../Topic/CRenderTarget::Destroy.md)|Elimina una o più risorse|  
|[CRenderTarget::Detach](../Topic/CRenderTarget::Detach.md)|Disconnette l'interfaccia della destinazione di rendering dall'oggetto|  
|[CRenderTarget::DrawBitmap](../Topic/CRenderTarget::DrawBitmap.md)|Disegna il testo formattato descritto dall'oggetto IDWriteTextLayout specificato.|  
|[CRenderTarget::DrawEllipse](../Topic/CRenderTarget::DrawEllipse.md)|Disegna la struttura dell'ellisse specificata utilizzando lo stile del tratto specificato.|  
|[CRenderTarget::DrawGeometry](../Topic/CRenderTarget::DrawGeometry.md)|Disegna la struttura della geometria specificata utilizzando lo stile del tratto specificato.|  
|[CRenderTarget::DrawGlyphRun](../Topic/CRenderTarget::DrawGlyphRun.md)|Disegna i glifi specificati.|  
|[CRenderTarget::DrawLine](../Topic/CRenderTarget::DrawLine.md)|Disegna una linea tra i punti specificati utilizzando lo stile di tratto specificato.|  
|[CRenderTarget::DrawRectangle](../Topic/CRenderTarget::DrawRectangle.md)|Disegna la struttura di un rettangolo che dispone delle dimensioni e dello stile del tratto specificati.|  
|[CRenderTarget::DrawRoundedRectangle](../Topic/CRenderTarget::DrawRoundedRectangle.md)|Disegna la struttura del rettangolo arrotondato specificato utilizzando lo stile del tratto specificato.|  
|[CRenderTarget::DrawText](../Topic/CRenderTarget::DrawText.md)|Disegna il testo specificato utilizzando le informazioni sul formato fornite da un oggetto IDWriteTextFormat.|  
|[CRenderTarget::DrawTextLayout](../Topic/CRenderTarget::DrawTextLayout.md)|Disegna il testo formattato descritto dall'oggetto IDWriteTextLayout specificato.|  
|[CRenderTarget::EndDraw](../Topic/CRenderTarget::EndDraw.md)|Termina le operazioni di disegno nella destinazione di rendering e indica lo stato di errore corrente e i tag associati.|  
|[CRenderTarget::FillEllipse](../Topic/CRenderTarget::FillEllipse.md)|Dipinge l'area interna dell'ellisse specificata.|  
|[CRenderTarget::FillGeometry](../Topic/CRenderTarget::FillGeometry.md)|Dipinge l'area interna della geometria specificata.|  
|[CRenderTarget::FillMesh](../Topic/CRenderTarget::FillMesh.md)|Dipinge l'area interna della mesh specificata.|  
|[CRenderTarget::FillOpacityMask](../Topic/CRenderTarget::FillOpacityMask.md)|Applica la maschera di opacità descritta dalla bitmap specificata a un pennello e utilizza tale pennello per dipingere un'area della destinazione di rendering.|  
|[CRenderTarget::FillRectangle](../Topic/CRenderTarget::FillRectangle.md)|Dipinge l'area interna del rettangolo specificato.|  
|[CRenderTarget::FillRoundedRectangle](../Topic/CRenderTarget::FillRoundedRectangle.md)|Dipinge l'area interna del rettangolo arrotondato specificato.|  
|[CRenderTarget::Flush](../Topic/CRenderTarget::Flush.md)|Esegue tutti i comandi di disegno in sospeso.|  
|[CRenderTarget::GetAntialiasMode](../Topic/CRenderTarget::GetAntialiasMode.md)|Recupera la modalità di anti\-aliasing corrente per le operazioni di disegno non di testo.|  
|[CRenderTarget::GetDpi](../Topic/CRenderTarget::GetDpi.md)|Restituisce i punti per pollice \(DPI\) della destinazione di rendering|  
|[CRenderTarget::GetMaximumBitmapSize](../Topic/CRenderTarget::GetMaximumBitmapSize.md)|Ottiene la dimensione massima, in pixel, nelle unità dipendenti dal dispositivo \(pixel\), di ogni dimensione della bitmap supportata dalla destinazione di rendering|  
|[CRenderTarget::GetPixelFormat](../Topic/CRenderTarget::GetPixelFormat.md)|Recupera il formato pixel e la modalità alfa della destinazione di rendering|  
|[CRenderTarget::GetPixelSize](../Topic/CRenderTarget::GetPixelSize.md)|Restituisce la dimensione della destinazione di rendering in pixel del dispositivo|  
|[CRenderTarget::GetRenderTarget](../Topic/CRenderTarget::GetRenderTarget.md)|Restituisce l'interfaccia ID2D1RenderTarget|  
|[CRenderTarget::GetSize](../Topic/CRenderTarget::GetSize.md)|Restituisce la dimensione della destinazione di rendering in Device Independent Pixel|  
|[CRenderTarget::GetTags](../Topic/CRenderTarget::GetTags.md)|Ottiene l'etichetta per le operazioni di disegno successive.|  
|[CRenderTarget::GetTextAntialiasMode](../Topic/CRenderTarget::GetTextAntialiasMode.md)|Ottiene la modalità di anti\-aliasing corrente per le operazioni di disegno del testo e del glifo.|  
|[CRenderTarget::GetTextRenderingParams](../Topic/CRenderTarget::GetTextRenderingParams.md)|Recupera le opzioni di rendering del testo correnti della destinazione di rendering.|  
|[CRenderTarget::GetTransform](../Topic/CRenderTarget::GetTransform.md)|Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente.  Tutte le operazioni di disegno successive si verificano nello spazio trasformato.|  
|[CRenderTarget::IsSupported](../Topic/CRenderTarget::IsSupported.md)|Indica se la destinazione di rendering supporta le proprietà specificate|  
|[CRenderTarget::IsValid](../Topic/CRenderTarget::IsValid.md)|Controlla la validità della risorsa|  
|[CRenderTarget::PopAxisAlignedClip](../Topic/CRenderTarget::PopAxisAlignedClip.md)|Rimuove l'ultimo clip multimediale allineato dall'asse dalla destinazione di rendering.  Dopo che viene chiamato questo metodo, il clip multimediale non è applicato più alle operazioni di disegno successive.|  
|[CRenderTarget::PopLayer](../Topic/CRenderTarget::PopLayer.md)|Interrompe il reindirizzamento delle operazioni di disegno al livello specificato dall'ultima chiamata PushLayer.|  
|[CRenderTarget::PushAxisAlignedClip](../Topic/CRenderTarget::PushAxisAlignedClip.md)|Rimuove l'ultimo clip multimediale allineato dall'asse dalla destinazione di rendering.  Dopo che viene chiamato questo metodo, il clip multimediale non è applicato più alle operazioni di disegno successive.|  
|[CRenderTarget::PushLayer](../Topic/CRenderTarget::PushLayer.md)|Aggiunge il livello specificato alla destinazione di rendering in modo che riceva tutte le operazioni di disegno successive fino a quando non viene chiamato PopLayer.|  
|[CRenderTarget::RestoreDrawingState](../Topic/CRenderTarget::RestoreDrawingState.md)|Imposta lo stato di disegno della destinazione di rendering su quello di ID2D1DrawingStateBlock specificato.|  
|[CRenderTarget::SaveDrawingState](../Topic/CRenderTarget::SaveDrawingState.md)|Salva lo stato corrente del disegno nell'oggetto ID2D1DrawingStateBlock specificato.|  
|[CRenderTarget::SetAntialiasMode](../Topic/CRenderTarget::SetAntialiasMode.md)|Imposta la modalità di anti\-aliasing della destinazione di rendering.  La modalità di anti\-aliasing che si applica a tutte le operazioni di disegno successive, escluse quelle di testo e glifo.|  
|[CRenderTarget::SetDpi](../Topic/CRenderTarget::SetDpi.md)|Imposta i punti per pollice \(DPI\) della destinazione di rendering.|  
|[CRenderTarget::SetTags](../Topic/CRenderTarget::SetTags.md)|Specifica un'etichetta per le operazioni di disegno successive.|  
|[CRenderTarget::SetTextAntialiasMode](../Topic/CRenderTarget::SetTextAntialiasMode.md)|Specifica la modalità di anti\-aliasing da utilizzare per le operazioni di disegno del testo e glifo successive.|  
|[CRenderTarget::SetTextRenderingParams](../Topic/CRenderTarget::SetTextRenderingParams.md)|Specifica opzioni di rendering del testo da applicare a tutte le operazioni di disegno del testo e del glifo successive.|  
|[CRenderTarget::SetTransform](../Topic/CRenderTarget::SetTransform.md)|Di overload.  Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente.  Tutte le operazioni di disegno successive si verificano nello spazio trasformato.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRenderTarget::VerifyResource](../Topic/CRenderTarget::VerifyResource.md)|Verifica la validità dell'oggetto CD2DResource; crea l'oggetto se non esiste già.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRenderTarget::operator ID2D1RenderTarget\*](../Topic/CRenderTarget::operator%20ID2D1RenderTarget*.md)|Restituisce l'interfaccia ID2D1RenderTarget|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRenderTarget::m\_lstResources](../Topic/CRenderTarget::m_lstResources.md)|Elenco di puntatori agli oggetti CD2DResource.|  
|[CRenderTarget::m\_pRenderTarget](../Topic/CRenderTarget::m_pRenderTarget.md)|Un puntatore a un oggetto ID2D1RenderTarget.|  
|[CRenderTarget::m\_pTextFormatDefault](../Topic/CRenderTarget::m_pTextFormatDefault.md)|Puntatore all'oggetto CD2DTextFormat che contiene un formato di testo predefinito.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)