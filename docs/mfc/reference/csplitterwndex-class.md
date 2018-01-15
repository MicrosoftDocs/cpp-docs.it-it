---
title: Classe CSplitterWndEx | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx::OnDrawSplitter
dev_langs: C++
helpviewer_keywords: CSplitterWndEx [MFC], OnDrawSplitter
ms.assetid: 33e5eef3-05e1-4a07-a968-bf9207ce8598
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 94ec633718dda81a5183a59eb46387b361d0f004
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CSplitterWndEx::OnDrawSplitter](#ondrawsplitter)|Chiamato dal framework per disegnare una finestra con separatore. (Esegue l'override [CSplitterWnd::OnDrawSplitter](csplitterwnd-class.md#ondrawsplitter).)|  
  
## <a name="remarks"></a>Note  
 Eseguire l'override di `OnDrawSplitter` metodo per personalizzare l'aspetto dei componenti con interfaccia grafici di una finestra con separatore.  
  
 Il `CSplitterWndEx` classe è utilizzata in combinazione con il [OnDrawSplitterBorder](cmfcvisualmanager-class.md#ondrawsplitterborder), [OnDrawSplitterBox](cmfcvisualmanager-class.md#ondrawsplitterbox), e [OnFillSplitterBackground](cmfcvisualmanager-class.md#onfillsplitterbackground) metodi, che sono Se implementato da un gestore. Per generare un gestore visualizzazione disegnare una finestra con separatore nell'applicazione, sostituire le dichiarazioni del `CSplitterWnd` classe con il `CSplitterWndEx` classe. Per le applicazioni di finestra cornice, la classe di finestra con separatore è dichiarata nella classe CMainFrame che si trova in MainFrm. Per un esempio, vedere il `OutlookDemo` esempio nella directory degli esempi.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](cobject-class.md)  
  
 [CCmdTarget](ccmdtarget-class.md)  
  
 [CWnd](cwnd-class.md)  
  
 [CSplitterWnd](csplitterwnd-class.md)  
   
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxsplitterwndex.h  
  
##  <a name="ondrawsplitter"></a>CSplitterWndEx::OnDrawSplitter  
 Chiamato dal framework per disegnare una finestra con separatore.  
  
```  
virtual void OnDrawSplitter(  
   CDC* pDC,  
   ESplitType nType,  
   const CRect& rect   
);  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al contesto di dispositivo. Se questo parametro è `NULL`, il framework ridisegna la finestra attiva.  
  
 [in] `nType`  
 Uno del `CSplitterWnd::ESplitType` valori di enumerazione che specifica l'elemento della finestra con separatore da disegnare. I valori validi sono `splitBox`, `splitBar`, `splitIntersection`, e `splitBorder`.  
  
 [in] `rect`  
 Un rettangolo di delimitazione che specifica le dimensioni e posizione per disegnare l'elemento della finestra con separatore specificato.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../hierarchy-chart.md)   
 [Classi](mfc-classes.md)   
 [CSplitterWnd (classe)](csplitterwnd-class.md)   
 [Classe CMFCVisualManager](cmfcvisualmanager-class.md)