---
title: Classe CMonikerFile | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMonikerFile
dev_langs:
- C++
helpviewer_keywords:
- CMonikerFile class
- monikers, MFC
- IMoniker interface, binding
- IMoniker interface
ms.assetid: 87be5966-f4f7-4235-bce2-1fa39e9417de
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
ms.openlocfilehash: 4668672af1b33170ece1cb4d449ed5a20f6040e7
ms.lasthandoff: 02/24/2017

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
|[CMonikerFile::Close](#close)|Consente di scollegare e rilascia il flusso e il moniker.|  
|[CMonikerFile::Detach](#detach)|Consente di scollegare il `IMoniker` da questo `CMonikerFile` oggetto.|  
|[CMonikerFile::GetMoniker](#getmoniker)|Restituisce il moniker corrente.|  
|[CMonikerFile::Open](#open)|Apre il file specificato per ottenere un flusso.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMonikerFile::CreateBindContext](#createbindcontext)|Ottiene il contesto di associazione o crea un contesto di associazione inizializzati per impostazione predefinita.|  
  
## <a name="remarks"></a>Note  
 Un moniker contiene informazioni come il percorso di un file. Se si dispone di un puntatore a un oggetto moniker `IMoniker` interfaccia, è possibile ottenere l'accesso al file identificato senza altre informazioni specifiche relative alla posizione del file effettivamente.  
  
 Derivata da `COleStreamFile`, `CMonikerFile` accetta un moniker o una rappresentazione di stringa può essere trasformata in un moniker e associa al flusso per il quale il moniker è un nome. È quindi possibile leggere e scrivere in tale flusso. Il vero scopo di `CMonikerFile` consiste nel fornire un accesso semplice a `IStream`s denominato da `IMoniker`s in modo che non è necessario associare a un flusso, ancora `CFile` funzionalità nel flusso.  
  
 `CMonikerFile`non può essere utilizzata per associare a un valore diverso da un flusso. Se si desidera associare a un oggetto o di archiviazione, è necessario utilizzare il `IMoniker` interfaccia direttamente.  
  
 Per ulteriori informazioni su flussi e moniker, vedere [COleStreamFile](../../mfc/reference/colestreamfile-class.md) nel *riferimenti alla libreria MFC* e [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) e [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 `CMonikerFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="a-nameclosea--cmonikerfileclose"></a><a name="close"></a>CMonikerFile::Close  
 Chiamare questa funzione per scollegare e rilasciare il flusso e rilasciare il moniker.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 Può essere chiamato su flussi non aperti o già chiusi.  
  
##  <a name="a-namecmonikerfilea--cmonikerfilecmonikerfile"></a><a name="cmonikerfile"></a>CMonikerFile::CMonikerFile  
 Costruisce un oggetto `CMonikerFile`.  
  
```  
CMonikerFile();
```  
  
##  <a name="a-namecreatebindcontexta--cmonikerfilecreatebindcontext"></a><a name="createbindcontext"></a>CMonikerFile::CreateBindContext  
 Chiamare questa funzione per creare un contesto di associazione inizializzati per impostazione predefinita.  
  
```  
IBindCtx* CreateBindContext(CFileException* pError);
```  
  
### <a name="parameters"></a>Parametri  
 `pError`  
 Un puntatore a un'eccezione del file. In caso di errore, imposterà la causa.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al contesto di associazione [IBindCtx](http://msdn.microsoft.com/library/windows/desktop/ms693755) da associare con esito positivo; in caso contrario **NULL**. Se l'istanza è stata aperta con un `IBindHost` interfaccia, a cui viene recuperato dal contesto di associazione di `IBindHost`. Se è presente alcun `IBindHost` interfaccia o l'interfaccia non restituisce un contesto di associazione, viene creato un contesto di associazione. Per una descrizione di [IBindHost](http://msdn.microsoft.com/library/ie/ms775076) interfaccia, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Un contesto di associazione è un oggetto che archivia informazioni su un'operazione di associazione del moniker specifico. È possibile eseguire l'override di questa funzione per fornire un contesto di associazione personalizzato.  
  
##  <a name="a-namedetacha--cmonikerfiledetach"></a><a name="detach"></a>CMonikerFile::Detach  
 Chiamare questa funzione per chiudere il flusso.  
  
```  
BOOL Detach(CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pError`  
 Un puntatore a un'eccezione del file. In caso di errore, imposterà la causa.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="a-namegetmonikera--cmonikerfilegetmoniker"></a><a name="getmoniker"></a>CMonikerFile::GetMoniker  
 Chiamare questa funzione per recuperare un puntatore al moniker corrente.  
  
```  
IMoniker* GetMoniker() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'interfaccia moniker corrente ( [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705)).  
  
### <a name="remarks"></a>Note  
 Poiché `CMonikerFile` non è un'interfaccia, il puntatore restituito non incrementa il conteggio dei riferimenti (tramite [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379)), e il moniker viene rilasciato quando il `CMonikerFile` oggetto viene rilasciato. Se si desidera mantenere il moniker o rilasciare manualmente, è necessario `AddRef` è.  
  
##  <a name="a-nameopena--cmonikerfileopen"></a><a name="open"></a>CMonikerFile::Open  
 Chiamare questa funzione membro per aprire un oggetto file o moniker.  
  
```  
virtual BOOL Open(
    LPCTSTR lpszURL,  
    CFileException* pError = NULL);

 
virtual BOOL Open(
    IMoniker* pMoniker,  
    CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszURL`  
 URL o il nome del file da aprire.  
  
 `pError`  
 Un puntatore a un'eccezione del file. In caso di errore, imposterà la causa.  
  
 `pMoniker`  
 Un puntatore all'interfaccia moniker `IMoniker` da utilizzare per ottenere un flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `lpszURL` parametro non può essere utilizzato in un computer Macintosh. Solo il `pMoniker` formato **aprire** può essere utilizzato in un computer Macintosh.  
  
 È possibile utilizzare un URL o un nome per il `lpszURL` parametro. Ad esempio:  
  
 [!code-cpp[6 NVC_MFCWinInet](../../mfc/codesnippet/cpp/cmonikerfile-class_1.cpp)]  
  
 - oppure -  
  
 [!code-cpp[NVC_MFCWinInet&#7;](../../mfc/codesnippet/cpp/cmonikerfile-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleStreamFile](../../mfc/reference/colestreamfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)

