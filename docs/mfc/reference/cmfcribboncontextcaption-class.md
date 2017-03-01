---
title: Classe CMFCRibbonContextCaption | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonContextCaption
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonContextCaption class
ms.assetid: cce2c0a2-8370-4266-997e-f8d0eeb3d616
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 54f71af5ec46a8ddac4459e9ffdbc5b10f3106d4
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribboncontextcaption-class"></a>Classe CMFCRibbonContextCaption
Implementa una didascalia a colori visualizzata all'inizio di una categoria della barra multifunzione o di una categoria contesto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonContextCaption : public CMFCRibbonButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonContextCaption::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCRibbonContextCaption::GetColor](#getcolor)|Restituisce il colore della didascalia.|  
|[CMFCRibbonContextCaption::GetRightTabX](#getrighttabx)||  
|`CMFCRibbonContextCaption::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
  
## <a name="remarks"></a>Note  
 Non è possibile creare direttamente istanze di questa classe. Il [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md) classe utilizza questa classe internamente per aggiungere colore alle categorie della barra multifunzione.  
  
 Per impostare il colore per le categorie della barra multifunzione, chiamare [CMFCRibbonCategory::SetTabColor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor). Per impostare il colore per le categorie di contesto, chiamare [CMFCRibbonBar::AddContextCategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonContextCaption](../../mfc/reference/cmfcribboncontextcaption-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonbar. H  
  
##  <a name="a-namegetcolora--cmfcribboncontextcaptiongetcolor"></a><a name="getcolor"></a>CMFCRibbonContextCaption::GetColor  
 Restituisce il colore di sfondo della didascalia.  
  
```  
AFX_RibbonCategoryColor GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito può essere uno dei seguenti valori enumerati:  
  
- `AFX_CategoryColor_None`  
  
- `AFX_CategoryColor_Red`  
  
- `AFX_CategoryColor_Orange`  
  
- `AFX_CategoryColor_Yellow`  
  
- `AFX_CategoryColor_Green`  
  
- `AFX_CategoryColor_Blue`  
  
- `AFX_CategoryColor_Indigo`  
  
- `AFX_CategoryColor_Violet`  
  
### <a name="remarks"></a>Note  
 Il colore della didascalia può essere impostato chiamando [CMFCRibbonCategory::SetTabColor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor) o [CMFCRibbonBar::AddContextCategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).  
  
##  <a name="a-namegetrighttabxa--cmfcribboncontextcaptiongetrighttabx"></a><a name="getrighttabx"></a>CMFCRibbonContextCaption::GetRightTabX  
 Recupera la posizione del bordo destro della scheda della barra multifunzione della categoria.  
  
```  
int GetRightTabX() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore X destro del rettangolo che contiene il `CMFCRibbonCategory` scheda della barra multifunzione dell'oggetto o un valore di -1 se la scheda viene troncata.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)   
 [Classe CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md)   
 [Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)

