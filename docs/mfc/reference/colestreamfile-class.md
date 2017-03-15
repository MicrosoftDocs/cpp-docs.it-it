---
title: Classe COleStreamFile | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleStreamFile
dev_langs:
- C++
helpviewer_keywords:
- data streams [C++]
- streams [C++], OLE
- data streams [C++], OLE
- structured storage in OLE
- OLE structured storage [C++]
- OLE [C++], streams of data
- COleStreamFile class
ms.assetid: e4f93698-e17c-4a18-a7c0-4b4df8eb4d93
caps.latest.revision: 22
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
ms.openlocfilehash: 0840d365f4179da0ad680256688eaf9484cb3cd8
ms.lasthandoff: 02/24/2017

---
# <a name="colestreamfile-class"></a>Classe COleStreamFile
Rappresenta un flusso di dati ( `IStream`) in un file composito come parte di un archivio strutturato OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleStreamFile : public CFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleStreamFile::COleStreamFile](#colestreamfile)|Costruisce un oggetto `COleStreamFile`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleStreamFile::Attach](#attach)|Associa un flusso con l'oggetto.|  
|[COleStreamFile::CreateMemoryStream](#creatememorystream)|Crea un flusso di memoria globale e lo associa all'oggetto.|  
|[COleStreamFile::CreateStream](#createstream)|Crea un flusso e lo associa all'oggetto.|  
|[COleStreamFile::Detach](#detach)|Rimuove l'associazione di flusso dall'oggetto.|  
|[COleStreamFile::GetStream](#getstream)|Restituisce il flusso corrente.|  
|[COleStreamFile::OpenStream](#openstream)|Apre un flusso e associa l'oggetto in modo sicuro.|  
  
## <a name="remarks"></a>Note  
 Un `IStorage` l'oggetto deve esistere prima che il flusso può essere aperto o creato a meno che non è un flusso di memoria.  
  
 `COleStreamFile`gli oggetti vengono modificati esattamente come [CFile](../../mfc/reference/cfile-class.md) oggetti.  
  
 Per ulteriori informazioni sulla modifica dei flussi e archivi, vedere l'articolo [contenitori: file compositi](../../mfc/containers-compound-files.md)...  
  
 Per ulteriori informazioni, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) e [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 `COleStreamFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="a-nameattacha--colestreamfileattach"></a><a name="attach"></a>COleStreamFile::Attach  
 Associa il flusso OLE fornito con il `COleStreamFile` oggetto.  
  
```  
void Attach(LPSTREAM lpStream);
```  
  
### <a name="parameters"></a>Parametri  
 `lpStream`  
 Fa riferimento nel flusso OLE ( `IStream`) da associare all'oggetto. Non può essere **NULL**.  
  
### <a name="remarks"></a>Note  
 L'oggetto non deve già essere associata a un flusso OLE.  
  
 Per ulteriori informazioni, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecolestreamfilea--colestreamfilecolestreamfile"></a><a name="colestreamfile"></a>COleStreamFile::COleStreamFile  
 Crea un oggetto `COleStreamFile`.  
  
```  
COleStreamFile(LPSTREAM lpStream = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpStream`  
 Puntatore al flusso OLE sia associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Se `lpStream` è **NULL**, l'oggetto non è associata a un flusso OLE, in caso contrario, l'oggetto è associato al flusso OLE fornito.  
  
 Per ulteriori informazioni, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatememorystreama--colestreamfilecreatememorystream"></a><a name="creatememorystream"></a>COleStreamFile::CreateMemoryStream  
 In modo sicuro crea un nuovo flusso esaurito la memoria globale e condivisa in cui un errore è una condizione normale previsto.  
  
```  
BOOL CreateMemoryStream(CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pError`  
 Punta a un [CFileException](../../mfc/reference/cfileexception-class.md) oggetto o **NULL** che indica lo stato di completamento dell'operazione di creazione. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate dal tentativo di creare il flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il flusso viene creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La memoria viene allocata per il sottosistema OLE.  
  
 Per ulteriori informazioni, vedere [CreateStreamOnHGlobal](http://msdn.microsoft.com/library/windows/desktop/aa378980) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatestreama--colestreamfilecreatestream"></a><a name="createstream"></a>COleStreamFile::CreateStream  
 Crea in modo sicuro un nuovo flusso nell'oggetto di archiviazione fornito quando un errore è una condizione normale previsto.  
  
```  
BOOL CreateStream(
    LPSTORAGE lpStorage,  
    LPCTSTR lpszStreamName,  
    DWORD nOpenFlags = modeReadWrite|shareExclusive|modeCreate,  
    CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpStorage`  
 Punta all'oggetto di archiviazione OLE che contiene il flusso da creare. Non può essere **NULL**.  
  
 `lpszStreamName`  
 Nome del flusso da creare. Non può essere **NULL**.  
  
 `nOpenFlags`  
 Modalità di accesso da utilizzare durante l'apertura del flusso. Lettura/scrittura esclusivo e creare le modalità utilizzate per impostazione predefinita. Per un elenco completo delle modalità disponibili, vedere [CFile::CFile](../../mfc/reference/cfile-class.md#cfile).  
  
 `pError`  
 Punta a un [CFileException](../../mfc/reference/cfileexception-class.md) oggetto o **NULL**. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate dal tentativo di creare il flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il flusso viene creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Verrà generata un'eccezione del file se non è in grado di aprire e `pError` non **NULL**.  
  
 Per ulteriori informazioni, vedere [IStorage::CreateStream](http://msdn.microsoft.com/library/windows/desktop/aa380020) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedetacha--colestreamfiledetach"></a><a name="detach"></a>COleStreamFile::Detach  
 Rimuove l'associazione dall'oggetto flusso senza chiudere il flusso.  
  
```  
LPSTREAM Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al flusso ( `IStream`) che è stato associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Il flusso deve essere chiuso in qualche altro modo prima che il programma termina.  
  
 Per ulteriori informazioni, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetstreama--colestreamfilegetstream"></a><a name="getstream"></a>COleStreamFile::GetStream  
 Chiamare questa funzione per restituire un puntatore al flusso corrente.  
  
```  
IStream* GetStream() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'interfaccia di flusso corrente ( [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034)).  
  
##  <a name="a-nameopenstreama--colestreamfileopenstream"></a><a name="openstream"></a>COleStreamFile::OpenStream  
 Apre un flusso esistente.  
  
```  
BOOL OpenStream(
    LPSTORAGE lpStorage,  
    LPCTSTR lpszStreamName,  
    DWORD nOpenFlags = modeReadWrite|shareExclusive,  
    CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpStorage`  
 Punta all'oggetto di archiviazione OLE che contiene il flusso da aprire. Non può essere **NULL**.  
  
 `lpszStreamName`  
 Nome del flusso da aprire. Non può essere **NULL**.  
  
 `nOpenFlags`  
 Modalità di accesso da utilizzare durante l'apertura del flusso. Esclusivo e lettura/scrittura modalità vengono utilizzate per impostazione predefinita. Per l'elenco completo delle modalità disponibili, vedere [CFile::CFile](../../mfc/reference/cfile-class.md#cfile).  
  
 `pError`  
 Punta a un [CFileException](../../mfc/reference/cfileexception-class.md) oggetto o **NULL**. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate dal tentativo di aprire il flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il flusso viene aperto correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Verrà generata un'eccezione del file se non è in grado di aprire e `pError` non **NULL**.  
  
 Per ulteriori informazioni, vedere [IStorage::OpenStream](http://msdn.microsoft.com/library/windows/desktop/aa380025) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




