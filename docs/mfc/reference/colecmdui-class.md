---
title: Classe COleCmdUI | Microsoft Docs
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleCmdUI
- AFXDOCOBJ/COleCmdUI
- AFXDOCOBJ/COleCmdUI::COleCmdUI
- AFXDOCOBJ/COleCmdUI::Enable
- AFXDOCOBJ/COleCmdUI::SetCheck
- AFXDOCOBJ/COleCmdUI::SetText
dev_langs:
- C++
helpviewer_keywords:
- COleCmdUI [MFC], COleCmdUI
- COleCmdUI [MFC], Enable
- COleCmdUI [MFC], SetCheck
- COleCmdUI [MFC], SetText
ms.assetid: a2d5ce08-6657-45d3-8673-2a9f32d50eec
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4ece2d45bdce490d09c7195deec380728d79392d
ms.sourcegitcommit: b4432d30f255f0cb58dce69cbc8cbcb9d44bc68b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/13/2018
ms.locfileid: "45535239"
---
# <a name="colecmdui-class"></a>Classe COleCmdUI
Implementa un metodo per MFC per aggiornare lo stato degli oggetti dell'interfaccia utente relativi alle funzionalità dell'applicazione basate su `IOleCommandTarget`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleCmdUI : public CCmdUI  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCmdUI::COleCmdUI](#colecmdui)|Costruisce un oggetto `COleCmdUI`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCmdUI::Enable](#enable)|Imposta o Cancella il flag di comando di abilitazione.|  
|[COleCmdUI::SetCheck](#setcheck)|Imposta lo stato di un elemento toggle di attivazione/disattivazione comando.|  
|[COleCmdUI::SetText](#settext)|Restituisce una stringa di testo nome o lo stato per un comando.|  
  
## <a name="remarks"></a>Note  
 In un'applicazione che non è abilitato per DocObjects, quando l'utente visualizza un menu nell'applicazione MFC Elabora notifiche UPDATE_COMMAND_UI. Ogni notifica viene assegnato un [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto che può essere modificata per riflettere lo stato di un particolare comando. Tuttavia, quando l'applicazione è abilitato per DocObjects, MFC Elabora notifiche UPDATE_OLE_COMMAND_UI e assegna `COleCmdUI` oggetti.  
  
 `COleCmdUI` consente un DocObject ricevere comandi che hanno origine nell'interfaccia utente del relativo contenitore (ad esempio FileNew, Apri, stampa e così via), e un contenitore ricevere comandi che hanno origine nell'interfaccia utente dell'oggetto documento. Sebbene `IDispatch` può essere usato per inviare gli stessi comandi, `IOleCommandTarget` fornisce un modo più semplice per eseguire query e vengono eseguite perché si basa su un set standard di comandi, in genere senza argomenti, ed non è coinvolta alcuna informazione sul tipo. `COleCmdUI` Consente di abilitare, aggiornare e impostare altre proprietà dei comandi dell'interfaccia utente DocObject. Quando si vuole richiamare il comando, chiamare [COleServerDoc::OnExecOleCmd](../../mfc/reference/coleserverdoc-class.md#onexecolecmd).  
  
 Per altre informazioni su DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CCmdUI](../../mfc/reference/ccmdui-class.md)  
  
 `COleCmdUI`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdocobj.h  
  
##  <a name="colecmdui"></a>  COleCmdUI::COleCmdUI  
 Costruisce un `COleCmdUI` oggetto associato a un comando dell'interfaccia utente specifico.  
  
```  
COleCmdUI(
    OLECMD* rgCmds,  
    ULONG cCmds,  
    const GUID* m_pGroup);
```  
  
### <a name="parameters"></a>Parametri  
 *rgCmds*  
 Elenco di comandi supportati associato al GUID specificato. Il `OLECMD` struttura associa i comandi con flag dei comandi.  
  
 *cCmds*  
 Il numero di comandi nel *rgCmds*.  
  
 *pGroup*  
 Puntatore a un GUID che identifica un set di comandi.  
  
### <a name="remarks"></a>Note  
 Il `COleCmdUI` oggetto fornisce un'interfaccia programmatica per l'aggiornamento DocObject oggetti dell'interfaccia utente, ad esempio voci di menu o i pulsanti della barra di controllo. Gli oggetti dell'interfaccia utente possono essere abilitati, disabilitati, selezionati e/o cancellati tramite il `COleCmdUI` oggetto.  
  
##  <a name="enable"></a>  COleCmdUI::Enable  
 Chiamare questa funzione per impostare il flag di comando del `COleCmdUI` a OLECOMDF_ENABLED, che indica l'interfaccia di comando è disponibile e abilitato, oppure per cancellare il flag di comando.  
  
```  
virtual void Enable(BOOL bOn);
```  
  
### <a name="parameters"></a>Parametri  
 *Bin*  
 Indica se il comando è associato il `COleCmdUI` oggetto deve essere abilitato o disabilitato. NonZero consente il comando. 0 disabilita il comando.  
  
##  <a name="setcheck"></a>  COleCmdUI::SetCheck  
 Chiamare questa funzione per impostare lo stato di un elemento toggle di attivazione/disattivazione comando.  
  
```  
virtual void SetCheck(int nCheck);
```  
  
### <a name="parameters"></a>Parametri  
 *nControllare*  
 Un valore che determina lo stato da impostare un elemento toggle di attivazione/disattivazione comando. I valori sono:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**1**|Imposta il comando su on.|  
|**2**|Imposta il comando su indeterminato; lo stato non è possibile determinare perché l'attributo di questo comando è in entrambi e disattivare gli stati nella selezione pertinente.|  
|qualsiasi altro valore|Imposta il comando su off.|  
  
##  <a name="settext"></a>  COleCmdUI::SetText  
 Chiamare questa funzione per restituire una stringa di testo nome o lo stato per un comando.  
  
```  
virtual void SetText(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszText*  
 Puntatore al testo da utilizzare con il comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCmdUI](../../mfc/reference/ccmdui-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



