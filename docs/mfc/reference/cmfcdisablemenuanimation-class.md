---
title: Classe CMFCDisableMenuAnimation | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation::Restore
dev_langs: C++
helpviewer_keywords: CMFCDisableMenuAnimation [MFC], Restore
ms.assetid: c6eb07da-c382-43d6-8028-007f2320e50e
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 458a35e708db41ee393da70aedd653aca44cf802
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|nome|Descrizione|  
|`CMFCDisableMenuAnimation::m_animType`|Archivia il tipo di animazione menu a comparsa precedente.|  
  
### <a name="remarks"></a>Note  
 Utilizzare questa classe helper per disabilitare temporaneamente l'animazione del menu popup (ad esempio, quando si elabora i comandi di mouse o tastiera).  
  
 Oggetto `CMFCDisableMenuAnimation` oggetto disabilita l'animazione di menu a comparsa durante la relativa durata. Il costruttore archivia il tipo di animazione popup di menu corrente nel `m_animType` campo e imposta il tipo di animazione corrente per `CMFCPopupMenu::NO_ANIMATION`. Il distruttore Ripristina il tipo di animazione precedente.  
  
 È possibile creare un `CMFCDisableMenuAnimation` oggetto nello stack per disabilitare l'animazione del menu a comparsa durante una singola funzione. Se si desidera disabilitare l'animazione del menu popup tra le funzioni, creare un `CMFCDisableMenuAnimation` dell'oggetto nell'heap e quindi eliminarlo quando si desidera ripristinare l'animazione del menu a comparsa.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come usare lo stack per disabilitare temporaneamente l'animazione del menu.  
  
 [!code-cpp[NVC_MFC_Misc#1](../../mfc/reference/codesnippet/cpp/cmfcdisablemenuanimation-class_1.h)]  
  
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
