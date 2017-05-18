---
title: Classe CMFCSpinButtonCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCSpinButtonCtrl
- AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl
- AFXSPINBUTTONCTRL/CMFCSpinButtonCtrl::OnDraw
dev_langs:
- C++
helpviewer_keywords:
- CMFCSpinButtonCtrl class
ms.assetid: 8773f259-4d3f-4bca-a71c-09e0c71bc843
caps.latest.revision: 25
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: c1832062461f2ed53df07a72428089179ed493ab
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcspinbuttonctrl-class"></a>Classe CMFCSpinButtonCtrl
La `CMFCSpinButtonCtrl` classe supporta un gestore visualizzazione che disegna un controllo pulsante di selezione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCSpinButtonCtrl : public CSpinButtonCtrl  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCSpinButtonCtrl::CMFCSpinButtonCtrl`|Costruttore predefinito.|  
|`CMFCSpinButtonCtrl::~CMFCSpinButtonCtrl`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCSpinButtonCtrl::OnDraw](#ondraw)|Ridisegna il controllo pulsante di selezione corrente.|  
  
## <a name="remarks"></a>Note  
 Per utilizzare un gestore visualizzazione per disegnare un controllo pulsante di selezione nell'applicazione, sostituire tutte le istanze di `CSpinButtonCtrl` classe con la `CMFCSpinButtonCtrl` classe.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come creare un oggetto di `CMFCSpinButtonCtrl` classe e utilizzare il relativo `Create` metodo.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#25;](../../mfc/reference/codesnippet/cpp/cmfcspinbuttonctrl-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CSpinButtonCtrl](../../mfc/reference/cspinbuttonctrl-class.md)  
  
 [CMFCSpinButtonCtrl](../../mfc/reference/cmfcspinbuttonctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxspinbuttonctrl.h  
  
##  <a name="ondraw"></a>CMFCSpinButtonCtrl::OnDraw  
 Ridisegna il controllo pulsante di selezione corrente.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
 Il framework chiama la `CMFCSpinButtonCtrl::OnPaint` metodo per gestire il [CWnd::OnPaint](../../mfc/reference/cwnd-class.md#onpaint) messaggio e che metodo chiama a sua volta ciò `CMFCSpinButtonCtrl::OnDraw` metodo. Eseguire l'override di questo metodo per personalizzare il modo in cui che il framework crea il controllo pulsante di selezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)

