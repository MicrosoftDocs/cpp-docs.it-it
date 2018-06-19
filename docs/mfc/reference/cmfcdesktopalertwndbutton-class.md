---
title: Classe CMFCDesktopAlertWndButton | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCDesktopAlertWndButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCaptionButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWndButton::IsCloseButton
dev_langs:
- C++
helpviewer_keywords:
- CMFCDesktopAlertWndButton [MFC], IsCaptionButton
- CMFCDesktopAlertWndButton [MFC], IsCloseButton
ms.assetid: df39a0c8-0c39-4ab0-8c64-78c5b2c4ecaf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: efabaabdcc3f08a58cb7dc0a7845a56e5238548d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33370334"
---
# <a name="cmfcdesktopalertwndbutton-class"></a>Classe CMFCDesktopAlertWndButton
Consente i pulsanti da aggiungere a una finestra di dialogo Avviso desktop.  
  
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
|nome|Descrizione|  
|`CMFCDesktopAlertWndButton::m_bIsCaptionButton`|Valore booleano che specifica se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo avviso.|  
|`CMFCDesktopAlertWndButton::m_bIsCloseButton`|Valore booleano che specifica se il pulsante consente di chiudere la finestra di dialogo avviso.|  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il costruttore imposta la `m_bIsCaptionButton` e `m_bIsCloseButton` i membri dati `FALSE`. L'elemento padre `CMFCDesktopAlertDialog` set di oggetti `m_bIsCaptionButton` per `TRUE` se il pulsante è posizionato nell'area della didascalia della finestra di dialogo avviso. Il `CMFCDesktopAlertDialog` classe crea un `CMFCDesktopAlertWndButton` oggetto che funge da pulsante che consente di chiudere la finestra di dialogo Avviso casella e imposta `m_bIsCloseButton` a `TRUE`.  
  
 Aggiungere `CMFCDesktopAlertWndButton` oggetti in un `CMFCDesktopAlertDialog` come aggiungere un pulsante dell'oggetto. Per ulteriori informazioni su `CMFCDesktopAlertDialog`, vedere [CMFCDesktopAlertDialog classe](../../mfc/reference/cmfcdesktopalertdialog-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetImage` metodo la `CMFCDesktopAlertWndButton` classe. Questo frammento di codice fa parte di [esempio dimostrativo avviso Desktop](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#4](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_1.h)]  
[!code-cpp[NVC_MFC_DesktopAlertDemo#5](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndbutton-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
 [CMFCDesktopAlertWndButton](../../mfc/reference/cmfcdesktopalertwndbutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdesktopalertwnd.h  
  
##  <a name="iscaptionbutton"></a>  CMFCDesktopAlertWndButton::IsCaptionButton  
 Determina se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo avviso.  
  
```  
BOOL IsCaptionButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante viene visualizzato nell'area della didascalia della finestra di dialogo Avviso; in caso contrario, 0.  
  
##  <a name="isclosebutton"></a>  CMFCDesktopAlertWndButton::IsCloseButton  
 Determina se il pulsante consente di chiudere la finestra di dialogo avviso.  
  
```  
BOOL IsCloseButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante chiude la finestra di dialogo Avviso; in caso contrario, 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)
