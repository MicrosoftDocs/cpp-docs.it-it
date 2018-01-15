---
title: Classe CAnimationColor | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimationColor
- AFXANIMATIONCONTROLLER/CAnimationColor
- AFXANIMATIONCONTROLLER/CAnimationColor::CAnimationColor
- AFXANIMATIONCONTROLLER/CAnimationColor::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationColor::GetB
- AFXANIMATIONCONTROLLER/CAnimationColor::GetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationColor::GetG
- AFXANIMATIONCONTROLLER/CAnimationColor::GetR
- AFXANIMATIONCONTROLLER/CAnimationColor::GetValue
- AFXANIMATIONCONTROLLER/CAnimationColor::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationColor::GetAnimationVariableList
- AFXANIMATIONCONTROLLER/CAnimationColor::m_bValue
- AFXANIMATIONCONTROLLER/CAnimationColor::m_gValue
- AFXANIMATIONCONTROLLER/CAnimationColor::m_rValue
dev_langs: C++
helpviewer_keywords:
- CAnimationColor [MFC], CAnimationColor
- CAnimationColor [MFC], AddTransition
- CAnimationColor [MFC], GetB
- CAnimationColor [MFC], GetDefaultValue
- CAnimationColor [MFC], GetG
- CAnimationColor [MFC], GetR
- CAnimationColor [MFC], GetValue
- CAnimationColor [MFC], SetDefaultValue
- CAnimationColor [MFC], GetAnimationVariableList
- CAnimationColor [MFC], m_bValue
- CAnimationColor [MFC], m_gValue
- CAnimationColor [MFC], m_rValue
ms.assetid: 88bfabd4-efeb-4652-87e8-304253d8e48c
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dd6ec3b6d8ee6a37fbe189ff70a2a633cfda9c8a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="canimationcolor-class"></a>Classe CAnimationColor
Implementa la funzionalità di un colore i cui componenti rosso, verde e blu possono essere animati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationColor : public CAnimationBaseObject;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::CAnimationColor](#canimationcolor)|Di overload. Costruisce un oggetto di colore di animazione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::AddTransition](#addtransition)|Aggiunge le transizioni per i componenti rosso, verde e blu.|  
|[CAnimationColor::GetB](#getb)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente blu.|  
|[CAnimationColor::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per i componenti di colore.|  
|[CAnimationColor::GetG](#getg)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente verde.|  
|[CAnimationColor::GetR](#getr)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente rosso.|  
|[CAnimationColor::GetValue](#getvalue)|Restituisce il valore corrente.|  
|[CAnimationColor::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili dell'animazione incapsulata in un elenco. (Esegue l'override [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::operator COLORREF](#operator_colorref)||  
|[CAnimationColor::operator =](#operator_eq)|Assegna colore a CAnimationColor.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::m_bValue](#m_bvalue)|La variabile di animazione incapsulata che rappresenta il componente blu del colore di animazione.|  
|[CAnimationColor::m_gValue](#m_gvalue)|La variabile di animazione incapsulata che rappresenta il componente verde del colore di animazione.|  
|[CAnimationColor::m_rValue](#m_rvalue)|La variabile di animazione incapsulata che rappresenta il componente rosso del colore di animazione.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationColor incapsula tre oggetti CAnimationVariable e può rappresentare un colore nelle applicazioni. Ad esempio, è possibile utilizzare questa classe per animare i colori di qualsiasi oggetto sullo schermo (ad esempio il colore del testo, il colore di sfondo e così via). Per utilizzare questa classe nell'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare ai componenti rosso, verde e blu.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 `CAnimationColor`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="addtransition"></a>CAnimationColor::AddTransition  
 Aggiunge le transizioni per i componenti rosso, verde e blu.  
  
```  
void AddTransition(
    CBaseTransition* pRTransition,  
    CBaseTransition* pGTransition,  
    CBaseTransition* pBTransition);
```  
  
### <a name="parameters"></a>Parametri  
 `pRTransition`  
 Transizione per il componente rosso.  
  
 `pGTransition`  
 Transizione per il componente verde.  
  
 `pBTransition`  
 Transizione per il componente blu.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno di transizioni da applicare alle variabili di animazione che rappresentano i componenti di colore. Quando si aggiungono le transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta di uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a uno dei componenti di colore, è possibile passare NULL.  
  
##  <a name="canimationcolor"></a>CAnimationColor::CAnimationColor  
 Costruisce un oggetto CAnimationColor.  
  
```  
CAnimationColor();
 
CAnimationColor(
    COLORREF color,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Specifica il colore predefinito.  
  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
 `nObjectID`  
 Specifica l'ID dell'oggetto.  
  
 `dwUserData`  
 Specifica i dati definiti dall'utente.  
  
### <a name="remarks"></a>Note  
 L'oggetto viene costruito con i valori predefiniti per rosso, verde e blu, ID di oggetto e l'ID gruppo, che verrà impostato su 0. Possono essere modificate in un secondo momento in fase di esecuzione utilizzando SetDefaultValue e SetID.  
  
##  <a name="getanimationvariablelist"></a>CAnimationColor::GetAnimationVariableList  
 Inserisce le variabili dell'animazione incapsulata in un elenco.  
  
```  
virtual void GetAnimationVariableList(CList<CAnimationVariable*>& lst);
```  
  
### <a name="parameters"></a>Parametri  
 `lst`  
 Quando la funzione viene restituito, contiene i puntatori a tre oggetti CAnimationVariable che rappresentano componenti rossi, verde e blu.  
  
##  <a name="getb"></a>CAnimationColor::GetB  
 Fornisce l'accesso a CAnimationVariable che rappresenta il componente blu.  
  
```  
CAnimationVariable& GetB();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta il componente blu.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere accesso diretto alla CAnimationVariable che rappresenta il componente blu.  
  
##  <a name="getdefaultvalue"></a>CAnimationColor::GetDefaultValue  
 Restituisce i valori predefiniti per i componenti di colore.  
  
```  
COLORREF GetDefaultValue();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore COLORREF contenente i valori predefiniti per i componenti RGB.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore predefinito, che è stato impostato in precedenza dal costruttore o SetDefaultValue.  
  
##  <a name="getg"></a>CAnimationColor::GetG  
 Fornisce l'accesso a CAnimationVariable che rappresenta il componente verde.  
  
```  
CAnimationVariable& GetG();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta il componente verde.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere accesso diretto alla CAnimationVariable sottostante che rappresenta il componente verde.  
  
##  <a name="getr"></a>CAnimationColor::GetR  
 Fornisce l'accesso a CAnimationVariable che rappresenta il componente rosso.  
  
```  
CAnimationVariable& GetR();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a CAnimationVariable incapsulato che rappresenta il componente rosso.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo per ottenere accesso diretto alla CAnimationVariable che rappresenta il componente rosso.  
  
##  <a name="getvalue"></a>CAnimationColor::GetValue  
 Restituisce il valore corrente.  
  
```  
BOOL GetValue(COLORREF& color);
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Output. Quando questo metodo viene restituito, contiene il valore corrente.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il valore corrente è stato recuperato correttamente. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare il valore corrente del colore di animazione. Se questo metodo ha esito negativo o non sono stati inizializzati oggetti COM sottostanti per i componenti di colore, colore contiene il valore predefinito, che è stata precedentemente impostato nel costruttore o da SetDefaultValue.  
  
##  <a name="m_bvalue"></a>CAnimationColor::m_bValue  
 La variabile di animazione incapsulata che rappresenta il componente blu del colore di animazione.  
  
```  
CAnimationVariable m_bValue;  
```  
  
##  <a name="m_gvalue"></a>CAnimationColor::m_gValue  
 La variabile di animazione incapsulata che rappresenta il componente verde del colore di animazione.  
  
```  
CAnimationVariable m_gValue;  
```  
  
##  <a name="m_rvalue"></a>CAnimationColor::m_rValue  
 La variabile di animazione incapsulata che rappresenta il componente rosso del colore di animazione.  
  
```  
CAnimationVariable m_rValue;  
```  
  
##  <a name="operator_colorref"></a>CAnimationColor::operator COLORREF  
  
```  
operator COLORREF();
```   
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="operator_eq"></a>CAnimationColor::operator =  
 Assegna colore a CAnimationColor.  
  
```  
void operator=(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Specifica un nuovo valore del colore di animazione.  
  
### <a name="remarks"></a>Note  
 Si consiglia di eseguire tale operazione prima dell'inizio dell'animazione perché questo operatore chiama SetDefaultValue che ricrea gli oggetti COM sottostanti per i componenti di colore, se sono state create. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
##  <a name="setdefaultvalue"></a>CAnimationColor::SetDefaultValue  
 Imposta il valore predefinito.  
  
```  
void SetDefaultValue(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Specifica i nuovi valori predefiniti per i componenti rossi, verde e blu.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna i valori predefiniti per i componenti di colore del colore di animazione. Ricrea anche gli oggetti COM sottostanti se sono stati creati. Se si è scelto di questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
