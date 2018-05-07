---
title: Classe COleDataObject | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleDataObject
- AFXOLE/COleDataObject
- AFXOLE/COleDataObject::COleDataObject
- AFXOLE/COleDataObject::Attach
- AFXOLE/COleDataObject::AttachClipboard
- AFXOLE/COleDataObject::BeginEnumFormats
- AFXOLE/COleDataObject::Detach
- AFXOLE/COleDataObject::GetData
- AFXOLE/COleDataObject::GetFileData
- AFXOLE/COleDataObject::GetGlobalData
- AFXOLE/COleDataObject::GetNextFormat
- AFXOLE/COleDataObject::IsDataAvailable
- AFXOLE/COleDataObject::Release
dev_langs:
- C++
helpviewer_keywords:
- COleDataObject [MFC], COleDataObject
- COleDataObject [MFC], Attach
- COleDataObject [MFC], AttachClipboard
- COleDataObject [MFC], BeginEnumFormats
- COleDataObject [MFC], Detach
- COleDataObject [MFC], GetData
- COleDataObject [MFC], GetFileData
- COleDataObject [MFC], GetGlobalData
- COleDataObject [MFC], GetNextFormat
- COleDataObject [MFC], IsDataAvailable
- COleDataObject [MFC], Release
ms.assetid: d1cc84be-2e1c-4bb3-a8a0-565eb08aaa34
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e9cd159597440dfb55bbe8abe147623096cdf449
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="coledataobject-class"></a>Classe COleDataObject
Utilizzata nei trasferimenti di dati per il recupero in diversi formati dagli Appunti, mediante il trascinamento della selezione o da un elemento OLE incorporato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDataObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDataObject::COleDataObject](#coledataobject)|Costruisce un oggetto `COleDataObject`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDataObject::Attach](#attach)|Collega l'oggetto dati OLE specificato per il `COleDataObject`.|  
|[COleDataObject::AttachClipboard](#attachclipboard)|Collega l'oggetto dati negli Appunti.|  
|[COleDataObject](#beginenumformats)|Prepara per uno o più successive `GetNextFormat` chiamate.|  
|[COleDataObject::Detach](#detach)|Disconnette l'oggetto associato `IDataObject` oggetto.|  
|[COleDataObject::GetData](#getdata)|Copia i dati dall'oggetto dati OLE collegato in un formato specificato.|  
|[COleDataObject::GetFileData](#getfiledata)|Copia i dati dall'oggetto dati OLE collegato in un `CFile` puntatore nel formato specificato.|  
|[COleDataObject::GetGlobalData](#getglobaldata)|Copia i dati dall'oggetto dati OLE collegato in un `HGLOBAL` nel formato specificato.|  
|[COleDataObject::GetNextFormat](#getnextformat)|Restituisce il formato di dati successivo disponibile.|  
|[COleDataObject:: IsDataAvailable](#isdataavailable)|Controlla se i dati sono disponibili in un formato specificato.|  
|[COleDataObject::Release](#release)|Scollega e rilascia l'oggetto associato `IDataObject` oggetto.|  
  
## <a name="remarks"></a>Note  
 `COleDataObject` non dispone di una classe basa.  
  
 Questi tipi di trasferimenti di dati includono un'origine e una destinazione. L'origine dati viene implementato come un oggetto del [COleDataSource](../../mfc/reference/coledatasource-class.md) classe. Ogni volta che un'applicazione di destinazione dispone di dati eliminati in essa contenuti o viene chiesto di eseguire un'operazione di Incolla dagli Appunti, un oggetto del `COleDataObject` classe deve essere creata.  
  
 Questa classe consente di determinare la presenza di dati in un formato specificato. È possibile enumerare i formati di dati disponibili o verificare se è disponibile un determinato formato e quindi recuperare i dati nel formato preferito. Il recupero degli oggetti può essere eseguita in diversi modi, incluso l'uso di un [CFile](../../mfc/reference/cfile-class.md), un `HGLOBAL`, o un **STGMEDIUM** struttura.  
  
 Per ulteriori informazioni, vedere il [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura in Windows SDK.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti dati nell'applicazione, vedere l'articolo [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `COleDataObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="attach"></a>  COleDataObject::Attach  
 Chiamare questa funzione per associare il `COleDataObject` con un oggetto dati OLE.  
  
```  
void Attach(
    LPDATAOBJECT lpDataObject,  
    BOOL bAutoRelease = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *lpDataObject*  
 Punta a un oggetto dati OLE.  
  
 `bAutoRelease`  
 **TRUE** se l'oggetto dati OLE deve essere rilasciata quando il `COleDataObject` oggetto viene eliminato; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) in Windows SDK.  
  
##  <a name="attachclipboard"></a>  COleDataObject::AttachClipboard  
 Chiamare questa funzione per collegare l'oggetto dati che è attualmente negli Appunti per la `COleDataObject` oggetto.  
  
```  
BOOL AttachClipboard();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Chiamare questa funzione blocca gli Appunti fino al rilascio di questo oggetto dati. L'oggetto dati viene rilasciato nel distruttore per la `COleDataObject`. Per ulteriori informazioni, vedere [OpenClipboard](http://msdn.microsoft.com/library/windows/desktop/ms649048) e [CloseClipboard](http://msdn.microsoft.com/library/windows/desktop/ms649035) nella documentazione di Win32.  
  
##  <a name="beginenumformats"></a>  COleDataObject  
 Chiamare questa funzione per la preparazione per le chiamate successive a `GetNextFormat` per il recupero di un elenco dei formati di dati dall'elemento.  
  
```  
void BeginEnumFormats();
```  
  
### <a name="remarks"></a>Note  
 Dopo una chiamata a `BeginEnumFormats`, la posizione del primo formato supportato da questo oggetto dati viene archiviata. Le chiamate successive a `GetNextFormat` permette di enumerare l'elenco dei formati disponibili nell'oggetto dati.  
  
 Per verificare la disponibilità dei dati in un formato specifico, utilizzare [COleDataObject:: IsDataAvailable](#isdataavailable).  
  
 Per ulteriori informazioni, vedere [IDataObject::EnumFormatEtc](http://msdn.microsoft.com/library/windows/desktop/ms683979) in Windows SDK.  
  
##  <a name="coledataobject"></a>  COleDataObject::COleDataObject  
 Costruisce un oggetto `COleDataObject`.  
  
```  
COleDataObject();
```  
  
### <a name="remarks"></a>Note  
 Una chiamata a [COleDataObject::Attach](#attach) o [COleDataObject::AttachClipboard](#attachclipboard) devono essere eseguite prima di chiamare altri `COleDataObject` funzioni.  
  
> [!NOTE]
>  Poiché uno dei parametri per i gestori di trascinamento e rilascio è un puntatore a un `COleDataObject`, non è necessario chiamare questo costruttore per il supporto di trascinamento della selezione.  
  
##  <a name="detach"></a>  COleDataObject::Detach  
 Chiamare questa funzione per scollegare il `COleDataObject` oggetto dall'oggetto dati OLE associato senza rilasciare l'oggetto dati.  
  
```  
LPDATAOBJECT Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto dati OLE che è stato scollegato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdata"></a>  COleDataObject::GetData  
 Chiamare questa funzione per recuperare dati dall'elemento nel formato specificato.  
  
```  
BOOL GetData(
    CLIPFORMAT cfFormat,  
    LPSTGMEDIUM lpStgMedium,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cfFormat`  
 Il formato in cui sono necessario restituire dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 `lpStgMedium`  
 Punta a un [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) struttura che riceverà i dati.  
  
 `lpFormatEtc`  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui sono necessario restituire dati. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se è **NULL**, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431), [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812), e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) in Windows SDK.  
  
 Per ulteriori informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in Windows SDK.  
  
##  <a name="getfiledata"></a>  COleDataObject::GetFileData  
 Chiamare questa funzione per creare un `CFile` o `CFile`-oggetto derivato e per recuperare i dati nel formato specificato in un `CFile` puntatore.  
  
```  
CFile* GetFileData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cfFormat`  
 Il formato in cui sono necessario restituire dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 `lpFormatEtc`  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui sono necessario restituire dati. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se è **NULL**, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al nuovo `CFile` o `CFile`-oggetto derivata contenente i dati se l'esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 A seconda del supporto di dati vengono archiviati in, il tipo effettivo a cui fa riferimento il valore restituito può essere `CFile`, `CSharedFile`, o `COleStreamFile`.  
  
> [!NOTE]
>  Il `CFile` oggetto a cui accede il valore restituito di questa funzione è di proprietà dal chiamante. È responsabilità del chiamante **eliminare** il `CFile` oggetto, quindi chiudere il file.  
  
 Per ulteriori informazioni, vedere [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) in Windows SDK.  
  
 Per ulteriori informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in Windows SDK.  
  
##  <a name="getglobaldata"></a>  COleDataObject::GetGlobalData  
 Chiamare questa funzione per allocare un blocco di memoria globale e recuperare i dati nel formato specificato in un `HGLOBAL`.  
  
```  
HGLOBAL GetGlobalData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cfFormat`  
 Il formato in cui sono necessario restituire dati. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 `lpFormatEtc`  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato in cui sono necessario restituire dati. Specificare un valore per questo parametro se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se è **NULL**, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del blocco di memoria globale che contiene i dati se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) in Windows SDK.  
  
 Per ulteriori informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in Windows SDK.  
  
##  <a name="getnextformat"></a>  COleDataObject::GetNextFormat  
 Chiamare questa funzione più volte per ottenere tutti i formati disponibili per il recupero dei dati dall'elemento.  
  
```  
BOOL GetNextFormat(LPFORMATETC lpFormatEtc);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFormatEtc`  
 Punta al [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che riceve le informazioni di formato, al termine della chiamata di funzione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un altro formato è disponibile. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Dopo una chiamata a [COleDataObject](#beginenumformats), la posizione del primo formato supportato da questo oggetto dati viene archiviata. Le chiamate successive a `GetNextFormat` permette di enumerare l'elenco dei formati disponibili nell'oggetto dati. Utilizzare queste funzioni per elencare i formati disponibili.  
  
 Per verificare la disponibilità di un determinato formato, chiamare [COleDataObject:: IsDataAvailable](#isdataavailable).  
  
 Per ulteriori informazioni, vedere [IEnumXXXX::Next](https://msdn.microsoft.com/library/ms695273.aspx) in Windows SDK.  
  
##  <a name="isdataavailable"></a>  COleDataObject:: IsDataAvailable  
 Chiamare questa funzione per determinare se un particolare formato è disponibile per il recupero dei dati dall'elemento OLE.  
  
```  
BOOL IsDataAvailable(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cfFormat`  
 Il formato di dati degli Appunti per essere utilizzato nella struttura a cui puntava `lpFormatEtc`. Questo parametro può essere uno dei formati degli Appunti predefiniti o il valore restituito da Windows native [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) (funzione).  
  
 `lpFormatEtc`  
 Punta a un [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura che descrive il formato desiderato. Specificare un valore per questo parametro solo se si desidera specificare ulteriori informazioni sul formato il formato degli Appunti specificato da `cfFormat`. Se è **NULL**, vengono utilizzati i valori predefiniti per gli altri campi di **FORMATETC** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i dati sono disponibili nel formato specificato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile prima di chiamare `GetData`, `GetFileData`, o `GetGlobalData`.  
  
 Per ulteriori informazioni, vedere [IDataObject::QueryGetData](http://msdn.microsoft.com/library/windows/desktop/ms680637) e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) in Windows SDK.  
  
 Per ulteriori informazioni, vedere [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CRichEditView::QueryAcceptData](../../mfc/reference/cricheditview-class.md#queryacceptdata).  
  
##  <a name="release"></a>  COleDataObject::Release  
 Chiamare questa funzione per rilasciare la proprietà del [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) oggetto che era precedentemente associato il `COleDataObject` oggetto.  
  
```  
void Release();
```  
  
### <a name="remarks"></a>Note  
 Il `IDataObject` è stato associato il `COleDataObject` chiamando **collegamento** o `AttachClipboard` in modo esplicito o dal framework. Se il `bAutoRelease` parametro di **collegamento** è **FALSE**, `IDataObject` oggetto non verrà rilasciato. In questo caso, il chiamante è responsabile del rilascio di `IDataObject` chiamando [IUnknown:: Release](http://msdn.microsoft.com/library/windows/desktop/ms682317).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDataSource](../../mfc/reference/coledatasource-class.md)   
 [Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)   
 [Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)
