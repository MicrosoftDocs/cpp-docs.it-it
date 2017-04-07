---
title: Classe COleCmdUI | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- document object server
- COleCmdUI class
- servers [C++], ActiveX documents
- docobject server
- servers [C++], doc objects
- ActiveX documents [C++], document server
ms.assetid: a2d5ce08-6657-45d3-8673-2a9f32d50eec
caps.latest.revision: 21
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
ms.openlocfilehash: 38e7019d7636166262028d955455cee675824f8b
ms.lasthandoff: 02/24/2017

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
|[COleCmdUI::Enable](#enable)|Imposta o Cancella il flag di comando attiva.|  
|[COleCmdUI::SetCheck](#setcheck)|Imposta lo stato di un elemento toggle di attivazione/disattivazione comando.|  
|[COleCmdUI::SetText](#settext)|Restituisce una stringa di testo nome o lo stato per un comando.|  
  
## <a name="remarks"></a>Note  
 In un'applicazione che non è abilitata per DocObjects, quando l'utente visualizza un menu dell'applicazione, i processi MFC **UPDATE_COMMAND_UI** notifiche. Ogni notifica viene assegnato un [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto che può essere modificato per rispecchiare lo stato di un comando specifico. Tuttavia, quando l'applicazione è abilitato per DocObjects, MFC elabora **UPDATE_OLE_COMMAND_UI** notifiche e assegna `COleCmdUI` oggetti.  
  
 `COleCmdUI`consente a DocObject di ricevere comandi generati nell'interfaccia utente del contenitore (ad esempio FileNuovo, Apri, stampa e così via) e consente a un contenitore di ricevere comandi generati nell'interfaccia utente di DocObject. Sebbene `IDispatch` può essere utilizzato per inviare gli stessi comandi `IOleCommandTarget` fornisce un modo più semplice per eseguire query e vengono eseguite perché si basa su un set standard di comandi, in genere senza argomenti, ed non è coinvolto alcuna informazione sul tipo. `COleCmdUI`Consente di abilitare, aggiornare e impostare altre proprietà dei comandi dell'interfaccia utente DocObject. Quando si desidera richiamare il comando, chiamare [COleServerDoc::OnExecOleCmd](../../mfc/reference/coleserverdoc-class.md#onexecolecmd).  
  
 Per ulteriori informazioni sulla DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md). Vedere anche [prime operazioni in Internet: i documenti attivi](../../mfc/active-documents-on-the-internet.md) e [documenti attivi](../../mfc/active-documents-on-the-internet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CCmdUI](../../mfc/reference/ccmdui-class.md)  
  
 `COleCmdUI`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdocobj.h  
  
##  <a name="colecmdui"></a>COleCmdUI::COleCmdUI  
 Costruisce un `COleCmdUI` oggetto associato a un comando dell'interfaccia utente specifico.  
  
```  
COleCmdUI(
    OLECMD* rgCmds,  
    ULONG cCmds,  
    const GUID* m_pGroup);
```  
  
### <a name="parameters"></a>Parametri  
 `rgCmds`  
 Un elenco dei comandi supportati associato al GUID specificato. Il **OLECMD** struttura associa comandi con il flag di comando.  
  
 *cCmds*  
 Il numero di comandi nel `rgCmds`.  
  
 `pGroup`  
 Un puntatore a un GUID che identifica un set di comandi.  
  
### <a name="remarks"></a>Note  
 Il `COleCmdUI` oggetto fornisce un'interfaccia di programmazione per l'aggiornamento degli oggetti dell'interfaccia utente di DocObject, ad esempio voci di menu o pulsanti della barra di controllo. Gli oggetti dell'interfaccia utente possono essere abilitati, disabilitati, selezionati e/o cancellati tramite la `COleCmdUI` oggetto.  
  
##  <a name="enable"></a>COleCmdUI::Enable  
 Chiamare questa funzione per impostare il flag di comando di `COleCmdUI` oggetto **OLECOMDF_ENABLED**, che indica l'interfaccia di comando è disponibile e abilitata, o per cancellare il flag di comando.  
  
```  
virtual void Enable(BOOL bOn);
```  
  
### <a name="parameters"></a>Parametri  
 `bOn`  
 Indica se il comando è associato il `COleCmdUI` oggetto deve essere abilitato o disabilitato. NonZero consente il comando. 0 disabilita il comando.  
  
##  <a name="setcheck"></a>COleCmdUI::SetCheck  
 Chiamare questa funzione per impostare lo stato di un elemento toggle di attivazione/disattivazione comando.  
  
```  
virtual void SetCheck(int nCheck);
```  
  
### <a name="parameters"></a>Parametri  
 `nCheck`  
 Un valore che determina lo stato da impostare un elemento toggle di attivazione/disattivazione comando. I valori sono:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**1**|Imposta il comando su on.|  
|**2**|Imposta il comando indeterminato; Impossibile determinare lo stato perché l'attributo di questo comando è su e disattivare gli stati della selezione pertinente.|  
|qualsiasi altro valore|Imposta il comando per disattivare l'opzione.|  
  
##  <a name="settext"></a>COleCmdUI::SetText  
 Chiamare questa funzione per restituire una stringa di testo nome o lo stato per un comando.  
  
```  
virtual void SetText(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Un puntatore di testo da utilizzare con il comando.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdUI (classe)](../../mfc/reference/ccmdui-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




