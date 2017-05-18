---
title: Classe CSplitterWndEx | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx
- AFXSPLITTERWNDEX/CSplitterWndEx::OnDrawSplitter
dev_langs:
- C++
helpviewer_keywords:
- CSplitterWndEx
ms.assetid: 33e5eef3-05e1-4a07-a968-bf9207ce8598
caps.latest.revision: 24
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 73410ae17465880f455e5b15026f6cc010803c19
ms.openlocfilehash: 08b26bc2321485181941dbaaa9a903de9a401ef8
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
|[CSplitterWndEx::OnDrawSplitter](#ondrawsplitter)|Chiamato dal framework per creare una finestra con separatore. (Esegue l'override di [CSplitterWnd::OnDrawSplitter](csplitterwnd-class.md#ondrawsplitter).)|  
  
## <a name="remarks"></a>Note  
 Eseguire l'override di `OnDrawSplitter` metodo per personalizzare l'aspetto dei componenti con interfaccia grafici di una finestra con separatore.  
  
 Il `CSplitterWndEx` classe viene utilizzata in combinazione con il [OnDrawSplitterBorder](cmfcvisualmanager-class.md#ondrawsplitterborder), [OnDrawSplitterBox](cmfcvisualmanager-class.md#ondrawsplitterbox), e [OnFillSplitterBackground](cmfcvisualmanager-class.md#onfillsplitterbackground) , i metodi sono implementati da un gestore visualizzazione. Per generare un gestore visualizzazione creare una finestra con separatore nell'applicazione, sostituire le dichiarazioni di `CSplitterWnd` classe con la `CSplitterWndEx` classe. Per le applicazioni a finestre cornice, la classe di finestra con separatore viene dichiarata nella classe CMainFrame che si trova in MainFrm. Per un esempio, vedere il `OutlookDemo` esempio nella directory degli esempi.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](cobject-class.md)  
  
 [CCmdTarget](ccmdtarget-class.md)  
  
 [CWnd](cwnd-class.md)  
  
 [CSplitterWnd](csplitterwnd-class.md)  
   
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxsplitterwndex.h  
  
##  <a name="ondrawsplitter"></a>CSplitterWndEx::OnDrawSplitter  
 Chiamato dal framework per creare una finestra con separatore.  
  
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
 Uno del `CSplitterWnd::ESplitType` valori di enumerazione che specifica l'elemento di finestra con separatore da disegnare. I valori validi sono `splitBox`, `splitBar`, `splitIntersection`, e `splitBorder`.  
  
 [in] `rect`  
 Un rettangolo di delimitazione che specifica le dimensioni e posizione per disegnare l'elemento di finestra con separatore specificato.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../hierarchy-chart.md)   
 [Classi](mfc-classes.md)   
 [CSplitterWnd (classe)](csplitterwnd-class.md)   
 [Classe CMFCVisualManager](cmfcvisualmanager-class.md)
