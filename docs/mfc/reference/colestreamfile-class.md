---
title: Classe COleStreamFile | Microsoft Docs
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
ms.openlocfilehash: ab7b12c26854903379da0b67f9f64e2158195587
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43211128"
---
# <a name="colestreamfile-class"></a>Classe COleStreamFile
Rappresenta un flusso di dati (`IStream`) in un file composito come parte di un archivio strutturato OLE.  
  
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
|[COleStreamFile::CreateMemoryStream](#creatememorystream)|Crea un flusso dalla memoria globale e la associa all'oggetto.|  
|[COleStreamFile::CreateStream](#createstream)|Crea un flusso e associa l'oggetto.|  
|[COleStreamFile::Detach](#detach)|Dissocia il flusso dall'oggetto.|  
|[COleStreamFile::GetStream](#getstream)|Restituisce il flusso corrente.|  
|[COleStreamFile::OpenStream](#openstream)|Apre un flusso e associa l'oggetto in modo sicuro.|  
  
## <a name="remarks"></a>Note  
 Un `IStorage` l'oggetto deve esistere prima che il flusso può essere aperto o creato a meno che non è un flusso di memoria.  
  
 `COleStreamFile` gli oggetti vengono modificati esattamente come [CFile](../../mfc/reference/cfile-class.md) oggetti.  
  
 Per altre informazioni sulla modifica dei flussi e archivi, vedere l'articolo [contenitori: file compositi](../../mfc/containers-compound-files.md)...  
  
 Per altre informazioni, vedere [IStream](/windows/desktop/api/objidl/nn-objidl-istream) e [IStorage](/windows/desktop/api/objidl/nn-objidl-istorage) nel SDK di Windows.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 `COleStreamFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="attach"></a>  COleStreamFile::Attach  
 Associa flusso OLE fornito con il `COleStreamFile` oggetto.  
  
```  
void Attach(LPSTREAM lpStream);
```  
  
### <a name="parameters"></a>Parametri  
 *lpStream*  
 Punta al flusso OLE (`IStream`) da associare all'oggetto. Non può essere NULL.  
  
### <a name="remarks"></a>Note  
 L'oggetto non sia già associata a un flusso di OLE.  
  
 Per altre informazioni, vedere [IStream](/windows/desktop/api/objidl/nn-objidl-istream) nel SDK di Windows.  
  
##  <a name="colestreamfile"></a>  COleStreamFile::COleStreamFile  
 Crea un oggetto `COleStreamFile`.  
  
```  
COleStreamFile(LPSTREAM lpStream = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpStream*  
 Puntatore al flusso di OLE da associare all'oggetto.  
  
### <a name="remarks"></a>Note  
 Se *lpStream* è NULL, l'oggetto non è associato a un flusso di OLE, in caso contrario, l'oggetto viene associato al flusso fornito OLE.  
  
 Per altre informazioni, vedere [IStream](/windows/desktop/api/objidl/nn-objidl-istream) nel SDK di Windows.  
  
##  <a name="creatememorystream"></a>  COleStreamFile::CreateMemoryStream  
 In modo sicuro crea un nuovo flusso esaurito la memoria globale e condivisa in cui un errore è una condizione normale, prevista.  
  
```  
BOOL CreateMemoryStream(CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pError*  
 Punta a un [CFileException](../../mfc/reference/cfileexception-class.md) oggetto o valore NULL che indica lo stato di completamento dell'operazione di creazione. Specificare questo parametro se si desidera monitorare le eccezioni generate dal tentativo di creare il flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il flusso viene creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La memoria viene allocata dal sottosistema OLE.  
  
 Per altre informazioni, vedere [CreateStreamOnHGlobal](/windows/desktop/api/combaseapi/nf-combaseapi-createstreamonhglobal) nel SDK di Windows.  
  
##  <a name="createstream"></a>  COleStreamFile::CreateStream  
 Crea in modo sicuro un nuovo flusso nell'oggetto di archiviazione fornito quando un errore è una condizione normale, prevista.  
  
```  
BOOL CreateStream(
    LPSTORAGE lpStorage,  
    LPCTSTR lpszStreamName,  
    DWORD nOpenFlags = modeReadWrite|shareExclusive|modeCreate,  
    CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpStorage*  
 Punta all'oggetto di archiviazione OLE che contiene il flusso deve essere creato. Non può essere NULL.  
  
 *lpszStreamName*  
 Nome del flusso da creare. Non può essere NULL.  
  
 *nOpenFlags*  
 Modalità di accesso da usare all'apertura nel flusso. Lettura/scrittura esclusivo e creare le modalità usate per impostazione predefinita. Per un elenco completo delle modalità di disponibilità, vedere [CFile::CFile](../../mfc/reference/cfile-class.md#cfile).  
  
 *pError*  
 Punta a un [CFileException](../../mfc/reference/cfileexception-class.md) oggetto o NULL. Specificare questo parametro se si desidera monitorare le eccezioni generate dal tentativo di creare il flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il flusso viene creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Verrà generata un'eccezione di file se l'apertura di ha esito negativo e *pError* non NULL.  
  
 Per altre informazioni, vedere [IStorage::CreateStream](/windows/desktop/api/objidl/nf-objidl-istorage-createstream) nel SDK di Windows.  
  
##  <a name="detach"></a>  COleStreamFile::Detach  
 Dissocia il flusso dall'oggetto senza chiudere i flussi.  
  
```  
LPSTREAM Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al flusso (`IStream`) che è stata associata all'oggetto.  
  
### <a name="remarks"></a>Note  
 Il flusso deve essere chiuso in qualche altro modo prima che il programma termina.  
  
 Per altre informazioni, vedere [IStream](/windows/desktop/api/objidl/nn-objidl-istream) nel SDK di Windows.  
  
##  <a name="getstream"></a>  COleStreamFile::GetStream  
 Chiamare questa funzione per restituire un puntatore al flusso corrente.  
  
```  
IStream* GetStream() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'interfaccia di flusso corrente ( [IStream](/windows/desktop/api/objidl/nn-objidl-istream)).  
  
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
 *lpStorage*  
 Punta all'oggetto di archiviazione OLE che contiene il flusso da aprire. Non può essere NULL.  
  
 *lpszStreamName*  
 Nome del flusso da aprire. Non può essere NULL.  
  
 *nOpenFlags*  
 Modalità di accesso da usare all'apertura nel flusso. Esclusivo e per impostazione predefinita vengono utilizzate modalità di lettura/scrittura. Per l'elenco completo delle modalità di disponibilità, vedere [CFile::CFile](../../mfc/reference/cfile-class.md#cfile).  
  
 *pError*  
 Punta a un [CFileException](../../mfc/reference/cfileexception-class.md) oggetto o NULL. Specificare questo parametro se si desidera monitorare le eccezioni generate dal tentativo di aprire il flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il flusso viene aperto correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Verrà generata un'eccezione di file se l'apertura di ha esito negativo e *pError* non NULL.  
  
 Per altre informazioni, vedere [IStorage::OpenStream](/windows/desktop/api/objidl/nf-objidl-istorage-openstream) nel SDK di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CFile](../../mfc/reference/cfile-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



