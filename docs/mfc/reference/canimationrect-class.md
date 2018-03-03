---
title: Classe CAnimationRect | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimationRect
- AFXANIMATIONCONTROLLER/CAnimationRect
- AFXANIMATIONCONTROLLER/CAnimationRect::CAnimationRect
- AFXANIMATIONCONTROLLER/CAnimationRect::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationRect::GetBottom
- AFXANIMATIONCONTROLLER/CAnimationRect::GetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationRect::GetLeft
- AFXANIMATIONCONTROLLER/CAnimationRect::GetRight
- AFXANIMATIONCONTROLLER/CAnimationRect::GetTop
- AFXANIMATIONCONTROLLER/CAnimationRect::GetValue
- AFXANIMATIONCONTROLLER/CAnimationRect::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationRect::GetAnimationVariableList
- AFXANIMATIONCONTROLLER/CAnimationRect::m_bFixedSize
- AFXANIMATIONCONTROLLER/CAnimationRect::m_bottomValue
- AFXANIMATIONCONTROLLER/CAnimationRect::m_leftValue
- AFXANIMATIONCONTROLLER/CAnimationRect::m_rightValue
- AFXANIMATIONCONTROLLER/CAnimationRect::m_szInitial
- AFXANIMATIONCONTROLLER/CAnimationRect::m_topValue
dev_langs:
- C++
helpviewer_keywords:
- CAnimationRect [MFC], CAnimationRect
- CAnimationRect [MFC], AddTransition
- CAnimationRect [MFC], GetBottom
- CAnimationRect [MFC], GetDefaultValue
- CAnimationRect [MFC], GetLeft
- CAnimationRect [MFC], GetRight
- CAnimationRect [MFC], GetTop
- CAnimationRect [MFC], GetValue
- CAnimationRect [MFC], SetDefaultValue
- CAnimationRect [MFC], GetAnimationVariableList
- CAnimationRect [MFC], m_bFixedSize
- CAnimationRect [MFC], m_bottomValue
- CAnimationRect [MFC], m_leftValue
- CAnimationRect [MFC], m_rightValue
- CAnimationRect [MFC], m_szInitial
- CAnimationRect [MFC], m_topValue
ms.assetid: 0294156d-241e-4a57-92b2-31234fe557d6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b38b1225dbce3f747efeaa7aa1e5384f7931efe0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="canimationrect-class"></a>Classe CAnimationRect
Implementa la funzionalità di un rettangolo i cui lati possono essere animati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationRect : public CAnimationBaseObject;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::CAnimationRect](#canimationrect)|Di overload. Costruisce un oggetto rect di animazione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::AddTransition](#addtransition)|Aggiunge le transizioni per coordinate sinistro, superiore, destro e inferiore.|  
|[CAnimationRect::GetBottom](#getbottom)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata inferiore.|  
|[CAnimationRect::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per i limiti del rettangolo.|  
|[CAnimationRect::GetLeft](#getleft)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata sinistra.|  
|[CAnimationRect::GetRight](#getright)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata destra.|  
|[CAnimationRect::GetTop](#gettop)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata superiore.|  
|[CAnimationRect::GetValue](#getvalue)|Restituisce il valore corrente.|  
|[CAnimationRect::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili dell'animazione incapsulata in un elenco. (Esegue l'override [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::operator RECT](#operator_rect)|Converte un CAnimationRect Rect.|  
|[CAnimationRect::operator =](#operator_eq)|Assegna rect a CAnimationRect.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::m_bFixedSize](#m_bfixedsize)|Specifica se il rettangolo ha dimensioni fisse.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::m_bottomValue](#m_bottomvalue)|La variabile di animazione incapsulata che rappresenta inferiore associato del rettangolo di animazione.|  
|[CAnimationRect::m_leftValue](#m_leftvalue)|La variabile di animazione incapsulata che rappresenta a sinistra il limite del rettangolo di animazione.|  
|[CAnimationRect::m_rightValue](#m_rightvalue)|La variabile di animazione incapsulata che rappresenta diritto associato del rettangolo di animazione.|  
|[CAnimationRect::m_szInitial](#m_szinitial)|Specifica le dimensioni iniziali del rettangolo di animazione.|  
|[CAnimationRect::m_topValue](#m_topvalue)|La variabile di animazione incapsulata che rappresenta l'inizio il limite del rettangolo di animazione.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationRect incapsula quattro oggetti CAnimationVariable e può rappresentare nelle applicazioni di un rettangolo. Per utilizzare questa classe nell'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare alle coordinate superiore e inferiore sinistra, destro.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 `CAnimationRect`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="addtransition"></a>CAnimationRect::AddTransition  
 Aggiunge le transizioni per coordinate sinistro, superiore, destro e inferiore.  
  
```  
void AddTransition(
    CBaseTransition* pLeftTransition,  
    CBaseTransition* pTopTransition,  
    CBaseTransition* pRightTransition,  
    CBaseTransition* pBottomTransition);
```  
  
### <a name="parameters"></a>Parametri  
 `pLeftTransition`  
 Specifica la transizione per il lato sinistro.  
  
 `pTopTransition`  
 Specifica la transizione per il lato superiore.  
  
 `pRightTransition`  
 Specifica la transizione per il lato destro.  
  
 `pBottomTransition`  
 Specifica la transizione per il lato inferiore.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno di transizioni da applicare alle variabili di animazione per i lati del rettangolo. Quando si aggiungono le transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta di uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a uno dei lati del rettangolo, è possibile passare NULL.  
  
##  <a name="canimationrect"></a>CAnimationRect::CAnimationRect  
 Costruisce un oggetto CAnimationRect.  
  
```  
CAnimationRect();

 
CAnimationRect(
    const CRect& rect,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);

 
CAnimationRect(
    const CPoint& pt,  
    const CSize& sz,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);

 
CAnimationRect(
    int nLeft,  
    int nTop,  
    int nRight,  
    int nBottom,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Specifica il rettangolo predefinito.  
  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
 `nObjectID`  
 Specifica l'ID dell'oggetto.  
  
 `dwUserData`  
 Specifica i dati definiti dall'utente.  
  
 `pt`  
 Coordinate dell'angolo superiore sinistro.  
  
 `sz`  
 Dimensioni del rettangolo.  
  
 `nLeft`  
 Specifica la coordinata del limite sinistro.  
  
 `nTop`  
 Specifica la coordinata del limite superiore.  
  
 `nRight`  
 Specifica la coordinata del limite destro.  
  
 `nBottom`  
 Specifica la coordinata del limite inferiore.  
  
### <a name="remarks"></a>Note  
 L'oggetto viene costruito con i valori predefiniti per sinistro, superiore, destro e inferiore, ID di oggetto e l'ID gruppo, che verrà impostato su 0. Possono essere modificate in un secondo momento in fase di esecuzione utilizzando SetDefaultValue e SetID.  
  
##  <a name="getanimationvariablelist"></a>CAnimationRect::GetAnimationVariableList  
 Inserisce le variabili dell'animazione incapsulata in un elenco.  
  
```  
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*, 
    CAnimationVariable*>& lst);
```  
  
### <a name="parameters"></a>Parametri  
 `lst`  
 Quando la funzione viene restituito, contiene i puntatori a quattro oggetti CAnimationVariable che rappresenta le coordinate del rettangolo.  
  
##  <a name="getbottom"></a>CAnimationRect::GetBottom  
 Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata inferiore.  
  
```  
CAnimationVariable& GetBottom();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta la coordinata inferiore.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere accesso diretto alla CAnimationVariable che rappresenta la coordinata inferiore.  
  
##  <a name="getdefaultvalue"></a>CAnimationRect::GetDefaultValue  
 Restituisce i valori predefiniti per i limiti del rettangolo.  
  
```  
CRect GetDefaultValue();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore CRect con valori predefiniti per sinistro, destro, superiore e inferiore.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore predefinito, che è stato impostato in precedenza dal costruttore o SetDefaultValue.  
  
##  <a name="getleft"></a>CAnimationRect::GetLeft  
 Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata sinistra.  
  
```  
CAnimationVariable& GetLeft();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta la coordinata sinistra.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere accesso diretto alla CAnimationVariable che rappresenta la coordinata sinistra.  
  
##  <a name="getright"></a>CAnimationRect::GetRight  
 Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata destra.  
  
```  
CAnimationVariable& GetRight();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta la coordinata destra.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere accesso diretto alla CAnimationVariable che rappresenta la coordinata destra.  
  
##  <a name="gettop"></a>CAnimationRect::GetTop  
 Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata superiore.  
  
```  
CAnimationVariable& GetTop();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta la coordinata superiore.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere accesso diretto alla CAnimationVariable che rappresenta la coordinata superiore.  
  
##  <a name="getvalue"></a>CAnimationRect::GetValue  
 Restituisce il valore corrente.  
  
```  
BOOL GetValue(CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Output. Quando questo metodo viene restituito, contiene il valore corrente.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il valore corrente è stato recuperato correttamente. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore corrente del rettangolo di animazione. Se questo metodo ha esito negativo o sottostante gli oggetti COM per i margini sinistro, superiore, destro e inferiore non sono stati inizializzati, rect contiene il valore predefinito, che è stata precedentemente impostato nel costruttore o da SetDefaultValue.  
  
##  <a name="m_bfixedsize"></a>CAnimationRect::m_bFixedSize  
 Specifica se il rettangolo ha dimensioni fisse.  
  
```  
BOOL m_bFixedSize;  
```  
  
### <a name="remarks"></a>Note  
 Se questo membro è true, le dimensioni del rettangolo sono fissa e a destra e gli ultimi valori vengono ricalcolati ogni volta che viene spostato nell'angolo superiore sinistro in base alle dimensioni fisse. Impostare questo valore su TRUE per spostare facilmente il rettangolo sullo schermo. In questo caso vengono ignorate le transizioni applicate alle coordinate inferiore e destro. Le dimensioni vengono archiviate internamente quando si crea l'oggetto e/o chiama SetDefaultValue. Per impostazione predefinita, questo membro è impostato su FALSE.  
  
##  <a name="m_bottomvalue"></a>CAnimationRect::m_bottomValue  
 La variabile di animazione incapsulata che rappresenta inferiore associato del rettangolo di animazione.  
  
```  
CAnimationVariable m_bottomValue;  
```  
  
##  <a name="m_leftvalue"></a>CAnimationRect::m_leftValue  
 La variabile di animazione incapsulata che rappresenta a sinistra il limite del rettangolo di animazione.  
  
```  
CAnimationVariable m_leftValue;  
```  
  
##  <a name="m_rightvalue"></a>CAnimationRect::m_rightValue  
 La variabile di animazione incapsulata che rappresenta diritto associato del rettangolo di animazione.  
  
```  
CAnimationVariable m_rightValue;  
```  
  
##  <a name="m_szinitial"></a>CAnimationRect::m_szInitial  
 Specifica le dimensioni iniziali del rettangolo di animazione.  
  
```  
CSize m_szInitial;  
```  
  
##  <a name="m_topvalue"></a>CAnimationRect::m_topValue  
 La variabile di animazione incapsulata che rappresenta l'inizio il limite del rettangolo di animazione.  
  
```  
CAnimationVariable m_topValue;  
```  
  
##  <a name="operator_rect"></a>CAnimationRect::operator RECT  
 Converte un CAnimationRect Rect.  
  
```  
operator RECT();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente del rettangolo di animazione come Rect.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama internamente GetValue. Se GetValue per qualche motivo non riesce, il rettangolo restituito conterrà i valori predefiniti per tutte le coordinate del rettangolo.  
  
##  <a name="operator_eq"></a>CAnimationRect::operator =  
 Assegna rect a CAnimationRect.  
  
```  
void operator=(const RECT& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Il nuovo valore del rettangolo di animazione.  
  
### <a name="remarks"></a>Note  
 Si consiglia di eseguire tale operazione prima dell'inizio dell'animazione perché questo operatore chiama SetDefaultValue che ricrea gli oggetti COM sottostanti per i componenti di colore, se sono state create. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
##  <a name="setdefaultvalue"></a>CAnimationRect::SetDefaultValue  
 Imposta il valore predefinito.  
  
```  
void SetDefaultValue(const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Specifica i nuovi valori predefiniti per sinistro, superiore, destro e inferiore.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna i valori predefiniti ai limiti del rettangolo. Ricrea anche gli oggetti COM sottostanti se sono stati creati. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
