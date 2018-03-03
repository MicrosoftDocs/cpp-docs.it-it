---
title: Classe COleServerItem | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleServerItem
- AFXOLE/COleServerItem
- AFXOLE/COleServerItem::COleServerItem
- AFXOLE/COleServerItem::AddOtherClipboardData
- AFXOLE/COleServerItem::CopyToClipboard
- AFXOLE/COleServerItem::DoDragDrop
- AFXOLE/COleServerItem::GetClipboardData
- AFXOLE/COleServerItem::GetDocument
- AFXOLE/COleServerItem::GetEmbedSourceData
- AFXOLE/COleServerItem::GetItemName
- AFXOLE/COleServerItem::GetLinkSourceData
- AFXOLE/COleServerItem::GetObjectDescriptorData
- AFXOLE/COleServerItem::IsConnected
- AFXOLE/COleServerItem::IsLinkedItem
- AFXOLE/COleServerItem::NotifyChanged
- AFXOLE/COleServerItem::OnDoVerb
- AFXOLE/COleServerItem::OnDraw
- AFXOLE/COleServerItem::OnDrawEx
- AFXOLE/COleServerItem::OnGetClipboardData
- AFXOLE/COleServerItem::OnGetExtent
- AFXOLE/COleServerItem::OnInitFromData
- AFXOLE/COleServerItem::OnQueryUpdateItems
- AFXOLE/COleServerItem::OnRenderData
- AFXOLE/COleServerItem::OnRenderFileData
- AFXOLE/COleServerItem::OnRenderGlobalData
- AFXOLE/COleServerItem::OnSetColorScheme
- AFXOLE/COleServerItem::OnSetData
- AFXOLE/COleServerItem::OnSetExtent
- AFXOLE/COleServerItem::OnUpdate
- AFXOLE/COleServerItem::OnUpdateItems
- AFXOLE/COleServerItem::SetItemName
- AFXOLE/COleServerItem::GetDataSource
- AFXOLE/COleServerItem::OnHide
- AFXOLE/COleServerItem::OnOpen
- AFXOLE/COleServerItem::OnShow
- AFXOLE/COleServerItem::m_sizeExtent
dev_langs:
- C++
helpviewer_keywords:
- COleServerItem [MFC], COleServerItem
- COleServerItem [MFC], AddOtherClipboardData
- COleServerItem [MFC], CopyToClipboard
- COleServerItem [MFC], DoDragDrop
- COleServerItem [MFC], GetClipboardData
- COleServerItem [MFC], GetDocument
- COleServerItem [MFC], GetEmbedSourceData
- COleServerItem [MFC], GetItemName
- COleServerItem [MFC], GetLinkSourceData
- COleServerItem [MFC], GetObjectDescriptorData
- COleServerItem [MFC], IsConnected
- COleServerItem [MFC], IsLinkedItem
- COleServerItem [MFC], NotifyChanged
- COleServerItem [MFC], OnDoVerb
- COleServerItem [MFC], OnDraw
- COleServerItem [MFC], OnDrawEx
- COleServerItem [MFC], OnGetClipboardData
- COleServerItem [MFC], OnGetExtent
- COleServerItem [MFC], OnInitFromData
- COleServerItem [MFC], OnQueryUpdateItems
- COleServerItem [MFC], OnRenderData
- COleServerItem [MFC], OnRenderFileData
- COleServerItem [MFC], OnRenderGlobalData
- COleServerItem [MFC], OnSetColorScheme
- COleServerItem [MFC], OnSetData
- COleServerItem [MFC], OnSetExtent
- COleServerItem [MFC], OnUpdate
- COleServerItem [MFC], OnUpdateItems
- COleServerItem [MFC], SetItemName
- COleServerItem [MFC], GetDataSource
- COleServerItem [MFC], OnHide
- COleServerItem [MFC], OnOpen
- COleServerItem [MFC], OnShow
- COleServerItem [MFC], m_sizeExtent
ms.assetid: 80256df6-3888-4256-944b-787d4b2e6b0d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dd64d6a2cf4fe36e62f5c6599521780c4ee002ef
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="coleserveritem-class"></a>Classe COleServerItem
Fornisce l'interfaccia server agli elementi OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleServerItem : public CDocItem  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerItem::COleServerItem](#coleserveritem)|Costruisce un oggetto `COleServerItem`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerItem::AddOtherClipboardData](#addotherclipboarddata)|Inserisce i formati di presentazione e la conversione in un `COleDataSource` oggetto.|  
|[COleServerItem::CopyToClipboard](#copytoclipboard)|Copia l'elemento negli Appunti.|  
|[COleServerItem:: DoDragDrop](#dodragdrop)|Esegue un'operazione di trascinamento e rilascio.|  
|[COleServerItem::GetClipboardData](#getclipboarddata)|Ottiene l'origine dati da utilizzare nel trasferimento dei dati (trascinamento o negli Appunti).|  
|[COleServerItem::GetDocument](#getdocument)|Restituisce il documento server contenente l'elemento.|  
|[COleServerItem::GetEmbedSourceData](#getembedsourcedata)|Ottiene il **CF_OBJECTDESCRIPTOR** dati per un elemento OLE.|  
|[COleServerItem::GetItemName](#getitemname)|Restituisce il nome dell'elemento. Utilizzato per gli elementi collegati.|  
|[COleServerItem::GetLinkSourceData](#getlinksourcedata)|Ottiene il `CF_LINKSOURCE` dati per un elemento OLE.|  
|[COleServerItem::GetObjectDescriptorData](#getobjectdescriptordata)|Ottiene il **inseriti** dati per un elemento OLE.|  
|[COleServerItem::IsConnected](#isconnected)|Indica se l'elemento è attualmente collegato a un contenitore active.|  
|[COleServerItem::IsLinkedItem](#islinkeditem)|Indica se l'elemento rappresenta un elemento OLE collegato.|  
|[COleServerItem::NotifyChanged](#notifychanged)|Aggiorna tutti i contenitori con l'aggiornamento del collegamento automatico.|  
|[COleServerItem::OnDoVerb](#ondoverb)|Chiamato per eseguire un verbo.|  
|[COleServerItem:: OnDraw](#ondraw)|Chiamato quando il contenitore richiede per disegnare l'elemento; implementazione necessaria.|  
|[COleServerItem::OnDrawEx](#ondrawex)|Chiamata eseguita per il disegno di un elemento specifico.|  
|[COleServerItem::OnGetClipboardData](#ongetclipboarddata)|Chiamato dal framework per ottenere i dati copiati negli Appunti.|  
|[COleServerItem::OnGetExtent](#ongetextent)|Chiamato dal framework per recuperare la dimensione dell'elemento OLE.|  
|[COleServerItem::OnInitFromData](#oninitfromdata)|Chiamato dal framework per inizializzare un elemento OLE usando il contenuto dell'oggetto di trasferimento di dati specificato.|  
|[COleServerItem::OnQueryUpdateItems](#onqueryupdateitems)|Chiamato per determinare se eventuali elementi collegati richiedono l'aggiornamento.|  
|[COleServerItem::OnRenderData](#onrenderdata)|Recupera i dati come parte del rendering ritardato.|  
|[COleServerItem::OnRenderFileData](#onrenderfiledata)|Recupera i dati in un `CFile` oggetto come parte del rendering ritardato.|  
|[COleServerItem::OnRenderGlobalData](#onrenderglobaldata)|Recupera i dati in un `HGLOBAL` come parte del rendering ritardato.|  
|[COleServerItem::OnSetColorScheme](#onsetcolorscheme)|Chiamata eseguita per impostare la combinazione di colori dell'elemento.|  
|[COleServerItem::OnSetData](#onsetdata)|Chiamata eseguita per impostare i dati dell'elemento.|  
|[COleServerItem::OnSetExtent](#onsetextent)|Chiamato dal framework per impostare le dimensioni dell'elemento OLE.|  
|[COleServerItem::OnUpdate](#onupdate)|Chiamato quando appartiene a una parte del documento, l'elemento viene modificato.|  
|[COleServerItem::OnUpdateItems](#onupdateitems)|Chiamata eseguita per aggiornare la cache di presentazione di tutti gli elementi nel documento server.|  
|[COleServerItem::SetItemName](#setitemname)|Imposta il nome dell'elemento. Utilizzato per gli elementi collegati.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerItem::GetDataSource](#getdatasource)|Ottiene l'oggetto utilizzato per archiviare i formati di conversione.|  
|[COleServerItem::OnHide](#onhide)|Chiamato dal framework per nascondere l'elemento OLE.|  
|[COleServerItem::OnOpen](#onopen)|Chiamato dal framework per visualizzare l'elemento OLE nella finestra di primo livello.|  
|[COleServerItem::OnShow](#onshow)|Chiamato quando il contenitore richiede di visualizzare l'elemento.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerItem::m_sizeExtent](#m_sizeextent)|Informa che il server la quantità dell'elemento OLE è visibile.|  
  
## <a name="remarks"></a>Note  
 Alcune o tutte di un documento di server, può rappresentare un elemento collegato. Un elemento incorporato rappresenta sempre un intero documento server.  
  
 La `COleServerItem` classe definisce diverse funzioni membro sottoponibili a override che vengono chiamate dalle librerie di collegamento dinamico (DLL), sistema OLE in genere in risposta alle richieste dall'applicazione contenitore. Queste funzioni membro consentono all'applicazione contenitore modificare l'elemento indirettamente in vari modi, ad esempio per visualizzarla, esecuzione relativi verbi o recuperando i dati in diversi formati.  
  
 Per utilizzare `COleServerItem`, derivare una classe e implementare il [OnDraw](#ondraw) e [Serialize](../../mfc/reference/cobject-class.md#serialize) funzioni membro. Il `OnDraw` funzione fornisce la rappresentazione del metafile dell'elemento, in modo che possa essere visualizzato quando un'applicazione contenitore viene aperto un documento composito. Il `Serialize` funzione `CObject` fornisce la rappresentazione nativa di un elemento, che consente a un elemento incorporato da trasferire tra le applicazioni server e il contenitore. [OnGetExtent](#ongetextent) offre le dimensioni fisiche dell'elemento contenitore, il contenitore di ridimensionare l'elemento di attivazione.  
  
 Per ulteriori informazioni sui server e argomenti correlati, vedere l'articolo [server: implementazione di un Server](../../mfc/servers-implementing-a-server.md) e "Creazione di un'applicazione di contenitore/Server" nell'articolo [contenitori: funzionalità avanzate](../../mfc/containers-advanced-features.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 `COleServerItem`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="addotherclipboarddata"></a>COleServerItem::AddOtherClipboardData  
 Chiamare questa funzione per inserire i formati di presentazione e la conversione per l'elemento OLE in specificato `COleDataSource` oggetto.  
  
```  
void AddOtherClipboardData(COleDataSource* pDataSource);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataSource`  
 Puntatore al `COleDataSource` in cui devono essere inseriti i dati dell'oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario aver implementato il [OnDraw](#ondraw) funzione membro per fornire il formato di presentazione (un'immagine di metafile) per l'elemento. Per supportare altri formati di conversione, registrarli utilizzando il [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto restituito da [GetDataSource](#getdatasource) ed eseguire l'override di [routine OnRenderData](#onrenderdata) funzione membro forniscono dati in formati di cui che si desidera supportare.  
  
##  <a name="coleserveritem"></a>COleServerItem::COleServerItem  
 Costruisce un `COleServerItem` e lo aggiunge alla raccolta del documento server elementi del documento.  
  
```  
COleServerItem(
    COleServerDoc* pServerDoc,  
    BOOL bAutoDelete);
```  
  
### <a name="parameters"></a>Parametri  
 `pServerDoc`  
 Puntatore al documento che conterrà il nuovo elemento.  
  
 `bAutoDelete`  
 Flag che indica se l'oggetto può essere eliminato quando viene rilasciato un collegamento ad esso. Impostare questa proprietà su **FALSE** se il `COleServerItem` oggetto è parte integrante dei dati del documento che è necessario eliminare. Impostare questa proprietà su **TRUE** se l'oggetto è una struttura secondaria utilizzata per identificare un intervallo di dati del documento che possono essere eliminati dal framework.  
  
##  <a name="copytoclipboard"></a>COleServerItem::CopyToClipboard  
 Chiamare questa funzione per copiare negli Appunti l'elemento OLE.  
  
```  
void CopyToClipboard(BOOL bIncludeLink = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `bIncludeLink`  
 Impostare questa proprietà su **TRUE** se i dati di collegamento devono essere copiati negli Appunti. Impostare questa proprietà su **FALSE** se l'applicazione server non supporta i collegamenti.  
  
### <a name="remarks"></a>Note  
 La funzione utilizza il [OnGetClipboardData](#ongetclipboarddata) funzione membro per creare un [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto contenente i dati dell'elemento OLE nei formati supportati. La funzione viene quindi inserito il `COleDataSource` oggetto negli Appunti utilizzando il [SetClipboard](../../mfc/reference/coledatasource-class.md#setclipboard) (funzione). Il `COleDataSource` oggetto include dati nativi dell'elemento e la relativa rappresentazione in `CF_METAFILEPICT` formato, nonché i dati in qualsiasi formato di conversione si sceglie di supportare. È necessario avere implementato [Serialize](../../mfc/reference/cobject-class.md#serialize) e [OnDraw](#ondraw) per questa funzione membro da usare.  
  
##  <a name="dodragdrop"></a>COleServerItem:: DoDragDrop  
 Chiamare il `DoDragDrop` funzione membro per eseguire un'operazione di trascinamento e rilascio.  
  
```  
DROPEFFECT DoDragDrop(
    LPCRECT lpRectItem,  
    CPoint ptOffset,  
    BOOL bIncludeLink = FALSE,  
    DWORD dwEffects = DROPEFFECT_COPY | DROPEFFECT_MOVE,  
    LPCRECT lpRectStartDrag = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpRectItem*  
 Rettangolo dell'elemento sullo schermo, in pixel, relativa area client.  
  
 `ptOffset`  
 L'offset dal `lpItemRect` in cui la posizione del mouse è al momento dell'operazione di trascinamento.  
  
 `bIncludeLink`  
 Impostare questa proprietà su **TRUE** se i dati di collegamento devono essere copiati negli Appunti. Impostarla su **FALSE** se l'applicazione non supporta i collegamenti.  
  
 `dwEffects`  
 Determina gli effetti che consente all'origine del trascinamento nell'operazione di trascinamento (una combinazione di copia, spostamento e collegamento).  
  
 `lpRectStartDrag`  
 Puntatore al rettangolo che definisce dove effettivamente avviata l'operazione di trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.  
  
### <a name="return-value"></a>Valore restituito  
 Valore ricavato dall'enumerazione `DROPEFFECT`. Se è `DROPEFFECT_MOVE`, i dati originali devono essere rimossi.  
  
### <a name="remarks"></a>Note  
 L'operazione di trascinamento e rilascio non viene avviato immediatamente. Attende che il cursore del mouse lascia il rettangolo specificato da `lpRectStartDrag` o fino a quando un numero specificato di millisecondi trascorsi. Se `lpRectStartDrag` è **NULL**, un rettangolo predefinito viene utilizzato in modo che l'operazione di trascinamento viene avviato quando il cursore del mouse viene spostato un pixel.  
  
 L'intervallo di tempo viene specificato dall'impostazione della chiave del Registro di sistema. È possibile modificare l'intervallo di tempo chiamando [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) o [CWinApp:: Writeprofileint](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica l'intervallo di tempo, viene utilizzato un valore predefinito pari a 200 millisecondi. Trascinare ritardo dell'ora verrà archiviato come segue:  
  
-   Ritarda ora di Windows NT trascinare viene archiviato in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.  
  
-   Tempo di ritardo trascinare 3. x di Windows viene archiviato nel file WIN. File INI, della sezione [Windows}.  
  
-   Ritarda ora di Windows 95/98 trascinare viene archiviato in una versione memorizzata nella cache di Windows. INI.  
  
 Per altre informazioni su come trascinare informazioni di ritardo vengono archiviate nel Registro di sistema o di. Il file INI, vedere [WriteProfileString](http://msdn.microsoft.com/library/windows/desktop/ms725504) in Windows SDK.  
  
##  <a name="getclipboarddata"></a>COleServerItem::GetClipboardData  
 Chiamare questa funzione per riempire l'oggetto specificato [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto con tutti i dati che possono essere copiati negli Appunti, se è stato chiamato [CopyToClipboard](#copytoclipboard) (gli stessi dati potrebbero essere trasferiti anche se si chiamato [DoDragDrop](#dodragdrop)).  
  
```  
void GetClipboardData(
    COleDataSource* pDataSource,  
    BOOL bIncludeLink = FALSE,  
    LPPOINT lpOffset = NULL,  
    LPSIZE lpSize = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataSource`  
 Puntatore al `COleDataSource` oggetto che riceverà i dati dell'elemento OLE in tutti i formati supportati.  
  
 `bIncludeLink`  
 **TRUE** se i dati di collegamento devono essere copiati negli Appunti. **FALSE** se l'applicazione server non supporta i collegamenti.  
  
 `lpOffset`  
 Offset, in pixel, del cursore del mouse dall'origine dell'oggetto.  
  
 `lpSize`  
 Le dimensioni dell'oggetto in pixel.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama la [GetEmbedSourceData](#getembedsourcedata) funzione membro per ottenere i dati nativi per l'elemento OLE e chiama il [AddOtherClipboardData](#addotherclipboarddata) funzione membro per ottenere il formato di presentazione e qualsiasi formati di conversione è supportata. Se `bIncludeLink` è **TRUE**, la funzione chiama anche [GetLinkSourceData](#getlinksourcedata) per ottenere i dati di collegamento per l'elemento.  
  
 Eseguire l'override di questa funzione se si desidera inserire i formati un `COleDataSource` oggetto prima o dopo questi formati forniti da `CopyToClipboard`.  
  
##  <a name="getdatasource"></a>COleServerItem::GetDataSource  
 Chiamare questa funzione per ottenere il [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto utilizzato per archiviare i formati di conversione che supporta l'applicazione server.  
  
```  
COleDataSource* GetDataSource();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `COleDataSource` oggetto utilizzato per archiviare i formati di conversione.  
  
### <a name="remarks"></a>Note  
 Se si desidera l'applicazione server per offrire dati in una varietà di formati durante il trasferimento di dati operazioni, registrare questi formati con il `COleDataSource` oggetto restituito da questa funzione. Ad esempio, se si desidera fornire un **CF_TEXT** rappresentazione dell'elemento OLE per gli Appunti o le operazioni di trascinamento e rilascio, registrare il formato con la `COleDataSource` oggetto restituito da questa funzione e quindi eseguire l'override di  **OnRenderXxxData** funzione membro per fornire i dati.  
  
##  <a name="getdocument"></a>COleServerItem::GetDocument  
 Chiamare questa funzione per ottenere un puntatore al documento che contiene l'elemento.  
  
```  
COleServerDoc* GetDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al documento che contiene l'elemento. **NULL** se l'elemento non fa parte di un documento.  
  
### <a name="remarks"></a>Note  
 In questo modo l'accesso al documento che è stato passato come argomento di un server di `COleServerItem` costruttore.  
  
##  <a name="getembedsourcedata"></a>COleServerItem::GetEmbedSourceData  
 Chiamare questa funzione per ottenere il **CF_OBJECTDESCRIPTOR** dati per un elemento OLE.  
  
```  
void GetEmbedSourceData(LPSTGMEDIUM lpStgMedium);
```  
  
### <a name="parameters"></a>Parametri  
 `lpStgMedium`  
 Puntatore al [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura che riceverà il **CF_OBJECTDESCRIPTOR** dati per l'elemento OLE.  
  
### <a name="remarks"></a>Note  
 Questo formato include dati nativi dell'elemento. È necessario aver implementato il `Serialize` funzione membro per questa funzione per il corretto funzionamento.  
  
 Il risultato può quindi essere aggiunti a un'origine dati con [CacheData](../../mfc/reference/coledatasource-class.md#cachedata). Questa funzione viene chiamata automaticamente da [COleServerItem::OnGetClipboardData](#ongetclipboarddata).  
  
 Per ulteriori informazioni, vedere [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) in Windows SDK.  
  
##  <a name="getitemname"></a>COleServerItem::GetItemName  
 Chiamare questa funzione per ottenere il nome dell'elemento.  
  
```  
const CString& GetItemName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Nome dell'elemento.  
  
### <a name="remarks"></a>Note  
 È in genere possibile chiamare questa funzione solo per gli elementi collegati.  
  
##  <a name="getlinksourcedata"></a>COleServerItem::GetLinkSourceData  
 Chiamare questa funzione per ottenere il `CF_LINKSOURCE` dati per un elemento OLE.  
  
```  
BOOL GetLinkSourceData(LPSTGMEDIUM lpStgMedium);
```  
  
### <a name="parameters"></a>Parametri  
 `lpStgMedium`  
 Puntatore al [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura che riceverà il `CF_LINKSOURCE` dati per l'elemento OLE.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo formato include il CLSID che indica il tipo dell'elemento OLE e le informazioni necessarie per individuare il documento contenente l'elemento OLE.  
  
 Il risultato è quindi possibile aggiungere a un'origine dati con [CacheData](../../mfc/reference/coledatasource-class.md#cachedata). Questa funzione viene chiamata automaticamente da [OnGetClipboardData](#ongetclipboarddata).  
  
 Per ulteriori informazioni, vedere [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) in Windows SDK.  
  
##  <a name="getobjectdescriptordata"></a>COleServerItem::GetObjectDescriptorData  
 Chiamare questa funzione per ottenere il **inseriti** dati per un elemento OLE.  
  
```  
void GetObjectDescriptorData(
    LPPOINT lpOffset,  
    LPSIZE lpSize,  
    LPSTGMEDIUM lpStgMedium);
```  
  
### <a name="parameters"></a>Parametri  
 `lpOffset`  
 Offset di clic del mouse nell'angolo superiore sinistro dell'elemento OLE. Può essere **NULL**.  
  
 `lpSize`  
 Dimensione dell'elemento OLE. Può essere **NULL**.  
  
 `lpStgMedium`  
 Puntatore al [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura che riceverà il **inseriti** dati per l'elemento OLE.  
  
### <a name="remarks"></a>Note  
 Le informazioni vengono copiate nel **STGMEDIUM** struttura a cui puntava `lpStgMedium`. Questo formato include le informazioni necessarie per la finestra di dialogo Incolla speciale.  
  
 Per ulteriori informazioni, vedere [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) in Windows SDK.  
  
##  <a name="isconnected"></a>COleServerItem::IsConnected  
 Chiamare questa funzione per verificare se l'elemento OLE è connesso.  
  
```  
BOOL IsConnected() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è collegato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un elemento OLE viene considerato connesso se uno o più contenitori contengano riferimenti all'elemento. Se il conteggio dei riferimenti è maggiore di 0 o se è un elemento incorporato, un elemento è collegato.  
  
##  <a name="islinkeditem"></a>COleServerItem::IsLinkedItem  
 Chiamare questa funzione per verificare se l'elemento OLE è un elemento collegato.  
  
```  
BOOL IsLinkedItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è un elemento collegato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un elemento collegato se l'elemento sia valido e non viene restituito nell'elenco del documento di elementi incorporati. Un elemento collegato potrebbe o potrebbe non essere connesso a un contenitore.  
  
 È comune per utilizzare la stessa classe per elementi collegati e incorporati. `IsLinkedItem`Consente di verificare gli elementi collegati si comportano in modo diverso rispetto agli elementi incorporati, anche se il codice più volte è comune.  
  
##  <a name="m_sizeextent"></a>COleServerItem::m_sizeExtent  
 Questo membro indica al server la quantità dell'oggetto è visibile nel documento contenitore.  
  
```  
CSize m_sizeExtent;  
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di [OnSetExtent](#onsetextent) imposta questo membro.  
  
##  <a name="notifychanged"></a>COleServerItem::NotifyChanged  
 Chiamare questa funzione dopo aver modificato l'elemento collegato.  
  
```  
void NotifyChanged(DVASPECT nDrawAspect = DVASPECT_CONTENT);
```  
  
### <a name="parameters"></a>Parametri  
 `nDrawAspect`  
 Valore compreso tra il `DVASPECT` enumerazione che indica quale aspetto dell'elemento OLE è stato modificato. Questo parametro può avere uno dei valori seguenti:  
  
- `DVASPECT_CONTENT`Elemento è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.  
  
- `DVASPECT_THUMBNAIL`Elemento viene visualizzato in una rappresentazione "anteprima" in modo che possono essere visualizzato in uno strumento di esplorazione.  
  
- `DVASPECT_ICON`Elemento è rappresentato da un'icona.  
  
- `DVASPECT_DOCPRINT`Elemento è rappresentato come se fosse stampato utilizzando il comando Stampa dal menu File.  
  
### <a name="remarks"></a>Note  
 Se un elemento contenitore è collegato al documento con un collegamento automatico, l'elemento viene aggiornato per riflettere le modifiche. Nelle applicazioni contenitore scritte utilizzando la libreria Microsoft Foundation Class [COleClientItem:: OnChange](../../mfc/reference/coleclientitem-class.md#onchange) viene chiamato in risposta.  
  
##  <a name="ondoverb"></a>COleServerItem::OnDoVerb  
 Chiamato dal framework per eseguire il verbo specificato.  
  
```  
virtual void OnDoVerb(LONG iVerb);
```  
  
### <a name="parameters"></a>Parametri  
 `iVerb`  
 Specifica il verbo da eseguire. Può essere uno dei seguenti:  
  
|Valore|Significato|Simbolo|  
|-----------|-------------|------------|  
|0|verbo primario|`OLEIVERB_PRIMARY`|  
|1|Verbo secondario|(Nessuno)|  
|- 1|Elemento visualizzato per la modifica|`OLEIVERB_SHOW`|  
|- 2|Modificare l'elemento in una finestra separata|`OLEIVERB_OPEN`|  
|- 3|Nascondere elementi|`OLEIVERB_HIDE`|  
  
 Il valore di-1 è in genere un alias per un altro verbo. Se la modifica di aprire non è supportata, lo stesso effetto di -1 -2. Per i valori aggiuntivi, vedere [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione contenitore è stato scritto con la libreria Microsoft Foundation Class, questa funzione viene chiamata quando la [COleClientItem::Activate](../../mfc/reference/coleclientitem-class.md#activate) funzione membro del corrispondente `COleClientItem` viene chiamato l'oggetto. L'implementazione predefinita chiama il [OnShow](#onshow) funzione membro se il verbo primario o `OLEIVERB_SHOW` è specificato, [OnOpen](#onopen) se il verbo secondario o `OLEIVERB_OPEN` viene specificato e [OnHide](#onhide) se `OLEIVERB_HIDE` è specificato. L'implementazione predefinita chiama `OnShow` se `iVerb` non è uno dei verbi elencati in precedenza.  
  
 Eseguire l'override di questa funzione se il verbo primario non viene visualizzato l'elemento. Ad esempio, se l'elemento è una registrazione audio e il verbo primario è Play, non è necessario visualizzare l'applicazione server per riprodurre l'elemento.  
  
 Per ulteriori informazioni, vedere [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) in Windows SDK.  
  
##  <a name="ondraw"></a>COleServerItem:: OnDraw  
 Chiamato dal framework per eseguire il rendering dell'elemento OLE in un metafile.  
  
```  
virtual BOOL OnDraw(
    CDC* pDC,  
    CSize& rSize) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Un puntatore al [CDC](../../mfc/reference/cdc-class.md) oggetto su cui disegnare l'elemento. Il contesto di visualizzazione viene connesso automaticamente al contesto di visualizzazione dell'attributo in modo è possibile chiamare funzioni di attributo, anche se potrebbe rendere il metafile specifico del dispositivo.  
  
 `rSize`  
 Le dimensioni, **HIMETRIC** unità, in cui disegnare metafile.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è stato correttamente creato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La rappresentazione del metafile dell'elemento OLE viene utilizzato per visualizzare l'elemento dell'applicazione contenitore. Se l'applicazione contenitore è stato scritto con la libreria Microsoft Foundation Class, il metafile verrà utilizzato il [disegnare](../../mfc/reference/coleclientitem-class.md#draw) funzione membro del corrispondente [COleClientItem](../../mfc/reference/coleclientitem-class.md) oggetto. Non vi è nessuna implementazione predefinita. È necessario eseguire l'override di questa funzione per disegnare l'elemento nel contesto di dispositivo specificato.  
  
##  <a name="ondrawex"></a>COleServerItem::OnDrawEx  
 Chiamato dal framework per tutti i disegni.  
  
```  
virtual BOOL OnDrawEx(
    CDC* pDC,  
    DVASPECT nDrawAspect,  
    CSize& rSize);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Un puntatore al [CDC](../../mfc/reference/cdc-class.md) oggetto su cui disegnare l'elemento. Il controller di dominio viene connesso automaticamente al controller di dominio dell'attributo in modo è possibile chiamare funzioni di attributo, anche se potrebbe rendere il metafile specifico del dispositivo.  
  
 `nDrawAspect`  
 Valore ricavato dall'enumerazione `DVASPECT`. Questo parametro può avere uno dei valori seguenti:  
  
- `DVASPECT_CONTENT`Elemento è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.  
  
- `DVASPECT_THUMBNAIL`Elemento viene visualizzato in una rappresentazione "anteprima" in modo che possono essere visualizzato in uno strumento di esplorazione.  
  
- `DVASPECT_ICON`Elemento è rappresentato da un'icona.  
  
- `DVASPECT_DOCPRINT`Elemento è rappresentato come se fosse stampato utilizzando il comando Stampa dal menu File.  
  
 `rSize`  
 Dimensione dell'elemento in **HIMETRIC** unità.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è stato correttamente creato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama `OnDraw` quando `DVASPECT` è uguale a `DVASPECT_CONTENT`; in caso contrario si verifica un errore.  
  
 Eseguire l'override di questa funzione per fornire dati di presentazione per gli aspetti diversi da `DVASPECT_CONTENT`, ad esempio `DVASPECT_ICON` o `DVASPECT_THUMBNAIL`.  
  
##  <a name="ongetclipboarddata"></a>COleServerItem::OnGetClipboardData  
 Chiamato dal framework per ottenere un `COleDataSource` oggetto contenente tutti i dati che potrebbero essere inseriti negli Appunti da una chiamata al [CopyToClipboard](#copytoclipboard) funzione membro.  
  
```  
virtual COleDataSource* OnGetClipboardData(
    BOOL bIncludeLink,  
    LPPOINT lpOffset,  
    LPSIZE lpSize);
```  
  
### <a name="parameters"></a>Parametri  
 `bIncludeLink`  
 Impostare questa proprietà su **TRUE** se i dati di collegamento devono essere copiati negli Appunti. Impostare questa proprietà su **FALSE** se l'applicazione server non supporta i collegamenti.  
  
 `lpOffset`  
 L'offset del cursore del mouse dall'origine dell'oggetto in pixel.  
  
 `lpSize`  
 Le dimensioni dell'oggetto in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [COleDataSource](../../mfc/reference/coledatasource-class.md) oggetto contenente i dati negli Appunti.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama [GetClipboardData](#getclipboarddata).  
  
##  <a name="ongetextent"></a>COleServerItem::OnGetExtent  
 Chiamato dal framework per recuperare la dimensione, in **HIMETRIC** unità, dell'elemento OLE.  
  
```  
virtual BOOL OnGetExtent(
    DVASPECT nDrawAspect,  
    CSize& rSize);
```  
  
### <a name="parameters"></a>Parametri  
 `nDrawAspect`  
 Specifica l'aspetto dell'elemento OLE cui limiti devono essere recuperate. Questo parametro può avere uno dei valori seguenti:  
  
- `DVASPECT_CONTENT`Elemento è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.  
  
- `DVASPECT_THUMBNAIL`Elemento viene visualizzato in una rappresentazione "anteprima" in modo che possono essere visualizzato in uno strumento di esplorazione.  
  
- `DVASPECT_ICON`Elemento è rappresentato da un'icona.  
  
- `DVASPECT_DOCPRINT`Elemento è rappresentato come se fosse stampato utilizzando il comando Stampa dal menu File.  
  
 `rSize`  
 Riferimento a un `CSize` oggetto che riceverà le dimensioni dell'elemento OLE.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione contenitore è stato scritto con la libreria Microsoft Foundation Class, questa funzione viene chiamata quando la [GetExtent](../../mfc/reference/coleclientitem-class.md#getextent) funzione membro del corrispondente `COleClientItem` viene chiamato l'oggetto. L'implementazione predefinita non esegue alcuna operazione. È necessario implementarlo manualmente. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si gestisce una richiesta per le dimensioni dell'elemento OLE.  
  
##  <a name="onhide"></a>COleServerItem::OnHide  
 Chiamato dal framework per nascondere l'elemento OLE.  
  
```  
virtual void OnHide();
```  
  
### <a name="remarks"></a>Note  
 Le chiamate predefinito **COleServerDoc::OnShowDocument (FALSE)**. La funzione notifica al contenitore che l'elemento OLE è stata nascosta. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando nascondere un elemento OLE.  
  
##  <a name="oninitfromdata"></a>COleServerItem::OnInitFromData  
 Chiamato dal framework per inizializzare un elemento OLE usando il contenuto del `pDataObject`.  
  
```  
virtual BOOL OnInitFromData(
    COleDataObject* pDataObject,  
    BOOL bCreation);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Puntatore a un oggetto dati OLE che contengono dati in diversi formati per l'inizializzazione dell'elemento OLE.  
  
 `bCreation`  
 **TRUE** se la funzione viene chiamata per inizializzare un elemento OLE viene creato da un'applicazione contenitore. **FALSE** se la funzione viene chiamata per sostituire il contenuto di un elemento OLE già esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se `bCreation` è **TRUE**, questa funzione viene chiamata se un contenitore implementa Inserisci nuovo oggetto in base alla selezione corrente. I dati selezionati viene utilizzati per creare il nuovo elemento OLE. Ad esempio, quando la selezione di un intervallo di celle in un foglio di calcolo e quindi utilizzando il nuovo oggetto Insert per creare un grafico in base ai valori dell'intervallo selezionato. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per scegliere un formato accettabile tra quelli offerti da `pDataObject` e inizializzare l'elemento OLE in base ai dati forniti. Si tratta di un avanzato sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [IOleObject::InitFromData](http://msdn.microsoft.com/library/windows/desktop/ms688510) in Windows SDK.  
  
##  <a name="onopen"></a>COleServerItem::OnOpen  
 Chiamato dal framework per visualizzare l'elemento OLE in un'istanza separata dell'applicazione server, anziché sul posto.  
  
```  
virtual void OnOpen();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita attiva la finestra cornice prima visualizzazione del documento che contiene l'elemento OLE. Se l'applicazione è un server ridotto, l'implementazione predefinita mostra la finestra principale. La funzione notifica al contenitore che l'elemento OLE è stato aperto.  
  
 Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si apre un elemento OLE. Questo avviene in genere con gli elementi collegati in cui si desidera impostare l'opzione del collegamento quando viene aperto.  
  
 Per ulteriori informazioni, vedere [IOleClientSite::OnShowWindow](http://msdn.microsoft.com/library/windows/desktop/ms688658) in Windows SDK.  
  
##  <a name="onqueryupdateitems"></a>COleServerItem::OnQueryUpdateItems  
 Chiamato dal framework per determinare se eventuali elementi collegati nel documento server corrente non sono aggiornati.  
  
```  
virtual BOOL OnQueryUpdateItems();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento contiene elementi che richiedono aggiornamenti. 0 se tutti gli elementi siano aggiornati.  
  
### <a name="remarks"></a>Note  
 Se il documento di origine è stato modificato ma l'elemento collegato non è stato aggiornato per riflettere le modifiche nel documento un elemento non è aggiornato.  
  
##  <a name="onrenderdata"></a>COleServerItem::OnRenderData  
 Chiamato dal framework per recuperare i dati nel formato specificato.  
  
```  
virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,  
    LPSTGMEDIUM lpStgMedium);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Punta al [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 `lpStgMedium`  
 Punta a un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura in cui i dati da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato non è uno inseriti in precedenza il `COleDataSource` utilizzando il [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) o [DelayRenderFileData](../../mfc/reference/coledatasource-class.md#delayrenderfiledata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione chiama [OnRenderFileData](#onrenderfiledata) o [OnRenderGlobalData](#onrenderglobaldata), rispettivamente, se il supporto di archiviazione fornito è un file o memoria. Se viene specificato nessuno di questi formati, l'implementazione predefinita restituisce 0 e non esegue alcuna operazione.  
  
 Se `lpStgMedium` ->  *tymed* è **TYMED_NULL**, **STGMEDIUM** deve allocata e compilato come specificato da *lpFormatEtc -> TYMED*. In caso contrario **TYMED_NULL**, **STGMEDIUM** deve essere compilato con i dati.  
  
 Si tratta di un avanzato sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, si desidera eseguire l'override in una delle altre versioni di questa funzione invece. Se i dati sono di piccole dimensioni e di dimensioni fisse, eseguire l'override `OnRenderGlobalData`. Se i dati in un file o sono di dimensioni variabili, eseguire l'override `OnRenderFileData`.  
  
 Per ulteriori informazioni, vedere [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431), [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812), [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177), e [TYMED](http://msdn.microsoft.com/library/windows/desktop/ms691227) in Windows SDK.  
  
##  <a name="onrenderfiledata"></a>COleServerItem::OnRenderFileData  
 Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione è un file.  
  
```  
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,  
    CFile* pFile);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Punta al [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 `pFile`  
 Punta a un `CFile` oggetto in cui i dati da sottoporre a rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato non è uno inseriti in precedenza il `COleDataSource` utilizzando il [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente **FALSE**.  
  
 Si tratta di un avanzato sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, si potrebbe voler eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o sono di dimensioni variabili, eseguire l'override [OnRenderFileData](#onrenderfiledata).  
  
 Per ulteriori informazioni, vedere [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) in Windows SDK.  
  
##  <a name="onrenderglobaldata"></a>COleServerItem::OnRenderGlobalData  
 Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è la memoria globale.  
  
```  
virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,  
    HGLOBAL* phGlobal);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Punta al [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 `phGlobal`  
 Punta a un handle per la memoria globale in cui i dati sono da restituire. Se non è stata allocata memoria, questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato non è uno inseriti in precedenza il `COleDataSource` utilizzando il [DelayRenderData](../../mfc/reference/coledatasource-class.md#delayrenderdata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente **FALSE**.  
  
 Se `phGlobal` è **NULL**, quindi un nuovo `HGLOBAL` deve essere allocata e restituiti in `phGlobal`. In caso contrario, il `HGLOBAL` specificato da `phGlobal` deve essere riempito con i dati. La quantità di dati inseriti nel `HGLOBAL` non deve superare le dimensioni correnti del blocco di memoria. Inoltre, il blocco non può essere riallocato a una dimensione maggiore.  
  
 Si tratta di un avanzato sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, si desidera eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o sono di dimensioni variabili, eseguire l'override [OnRenderFileData](#onrenderfiledata).  
  
 Per ulteriori informazioni, vedere [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) in Windows SDK.  
  
##  <a name="onsetcolorscheme"></a>COleServerItem::OnSetColorScheme  
 Chiamato dal framework per specificare una tavolozza di colori da utilizzare quando si modifica l'elemento OLE.  
  
```  
virtual BOOL OnSetColorScheme(const LOGPALETTE* lpLogPalette);
```  
  
### <a name="parameters"></a>Parametri  
 `lpLogPalette`  
 Puntatore a un Windows [LOGPALETTE](http://msdn.microsoft.com/library/windows/desktop/dd145040) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se viene utilizzata la tavolozza dei colori in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione contenitore è stato scritto utilizzando la libreria Microsoft Foundation Class, questa funzione viene chiamata quando la [IOleObject::SetColorScheme](http://msdn.microsoft.com/library/windows/desktop/ms683971) funzione dei corrispondenti `COleClientItem` viene chiamato l'oggetto. L'implementazione predefinita restituisce **FALSE**. Eseguire l'override di questa funzione se si desidera utilizzare la tavolozza consigliata. Non è necessario che l'applicazione server utilizza la tavolozza suggerita.  
  
 Per ulteriori informazioni, vedere [IOleObject::SetColorScheme](http://msdn.microsoft.com/library/windows/desktop/ms683971) in Windows SDK.  
  
##  <a name="onsetdata"></a>COleServerItem::OnSetData  
 Chiamato dal framework per sostituire i dati dell'elemento OLE con i dati specificati.  
  
```  
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,  
    LPSTGMEDIUM lpStgMedium,  
    BOOL bRelease);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Puntatore a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato dei dati.  
  
 `lpStgMedium`  
 Puntatore a un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura in cui risiedono i dati.  
  
 `bRelease`  
 Indica che è la proprietà del supporto di archiviazione dopo il completamento della chiamata di funzione. Il chiamante può decidere chi è responsabile del rilascio di risorse allocate per conto di supporto di archiviazione. Il chiamante viene eseguita impostando `bRelease`. Se `bRelease` è diverso da zero, l'elemento server acquisisce la proprietà, liberando il supporto dopo aver terminato di usarlo. Quando `bRelease` è 0, il chiamante mantiene la proprietà e l'elemento server può utilizzare il supporto di archiviazione solo per la durata della chiamata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'elemento server non accetta la proprietà dei dati fino a quando non è stato ottenuto. Vale a dire non acquisire la proprietà se viene restituito 0. Se l'origine dati acquisisce la proprietà, il supporto di archiviazione liberate chiamando il [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) (funzione).  
  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per sostituire i dati dell'elemento OLE con i dati specificati. Si tratta di un avanzato sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812), [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177), e [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) in Windows SDK.  
  
##  <a name="onsetextent"></a>COleServerItem::OnSetExtent  
 Chiamato dal framework per individuare l'elemento OLE la quantità di spazio disponibile nel documento contenitore.  
  
```  
virtual BOOL OnSetExtent(
    DVASPECT nDrawAspect,  
    const CSize& size);
```  
  
### <a name="parameters"></a>Parametri  
 `nDrawAspect`  
 Specifica l'aspetto dell'elemento OLE cui limiti vengono specificate. Questo parametro può avere uno dei valori seguenti:  
  
- `DVASPECT_CONTENT`Elemento è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.  
  
- `DVASPECT_THUMBNAIL`Elemento viene visualizzato in una rappresentazione "anteprima" in modo che possono essere visualizzato in uno strumento di esplorazione.  
  
- `DVASPECT_ICON`Elemento è rappresentato da un'icona.  
  
- `DVASPECT_DOCPRINT`Elemento è rappresentato come se fosse stampato utilizzando il comando Stampa dal menu File.  
  
 `size`  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) struttura che specifica la nuova dimensione dell'elemento OLE.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione contenitore è stato scritto con la libreria Microsoft Foundation Class, questa funzione viene chiamata quando la [SetExtent](../../mfc/reference/coleclientitem-class.md#setextent) funzione membro del corrispondente `COleClientItem` viene chiamato l'oggetto. L'implementazione predefinita imposta il [m_sizeExtent](#m_sizeextent) membro alla dimensione specificata se `nDrawAspect` è `DVASPECT_CONTENT`; in caso contrario viene restituito 0. Eseguire l'override di questa funzione per eseguire un'elaborazione speciale quando si modificano le dimensioni dell'elemento.  
  
##  <a name="onshow"></a>COleServerItem::OnShow  
 Chiamato dal framework per indicare all'applicazione server per visualizzare l'elemento OLE sul posto.  
  
```  
virtual void OnShow();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata quando l'utente dell'applicazione contenitore crea un elemento o viene eseguito un verbo, ad esempio modifica, che richiede l'elemento da visualizzare. L'implementazione predefinita tenta di attivazione sul posto. Se l'operazione non riesce, la funzione chiama la `OnOpen` funzione membro per visualizzare l'elemento OLE in una finestra separata.  
  
 Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando viene visualizzato un elemento OLE.  
  
##  <a name="onupdate"></a>COleServerItem::OnUpdate  
 Chiamato dal framework quando un elemento è stato modificato.  
  
```  
virtual void OnUpdate(
    COleServerItem* pSender,  
    LPARAM lHint,  
    CObject* pHint,  
    DVASPECT nDrawAspect);
```  
  
### <a name="parameters"></a>Parametri  
 `pSender`  
 Puntatore all'elemento che il documento modificato. Può essere **NULL**.  
  
 `lHint`  
 Contiene informazioni sulla modifica.  
  
 `pHint`  
 Puntatore a un oggetto di archiviazione di informazioni sulla modifica.  
  
 `nDrawAspect`  
 Valore ricavato dall'enumerazione `DVASPECT`. Questo parametro può avere uno dei valori seguenti:  
  
- `DVASPECT_CONTENT`Elemento è rappresentato in modo tale che possono essere visualizzato come un oggetto incorporato all'interno del relativo contenitore.  
  
- `DVASPECT_THUMBNAIL`Elemento viene visualizzato in una rappresentazione "anteprima" in modo che possono essere visualizzato in uno strumento di esplorazione.  
  
- `DVASPECT_ICON`Elemento è rappresentato da un'icona.  
  
- `DVASPECT_DOCPRINT`Elemento è rappresentato come se fosse stampato utilizzando il comando Stampa dal menu File.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama [NotifyChanged](#notifychanged), indipendentemente dal mittente o hint.  
  
##  <a name="onupdateitems"></a>COleServerItem::OnUpdateItems  
 Chiamato dal framework per aggiornare tutti gli elementi nel documento server.  
  
```  
virtual void OnUpdateItems();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama [UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink) per tutti i `COleClientItem` gli oggetti del documento.  
  
##  <a name="setitemname"></a>COleServerItem::SetItemName  
 Chiamare questa funzione quando si crea un elemento collegato per impostare il relativo nome.  
  
```  
void SetItemName(LPCTSTR lpszItemName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszItemName`  
 Puntatore al nuovo nome dell'elemento.  
  
### <a name="remarks"></a>Note  
 Il nome deve essere univoco all'interno del documento. Quando un'applicazione server viene chiamata per modificare un elemento collegato, l'applicazione utilizza questo nome per trovare l'elemento. Non è necessario chiamare questa funzione per gli elementi incorporati.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Classe CDocItem](../../mfc/reference/cdocitem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)   
 [Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)   
 [Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)
