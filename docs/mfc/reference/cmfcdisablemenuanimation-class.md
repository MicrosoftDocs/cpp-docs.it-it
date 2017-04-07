---
title: Classe CMFCDisableMenuAnimation | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation::Restore
dev_langs:
- C++
helpviewer_keywords:
- CMFCDisableMenuAnimation class
ms.assetid: c6eb07da-c382-43d6-8028-007f2320e50e
caps.latest.revision: 22
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: ea0be944ca70d6f8317fd4bc60fdd50ecc714438
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcdisablemenuanimation-class"></a>Classe CMFCDisableMenuAnimation
Disabilita l'animazione del menu a comparsa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCDisableMenuAnimation  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCDisableMenuAnimation::CMFCDisableMenuAnimation`|Costruisce un oggetto `CMFCDisableMenuAnimation`.|  
|`CMFCDisableMenuAnimation::~CMFCDisableMenuAnimation`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCDisableMenuAnimation::Restore](#restore)|Ripristina l'animazione precedente che il framework utilizzato per visualizzare un menu a comparsa.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCDisableMenuAnimation::m_animType`|Archivia il tipo di animazione menu a comparsa precedente.|  
  
### <a name="remarks"></a>Note  
 Utilizzare la classe helper per disabilitare temporaneamente l'animazione del menu a comparsa (ad esempio, quando si elaborano i comandi del mouse o tastiera).  
  
 Oggetto `CMFCDisableMenuAnimation` oggetto Disabilita animazione del menu a comparsa durante la relativa durata. Il costruttore archivia il tipo di animazione corrente dal menu a comparsa nel `m_animType` campo e imposta il tipo di animazione corrente per `CMFCPopupMenu::NO_ANIMATION`. Il distruttore Ripristina il tipo di animazione precedente.  
  
 È possibile creare un `CMFCDisableMenuAnimation` oggetto nello stack per disattivare l'animazione del menu a comparsa in una singola funzione. Se si desidera disabilitare l'animazione dei menu di scelta rapida tra le funzioni, creare un `CMFCDisableMenuAnimation` dell'oggetto nell'heap e quindi eliminarlo quando si desidera ripristinare l'animazione del menu a comparsa.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare lo stack per disabilitare temporaneamente l'animazione dei menu.  
  
 [!code-cpp[NVC_MFC_Misc n.&1;](../../mfc/reference/codesnippet/cpp/cmfcdisablemenuanimation-class_1.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMFCDisableMenuAnimation](../../mfc/reference/cmfcdisablemenuanimation-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpopupmenu.h  
  
##  <a name="restore"></a>CMFCDisableMenuAnimation::Restore  
 Ripristina l'animazione precedente che il framework utilizzato per visualizzare un menu a comparsa.  
  
```  
void Restore ();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal `CMFCDisableMenuAnimation` distruttore per ripristinare l'animazione precedente che il framework utilizzato per visualizzare un menu a comparsa.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)

