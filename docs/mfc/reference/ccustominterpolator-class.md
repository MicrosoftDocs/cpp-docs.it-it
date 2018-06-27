---
title: Classe CCustomInterpolator | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CCustomInterpolator
- AFXANIMATIONCONTROLLER/CCustomInterpolator
- AFXANIMATIONCONTROLLER/CCustomInterpolator::CCustomInterpolator
- AFXANIMATIONCONTROLLER/CCustomInterpolator::GetDependencies
- AFXANIMATIONCONTROLLER/CCustomInterpolator::GetDuration
- AFXANIMATIONCONTROLLER/CCustomInterpolator::GetFinalValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::Init
- AFXANIMATIONCONTROLLER/CCustomInterpolator::InterpolateValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::InterpolateVelocity
- AFXANIMATIONCONTROLLER/CCustomInterpolator::SetDuration
- AFXANIMATIONCONTROLLER/CCustomInterpolator::SetInitialValueAndVelocity
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_currentValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_currentVelocity
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_duration
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_finalValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_initialValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_initialVelocity
dev_langs:
- C++
helpviewer_keywords:
- CCustomInterpolator [MFC], CCustomInterpolator
- CCustomInterpolator [MFC], GetDependencies
- CCustomInterpolator [MFC], GetDuration
- CCustomInterpolator [MFC], GetFinalValue
- CCustomInterpolator [MFC], Init
- CCustomInterpolator [MFC], InterpolateValue
- CCustomInterpolator [MFC], InterpolateVelocity
- CCustomInterpolator [MFC], SetDuration
- CCustomInterpolator [MFC], SetInitialValueAndVelocity
- CCustomInterpolator [MFC], m_currentValue
- CCustomInterpolator [MFC], m_currentVelocity
- CCustomInterpolator [MFC], m_duration
- CCustomInterpolator [MFC], m_finalValue
- CCustomInterpolator [MFC], m_initialValue
- CCustomInterpolator [MFC], m_initialVelocity
ms.assetid: 28d85595-989a-40a3-b003-e0e38437a94d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f7ab45ad47ad0120fa4e04937e180841bdb5f981
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955089"
---
# <a name="ccustominterpolator-class"></a>Classe CCustomInterpolator
Implementa un interpolatore di base.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CCustomInterpolator;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomInterpolator::CCustomInterpolator](#ccustominterpolator)|Di overload. Costruisce un oggetto interpolatore personalizzato e Inizializza durata e la velocità ai valori specificati.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomInterpolator::GetDependencies](#getdependencies)|Ottiene le dipendenze dell'interpolatore.|  
|[CCustomInterpolator::GetDuration](#getduration)|Ottiene la durata dell'interpolatore.|  
|[CCustomInterpolator::GetFinalValue](#getfinalvalue)|Ottiene il valore finale a cui punta l'interpolatore.|  
|[CCustomInterpolator:: Init](#init)|Inizializza durata e il valore finale.|  
|[CCustomInterpolator::InterpolateValue](#interpolatevalue)|Crea un'interpolazione il valore a un offset specificato.|  
|[CCustomInterpolator::InterpolateVelocity](#interpolatevelocity)|Crea un'interpolazione la velocità a un offset specificato|  
|[CCustomInterpolator::SetDuration](#setduration)|Imposta la durata dell'interpolatore.|  
|[CCustomInterpolator::SetInitialValueAndVelocity](#setinitialvalueandvelocity)|Imposta valore iniziale dell'interpolatore e velocità.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CCustomInterpolator::m_currentValue](#m_currentvalue)|Il valore interpolato.|  
|[CCustomInterpolator::m_currentVelocity](#m_currentvelocity)|La velocità interpolata.|  
|[CCustomInterpolator::m_duration](#m_duration)|La durata della transizione.|  
|[CCustomInterpolator::m_finalValue](#m_finalvalue)|Il valore finale di una variabile alla fine della transizione.|  
|[CCustomInterpolator::m_initialValue](#m_initialvalue)|Il valore della variabile all'inizio della transizione.|  
|[CCustomInterpolator::m_initialVelocity](#m_initialvelocity)|La velocità della variabile all'inizio della transizione.|  
  
## <a name="remarks"></a>Note  
 Derivare una classe CCustomInterpolator ed eseguire l'override di tutti i metodi necessari per implementare un algoritmo di interpolazione personalizzata. Un puntatore a questa classe deve essere passato come parametro a CCustomTransition.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CCustomInterpolator`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="ccustominterpolator"></a>  CCustomInterpolator::CCustomInterpolator  
 Costruisce un oggetto interpolatore personalizzato e imposta tutti i valori per impostazione predefinita è 0.  
  
```  
CCustomInterpolator();

 
CCustomInterpolator(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue);
```  
  
### <a name="parameters"></a>Parametri  
 *Durata*  
 La durata della transizione.  
  
 *finalValue*  
  
### <a name="remarks"></a>Note  
 Per inizializzare la durata e il valore finale in un secondo momento nel codice, utilizzare CCustomInterpolator:: Init.  
  
##  <a name="getdependencies"></a>  CCustomInterpolator::GetDependencies  
 Ottiene le dipendenze dell'interpolatore.  
  
```  
virtual BOOL GetDependencies(
    UI_ANIMATION_DEPENDENCIES* initialValueDependencies,  
    UI_ANIMATION_DEPENDENCIES* initialVelocityDependencies,  
    UI_ANIMATION_DEPENDENCIES* durationDependencies);
```  
  
### <a name="parameters"></a>Parametri  
 *initialValueDependencies*  
 Output. Gli aspetti dell'interpolatore che dipendono dal valore iniziale passato a SetInitialValueAndVelocity.  
  
 *initialVelocityDependencies*  
 Output. Gli aspetti dell'interpolatore che variano in base alla velocità iniziale passato a SetInitialValueAndVelocity.  
  
 *durationDependencies*  
 Output. Gli aspetti dell'interpolatore che dipendono dalla durata passati a SetDuration.  
  
### <a name="return-value"></a>Valore restituito  
 Base implementazione restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera avere esito negativo dell'evento.  
  
##  <a name="getduration"></a>  CCustomInterpolator::GetDuration  
 Ottiene la durata dell'interpolatore.  
  
```  
virtual BOOL GetDuration(UI_ANIMATION_SECONDS* duration);
```  
  
### <a name="parameters"></a>Parametri  
 *Durata*  
 Output. La durata della transizione, in secondi.  
  
### <a name="return-value"></a>Valore restituito  
 Base implementazione restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera avere esito negativo dell'evento.  
  
##  <a name="getfinalvalue"></a>  CCustomInterpolator::GetFinalValue  
 Ottiene il valore finale a cui punta l'interpolatore.  
  
```  
virtual BOOL GetFinalValue(DOUBLE* value);
```  
  
### <a name="parameters"></a>Parametri  
 *valore*  
 Output. Il valore finale di una variabile alla fine della transizione.  
  
### <a name="return-value"></a>Valore restituito  
 Base implementazione restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera avere esito negativo dell'evento.  
  
##  <a name="init"></a>  CCustomInterpolator:: Init  
 Inizializza durata e il valore finale.  
  
```  
void Init(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue);
```  
  
### <a name="parameters"></a>Parametri  
 *Durata*  
 La durata della transizione.  
  
 *finalValue*  
 Il valore finale di una variabile alla fine della transizione.  
  
##  <a name="interpolatevalue"></a>  CCustomInterpolator::InterpolateValue  
 Crea un'interpolazione il valore a un offset specificato.  
  
```  
virtual BOOL InterpolateValue(
    UI_ANIMATION_SECONDS */,  
    DOUBLE* value);
```  
  
### <a name="parameters"></a>Parametri  
 *valore*  
 Output. Il valore interpolato.  
  
### <a name="return-value"></a>Valore restituito  
 Base implementazione restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera avere esito negativo dell'evento.  
  
##  <a name="interpolatevelocity"></a>  CCustomInterpolator::InterpolateVelocity  
 Crea un'interpolazione la velocità a un offset specificato  
  
```  
virtual BOOL InterpolateVelocity(
    UI_ANIMATION_SECONDS */,  
    DOUBLE* velocity);
```  
  
### <a name="parameters"></a>Parametri  
 *velocità*  
 Output. La velocità della variabile in corrispondenza dell'offset.  
  
### <a name="return-value"></a>Valore restituito  
 Base implementazione restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera avere esito negativo dell'evento.  
  
##  <a name="m_currentvalue"></a>  CCustomInterpolator::m_currentValue  
 Il valore interpolato.  
  
```  
DOUBLE m_currentValue;  
```  
  
##  <a name="m_currentvelocity"></a>  CCustomInterpolator::m_currentVelocity  
 La velocità interpolata.  
  
```  
DOUBLE m_currentVelocity;  
```  
  
##  <a name="m_duration"></a>  CCustomInterpolator::m_duration  
 La durata della transizione.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
##  <a name="m_finalvalue"></a>  CCustomInterpolator::m_finalValue  
 Il valore finale di una variabile alla fine della transizione.  
  
```  
DOUBLE m_finalValue;  
```  
  
##  <a name="m_initialvalue"></a>  CCustomInterpolator::m_initialValue  
 Il valore della variabile all'inizio della transizione.  
  
```  
DOUBLE m_initialValue;  
```  
  
##  <a name="m_initialvelocity"></a>  CCustomInterpolator::m_initialVelocity  
 La velocità della variabile all'inizio della transizione.  
  
```  
DOUBLE m_initialVelocity;  
```  
  
##  <a name="setduration"></a>  CCustomInterpolator::SetDuration  
 Imposta la durata dell'interpolatore.  
  
```  
virtual BOOL SetDuration(UI_ANIMATION_SECONDS duration);
```  
  
### <a name="parameters"></a>Parametri  
 *Durata*  
 La durata della transizione.  
  
### <a name="return-value"></a>Valore restituito  
 Base implementazione restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera avere esito negativo dell'evento.  
  
##  <a name="setinitialvalueandvelocity"></a>  CCustomInterpolator::SetInitialValueAndVelocity  
 Imposta valore iniziale dell'interpolatore e velocità.  
  
```  
virtual BOOL SetInitialValueAndVelocity(
    DOUBLE initialValue,  
    DOUBLE initialVelocity);
```  
  
### <a name="parameters"></a>Parametri  
 *initialValue*  
 Il valore della variabile all'inizio della transizione.  
  
 *initialVelocity*  
 La velocità della variabile all'inizio della transizione.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione di base sempre restituisce TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera avere esito negativo dell'evento.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
