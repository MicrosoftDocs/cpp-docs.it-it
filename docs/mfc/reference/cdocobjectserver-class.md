---
title: Classe CDocObjectServer | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDocObjectServer
dev_langs:
- C++
helpviewer_keywords:
- document object server
- CDocObjectServer class
- servers [C++], ActiveX documents
- docobject server
- servers [C++], doc objects
- ActiveX documents [C++], document server
ms.assetid: 18cd0dff-0616-4472-b8d9-66c081bc383a
caps.latest.revision: 23
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
ms.openlocfilehash: 75fb0ba49d105a673e862ed3044e85ac9e990e9c
ms.lasthandoff: 02/24/2017

---
# <a name="cdocobjectserver-class"></a>Classe CDocObjectServer
Implementa le interfacce OLE aggiuntive necessarie per trasformare un server `COleDocument` normale in un server DocObject completo: `IOleDocument`, `IOleDocumentView`, `IOleCommandTarget`e `IPrint`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDocObjectServer : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServer::CDocObjectServer](#cdocobjectserver)|Costruisce un oggetto `CDocObjectServer`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServer::ActivateDocObject](#activatedocobject)|Attiva il server oggetto documento, ma non viene visualizzato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServer::OnActivateView](#onactivateview)|Mostra la visualizzazione DocObject.|  
|[CDocObjectServer::OnApplyViewState](#onapplyviewstate)|Ripristina lo stato della visualizzazione DocObject.|  
|[CDocObjectServer::OnSaveViewState](#onsaveviewstate)|Salva lo stato della visualizzazione DocObject.|  
  
## <a name="remarks"></a>Note  
 `CDocObjectServer`deriva da `CCmdTarget` e collabora con `COleServerDoc` per esporre le interfacce.  
  
 Può contenere un documento server DocObject [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) gli oggetti che rappresentano l'interfaccia server agli elementi DocObject.  
  
 Per personalizzare il server DocObject, derivare la propria classe da `CDocObjectServer` ed eseguire l'override delle funzioni di installazione di vista, [OnActivateView](#onactivateview), [OnApplyViewState](#onapplyviewstate), e [OnSaveViewState](#onsaveviewstate). È necessario fornire una nuova istanza della classe in risposta alle chiamate di framework.  
  
 Per ulteriori informazioni sulla DocObjects, vedere [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md) nel *riferimenti alla libreria MFC*. Vedere anche [prime operazioni in Internet: i documenti attivi](../../mfc/active-documents-on-the-internet.md) e [documenti attivi](../../mfc/active-documents-on-the-internet.md).  
  
 Vedere anche il seguente articolo della Knowledge Base:  
  
-   Q247382: PRB: le descrizioni comandi per i controlli Server di documenti ActiveX sono nascoste dal contenitore di documenti ActiveX  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocObjectServer`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxDocOb. h  
  
##  <a name="a-nameactivatedocobjecta--cdocobjectserveractivatedocobject"></a><a name="activatedocobject"></a>CDocObjectServer::ActivateDocObject  
 Chiamare questa funzione per attivare il server di oggetti documento (ma non mostra).  
  
```  
void ActivateDocObject();
```  
  
### <a name="remarks"></a>Note  
 `ActivateDocObject`chiamate `IOleDocumentSite`del **ActivateMe** (metodo), ma non mostra la visualizzazione perché è in attesa per istruzioni specifiche su come impostare e visualizzare la visualizzazione, specificato nella chiamata a [CDocObjectServer::OnActivateView](#onactivateview).  
  
 Insieme, `ActivateDocObject` e `OnActivateView` attivazione e la visualizzazione DocObject. Attivazione DocObject differisce dagli altri tipi di attivazione sul posto OLE. Attivazione DocObject ignora la visualizzazione di bordi tratteggiati sul posto e grafici di oggetti (ad esempio quadratini di ridimensionamento), ignora le funzioni di extent di oggetto e disegna le barre di scorrimento all'interno del rettangolo di visualizzazione invece di disegno di fuori di tale rettangolo (come normale attivazione sul posto).  
  
##  <a name="a-namecdocobjectservera--cdocobjectservercdocobjectserver"></a><a name="cdocobjectserver"></a>CDocObjectServer::CDocObjectServer  
 Costruisce e inizializza un oggetto `CDocObjectServer`.  
  
```  
explicit CDocObjectServer(
    COleServerDoc* pOwner,  
    LPOLEDOCUMENTSITE pDocSite = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pOwner*  
 Puntatore al documento del sito client che il client per il server DocObject.  
  
 `pDocSite`  
 Un puntatore per il `IOleDocumentSite` interfaccia implementata dal contenitore.  
  
### <a name="remarks"></a>Note  
 Quando un DocObject è attiva, il client del sito interfaccia OLE ( `IOleDocumentSite`) consente al server DocObject di comunicare con il relativo client (contenitore). Quando viene attivato un server DocObject, verifica innanzitutto che il contenitore implementa il `IOleDocumentSite` interfaccia. In questo caso, [COleServerDoc::GetDocObjectServer](../../mfc/reference/coleserverdoc-class.md#getdocobjectserver) viene chiamato per verificare se il contenitore supporta DocObjects. Per impostazione predefinita, `GetDocObjectServer` restituisce **NULL**. È necessario eseguire l'override `COleServerDoc::GetDocObjectServer` per costruire un nuovo `CDocObjectServer` oggetto o un oggetto derivato di personalizzati, con puntatori al `COleServerDoc` contenitore e il relativo `IOleDocumentSite` interfaccia come argomenti al costruttore.  
  
##  <a name="a-nameonactivateviewa--cdocobjectserveronactivateview"></a><a name="onactivateview"></a>CDocObjectServer::OnActivateView  
 Chiamare questa funzione per mostrare la visualizzazione DocObject.  
  
```  
virtual HRESULT OnActivateView();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un errore o un valore di avviso. Per impostazione predefinita, restituisce **NOERROR** se ha esito positivo; in caso contrario, **E_FAIL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione crea una finestra cornice sul posto, disegna le barre di scorrimento all'interno della visualizzazione, imposta il menu di scelta rapida del server condivide con il relativo contenitore, aggiunge controlli frame, imposta l'oggetto attivo, quindi infine Mostra la finestra cornice sul posto e imposta lo stato attivo.  
  
##  <a name="a-nameonapplyviewstatea--cdocobjectserveronapplyviewstate"></a><a name="onapplyviewstate"></a>CDocObjectServer::OnApplyViewState  
 Eseguire l'override di questa funzione per ripristinare lo stato di visualizzazione DocObject.  
  
```  
virtual void OnApplyViewState(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 `ar`  
 Oggetto `CArchive` oggetto da cui serializzare lo stato di visualizzazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata quando viene viene visualizzato per la prima volta dopo la creazione di istanze. `OnApplyViewState`indica di reinizializzazione in base ai dati in una vista di `CArchive` oggetto salvato in precedenza con [OnSaveViewState](#onsaveviewstate). La vista deve convalidare i dati di `CArchive` oggetto poiché il contenitore non tentare di interpretare i dati dello stato di visualizzazione in alcun modo.  
  
 È possibile utilizzare `OnSaveViewState` per archiviare informazioni permanenti specifiche allo stato di visualizzazione. Se esegue l'override `OnSaveViewState` per archiviare informazioni, è possibile eseguire l'override `OnApplyViewState` per leggere le informazioni e applicarla alla visualizzazione appena attivati.  
  
##  <a name="a-nameonsaveviewstatea--cdocobjectserveronsaveviewstate"></a><a name="onsaveviewstate"></a>CDocObjectServer::OnSaveViewState  
 Eseguire l'override di questa funzione per salvare informazioni sullo stato aggiuntive sulla visualizzazione DocObject.  
  
```  
virtual void OnSaveViewState(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 `ar`  
 Oggetto `CArchive` in cui viene serializzato lo stato di visualizzazione dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Lo stato può includere proprietà come il tipo di visualizzazione, il fattore di zoom, inserimento e punto di selezione e così via. In genere, il contenitore chiama questa funzione prima di disattivare la visualizzazione. Lo stato salvato in un secondo momento può essere ripristinato tramite [OnApplyViewState](#onapplyviewstate).  
  
 È possibile utilizzare `OnSaveViewState` per archiviare informazioni permanenti specifiche allo stato di visualizzazione. Se esegue l'override `OnSaveViewState` per archiviare informazioni, è possibile eseguire l'override `OnApplyViewState` per leggere le informazioni e applicarla alla visualizzazione appena attivati.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md)

