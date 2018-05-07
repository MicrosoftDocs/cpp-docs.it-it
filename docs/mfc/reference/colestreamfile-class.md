---
title: Classe COleStreamFile | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleStreamFile
- AFXOLE/COleStreamFile
- AFXOLE/COleStreamFile::COleStreamFile
- AFXOLE/COleStreamFile::Attach
- AFXOLE/COleStreamFile::CreateMemoryStream
- AFXOLE/COleStreamFile::CreateStream
- AFXOLE/COleStreamFile::Detach
- AFXOLE/COleStreamFile::GetStream
- AFXOLE/COleStreamFile::OpenStream
dev_langs:
- C++
helpviewer_keywords:
- COleStreamFile [MFC], COleStreamFile
- COleStreamFile [MFC], Attach
- COleStreamFile [MFC], CreateMemoryStream
- COleStreamFile [MFC], CreateStream
- COleStreamFile [MFC], Detach
- COleStreamFile [MFC], GetStream
- COleStreamFile [MFC], OpenStream
ms.assetid: e4f93698-e17c-4a18-a7c0-4b4df8eb4d93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 805c32145d844cc1103cab7c4987c0595ff5935f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
|[COleStreamFile::CreateMemoryStream](#creatememorystream)|Crea un flusso dalla memoria globale e lo associa all'oggetto.|  
|[COleStreamFile::CreateStream](#createstream)|Crea un flusso e lo associa all'oggetto.|  
|[COleStreamFile::Detach](#detach)|Rimuove l'associazione dall'oggetto flusso.|  
|[COleStreamFile::GetStream](#getstream)|Restituisce il flusso corrente.|  
|[COleStreamFile::OpenStream](#openstream)|Apre un flusso e associa l'oggetto in modo sicuro.|  
  
## <a name="remarks"></a>Note  
 Un `IStorage` l'oggetto deve esistere prima che il flusso può essere aperto o creato a meno che non è un flusso di memoria.  
  
 `COleStreamFile` gli oggetti vengono modificati esattamente come [CFile](../../mfc/reference/cfile-class.md) oggetti.  
  
 Per ulteriori informazioni sulla modifica dei flussi e archivi, vedere l'articolo [contenitori: file compositi](../../mfc/containers-compound-files.md)...  
  
 Per ulteriori informazioni, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) e [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015) in Windows SDK.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 `COleStreamFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="attach"></a>  COleStreamFile::Attach  
 Associa il flusso OLE fornito con il `COleStreamFile` oggetto.  
  
```  
void Attach(LPSTREAM lpStream);
```  
  
### <a name="parameters"></a>Parametri  
 `lpStream`  
 Punta al flusso OLE ( `IStream`) da associare all'oggetto. Non può essere **NULL**.  
  
### <a name="remarks"></a>Note  
 L'oggetto non sia già associata a un flusso OLE.  
  
 Per ulteriori informazioni, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) in Windows SDK.  
  
##  <a name="colestreamfile"></a>  COleStreamFile::COleStreamFile  
 Crea un oggetto `COleStreamFile`.  
  
```  
COleStreamFile(LPSTREAM lpStream = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpStream`  
 Puntatore al flusso di OLE da associare all'oggetto.  
  
### <a name="remarks"></a>Note  
 Se `lpStream` è **NULL**, l'oggetto non è associata a un flusso OLE, in caso contrario, l'oggetto è associato al flusso OLE fornito.  
  
 Per ulteriori informazioni, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) in Windows SDK.  
  
##  <a name="creatememorystream"></a>  COleStreamFile::CreateMemoryStream  
 In modo sicuro crea un nuovo flusso insufficiente memoria globale condivisa in cui è una condizione normale, prevista di un errore.  
  
```  
BOOL CreateMemoryStream(CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pError`  
 Punta a un [CFileException](../../mfc/reference/cfileexception-class.md) oggetto o **NULL** che indica lo stato di completamento dell'operazione di creazione. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate dal tentativo di creare il flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il flusso viene creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La memoria viene allocata dal sottosistema OLE.  
  
 Per ulteriori informazioni, vedere [CreateStreamOnHGlobal](http://msdn.microsoft.com/library/windows/desktop/aa378980) in Windows SDK.  
  
##  <a name="createstream"></a>  COleStreamFile::CreateStream  
 Crea in modo sicuro un nuovo flusso dell'oggetto di archiviazione fornito in cui è una condizione normale, prevista di un errore.  
  
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
 Modalità di accesso da utilizzare durante l'apertura del flusso. Lettura/scrittura esclusivo e creare modalità vengono utilizzati per impostazione predefinita. Per un elenco completo delle modalità disponibili, vedere [CFile::CFile](../../mfc/reference/cfile-class.md#cfile).  
  
 `pError`  
 Punta a un [CFileException](../../mfc/reference/cfileexception-class.md) oggetto o **NULL**. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate dal tentativo di creare il flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il flusso viene creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Verrà generata un'eccezione di file se si verifica un errore di apertura e `pError` non **NULL**.  
  
 Per ulteriori informazioni, vedere [IStorage::CreateStream](http://msdn.microsoft.com/library/windows/desktop/aa380020) in Windows SDK.  
  
##  <a name="detach"></a>  COleStreamFile::Detach  
 Rimuove l'associazione dall'oggetto flusso senza chiudere il flusso.  
  
```  
LPSTREAM Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al flusso ( `IStream`) che è stato associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Il flusso deve essere chiuso in qualche altro modo prima che il programma termina.  
  
 Per ulteriori informazioni, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) in Windows SDK.  
  
##  <a name="getstream"></a>  COleStreamFile::GetStream  
 Chiamare questa funzione per restituire un puntatore al flusso corrente.  
  
```  
IStream* GetStream() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'interfaccia del flusso corrente ( [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034)).  
  
##  <a name="openstream"></a>  COleStreamFile::OpenStream  
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
 Punta a un [CFileException](../../mfc/reference/cfileexception-class.md) oggetto o **NULL**. Specificare questo parametro se si desidera monitorare le possibili eccezioni generate quando tenta di aprire il flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il flusso viene aperto correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Verrà generata un'eccezione di file se si verifica un errore di apertura e `pError` non **NULL**.  
  
 Per ulteriori informazioni, vedere [IStorage::OpenStream](http://msdn.microsoft.com/library/windows/desktop/aa380025) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



