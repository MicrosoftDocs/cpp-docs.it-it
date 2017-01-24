---
title: "ATL_DRAWINFO Structure | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::ATL_DRAWINFO"
  - "ATL_DRAWINFO"
  - "ATL.ATL_DRAWINFO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL_DRAWINFO structure"
ms.assetid: dd2e2aa8-e8c5-403b-b4df-35c0f6f57fb7
caps.latest.revision: 16
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL_DRAWINFO Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contiene informazioni utilizzate per il rendering dei diversi database di destinazione, ad esempio una stampante, metafile, o un controllo ActiveX.  
  
## Sintassi  
  
```  
  
      struct ATL_DRAWINFO{  
   UINT cbSize;  
   DWORD dwDrawAspect;  
   LONG lindex;  
   DVTARGETDEVICE* ptd;  
   HDC hicTargetDev;  
   HDC hdcDraw;  
   LPCRECTL prcBounds;  
   LPCRECTL prcWBounds;  
   BOOL bOptimize;  
   BOOL bZoomed;  
   BOOL bRectInHimetric;  
   SIZEL ZoomNum;  
   SIZEL ZoomDen;  
};  
```  
  
## Membri  
 `cbSize`  
 La dimensione della struttura, in byte.  
  
 **dwDrawAspect**  
 Specifica come destinazione deve essere rappresentato.  Le rappresentazioni possono includere il contenuto, l'icona, un'anteprima, o un documento stampato.  Per un elenco di valori possibili, vedere [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) e [DVASPECT2](http://msdn.microsoft.com/library/windows/desktop/ms688644).  
  
 **lindex**  
 Parte del database di destinazione che è di particolare interesse per l'operazione di disegno.  La relativa interpretazione varia a seconda del valore del membro **dwDrawAspect**.  
  
 **ptd**  
 Puntatore a una struttura [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) che abilita le ottimizzazioni di disegno come l'aspetto specificato.  Si noti che più nuovi oggetti e contenitori che il supporto ottimizzato creando le interfacce supporta questo membro anche.  Gli oggetti e i contenitori meno recenti che non supportano ottimizzato creando le interfacce specificano sempre **NULL** per il membro.  
  
 **hicTargetDev**  
 Il contesto di informazioni per il dispositivo di destinazione indicato da **ptd** da cui l'oggetto può estrarre le metriche di dispositivo e testare le funzionalità del dispositivo.  Se **ptd** è **NULL**, l'oggetto deve ignorare il valore del membro **hicTargetDev**.  
  
 **hdcDraw**  
 Il contesto di dispositivo in cui da tracciare.  Per un oggetto senza finestra, il membro **hdcDraw** è in modalità di mapping `MM_TEXT` con le coordinate logiche che corrisponde alle coordinate del client della finestra contenitore.  Inoltre, il contesto di dispositivo deve essere lo stesso stato di che in genere passato da un messaggio `WM_PAINT`.  
  
 **prcBounds**  
 Puntatore a una struttura [RECTL](http://msdn.microsoft.com/library/windows/desktop/dd162907) che specifica il rettangolo in **hdcDraw** e in cui l'oggetto deve essere disegnato.  Questo membro viene controllato il posizionamento e adattamento dell'oggetto.  Il membro deve essere **NULL** per disegnare un oggetto attivo sul posto senza finestra.  In ogni altra situazione, **NULL** non è un valore valido e deve produrre un codice di errore `E_INVALIDARG`.  Se il contenitore passa un valore null non a un oggetto senza finestra, l'oggetto deve eseguire il rendering dell'aspetto richiesto nel contesto di dispositivo e nel rettangolo specificato.  Un contenitore può richiedere questo da un oggetto senza finestra per eseguire il rendering della visualizzazione, non attiva dell'oggetto o per visualizzare l'oggetto.  
  
 **prcWBounds**  
 Se **hdcDraw** è un contesto di dispositivo metafile \(vedere [GetDeviceCaps](http://msdn.microsoft.com/library/windows/desktop/dd144877) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]\), questo è un puntatore a una struttura **RECTL** che specifica il rettangolo di delimitazione\) in sottostanti.  La struttura del rettangolo contiene l'estensione della finestra e l'origine della finestra.  Questi valori sono utili per disegnare metafile.  Il rettangolo indicato da **prcBounds** è annidato all'interno del rettangolo **prcWBounds** ; nello stesso spazio di coordinate.  
  
 **bOptimize**  
 Diverso da zero se il disegno del controllo deve essere specificata in caso contrario, 0.  Se il disegno è ottimizzato, lo stato del contesto di dispositivo automaticamente ripristinata al rendering completo.  
  
 **bZoomed**  
 Diverso da zero se la destinazione è un fattore di zoom, altrimenti 0.  Il fattore di zoom viene archiviato in **ZoomNum**.  
  
 **bRectInHimetric**  
 Diverso da zero se le dimensioni **prcBounds** sono in **HIMETRIC**in caso contrario, 0.  
  
 **ZoomNum**  
 La larghezza e l'altezza del rettangolo in cui è eseguito il rendering.  Il fattore di zoom lungo l'asse x \(la percentuale della dimensione naturale dell'oggetto nella misura corrente\) di destinazione è il valore **ZoomNum.cx** è suddiviso dal valore **ZoomDen.cx**.  Il fattore di zoom lungo l'asse y viene raggiunto in modo simile.  
  
 **ZoomDen**  
 Le effettive larghezza e l'altezza di destinazione.  
  
## Note  
 L'utilizzo tipico di questa struttura sarebbe la ricerca di informazioni durante il rendering dell'oggetto di destinazione.  Ad esempio, è possibile recuperare i valori da `ATL_DRAWINFO` nell'overload [CComControlBase::OnDrawAdvanced](../Topic/CComControlBase::OnDrawAdvanced.md).  
  
 Questa struttura archivia le informazioni importanti utilizzate per eseguire il rendering dell'aspetto di un oggetto per il dispositivo di destinazione.  Informazioni fornite possono essere utilizzate in disegno sullo schermo, a una stampante, né a un metafile.  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)   
 [IViewObject::Draw](http://msdn.microsoft.com/library/windows/desktop/ms688655)   
 [CComControlBase::OnDrawAdvanced](../Topic/CComControlBase::OnDrawAdvanced.md)