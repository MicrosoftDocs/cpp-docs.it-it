---
title: Classe COleDataSource | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleDataSource
- AFXOLE/COleDataSource
- AFXOLE/COleDataSource::COleDataSource
- AFXOLE/COleDataSource::CacheData
- AFXOLE/COleDataSource::CacheGlobalData
- AFXOLE/COleDataSource::DelayRenderData
- AFXOLE/COleDataSource::DelayRenderFileData
- AFXOLE/COleDataSource::DelaySetData
- AFXOLE/COleDataSource::DoDragDrop
- AFXOLE/COleDataSource::Empty
- AFXOLE/COleDataSource::FlushClipboard
- AFXOLE/COleDataSource::GetClipboardOwner
- AFXOLE/COleDataSource::OnRenderData
- AFXOLE/COleDataSource::OnRenderFileData
- AFXOLE/COleDataSource::OnRenderGlobalData
- AFXOLE/COleDataSource::OnSetData
- AFXOLE/COleDataSource::SetClipboard
dev_langs:
- C++
helpviewer_keywords:
- COleDataSource [MFC], COleDataSource
- COleDataSource [MFC], CacheData
- COleDataSource [MFC], CacheGlobalData
- COleDataSource [MFC], DelayRenderData
- COleDataSource [MFC], DelayRenderFileData
- COleDataSource [MFC], DelaySetData
- COleDataSource [MFC], DoDragDrop
- COleDataSource [MFC], Empty
- COleDataSource [MFC], FlushClipboard
- COleDataSource [MFC], GetClipboardOwner
- COleDataSource [MFC], OnRenderData
- COleDataSource [MFC], OnRenderFileData
- COleDataSource [MFC], OnRenderGlobalData
- COleDataSource [MFC], OnSetData
- COleDataSource [MFC], SetClipboard
ms.assetid: 02c8ee7d-8e10-4463-8613-bb2a0305ca69
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c3b5060c850a1fcdba089b732d019f958f2e7410
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37038555"
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
|[CacheData](#cachedata)|Sono disponibili i dati in un formato specificato tramite un **STGMEDIUM** struttura.|  
|[COleDataSource:: CacheGlobalData](#cacheglobaldata)|Sono disponibili dati in un formato specificato mediante un `HGLOBAL`.|  
|[COleDataSource:: DelayRenderData](#delayrenderdata)|Sono disponibili i dati in un formato con rendering ritardato.|  
|[COleDataSource:: DelayRenderFileData](#delayrenderfiledata)|Sono disponibili i dati in un formato specificato in un `CFile` puntatore.|  
|[COleDataSource::DelaySetData](#delaysetdata)|Chiamata eseguita per tutti i formati che sono supportato in `OnSetData`.|  
|[COleDataSource:: DoDragDrop](#dodragdrop)|Esegue operazioni di trascinamento e rilascio con un'origine dati.|  
|[COleDataSource::Empty](#empty)|Svuota il `COleDataSource` oggetto dei dati.|  
|[COleDataSource::FlushClipboard](#flushclipboard)|Esegue il rendering di tutti i dati negli Appunti.|  
|[COleDataSource::GetClipboardOwner](#getclipboardowner)|Verifica che i dati inseriti negli Appunti siano ancora presenti.|  
|[:: OnRenderData](#onrenderdata)|Recupera i dati come parte del rendering ritardato.|  
|[:: OnRenderFileData](#onrenderfiledata)|Recupera i dati in un `CFile` come parte del rendering ritardato.|  
|[COleDataSource::OnRenderGlobalData](#onrenderglobaldata)|Recupera i dati in un `HGLOBAL` come parte del rendering ritardato.|  
|[COleDataSource::OnSetData](#onsetdata)|Chiamata eseguita per sostituire i dati di `COleDataSource` oggetto.|  
|[SetClipboard](#setclipboard)|Posizioni un `COleDataSource` oggetto negli Appunti.|  
  
## <a name="remarks"></a>Note  
 È possibile creare origini dati OLE direttamente. In alternativa, il [COleClientItem](../../mfc/reference/coleclientitem-class.md) e [COleServerItem](../../mfc/reference/coleserveritem-class.md) classi creano origini dati OLE in risposta alla loro `CopyToClipboard` e `DoDragDrop` funzioni membro. Vedere [COleServerItem::CopyToClipboard](../../mfc/reference/coleserveritem-class.md#copytoclipboard) per una breve descrizione. Eseguire l'override di `OnGetClipboardData` funzione membro di classe della elemento elemento o server del client per aggiungere altri formati degli Appunti per i dati nell'origine dati OLE creato per il `CopyToClipboard` o `DoDragDrop` funzione membro.  
  
 Ogni volta che si desidera preparare i dati per un trasferimento, è necessario creare un oggetto di questa classe e compilarlo con i dati mediante il metodo più appropriato per i dati. Il modo in cui viene inserito in un'origine dati è influenzato direttamente da se i dati vengono forniti immediatamente (rendering immediato) oppure su richiesta (rendering ritardato). Per ogni formato degli Appunti in cui vengono forniti dati passando il formato degli Appunti da usare (ed eventualmente [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura), chiamare [DelayRenderData](#delayrenderdata).  
  
 Per ulteriori informazioni sulle origini dati e trasferimento dei dati, vedere l'articolo [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md). Inoltre, l'articolo [Appunti argomenti](../../mfc/clipboard.md) descrive il meccanismo degli Appunti OLE.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDataSource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="cachedata"></a>  CacheData  
 Chiamare questa funzione per specificare un formato in cui i dati viene offerto durante le operazioni di trasferimento.  
  
```  
void CacheData(
    CLIPFORMAT cfFormat,  
    LPSTGMEDIUM lpStgMedium,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *cfFormat*  
 Il formato degli Appunti in cui si desidera essere offerti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 *lpStgMedium*  
 Punta a un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura che contiene i dati nel formato specificato.  
  
 *lpFormatEtc*  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui deve essere offerti i dati. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se si tratta **NULL**, vengono utilizzati valori predefiniti per gli altri campi il **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 È necessario fornire i dati, poiché questa funzione fornisce il supporto tramite immediato per il rendering. I dati viene memorizzato nella cache finché non necessari.  
  
 Fornire i dati utilizzando un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura. È anche possibile usare il `CacheGlobalData` funzione membro se la quantità di dati fornito è sufficientemente piccolo da trasferire in modo efficiente utilizzando un `HGLOBAL`.  
  
 Dopo la chiamata a `CacheData` il **ptd** appartenente `lpFormatEtc` e il contenuto del `lpStgMedium` sono proprietà dell'oggetto dati, non dal chiamante.  
  
 Per utilizzare il rendering ritardato, chiamare il [DelayRenderData](#delayrenderdata) oppure [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per altre informazioni, vedere la [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) strutture in Windows SDK.  
  
 Per altre informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in Windows SDK.  
  
##  <a name="cacheglobaldata"></a>  COleDataSource:: CacheGlobalData  
 Chiamare questa funzione per specificare un formato in cui i dati viene offerto durante le operazioni di trasferimento.  
  
```  
void CacheGlobalData(
    CLIPFORMAT cfFormat,  
    HGLOBAL hGlobal,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *cfFormat*  
 Il formato degli Appunti in cui si desidera essere offerti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 *hGlobal*  
 Handle per il blocco di memoria globale che contiene i dati nel formato specificato.  
  
 *lpFormatEtc*  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui deve essere offerti i dati. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se si tratta **NULL**, vengono utilizzati valori predefiniti per gli altri campi il **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 Questa funzione fornisce i dati utilizzando il rendering immediato, pertanto è necessario fornire i dati quando si chiama la funzione. i dati viene memorizzato nella cache finché non necessari. Utilizzare il `CacheData` funzione membro se viene fornito una grande quantità di dati o se è necessario un supporto di archiviazione strutturata.  
  
 Per utilizzare il rendering ritardato, chiamare il [DelayRenderData](#delayrenderdata) oppure [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per altre informazioni, vedere la [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura in Windows SDK.  
  
 Per altre informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in Windows SDK.  
  
##  <a name="coledatasource"></a>  COleDataSource::COleDataSource  
 Costruisce un oggetto `COleDataSource`.  
  
```  
COleDataSource();
```  
  
##  <a name="delayrenderdata"></a>  COleDataSource:: DelayRenderData  
 Chiamare questa funzione per specificare un formato in cui i dati viene offerto durante le operazioni di trasferimento.  
  
```  
void DelayRenderData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *cfFormat*  
 Il formato degli Appunti in cui si desidera essere offerti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 *lpFormatEtc*  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui deve essere offerti i dati. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se si tratta **NULL**, vengono utilizzati valori predefiniti per gli altri campi il **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 Questa funzione fornisce i dati utilizzando il rendering ritardato, in modo che i dati non vengono forniti immediatamente. Il [routine OnRenderData](#onrenderdata) oppure [OnRenderGlobalData](#onrenderglobaldata) funzione membro viene chiamata per richiedere i dati.  
  
 Utilizzare questa funzione se non si desidera fornire ai dati tramite un `CFile` oggetto. Se si intende fornire i dati tramite un `CFile` dell'oggetto, chiamare il [DelayRenderFileData](#delayrenderfiledata) funzione membro. Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per usare il rendering immediato, chiamare il [CacheData](#cachedata) oppure [CacheGlobalData](#cacheglobaldata) funzione membro.  
  
 Per altre informazioni, vedere la [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura in Windows SDK.  
  
 Per altre informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in Windows SDK.  
  
##  <a name="delayrenderfiledata"></a>  COleDataSource:: DelayRenderFileData  
 Chiamare questa funzione per specificare un formato in cui i dati viene offerto durante le operazioni di trasferimento.  
  
```  
void DelayRenderFileData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *cfFormat*  
 Il formato degli Appunti in cui si desidera essere offerti i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 *lpFormatEtc*  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui deve essere offerti i dati. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se si tratta **NULL**, vengono utilizzati valori predefiniti per gli altri campi il **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 Questa funzione fornisce i dati utilizzando il rendering ritardato, in modo che i dati non vengono forniti immediatamente. Il [OnRenderFileData](#onrenderfiledata) funzione membro viene chiamata per richiedere i dati.  
  
 Utilizzare questa funzione se si intende utilizzare un `CFile` oggetto per fornire i dati. Se non si intende utilizzare un `CFile` dell'oggetto, chiamare il [DelayRenderData](#delayrenderdata) funzione membro. Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per usare il rendering immediato, chiamare il [CacheData](#cachedata) oppure [CacheGlobalData](#cacheglobaldata) funzione membro.  
  
 Per altre informazioni, vedere la [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura in Windows SDK.  
  
 Per altre informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in Windows SDK.  
  
##  <a name="delaysetdata"></a>  COleDataSource::DelaySetData  
 Chiamare questa funzione per supportare la modifica del contenuto dell'origine dati.  
  
```  
void DelaySetData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *cfFormat*  
 Il formato degli Appunti in cui si desidera salvare i dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 *lpFormatEtc*  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui i dati da sostituire. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato oltre il formato degli Appunti specificato da *cfFormat*. Se si tratta **NULL**, vengono utilizzati valori predefiniti per gli altri campi il **FORMATETC** struttura.  
  
### <a name="remarks"></a>Note  
 [OnSetData](#onsetdata) verrà chiamato dal framework quando ciò si verifica. Viene utilizzato solo quando il framework viene restituito l'origine dati dalla [COleServerItem::GetDataSource](../../mfc/reference/coleserveritem-class.md#getdatasource). Se `DelaySetData` non viene chiamato, il `OnSetData` funzione non verrà mai chiamata. `DelaySetData` deve essere chiamato per ogni negli Appunti o **FORMATETC** formato supportate.  
  
 Per altre informazioni, vedere la [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura in Windows SDK.  
  
 Per altre informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in Windows SDK.  
  
##  <a name="dodragdrop"></a>  COleDataSource:: DoDragDrop  
 Chiamare il `DoDragDrop` funzione membro per eseguire un'operazione di trascinamento e rilascio per questa origine dati, in genere un [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#onlbuttondown) gestore.  
  
```  
DROPEFFECT DoDragDrop(
    DWORD dwEffects = DROPEFFECT_COPY|DROPEFFECT_MOVE|DROPEFFECT_LINK,  
    LPCRECT lpRectStartDrag = NULL,  
    COleDropSource* pDropSource = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *dwEffects*  
 Trascinamento e rilascio operazioni consentite su questa origine dati. Può essere uno o più delle operazioni seguenti:  
  
- `DROPEFFECT_COPY` È stato possibile eseguire un'operazione di copia.  
  
- `DROPEFFECT_MOVE` È stato possibile eseguire un'operazione di spostamento.  
  
- `DROPEFFECT_LINK` È stato possibile stabilire un collegamento dai dati ignorati per i dati originali.  
  
- `DROPEFFECT_SCROLL` Indica che possa verificarsi un'operazione di scorrimento di trascinamento.  
  
 *lpRectStartDrag*  
 Puntatore al rettangolo che definisce dove viene avviato effettivamente l'operazione di trascinamento. Per ulteriori informazioni, vedere la sezione Osservazioni successiva.  
  
 *pDropSource*  
 Punta a un'origine di rilascio. Se **NULL** quindi un'implementazione predefinita di [COleDropSource](../../mfc/reference/coledropsource-class.md) verrà utilizzato.  
  
### <a name="return-value"></a>Valore restituito  
 Effetto generato dall'operazione di trascinamento e rilascio; in caso contrario `DROPEFFECT_NONE` se l'operazione non inizia mai perché l'utente ha rilasciato il pulsante del mouse prima di lasciare il rettangolo specificato.  
  
### <a name="remarks"></a>Note  
 L'operazione di trascinamento e rilascio non viene avviato immediatamente. Attende che il cursore del mouse viene spostato il rettangolo specificato da *lpRectStartDrag* o fino a quando un numero specificato di millisecondi trascorsi. Se *lpRectStartDrag* viene **NULL**, le dimensioni del rettangolo sono 1 pixel.  
  
 Il tempo di ritardo viene specificato dall'impostazione della chiave del Registro di sistema. È possibile modificare il tempo di ritardo chiamando [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#writeprofilestring) oppure [CWinApp:: Writeprofileint](../../mfc/reference/cwinapp-class.md#writeprofileint). Se non si specifica l'intervallo di tempo, viene utilizzato un valore predefinito pari a 200 millisecondi. Trascinare Ritarda ora verrà archiviato come segue:  
  
-   Ritarda ora di Windows NT trascinamento viene archiviato in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.  
  
-   Ritarda ora di Windows 3.x trascinamento viene archiviato nel file WIN. File INI, la sezione [Windows}.  
  
-   Ritarda ora di Windows 95/98 trascinamento viene archiviato in una versione memorizzata nella cache di WIN. INI.  
  
 Per altre informazioni su come trascinare ritardo informazioni vengono archiviate nel Registro di sistema o di. File. INI, vedere [WriteProfileString](http://msdn.microsoft.com/library/windows/desktop/ms725504) in Windows SDK.  
  
 Per altre informazioni, vedere l'articolo [trascinamento della selezione: implementazione di un'origine Drop](../../mfc/drag-and-drop-implementing-a-drop-source.md).  
  
##  <a name="empty"></a>  COleDataSource::Empty  
 Chiamare questa funzione per svuotare il `COleDataSource` oggetto dei dati.  
  
```  
void Empty();
```  
  
### <a name="remarks"></a>Note  
 Entrambi memorizzati nella cache e formati di rendering di ritardo vengano svuotati in modo da poter essere riutilizzati.  
  
 Per altre informazioni, vedere [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) in Windows SDK.  
  
##  <a name="flushclipboard"></a>  COleDataSource::FlushClipboard  
 Esegue il rendering dei dati negli Appunti, quindi consente di incollare i dati dagli Appunti dopo la chiusura dell'applicazione.  
  
```  
static void PASCAL FlushClipboard();
```  
  
### <a name="remarks"></a>Note  
 Uso [SetClipboard](#setclipboard) inserire dati negli Appunti.  
  
##  <a name="getclipboardowner"></a>  COleDataSource::GetClipboardOwner  
 Determina se i dati negli Appunti sono cambiati dopo [SetClipboard](#setclipboard) dall'ultima chiamata e, in caso affermativo, identifica il proprietario corrente.  
  
```  
static COleDataSource* PASCAL GetClipboardOwner();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'origine dati attualmente negli Appunti, o **NULL** se non c'è niente negli Appunti o se non sono di proprietà negli Appunti dall'applicazione chiamante.  
  
##  <a name="onrenderdata"></a>  :: OnRenderData  
 Chiamato dal framework per recuperare i dati nel formato specificato.  
  
```  
virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,  
    LPSTGMEDIUM lpStgMedium);
```  
  
### <a name="parameters"></a>Parametri  
 *lpFormatEtc*  
 Punta ai [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 *lpStgMedium*  
 Punta a un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura in cui i dati da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato è inserito in precedenza nel `COleDataSource` dell'oggetto utilizzando il [DelayRenderData](#delayrenderdata) o [DelayRenderFileData](#delayrenderfiledata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione chiamerà [OnRenderFileData](#onrenderfiledata) oppure [OnRenderGlobalData](#onrenderglobaldata) se il supporto di archiviazione fornito è un file o memoria, rispettivamente. Se nessuno di questi formati vengono forniti, l'implementazione predefinita restituisce 0 e non eseguire alcuna operazione. Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Se *lpStgMedium*-> *tymed* è **TYMED_NULL**, la **STGMEDIUM** deve essere allocata e compilato come specificato da *lpFormatEtc -> tymed*. In caso contrario **TYMED_NULL**, la **STGMEDIUM** deve essere compilato con i dati.  
  
 Si tratta di un'avanzata sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, è possibile eseguire l'override in una delle altre versioni di questa funzione invece. Se i dati sono piccole e ha dimensione fissa, eseguire l'override `OnRenderGlobalData`. Se i dati in un file o sono di dimensioni variabili, eseguire l'override `OnRenderFileData`.  
  
 Per altre informazioni, vedere la [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) strutture, il [TYMED](http://msdn.microsoft.com/library/windows/desktop/ms691227) tipo di enumerazione e [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) in Windows SDK.  
  
##  <a name="onrenderfiledata"></a>  :: OnRenderFileData  
 Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è un file.  
  
```  
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,  
    CFile* pFile);
```  
  
### <a name="parameters"></a>Parametri  
 *lpFormatEtc*  
 Punta ai [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 *pFile*  
 Punta a un [CFile](../../mfc/reference/cfile-class.md) oggetto in cui i dati da sottoporre a rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato è inserito in precedenza nel `COleDataSource` dell'oggetto utilizzando il [DelayRenderData](#delayrenderdata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente **FALSE**.  
  
 Si tratta di un'avanzata sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, è possibile eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o sono di dimensioni variabili, eseguire l'override `OnRenderFileData`. Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per altre informazioni, vedere la [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura e [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) in Windows SDK.  
  
##  <a name="onrenderglobaldata"></a>  COleDataSource::OnRenderGlobalData  
 Chiamato dal framework per recuperare i dati nel formato specificato quando il supporto di archiviazione specificato è la memoria globale.  
  
```  
virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,  
    HGLOBAL* phGlobal);
```  
  
### <a name="parameters"></a>Parametri  
 *lpFormatEtc*  
 Punta ai [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui vengono richieste informazioni.  
  
 *phGlobal*  
 Punta a un handle per la memoria globale in cui i dati sono da restituire. Se uno non è ancora stato allocato, questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il formato specificato è inserito in precedenza nel `COleDataSource` dell'oggetto utilizzando il [DelayRenderData](#delayrenderdata) funzione membro per il rendering ritardato. L'implementazione predefinita di questa funzione restituisce semplicemente **FALSE**.  
  
 Se *phGlobal* viene **NULL**, quindi un nuovo `HGLOBAL` deve essere allocata e restituita *phGlobal*. In caso contrario, il `HGLOBAL` specificato da *phGlobal* deve essere riempito con i dati. La quantità di dati inseriti nella `HGLOBAL` non deve superare le dimensioni correnti del blocco di memoria. Inoltre, il blocco non può essere riallocato a una dimensione maggiore.  
  
 Si tratta di un'avanzata sottoponibile a override. Eseguire l'override di questa funzione per fornire i dati nel formato richiesto e supporto. A seconda dei dati, è possibile eseguire l'override in una delle altre versioni di questa funzione invece. Se si desidera gestire più supporti di archiviazione, eseguire l'override [routine OnRenderData](#onrenderdata). Se i dati in un file o sono di dimensioni variabili, eseguire l'override [OnRenderFileData](#onrenderfiledata). Per ulteriori informazioni sul rendering ritardato come gestito da MFC, vedere l'articolo [oggetti dati e origini dati: manipolazione](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per altre informazioni, vedere la [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura e [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) in Windows SDK.  
  
##  <a name="onsetdata"></a>  COleDataSource::OnSetData  
 Chiamato dal framework per impostare o sostituire i dati di `COleDataSource` oggetto nel formato specificato.  
  
```  
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,  
    LPSTGMEDIUM lpStgMedium,  
    BOOL bRelease);
```  
  
### <a name="parameters"></a>Parametri  
 *lpFormatEtc*  
 Punta ai [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che specifica il formato in cui i dati viene sostituiti.  
  
 *lpStgMedium*  
 Punta ai [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura che contiene i dati che andrà a sostituire il contenuto corrente del `COleDataSource` oggetto.  
  
 *bRelease*  
 Indica chi ha la proprietà del supporto di archiviazione dopo aver completato la chiamata di funzione. Il chiamante può decidere chi è responsabile del rilascio di risorse allocate per conto di supporto di archiviazione. Il chiamante a tale scopo l'impostazione *bRelease*. Se *bRelease* è diverso da zero, l'origine dei dati acquisisce la proprietà, liberando il supporto dopo aver terminato di usarlo. Quando si *bRelease* è 0, il chiamante mantiene la proprietà e l'origine dati può utilizzare il supporto di archiviazione solo per la durata della chiamata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'origine dati non assumere la proprietà dei dati fino a quando non è stato ottenuto. Vale a dire, non viene preso la proprietà se `OnSetData` restituisce 0. Se l'origine dei dati acquisisce la proprietà, il supporto di archiviazione liberate chiamando il [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) (funzione).  
  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questa funzione per sostituire i dati nel formato specificato. Si tratta di un'avanzata sottoponibile a override.  
  
 Per altre informazioni, vedere la [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) strutture e i [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) e [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) funzioni in Windows SDK.  
  
##  <a name="setclipboard"></a>  SetClipboard  
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
