---
title: Classe CMFCAcceleratorKeyAssignCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCAcceleratorKeyAssignCtrl
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::GetAccel
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::IsFocused
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::IsKeyDefined
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::ResetKey
dev_langs:
- C++
helpviewer_keywords:
- CMFCAcceleratorKeyAssignCtrl [MFC], CMFCAcceleratorKeyAssignCtrl
- CMFCAcceleratorKeyAssignCtrl [MFC], GetAccel
- CMFCAcceleratorKeyAssignCtrl [MFC], IsFocused
- CMFCAcceleratorKeyAssignCtrl [MFC], IsKeyDefined
- CMFCAcceleratorKeyAssignCtrl [MFC], PreTranslateMessage
- CMFCAcceleratorKeyAssignCtrl [MFC], ResetKey
ms.assetid: 89fb8e62-596e-4e71-8c9a-32740347aaab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6f42be291628a1d301309adbb48dd13211cd7857
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43210323"
---
# <a name="cmfcacceleratorkeyassignctrl-class"></a>Classe CMFCAcceleratorKeyAssignCtrl
Il `CMFCAcceleratorKeyAssignCtrl` classe estende la [classe CEdit](../../mfc/reference/cedit-class.md) per supportare pulsanti di sistema supplementari come ALT, CTRL e MAIUSC.  
  
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
|[CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage](#pretranslatemessage)|Utilizzato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati al [TranslateMessage](https://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](https://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|  
|[CMFCAcceleratorKeyAssignCtrl::ResetKey](#resetkey)|Reimposta la combinazione di tasti.|  
  
## <a name="remarks"></a>Note  
 Questa classe estende la funzionalità della classe `CEdit` grazie al supporto delle combinazioni di tasti, note anche come tasti di scelta rapida. Il `CMFCAcceleratorKeyAssignCtrl` classe funziona come un [classe CEdit](../../mfc/reference/cedit-class.md) e inoltre in grado di riconoscere i pulsanti di sistema.  
  
 Questa classe esegue il mapping delle combinazioni di tasti per i valori stringa. Ad esempio, si presupponga che viene eseguito il mapping della combinazione di tasti ALT + B alla stringa "Alt + B". Quando l'utente preme questa combinazione di tasti in un oggetto `CMFCAcceleratorKeyAssignCtrl`, "Alt + B" viene visualizzato all'utente. Per altre informazioni sul mapping tra i tasti di scelta rapida e un formato di stringa, vedere [classe CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come costruire un oggetto `CMFCAcceleratorKeyAssignCtrl` e usare il relativo metodo `ResetKey` per reimpostare la combinazione di tasti.  
  
 [!code-cpp[NVC_MFC_RibbonApp#31](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkeyassignctrl-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 `CMFCAcceleratorKeyAssignCtrl`   
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxacceleratorkeyassignctrl. h  
  
##  <a name="cmfcacceleratorkeyassignctrl"></a>  CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl  
 Costruisce un [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) oggetto.  
  
```  
CMFCAcceleratorKeyAssignCtrl();
```  
  
##  <a name="getaccel"></a>  CMFCAcceleratorKeyAssignCtrl::GetAccel  
 Recupera le `ACCEL` struttura per nella quando viene premuto un tasto di scelta rapida di [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) oggetto.  
  
```  
ACCEL const* GetAccel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `ACCEL` struttura che descrive il tasto di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per recuperare il `ACCEL` struttura di un tasto di scelta rapida che l'utente ha immesso nel `CMFCAcceleratorKeyAssignCtrl` oggetto.  
  
##  <a name="isfocused"></a>  CMFCAcceleratorKeyAssignCtrl::IsFocused  
 Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.  
  
```  
BOOL IsFocused() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="iskeydefined"></a>  CMFCAcceleratorKeyAssignCtrl::IsKeyDefined  
 Determina se un tasto di scelta rapida è stato definito nel [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) oggetto.  
  
```  
BOOL IsKeyDefined() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente ha premuto già una combinazione valida di chiavi che definiscono un tasto di scelta rapida; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per determinare se l'utente ha immesso un tasto di scelta rapida valido nel `CMFCAcceleratorKeyAssignCtrl` oggetto. Se esiste un tasto di scelta rapida, è possibile usare [CMFCAcceleratorKeyAssignCtrl::GetAccel](#getaccel) metodo per ottenere il `ACCEL` struttura associata a questo tasto di scelta rapida.  
  
##  <a name="pretranslatemessage"></a>  CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage  
 Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pMsg*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="resetkey"></a>  CMFCAcceleratorKeyAssignCtrl::ResetKey  
 Reimposta la combinazione di tasti.  
  
```  
void ResetKey();
```  
  
### <a name="remarks"></a>Note  
 La funzione Cancella il testo di controllo di modifica. Ciò include qualsiasi tasti premuti dall'utente.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md)
