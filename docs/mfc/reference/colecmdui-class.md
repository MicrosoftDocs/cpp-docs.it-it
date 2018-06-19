---
title: Classe COleCmdUI | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: e6195735c25bb188449638750f6100869a44f082
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33370757"
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
|[COleCmdUI::SetCheck](#setcheck)|Imposta lo stato di un elemento toggle attivato/disattivato comando.|  
|[COleCmdUI::SetText](#settext)|Restituisce una stringa di testo nome o lo stato per un comando.|  
  
## <a name="remarks"></a>Note  
 In un'applicazione che non è abilitata per DocObjects, quando l'utente visualizza un menu dell'applicazione, i processi MFC **UPDATE_COMMAND_UI** notifiche. Ogni notifica viene assegnato un [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto che può essere modificato per riflettere lo stato di un comando specifico. Tuttavia, quando l'applicazione è abilitato per DocObjects, MFC elabora **UPDATE_OLE_COMMAND_UI** notifiche e assegna `COleCmdUI` oggetti.  
  
 `COleCmdUI` consente un DocObject ricevere comandi che hanno origine nell'interfaccia utente del contenitore (ad esempio FileNew, Apri, stampa e così via), e un contenitore ricevere comandi che hanno origine nell'interfaccia utente di DocObject. Sebbene `IDispatch` può essere usato per inviare gli stessi comandi `IOleCommandTarget` fornisce un modo più semplice per eseguire una query ed eseguire perché si basa su un set standard di comandi, in genere senza argomenti, e informazioni sul tipo non è coinvolto. `COleCmdUI` Consente di abilitare, aggiornare e impostare altre proprietà dei comandi dell'interfaccia utente DocObject. Quando si desidera richiamare il comando, chiamare [COleServerDoc::OnExecOleCmd](../../mfc/reference/coleserverdoc-class.md#onexecolecmd).  
  
 Per ulteriori informazioni sulla DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md). Vedere anche [prime operazioni in Internet: documenti attivi](../../mfc/active-documents-on-the-internet.md) e [documenti attivi](../../mfc/active-documents-on-the-internet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CCmdUI](../../mfc/reference/ccmdui-class.md)  
  
 `COleCmdUI`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdocobj.h  
  
##  <a name="colecmdui"></a>  COleCmdUI::COleCmdUI  
 Costruisce un `COleCmdUI` oggetto associato a un comando specifico dell'interfaccia utente.  
  
```  
COleCmdUI(
    OLECMD* rgCmds,  
    ULONG cCmds,  
    const GUID* m_pGroup);
```  
  
### <a name="parameters"></a>Parametri  
 `rgCmds`  
 Un elenco di comandi supportati associato il GUID specificato. Il **OLECMD** struttura associa comandi con i flag dei comandi.  
  
 *cCmds*  
 Numero di comandi in `rgCmds`.  
  
 `pGroup`  
 Puntatore a un GUID che identifica un set di comandi.  
  
### <a name="remarks"></a>Note  
 Il `COleCmdUI` oggetto fornisce un'interfaccia programmatica per l'aggiornamento DocObject oggetti dell'interfaccia utente, ad esempio voci di menu o pulsanti della barra di controllo. Gli oggetti dell'interfaccia utente possono essere abilitati, disabilitati, selezionati e/o cancellati tramite la `COleCmdUI` oggetto.  
  
##  <a name="enable"></a>  COleCmdUI::Enable  
 Chiamare questa funzione per impostare il flag di comando del `COleCmdUI` oggetto **OLECOMDF_ENABLED**, che indica l'interfaccia con il comando è disponibile e abilitato, o per cancellare il flag di comando.  
  
```  
virtual void Enable(BOOL bOn);
```  
  
### <a name="parameters"></a>Parametri  
 `bOn`  
 Indica se il comando è associato il `COleCmdUI` oggetto deve essere abilitato o disabilitato. NonZero consente il comando. 0 disabilita il comando.  
  
##  <a name="setcheck"></a>  COleCmdUI::SetCheck  
 Chiamare questa funzione per impostare lo stato di un elemento toggle attivato/disattivato comando.  
  
```  
virtual void SetCheck(int nCheck);
```  
  
### <a name="parameters"></a>Parametri  
 `nCheck`  
 Un valore che determina lo stato da impostare un elemento toggle attivato/disattivato comando. I valori sono:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**1**|Imposta il comando su on.|  
|**2**|Imposta il comando indeterminato; Impossibile determinare lo stato perché l'attributo di questo comando è nel sia e disattivare gli stati della selezione pertinente.|  
|Qualsiasi altro valore|Imposta il comando su off.|  
  
##  <a name="settext"></a>  COleCmdUI::SetText  
 Chiamare questa funzione per restituire una stringa di testo nome o lo stato per un comando.  
  
```  
virtual void SetText(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Un puntatore per il testo da utilizzare con il comando.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdUI (classe)](../../mfc/reference/ccmdui-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



