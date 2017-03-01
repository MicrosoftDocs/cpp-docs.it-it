---
title: Classe CMFCAcceleratorKeyAssignCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCAcceleratorKeyAssignCtrl
dev_langs:
- C++
helpviewer_keywords:
- CMFCAcceleratorKeyAssignCtrl class
ms.assetid: 89fb8e62-596e-4e71-8c9a-32740347aaab
caps.latest.revision: 33
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
ms.openlocfilehash: 23687cf4c13881293d10a5f816a2c825180df49c
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcacceleratorkeyassignctrl-class"></a>Classe CMFCAcceleratorKeyAssignCtrl
Il `CMFCAcceleratorKeyAssignCtrl` classe estende la [CEdit Class](../../mfc/reference/cedit-class.md) per supportare pulsanti di sistema supplementari come ALT, CTRL e MAIUSC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCAcceleratorKeyAssignCtrl : public CEdit  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl](#cmfcacceleratorkeyassignctrl)|Costruisce un oggetto `CMFCAcceleratorKeyAssignCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAcceleratorKeyAssignCtrl::GetAccel](#getaccel)|Richiama la `ACCEL` struttura per una combinazione di testi premuta nell'oggetto `CMFCAcceleratorKeyAssignCtrl`.|  
|[CMFCAcceleratorKeyAssignCtrl::IsFocused](#isfocused)||  
|[CMFCAcceleratorKeyAssignCtrl::IsKeyDefined](#iskeydefined)|Determina se è stato definita una combinazione di tasti.|  
|[CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage](#pretranslatemessage)|Utilizzato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati per il [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. (Esegue l'override di [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|  
|[CMFCAcceleratorKeyAssignCtrl::ResetKey](#resetkey)|Reimposta la combinazione di tasti.|  
  
## <a name="remarks"></a>Note  
 Questa classe estende la funzionalità della classe `CEdit` grazie al supporto delle combinazioni di tasti, note anche come tasti di scelta rapida. Il `CMFCAcceleratorKeyAssignCtrl` classe funziona come un [CEdit Class](../../mfc/reference/cedit-class.md) e può anche riconoscere i pulsanti di sistema.  
  
 Questa classe esegue il mapping delle combinazioni di tasti per i valori stringa. Ad esempio, si presupponga che viene eseguito il mapping della combinazione di tasti ALT + B alla stringa "Alt + B". Quando l'utente preme questa combinazione di tasti in un oggetto `CMFCAcceleratorKeyAssignCtrl`, "Alt + B" viene visualizzato all'utente. Per ulteriori informazioni sul mapping tra i tasti di scelta rapida e un formato di stringa, vedere [CMFCAcceleratorKey classe](../../mfc/reference/cmfcacceleratorkey-class.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come costruire un oggetto `CMFCAcceleratorKeyAssignCtrl` e usare il relativo metodo `ResetKey` per reimpostare la combinazione di tasti.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#31;](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkeyassignctrl-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 `CMFCAcceleratorKeyAssignCtrl`   
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxacceleratorkeyassignctrl.h  
  
##  <a name="a-namecmfcacceleratorkeyassignctrla--cmfcacceleratorkeyassignctrlcmfcacceleratorkeyassignctrl"></a><a name="cmfcacceleratorkeyassignctrl"></a>CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl  
 Costruisce un [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) oggetto.  
  
```  
CMFCAcceleratorKeyAssignCtrl();
```  
  
##  <a name="a-namegetaccela--cmfcacceleratorkeyassignctrlgetaccel"></a><a name="getaccel"></a>CMFCAcceleratorKeyAssignCtrl::GetAccel  
 Recupera il `ACCEL` struttura per premuto un tasto di scelta rapida di [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) oggetto.  
  
```  
ACCEL const* GetAccel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `ACCEL` struttura che descrive il tasto di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per recuperare il `ACCEL` struttura per l'utente ha immesso nel tasto di scelta rapida di `CMFCAcceleratorKeyAssignCtrl` oggetto.  
  
##  <a name="a-nameisfocuseda--cmfcacceleratorkeyassignctrlisfocused"></a><a name="isfocused"></a>CMFCAcceleratorKeyAssignCtrl::IsFocused  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsFocused() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameiskeydefineda--cmfcacceleratorkeyassignctrliskeydefined"></a><a name="iskeydefined"></a>CMFCAcceleratorKeyAssignCtrl::IsKeyDefined  
 Determina se un tasto di scelta rapida è stato definito nel [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) oggetto.  
  
```  
BOOL IsKeyDefined() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente ha premuto già una combinazione valida di chiavi che definiscono un tasto di scelta rapida; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per determinare se l'utente ha immesso un tasto di scelta rapida valido nel `CMFCAcceleratorKeyAssignCtrl` oggetto. Se esiste un tasto di scelta rapida, è possibile utilizzare [CMFCAcceleratorKeyAssignCtrl::GetAccel](#getaccel) per ottenere il `ACCEL` struttura associata a questo tasto di scelta rapida.  
  
##  <a name="a-namepretranslatemessagea--cmfcacceleratorkeyassignctrlpretranslatemessage"></a><a name="pretranslatemessage"></a>CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMsg`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameresetkeya--cmfcacceleratorkeyassignctrlresetkey"></a><a name="resetkey"></a>CMFCAcceleratorKeyAssignCtrl::ResetKey  
 Reimposta la combinazione di tasti.  
  
```  
void ResetKey();
```  
  
### <a name="remarks"></a>Note  
 La funzione consente di cancellare il testo del controllo di modifica. Questo include qualsiasi tasti di scelta rapida che l'utente ha premuto.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md)

