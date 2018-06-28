---
title: Classe CMonikerFile | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMonikerFile
- AFXOLE/CMonikerFile
- AFXOLE/CMonikerFile::CMonikerFile
- AFXOLE/CMonikerFile::Close
- AFXOLE/CMonikerFile::Detach
- AFXOLE/CMonikerFile::GetMoniker
- AFXOLE/CMonikerFile::Open
- AFXOLE/CMonikerFile::CreateBindContext
dev_langs:
- C++
helpviewer_keywords:
- CMonikerFile [MFC], CMonikerFile
- CMonikerFile [MFC], Close
- CMonikerFile [MFC], Detach
- CMonikerFile [MFC], GetMoniker
- CMonikerFile [MFC], Open
- CMonikerFile [MFC], CreateBindContext
ms.assetid: 87be5966-f4f7-4235-bce2-1fa39e9417de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3cd166cac7d6d2cddbc12b3cbaa14b28d00c1357
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37037269"
---
# <a name="cmonikerfile-class"></a>Classe CMonikerFile
Rappresenta un flusso di dati ( [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034)) denominato da un [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMonikerFile : public COleStreamFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMonikerFile::CMonikerFile](#cmonikerfile)|Costruisce un oggetto `CMonikerFile`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMonikerFile::Close](#close)|Consente di scollegare e rilascia il flusso e rilascia il moniker.|  
|[CMonikerFile::Detach](#detach)|Consente di scollegare il `IMoniker` da questo `CMonikerFile` oggetto.|  
|[CMonikerFile::GetMoniker](#getmoniker)|Restituisce il moniker corrente.|  
|[CMonikerFile::Open](#open)|Apre il file specificato per ottenere un flusso.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMonikerFile::CreateBindContext](#createbindcontext)|Ottiene il contesto di associazione o crea un contesto di associazione inizializzati per impostazione predefinita.|  
  
## <a name="remarks"></a>Note  
 Un moniker contiene informazioni molto diversamente da un percorso in un file. Se è presente un puntatore a un oggetto moniker `IMoniker` interfaccia, è possibile ottenere l'accesso al file identificato senza eventuali altre informazioni specifiche in cui è in effetti che si trova il file.  
  
 Derivata da `COleStreamFile`, `CMonikerFile` accetta un moniker o rappresentazione di stringa può essere trasformata in un moniker e associa al flusso per il quale il moniker è un nome. È quindi possibile leggere e scrivere in tale flusso. Lo scopo di reali `CMonikerFile` consiste nel fornire l'accesso semplice ai `IStream`s denominato da `IMoniker`s in modo che non è necessario associare manualmente, in un flusso dispone ancora di `CFile` funzionalità nel flusso.  
  
 `CMonikerFile` non può essere utilizzata per associare a un valore diverso da un flusso. Se si desidera associare a un oggetto o di archiviazione, è necessario utilizzare il `IMoniker` interfaccia direttamente.  
  
 Per ulteriori informazioni su moniker e flussi, vedere [COleStreamFile](../../mfc/reference/colestreamfile-class.md) nel *riferimenti alla libreria MFC* e [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) e [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) di Windows SDK.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 `CMonikerFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="close"></a>  CMonikerFile::Close  
 Chiamare questa funzione per scollegare e rilasciare il flusso e rilasciare il moniker.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 Può essere chiamato su flussi non aperti o già chiusi.  
  
##  <a name="cmonikerfile"></a>  CMonikerFile::CMonikerFile  
 Costruisce un oggetto `CMonikerFile`.  
  
```  
CMonikerFile();
```  
  
##  <a name="createbindcontext"></a>  CMonikerFile::CreateBindContext  
 Chiamare questa funzione per creare un contesto di associazione inizializzati per impostazione predefinita.  
  
```  
IBindCtx* CreateBindContext(CFileException* pError);
```  
  
### <a name="parameters"></a>Parametri  
 *pError*  
 Un puntatore a un'eccezione di file. In caso di errore, sarà impostata la causa.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al contesto di associazione [IBindCtx](http://msdn.microsoft.com/library/windows/desktop/ms693755) da associare con esito positivo; in caso contrario **NULL**. Se l'istanza è stata aperta con un `IBindHost` interfaccia, il contesto di associazione recuperi il `IBindHost`. Se è presente alcun `IBindHost` interfaccia o l'interfaccia non restituisce un contesto di associazione, viene creato un contesto di associazione. Per una descrizione del [IBindHost](http://msdn.microsoft.com/library/ie/ms775076) l'interfaccia, vedi il Windows SDK.  
  
### <a name="remarks"></a>Note  
 Un contesto di associazione è un oggetto che archivia informazioni su un'operazione di associazione del moniker particolare. È possibile eseguire l'override di questa funzione per fornire un contesto di associazione personalizzato.  
  
##  <a name="detach"></a>  CMonikerFile::Detach  
 Chiamare questa funzione per il flusso viene chiuso.  
  
```  
BOOL Detach(CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pError*  
 Un puntatore a un'eccezione di file. In caso di errore, sarà impostata la causa.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="getmoniker"></a>  CMonikerFile::GetMoniker  
 Chiamare questa funzione per recuperare un puntatore per il moniker corrente.  
  
```  
IMoniker* GetMoniker() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'interfaccia moniker corrente ( [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705)).  
  
### <a name="remarks"></a>Note  
 Poiché `CMonikerFile` non è un'interfaccia, il puntatore restituito non incrementa il conteggio dei riferimenti (tramite [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379)), mentre il moniker viene rilasciato quando il `CMonikerFile` oggetto viene rilasciato. Se si desidera conservare il moniker o rilasciare manualmente, è necessario `AddRef` è.  
  
##  <a name="open"></a>  CMonikerFile::Open  
 Chiamare questa funzione membro per aprire un oggetto file o il moniker.  
  
```  
virtual BOOL Open(
    LPCTSTR lpszURL,  
    CFileException* pError = NULL);

 
virtual BOOL Open(
    IMoniker* pMoniker,  
    CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszURL*  
 Un URL o il nome del file da aprire.  
  
 *pError*  
 Un puntatore a un'eccezione di file. In caso di errore, sarà impostata la causa.  
  
 *pMoniker*  
 Un puntatore all'interfaccia del moniker `IMoniker` da utilizzare per ottenere un flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il *lpszURL* parametro non può essere utilizzato in un computer Macintosh. Solo il *pMoniker* formato **Apri** può essere usato in un computer Macintosh.  
  
 È possibile utilizzare un URL o un nome di file per il *lpszURL* parametro. Ad esempio:  
  
 [!code-cpp[NVC_MFCWinInet#6](../../mfc/codesnippet/cpp/cmonikerfile-class_1.cpp)]  
  
 - oppure -  
  
 [!code-cpp[NVC_MFCWinInet#7](../../mfc/codesnippet/cpp/cmonikerfile-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleStreamFile](../../mfc/reference/colestreamfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)
