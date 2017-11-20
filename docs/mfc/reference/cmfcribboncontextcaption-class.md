---
title: Classe CMFCRibbonContextCaption | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonContextCaption
- AFXRIBBONBAR/CMFCRibbonContextCaption
- AFXRIBBONBAR/CMFCRibbonContextCaption::GetColor
- AFXRIBBONBAR/CMFCRibbonContextCaption::GetRightTabX
dev_langs: C++
helpviewer_keywords:
- CMFCRibbonContextCaption [MFC], GetColor
- CMFCRibbonContextCaption [MFC], GetRightTabX
ms.assetid: cce2c0a2-8370-4266-997e-f8d0eeb3d616
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 13cbb778d5001a301c1ab5fd147b2386654ce16e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|`CMFCRibbonContextCaption::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
  
## <a name="remarks"></a>Note  
 Non è possibile creare direttamente istanze di questa classe. Il [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md) Usa questa classe internamente per aggiungere colore alle categorie della barra multifunzione.  
  
 Per impostare il colore per le categorie della barra multifunzione, chiamare [CMFCRibbonCategory:: Settabcolor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor). Per impostare il colore per le categorie di contesto, chiamare [CMFCRibbonBar:: Addcontextcategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonContextCaption](../../mfc/reference/cmfcribboncontextcaption-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonbar. H  
  
##  <a name="getcolor"></a>CMFCRibbonContextCaption::GetColor  
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
 Il colore della didascalia può essere impostato chiamando [CMFCRibbonCategory:: Settabcolor](../../mfc/reference/cmfcribboncategory-class.md#settabcolor) o [CMFCRibbonBar:: Addcontextcategory](../../mfc/reference/cmfcribbonbar-class.md#addcontextcategory).  
  
##  <a name="getrighttabx"></a>CMFCRibbonContextCaption::GetRightTabX  
 Recupera la posizione del bordo destro della scheda della barra multifunzione della categoria.  
  
```  
int GetRightTabX() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore X destro del rettangolo di inclusione di `CMFCRibbonCategory` scheda della barra multifunzione dell'oggetto o un valore di -1 se la scheda viene troncata.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)   
 [Classe CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md)   
 [Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
