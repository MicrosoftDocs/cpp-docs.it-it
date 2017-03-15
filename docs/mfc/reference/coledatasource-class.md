---
title: Classe COleDataSource | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleDataSource
dev_langs:
- C++
helpviewer_keywords:
- drag and drop [C++], MFC support
- Clipboard [C++], OLE support
- uniform data transfer
- OLE [C++], uniform data transfer
- Clipboard [C++], MFC support
- OLE Clipboard [C++], support
- IDataObject, MFC encapsulation
- data transfer [C++], OLE
- COleDataSource class
- OLE data transfer [C++]
- uniform data transfer, OLE
ms.assetid: 02c8ee7d-8e10-4463-8613-bb2a0305ca69
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
ms.openlocfilehash: cd8f30c3edd7d26b254e7f4a6f153ab0b2fc96da
ms.lasthandoff: 02/24/2017

---
# <a name="coledatasource-class"></a>Classe COleDataSource
Funge da cache in cui un'applicazione inserisce i dati che fornirà durante le operazioni di trasferimento dei dati, ad esempio gli Appunti o le operazioni di trascinamento e rilascio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDataSource : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDataSource::COleDataSource](#coledatasource)|Costruisce un oggetto `COleDataSource`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CacheData](#cachedata)|Sono disponibili dati in un formato specificato mediante un **STGMEDIUM** struttura.|  
|[COleDataSource:: CacheGlobalData](#cacheglobaldata)|Sono disponibili dati in un formato specificato mediante un `HGLOBAL`.|  
|[COleDataSource:: DelayRenderData](#delayrenderdata)|Sono disponibili dati in un formato specificato utilizzando il rendering ritardato.|  
|[COleDataSource:: DelayRenderFileData](#delayrenderfiledata)|Sono disponibili dati in un formato specificato in un `CFile` puntatore.|  
|[COleDataSource::DelaySetData](#delaysetdata)|Chiamato per ogni formato supportato in `OnSetData`.|  
|[COleDataSource:: DoDragDrop](#dodragdrop)|Esegue operazioni di trascinamento e rilascio con un'origine dati.|  
|[COleDataSource::Empty](#empty)|Svuota il `COleDataSource` oggetto dei dati.|  
|[COleDataSource::FlushClipboard](#flushclipboard)|Esegue il rendering di tutti i dati negli Appunti.|  
|[COleDataSource::GetClipboardOwner](#getclipboardowner)|Verifica che i dati contenuti negli Appunti sono ancora presente.|  
|[:: OnRenderData](#onrenderdata)|Recupera i dati come parte del rendering ritardato.|  
|[:: OnRenderFileData](#onrenderfiledata)|Recupera i dati in un `CFile` come parte del rendering ritardato.|  
|[COleDataSource::OnRenderGlobalData](#onrenderglobaldata)|Recupera i dati in un `HGLOBAL` come parte del rendering ritardato.|  
|[COleDataSource::OnSetData](#onsetdata)|Chiamato per sostituire i dati di `COleDataSource` oggetto.|  
|[SetClipboard](#setclipboard)|Posizioni un `COleDataSource` oggetto negli Appunti.|  
  
## <a name="remarks"></a>Note  
 È possibile creare direttamente le origini dati OLE. In alternativa, il [COleClientItem](../../mfc/reference/coleclientitem-class.md) e [COleServerItem](../../mfc/reference/coleserveritem-class.md) classi creano origini dati OLE in risposta alla loro `CopyToClipboard` e `DoDragDrop` funzioni membro. Vedere [COleServerItem::CopyToClipboard](../../mfc/reference/coleserveritem-class.md#copytoclipboard) per una breve descrizione. Eseguire l'override di `OnGetClipboardData` funzione membro di classe dell'elemento server o di elemento del client per aggiungere altri formati degli Appunti per i dati nell'origine dati OLE creato per il `CopyToClipboard` o `DoDragDrop` funzione membro.  
  
 Ogni volta che si desidera preparare i dati per un trasferimento, è necessario creare un oggetto di questa classe e inserirvi i dati utilizzando il metodo più appropriato per i dati. Il modo in cui viene inserito in un'origine dati è influenzato direttamente da se i dati vengono forniti immediatamente (rendering immediato) o su richiesta (rendering posticipato). Per ogni formato degli Appunti in cui vengono forniti dati passando il formato degli Appunti da utilizzare (e facoltativa [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura), chiamare [DelayRenderData](#delayrenderdata).  
  
 Per ulteriori informazioni sulle origini dati e trasferimento dei dati, vedere l'articolo [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md). Inoltre, l'articolo [argomenti relativi agli Appunti](../../mfc/clipboard.md) descrive il meccanismo degli Appunti OLE.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDataSource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="a-namecachedataa--coledatasourcecachedata"></a><a name="cachedata"></a>CacheData  
 Chiamare questa funzione per specificare un formato in cui dati sono disponibile durante le operazioni di trasferimento.  
  
```  
void CacheData(
    CLIPFORMAT cfFormat,  
    LPSTGMEDIUM lpStgMedium,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cfFormat`  
 Il formato degli Appunti in cui i dati vanno offerto. Questo parametro può essere uno dei formati predefiniti negli Appunti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 `lpStgMedium`  
 Punta a un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura che contiene i dati nel formato specificato.  
  
 `lpFormatEtc`  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui i dati vanno offerto. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. In questo caso **NULL**, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 È necessario fornire i dati, poiché questa funzione fornisce utilizzando rendering immediato. I dati viene memorizzato nella cache fino a quando necessario.  
  
 Fornire i dati utilizzando un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura. È inoltre possibile utilizzare il `CacheGlobalData` è sufficientemente piccola da trasferire in modo efficiente mediante la funzione membro se la quantità di dati viene fornito un `HGLOBAL`.  
  
 Dopo la chiamata a `CacheData` il **ptd** membro del `lpFormatEtc` e il contenuto di `lpStgMedium` sono di proprietà dall'oggetto dati, non dal chiamante.  
  
 Per utilizzare il rendering ritardato, chiamare il [DelayRenderData](#delayrenderdata) o [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per ulteriori informazioni sul rendering posticipato come gestiti da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per ulteriori informazioni, vedere il [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) strutture di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *.*  
  
 Per ulteriori informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecacheglobaldataa--coledatasourcecacheglobaldata"></a><a name="cacheglobaldata"></a>COleDataSource:: CacheGlobalData  
 Chiamare questa funzione per specificare un formato in cui dati sono disponibile durante le operazioni di trasferimento.  
  
```  
void CacheGlobalData(
    CLIPFORMAT cfFormat,  
    HGLOBAL hGlobal,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cfFormat`  
 Il formato degli Appunti in cui i dati vanno offerto. Questo parametro può essere uno dei formati predefiniti negli Appunti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 *hGlobal*  
 Handle per il blocco di memoria globale che contiene i dati nel formato specificato.  
  
 `lpFormatEtc`  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui i dati vanno offerto. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. In questo caso **NULL**, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 Questa funzione fornisce i dati utilizzando il rendering immediato, è quindi necessario fornire i dati quando si chiama la funzione. i dati viene memorizzato nella cache fino a quando necessario. Utilizzare il `CacheData` funzione membro se si specificano una grande quantità di dati o se si necessita di un supporto di archiviazione strutturata.  
  
 Per utilizzare il rendering ritardato, chiamare il [DelayRenderData](#delayrenderdata) o [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per ulteriori informazioni sul rendering posticipato come gestiti da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per ulteriori informazioni, vedere il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *.*  
  
 Per ulteriori informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecoledatasourcea--coledatasourcecoledatasource"></a><a name="coledatasource"></a>COleDataSource::COleDataSource  
 Costruisce un oggetto `COleDataSource`.  
  
```  
COleDataSource();
```  
  
##  <a name="a-namedelayrenderdataa--coledatasourcedelayrenderdata"></a><a name="delayrenderdata"></a>COleDataSource:: DelayRenderData  
 Chiamare questa funzione per specificare un formato in cui dati sono disponibile durante le operazioni di trasferimento.  
  
```  
void DelayRenderData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cfFormat`  
 Il formato degli Appunti in cui i dati vanno offerto. Questo parametro può essere uno dei formati predefiniti negli Appunti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 `lpFormatEtc`  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui i dati vanno offerto. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. In questo caso **NULL**, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 Questa funzione fornisce i dati utilizzando il rendering ritardato, pertanto i dati non vengono forniti immediatamente. Il [routine OnRenderData](#onrenderdata) o [OnRenderGlobalData](#onrenderglobaldata) chiamata la funzione membro per richiedere i dati.  
  
 Utilizzare questa funzione se non si intende fornire i dati tramite un `CFile` oggetto. Se si intende fornire i dati tramite un `CFile` dell'oggetto, chiamare il [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per ulteriori informazioni sul rendering posticipato come gestiti da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per utilizzare il rendering immediato, chiamare il [CacheData](#cachedata) o [CacheGlobalData](#cacheglobaldata) funzione membro.  
  
 Per ulteriori informazioni, vedere il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *.*  
  
 Per ulteriori informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedelayrenderfiledataa--coledatasourcedelayrenderfiledata"></a><a name="delayrenderfiledata"></a>COleDataSource:: DelayRenderFileData  
 Chiamare questa funzione per specificare un formato in cui dati sono disponibile durante le operazioni di trasferimento.  
  
```  
void DelayRenderFileData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cfFormat`  
 Il formato degli Appunti in cui i dati vanno offerto. Questo parametro può essere uno dei formati predefiniti negli Appunti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 `lpFormatEtc`  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui i dati vanno offerto. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. In questo caso **NULL**, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 Questa funzione fornisce i dati utilizzando il rendering ritardato, pertanto i dati non vengono forniti immediatamente. Il [OnRenderFileData](#onrenderfiledata) chiamata la funzione membro per richiedere i dati.  
  
 Utilizzare questa funzione se si intende utilizzare un `CFile` oggetto per fornire i dati. Se non si desidera utilizzare un `CFile` dell'oggetto, chiamare il [DelayRenderData](#delayrenderdata) funzione membro. Per ulteriori informazioni sul rendering posticipato come gestiti da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per utilizzare il rendering immediato, chiamare il [CacheData](#cachedata) o [CacheGlobalData](#cacheglobaldata) funzione membro.  
  
 Per ulteriori informazioni, vedere il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *.*  
  
 Per ulteriori informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedelaysetdataa--coledatasourcedelaysetdata"></a><a name="delaysetdata"></a>COleDataSource::DelaySetData  
 Chiamare questa funzione per supportare la modifica del contenuto dell'origine dati.  
  
```  
void DelaySetData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cfFormat`  
 Il formato degli Appunti in cui si desidera portare i dati. Questo parametro può essere uno dei formati predefiniti negli Appunti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 `lpFormatEtc`  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui i dati da sostituire. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. In questo caso **NULL**, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 [OnSetData](#onsetdata) verrà chiamato dal framework in questo caso. Viene utilizzato solo quando il framework restituisce l'origine dati da [COleServerItem::GetDataSource](../../mfc/reference/coleserveritem-class.md#getdatasource). Se `DelaySetData` non viene chiamato, il `OnSetData` funzione non verrà mai chiamata. `DelaySetData`deve essere chiamato per ogni negli Appunti o **FORMATETC** formato supportate.  
  
 Per ulteriori informazioni, vedere il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *.*  
  
 Per ulteriori informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedodragdropa--coledatasourcedodragdrop"></a><a name="dodragdrop"></a>COleDataSource:: DoDragDrop  
 Chiamare il `DoDragDrop` funzione membro per eseguire un'operazione di trascinamento e rilascio per questa origine dati, in genere un [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown) gestore.  
  
```  
DROPEFFECT DoDragDrop(
    DWORD dwEffects = DROPEFFECT_COPY|DROPEFFECT_MOVE|DROPEFFECT_LINK,  
    LPCRECT lpRectStartDrag = NULL,  
    COleDropSource* pDropSource = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `dwEffects`  
 Trascinamento e rilascio operazioni consentite su questa origine dati. Può essere uno o più delle seguenti operazioni:  
  
- `DROPEFFECT_COPY`Impossibile eseguire un'operazione di copia.  
  
- `DROPEFFECT_MOVE`Impossibile eseguire un'operazione di spostamento.  
  
- `DROPEFFECT_LINK`È stato possibile stabilire un collegamento dai dati eliminati i dati originali.  
  
- `DROPEFFECT_SCROLL`Indica che un'operazione di scorrimento di trascinamento possa verificarsi.  
  
 `lpRectStartDrag`  
 Puntatore al rettangolo che definisce dove viene avviato effettivamente l'operazione di trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.  
  
 *pDropSource*  
 Punta a un'origine di trascinamento. Se **NULL** quindi un'implementazione predefinita di [COleDropSource](../../mfc/reference/coledropsource-class.md) verrà utilizzato.  
  
### <a name="return-value"></a>Valore restituito  
 Effetto generato dall'operazione di trascinamento e rilascio; in caso contrario `DROPEFFECT_NONE` se l'operazione non inizia mai perché l'utente ha rilasciato il pulsante del mouse prima di lasciare il rettangolo specificato.  
  
### <a name="remarks"></a>Note  
 L'operazione di trascinamento e rilascio non viene avviato immediatamente. È in attesa fino a quando il cursore del mouse lascia il rettangolo specificato da `lpRectStartDrag` o fino a quando un numero specificato di millisecondi trascorsi. Se `lpRectStartDrag` è **NULL**, le dimensioni del rettangolo sono&1; pixel.  
  
 L'intervallo di tempo viene specificato dall'impostazione della chiave del Registro di sistema. È possibile modificare l'intervallo di tempo chiamando [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) o [CWinApp:: Writeprofileint](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica l'intervallo di tempo, viene utilizzato un valore predefinito pari a 200 millisecondi. Trascinare ritardo dell'ora verrà archiviato come segue:  
  
-   Ritarda ora di Windows NT trascinare verrà archiviato in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.  
  
-   Ritarda ora di Windows 3. x trascinare verrà archiviato nel file WIN. File INI, la sezione [Windows}.  
  
-   Ritarda ora di Windows 95/98 trascinare viene archiviato in una versione memorizzata nella cache di WIN. INI.  
  
 Per ulteriori informazioni su come trascinare ritardato informazioni vengono archiviate nel Registro di sistema o. File INI, vedere [WriteProfileString](http://msdn.microsoft.com/library/windows/desktop/ms725504) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni, vedere l'articolo [trascinamento della selezione: implementazione di un'origine eliminare](../../mfc/drag-and-drop-implementing-a-drop-source.md).  
  
##  <a name="a-nameemptya--coledatasourceempty"></a><a name="empty"></a>COleDataSource::Empty  
 Chiamare questa funzione per svuotare il `COleDataSource` oggetto dei dati.  
  
```  
void Empty();
```  
  
### <a name="remarks"></a>Note  
 Entrambi memorizzati nella cache e i formati di rendering ritardo sono svuotati in modo da poter essere riutilizzati.  
  
 Per ulteriori informazioni, vedere [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameflushclipboarda--coledatasourceflushclipboard"></a><a name="flushclipboard"></a>COleDataSource::FlushClipboard  
 Esegue il rendering dei dati negli Appunti, che consentono di incollare dati dagli Appunti dopo la chiusura dell'applicazione.  
  
```  
static void PASCAL FlushClipboard();
```  
  
### <a name="remarks"></a>Note  
 Utilizzare [SetClipboard](#setclipboard) per inserire dati negli Appunti.  
  
##  <a name="a-namegetclipboardownera--coledatasourcegetclipboardowner"></a><a name="getclipboardowner"></a>COleDataSource::GetClipboardOwner  
 Determina se i dati negli Appunti sono stato modificato dal [SetClipboard](#setclipboard) dall'ultima chiamata a e, in caso affermativo, identifica il proprietario corrente.  
  
```  
static COleDataSource* PASCAL GetClipboardOwner();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'origine dati attualmente presenti negli Appunti o **NULL** se non c'è niente negli Appunti o se l'applicazione chiamante non appartiene negli Appunti.  
  
##  <a name="a-nameonrenderdataa--coledatasourceonrenderdata"></a><a name="onrenderdata"></a>:: OnRenderData  
 Chiamato dal framework per recuperare i dati nel formato specificato.  
  
```  
virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,  
    LPSTGMEDIUM lpStgMedium);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Indichi il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 `lpStgMedium`  
 Punta a un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura in cui i dati da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato è uno inseriti in precedenza il `COleDataSource` utilizzando il [DelayRenderData](#delayrenderdata) o [DelayRenderFileData](#delayrenderfiledata) una funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione chiamerà [OnRenderFileData](#onrenderfiledata) o [OnRenderGlobalData](#onrenderglobaldata) se il supporto di archiviazione fornito è un file o della memoria, rispettivamente. Se nessuno di questi formati vengono forniti, l'implementazione predefinita restituisce 0 e non eseguire alcuna operazione. Per ulteriori informazioni sul rendering posticipato come gestiti da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Se `lpStgMedium` ->  *tymed* è **TYMED_NULL**, **STGMEDIUM** deve essere allocato e compilato come specificato da *lpFormatEtc-> tymed*. Se non è **TYMED_NULL**, **STGMEDIUM** deve essere compilato con i dati.  
  
 Questa è un' sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, si desidera eseguire l'override in una delle altre versioni di questa funzione invece. Se i dati sono piccolo e ha dimensione fissa, eseguire l'override `OnRenderGlobalData`. Se i dati in un file o di dimensioni variabili, eseguire l'override `OnRenderFileData`.  
  
 Per ulteriori informazioni, vedere il [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) strutture, il [TYMED](http://msdn.microsoft.com/library/windows/desktop/ms691227) tipo di enumerazione, e [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *.*  
  
##  <a name="a-nameonrenderfiledataa--coledatasourceonrenderfiledata"></a><a name="onrenderfiledata"></a>:: OnRenderFileData  
 Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è un file.  
  
```  
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,  
    CFile* pFile);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Indichi il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 `pFile`  
 Punta a un [CFile](../../mfc/reference/cfile-class.md) oggetto in cui i dati da sottoporre a rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato è uno inseriti in precedenza il `COleDataSource` utilizzando il [DelayRenderData](#delayrenderdata) una funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente **FALSE**.  
  
 Questa è un' sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, è possibile eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o di dimensioni variabili, eseguire l'override `OnRenderFileData`. Per ulteriori informazioni sul rendering posticipato come gestiti da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per ulteriori informazioni, vedere il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura e [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *.*  
  
##  <a name="a-nameonrenderglobaldataa--coledatasourceonrenderglobaldata"></a><a name="onrenderglobaldata"></a>COleDataSource::OnRenderGlobalData  
 Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è la memoria globale.  
  
```  
virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,  
    HGLOBAL* phGlobal);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Indichi il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 `phGlobal`  
 Punta a un handle per la memoria globale in cui sono possibile restituire i dati. Se uno non è ancora stato allocato, questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato è uno inseriti in precedenza il `COleDataSource` utilizzando il [DelayRenderData](#delayrenderdata) una funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente **FALSE**.  
  
 Se `phGlobal` è **NULL**, quindi un nuovo `HGLOBAL` deve essere allocata e restituiti in `phGlobal`. In caso contrario, il `HGLOBAL` specificato da `phGlobal` deve essere compilato con i dati. La quantità di dati inseriti nel `HGLOBAL` non deve superare la dimensione corrente del blocco di memoria. Inoltre, il blocco non può essere riallocato a una dimensione superiore.  
  
 Questa è un' sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, si desidera eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o di dimensioni variabili, eseguire l'override [OnRenderFileData](#onrenderfiledata). Per ulteriori informazioni sul rendering posticipato come gestiti da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per ulteriori informazioni, vedere il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura e [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *.*  
  
##  <a name="a-nameonsetdataa--coledatasourceonsetdata"></a><a name="onsetdata"></a>COleDataSource::OnSetData  
 Chiamato dal framework di impostare o sostituire i dati di `COleDataSource` oggetto nel formato specificato.  
  
```  
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,  
    LPSTGMEDIUM lpStgMedium,  
    BOOL bRelease);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Indichi il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui dati vengono sostituiti.  
  
 `lpStgMedium`  
 Punta al [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura che contiene i dati che andrà a sostituire il contenuto corrente di `COleDataSource` oggetto.  
  
 `bRelease`  
 Indica chi è responsabile del supporto di archiviazione dopo il completamento della chiamata di funzione. Il chiamante può decidere chi è responsabile del rilascio delle risorse allocate per conto del supporto di archiviazione. Il chiamante esegue questa operazione impostando `bRelease`. Se `bRelease` è diverso da zero, l'origine dati diventa proprietario, liberando il supporto al termine dell'utilizzo. Quando `bRelease` è 0, il chiamante mantiene la proprietà e l'origine dati può utilizzare il supporto di archiviazione solo per la durata della chiamata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'origine dati non assumere la proprietà dei dati fino a quando non è stato ottenuto. Vale a dire assumere la proprietà non se `OnSetData` restituisce 0. Se l'origine dati diventa proprietario, il supporto di archiviazione liberate chiamando il [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) (funzione).  
  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per sostituire i dati nel formato specificato. Questa è un' sottoponibile a override.  
  
 Per ulteriori informazioni, vedere il [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) strutture e [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) e [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) delle funzioni di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *.*  
  
##  <a name="a-namesetclipboarda--coledatasourcesetclipboard"></a><a name="setclipboard"></a>SetClipboard  
 Inserisce i dati contenuti nel `COleDataSource` oggetto negli Appunti dopo la chiamata a una delle seguenti funzioni: [CacheData](#cachedata), [CacheGlobalData](#cacheglobaldata), [DelayRenderData](#delayrenderdata), o [DelayRenderFileData](#delayrenderfiledata).  
  
```  
void SetClipboard();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDataObject](../../mfc/reference/coledataobject-class.md)

