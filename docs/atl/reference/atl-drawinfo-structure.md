---
title: Struttura ATL_DRAWINFO | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::ATL_DRAWINFO
- ATL_DRAWINFO
- ATL.ATL_DRAWINFO
dev_langs:
- C++
helpviewer_keywords:
- ATL_DRAWINFO structure
ms.assetid: dd2e2aa8-e8c5-403b-b4df-35c0f6f57fb7
caps.latest.revision: 16
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
ms.sourcegitcommit: 050e7483670bd32f633660ba44491c8bb3fc462d
ms.openlocfilehash: bc124de97acf85d6e706605afb55b0747a327ade
ms.lasthandoff: 02/24/2017

---
# <a name="atldrawinfo-structure"></a>Struttura ATL_DRAWINFO
Contiene informazioni utilizzate per il rendering a destinazioni diverse, ad esempio una stampante, metafile o controllo ActiveX.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct ATL_DRAWINFO {
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
  
## <a name="members"></a>Membri  
 `cbSize`  
 La dimensione della struttura, in byte.  
  
 **dwDrawAspect**  
 Specifica come destinazione per essere rappresentato. Rappresentazioni possono includere contenuto, un'icona, un'immagine di anteprima o un documento stampato. Per un elenco di valori possibili, vedere [DVASPECT](http://msdn.microsoft.com/library/windows/desktop/ms690318) e [DVASPECT2](http://msdn.microsoft.com/library/windows/desktop/ms688644).  
  
 **lindex**  
 Parte della destinazione di interesse per l'operazione di disegno. L'interpretazione varia a seconda del valore nel **dwDrawAspect** membro.  
  
 **ptd**  
 Puntatore a un [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) struttura che consente ottimizzazioni disegno in base all'aspetto specificato. Si noti che più recente di oggetti e contenitori che supportano le interfacce di disegno ottimizzate supportano anche questo membro. Oggetti meno recenti e i contenitori che non supportano le interfacce di disegno ottimizzate sempre specificano **NULL** per questo membro.  
  
 **hicTargetDev**  
 Contesto delle informazioni per il dispositivo di destinazione a cui puntava **ptd** da cui l'oggetto può estrarre la metrica del dispositivo e testare le funzionalità del dispositivo. Se **ptd** è **NULL**, l'oggetto deve ignorare il valore di **hicTargetDev** membro.  
  
 **hdcDraw**  
 Il contesto di dispositivo su cui disegnare. Per un oggetto senza finestra, il **hdcDraw** membro fa parte di `MM_TEXT` modalità di mapping con le coordinate logiche corrispondente alle coordinate client della finestra contenitore. Inoltre, il contesto di dispositivo deve essere nello stesso stato di quello in genere passata per un `WM_PAINT` messaggio.  
  
 **prcBounds**  
 Puntatore a un [RECTL](http://msdn.microsoft.com/library/windows/desktop/dd162907) struttura che specifica il rettangolo in **hdcDraw** e in cui l'oggetto deve essere disegnato. Questo membro consente di controllare il posizionamento e l'adattamento dell'oggetto. Questo membro deve essere **NULL** per disegnare un oggetto attivo sul posto privi di finestra. In ogni situazione, **NULL** non è un valore valido e dovrebbe restituire un `E_INVALIDARG` codice di errore. Se viene superato il contenitore non**NULL** valore a un oggetto senza finestra, l'oggetto deve eseguire il rendering di aspetto richiesto nel contesto di dispositivo specificato e il rettangolo. Un contenitore può richiedere questo oggetto privi di finestra per eseguire il rendering di una vista in secondo luogo, non attivo dell'oggetto o per stampare l'oggetto.  
  
 **prcWBounds**  
 Se **hdcDraw** è un contesto di dispositivo metafile (vedere [GetDeviceCaps](http://msdn.microsoft.com/library/windows/desktop/dd144877) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]), questo è un puntatore a un **RECTL** struttura che specifica il rettangolo di delimitazione nel metafile sottostante. La struttura del rettangolo contiene le dimensioni della finestra e l'origine di finestra. Questi valori sono utili per disegnare metafile. Il rettangolo indicato da **prcBounds** è annidata all'interno di tale **prcWBounds** rettangolo; sono nello stesso spazio di coordinate.  
  
 **bOptimize**  
 Diverso da zero se il disegno del controllo sia ottimizzato, in caso contrario 0. Se il disegno è ottimizzato, automaticamente ripristinato lo stato del contesto del dispositivo al termine per il rendering.  
  
 **bZoomed**  
 Diverso da zero se la destinazione è un fattore di zoom, in caso contrario 0. Il fattore di zoom viene archiviato in **ZoomNum**.  
  
 **bRectInHimetric**  
 Diverso da zero se le dimensioni di **prcBounds** in **HIMETRIC**, in caso contrario 0.  
  
 **ZoomNum**  
 La larghezza e altezza del rettangolo in cui viene eseguito il rendering dell'oggetto. Il fattore di zoom lungo l'asse x (la proporzione tra le dimensioni dell'oggetto naturale per renderne corrente) di destinazione è il valore di **ZoomNum.cx** diviso per il valore di **ZoomDen.cx**. Il fattore di zoom lungo l'asse y è realizzato in modo simile.  
  
 **ZoomDen**  
 La larghezza reale e l'altezza della destinazione.  
  
## <a name="remarks"></a>Note  
 L'utilizzo tipico di questa struttura sarebbe il recupero di informazioni durante il rendering dell'oggetto di destinazione. Ad esempio, è possibile recuperare valori da `ATL_DRAWINFO` all'interno di overload di [CComControlBase::OnDrawAdvanced](ccomcontrolbase-class.md#ondrawadvanced).  
  
 Questa struttura archivia le informazioni pertinenti utilizzate per visualizzare l'aspetto di un oggetto per il dispositivo di destinazione. Disegno sullo schermo, una stampante, o anche un metafile, è possono utilizzare le informazioni fornite.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)   
 [IViewObject](http://msdn.microsoft.com/library/windows/desktop/ms688655)   
 [CComControlBase::OnDrawAdvanced](../../atl/reference/ccomcontrolbase-class.md#ondrawadvanced)






