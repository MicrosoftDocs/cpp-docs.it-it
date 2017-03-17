---
title: Classe CMFCDesktopAlertWndButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDesktopAlertWndButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCaptionButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCloseButton
dev_langs:
- C++
helpviewer_keywords:
- CMFCDesktopAlertWndButton class
ms.assetid: df39a0c8-0c39-4ab0-8c64-78c5b2c4ecaf
caps.latest.revision: 23
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 52294143c6caf5a8e0458c152540c41f7df78c57
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcdesktopalertwndbutton-class"></a>Classe CMFCDesktopAlertWndButton
Consente di pulsanti da aggiungere alla finestra di dialogo di avviso del desktop.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCDesktopAlertWndButton : public CMFCButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCDesktopAlertWndButton::CMFCDesktopAlertWndButton`|Costruttore predefinito.|  
|`CMFCDesktopAlertWndButton::~CMFCDesktopAlertWndButton`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCDesktopAlertWndButton::IsCaptionButton](#iscaptionbutton)|Determina se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo avviso.|  
|[CMFCDesktopAlertWndButton::IsCloseButton](#isclosebutton)|Determina se il pulsante consente di chiudere la finestra di dialogo avviso.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCDesktopAlertWndButton::m_bIsCaptionButton`|Valore booleano che specifica se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo avviso.|  
|`CMFCDesktopAlertWndButton::m_bIsCloseButton`|Valore booleano che specifica se il pulsante chiude la finestra di dialogo avviso.|  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il costruttore imposta la `m_bIsCaptionButton` e `m_bIsCloseButton` i membri dati `FALSE`. L'elemento padre `CMFCDesktopAlertDialog` set di oggetti `m_bIsCaptionButton` per `TRUE` se il pulsante è posizionato nell'area della didascalia della finestra di dialogo avviso. Il `CMFCDesktopAlertDialog` classe crea un `CMFCDesktopAlertWndButton` oggetto che funge da pulsante che consente di chiudere la finestra di dialogo Avviso casella e imposta `m_bIsCloseButton` a `TRUE`.  
  
 Aggiungere `CMFCDesktopAlertWndButton` oggetti in un `CMFCDesktopAlertDialog` l'oggetto, come aggiungere un pulsante. Per ulteriori informazioni su `CMFCDesktopAlertDialog`, vedere [CMFCDesktopAlertDialog classe](../../mfc/reference/cmfcdesktopalertdialog-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetImage` metodo la `CMFCDesktopAlertWndButton` classe. Questo frammento di codice fa parte di [esempio dimostrativo avviso Desktop](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo n.&4;](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_1.h)]  
[!code-cpp[NVC_MFC_DesktopAlertDemo n.&5;](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
 [CMFCDesktopAlertWndButton](../../mfc/reference/cmfcdesktopalertwndbutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdesktopalertwnd.h  
  
##  <a name="iscaptionbutton"></a>CMFCDesktopAlertWndButton::IsCaptionButton  
 Determina se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo avviso.  
  
```  
BOOL IsCaptionButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo Avviso; in caso contrario, 0.  
  
##  <a name="isclosebutton"></a>CMFCDesktopAlertWndButton::IsCloseButton  
 Determina se il pulsante consente di chiudere la finestra di dialogo avviso.  
  
```  
BOOL IsCloseButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante consente di chiudere la finestra di dialogo Avviso; in caso contrario, 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)

