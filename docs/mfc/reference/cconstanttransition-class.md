---
title: Classe CConstantTransition | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CConstantTransition
- AFXANIMATIONCONTROLLER/CConstantTransition
- AFXANIMATIONCONTROLLER/CConstantTransition::CConstantTransition
- AFXANIMATIONCONTROLLER/CConstantTransition::Create
- AFXANIMATIONCONTROLLER/CConstantTransition::m_duration
dev_langs:
- C++
helpviewer_keywords:
- CConstantTransition [MFC], CConstantTransition
- CConstantTransition [MFC], Create
- CConstantTransition [MFC], m_duration
ms.assetid: f6fa4780-a71b-4cd6-80aa-d4792ace36c2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dc7e4104e6555ada88483336917708db943be2a0
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43210579"
---
# <a name="cconstanttransition-class"></a>Classe CConstantTransition
Incapsula una transizione costante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CConstantTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CConstantTransition::CConstantTransition](#cconstanttransition)|Costruisce un oggetto di transizione e inizializza la sua durata.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CConstantTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CConstantTransition::m_duration](#m_duration)|La durata della transizione.|  
  
## <a name="remarks"></a>Note  
 Durante una transizione costante, il valore di una variabile di animazione rimane in corrispondenza del valore iniziale per la durata della transizione. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocata li utilizzando l'operatore new. L'oggetto incapsulato IUIAnimationTransition COM viene creato da CAnimationController:: AnimateGroup, finché non è NULL. Per modificare le variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 `CConstantTransition`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="cconstanttransition"></a>  CConstantTransition::CConstantTransition  
 Costruisce un oggetto di transizione e inizializza la sua durata.  
  
```  
CConstantTransition (UI_ANIMATION_SECONDS duration);
```  
  
### <a name="parameters"></a>Parametri  
 *Durata*  
 La durata della transizione.  
  
##  <a name="create"></a>  CConstantTransition::Create  
 Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
### <a name="parameters"></a>Parametri  
 *pLibrary*  
 Un puntatore a un [IUIAnimationTransitionLibrary interfaccia](/windows/desktop/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), che definisce una raccolta di transizioni standard.  

### <a name="return-value"></a>Valore restituito  
 TRUE se transizione viene creata correttamente. in caso contrario, FALSE.  
  
##  <a name="m_duration"></a>  CConstantTransition::m_duration  
 La durata della transizione.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
