---
title: Classe CMFCImageEditorPaletteBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCImageEditorPaletteBar
- AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar
- AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar::GetRowHeight
- AFXIMAGEEDITORDIALOG/CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable
dev_langs:
- C++
helpviewer_keywords:
- CMFCImageEditorPaletteBar class
ms.assetid: 3fb7ba8e-f254-4d56-b913-9941b4ed8138
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: f6b987a27b43d713835a71dd5c31587020f23f2f
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcimageeditorpalettebar-class"></a>Classe CMFCImageEditorPaletteBar
Fornisce funzionalità barra tavolozza per una finestra di dialogo editor di immagini.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCImageEditorPaletteBar : public CMFCToolBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCImageEditorPaletteBar::GetRowHeight](#getrowheight)|Restituisce l'altezza dei pulsanti della barra degli strumenti. (Esegue l'override di [CMFCToolBar::GetRowHeight](../../mfc/reference/cmfctoolbar-class.md#getrowheight).)|  
|[CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable](#isbuttonextrasizeavailable)|Determina se la barra degli strumenti può mostrare pulsanti che hanno esteso i bordi. (Esegue l'override di [CMFCToolBar::IsButtonExtraSizeAvailable](../../mfc/reference/cmfctoolbar-class.md#isbuttonextrasizeavailable).)|  
  
### <a name="remarks"></a>Note  
 Questa classe non deve essere utilizzato direttamente dal codice.  
  
 Il framework utilizza questa classe per visualizzare una barra tavolozza in una finestra di dialogo editor di immagini. Per ulteriori informazioni nella finestra di dialogo dell'editor di immagini, vedere [CMFCImageEditorDialog classe](../../mfc/reference/cmfcimageeditordialog-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBa](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCImageEditorPaletteBar](../../mfc/reference/cmfcimageeditorpalettebar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afximageeditordialog.h  
  
##  <a name="getrowheight"></a>CMFCImageEditorPaletteBar::GetRowHeight  
 Restituisce l'altezza dei pulsanti della barra degli strumenti.  
  
```  
virtual int GetRowHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza di ogni pulsante sulla barra degli strumenti.  
  
##  <a name="isbuttonextrasizeavailable"></a>CMFCImageEditorPaletteBar::IsButtonExtraSizeAvailable  
 Determina se la barra degli strumenti può mostrare pulsanti che hanno esteso i bordi.  
  
```  
virtual BOOL IsButtonExtraSizeAvailable() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce `FALSE`.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe di CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)

