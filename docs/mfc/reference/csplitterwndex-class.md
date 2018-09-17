---
title: Classe CSplitterWndEx | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx::OnDrawSplitter
dev_langs:
- C++
helpviewer_keywords:
- CSplitterWndEx [MFC], OnDrawSplitter
ms.assetid: 33e5eef3-05e1-4a07-a968-bf9207ce8598
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a2b7abb9cbc3f75c2b4f50f87a1bfdd818e6a3f8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707343"
---
# <a name="csplitterwndex-class"></a>Classe CSplitterWndEx



Rappresenta una finestra con separatore personalizzata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSplitterWndEx : public CSplitterWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CSplitterWndEx::CSplitterWndEx`|Costruttore predefinito.|  
|`CSplitterWndEx::~CSplitterWndEx`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitterWndEx::OnDrawSplitter](#ondrawsplitter)|Chiamata eseguita dal framework per disegnare una finestra con separatore. (Esegue l'override [CSplitterWnd::OnDrawSplitter](csplitterwnd-class.md#ondrawsplitter).)|  
  
## <a name="remarks"></a>Note  
 Eseguire l'override di `OnDrawSplitter` metodo per personalizzare l'aspetto dei componenti con interfaccia grafici di una finestra con separatore.  
  
 Il `CSplitterWndEx` classe viene usata in combinazione con il [OnDrawSplitterBorder](cmfcvisualmanager-class.md#ondrawsplitterborder), [OnDrawSplitterBox](cmfcvisualmanager-class.md#ondrawsplitterbox), e [OnFillSplitterBackground](cmfcvisualmanager-class.md#onfillsplitterbackground) metodi, ovvero implementata da un gestore visualizzazione. Per generare un gestore visualizzazione disegnare una finestra con separatore all'interno dell'applicazione, sostituire le dichiarazioni del `CSplitterWnd` classe con il `CSplitterWndEx` classe. Per le applicazioni a finestre cornice, la classe della finestra con separatore viene dichiarata nella classe CMainFrame che si trova in MainFrm. Per un esempio, vedere il `OutlookDemo` esempio nella directory degli esempi.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](cobject-class.md)  
  
 [CCmdTarget](ccmdtarget-class.md)  
  
 [CWnd](cwnd-class.md)  
  
 [CSplitterWnd](csplitterwnd-class.md)  
   
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxsplitterwndex.h  
  
##  <a name="ondrawsplitter"></a>  CSplitterWndEx::OnDrawSplitter  
 Chiamata eseguita dal framework per disegnare una finestra con separatore.  
  
```  
virtual void OnDrawSplitter(  
   CDC* pDC,  
   ESplitType nType,  
   const CRect& rect   
);  
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Puntatore al contesto di dispositivo. Se questo parametro è NULL, il framework ridisegna la finestra attiva.  
  
*NLE*<br/>
[in] Uno del `CSplitterWnd::ESplitType` valori di enumerazione che specifica l'elemento di finestra con separatore da disegnare. I valori validi sono `splitBox`, `splitBar`, `splitIntersection`, e `splitBorder`.  
  
*Rect*<br/>
[in] Un rettangolo di delimitazione che specifica le dimensioni e il percorso in cui disegnare l'elemento di finestra con separatore specificato.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../hierarchy-chart.md)   
 [Classi](mfc-classes.md)   
 [Classe CSplitterWnd](csplitterwnd-class.md)   
 [Classe CMFCVisualManager](cmfcvisualmanager-class.md)