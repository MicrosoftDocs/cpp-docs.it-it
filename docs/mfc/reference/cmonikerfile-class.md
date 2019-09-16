---
title: Classe CMonikerFile
ms.date: 11/04/2016
f1_keywords:
- CMonikerFile
- AFXOLE/CMonikerFile
- AFXOLE/CMonikerFile::CMonikerFile
- AFXOLE/CMonikerFile::Close
- AFXOLE/CMonikerFile::Detach
- AFXOLE/CMonikerFile::GetMoniker
- AFXOLE/CMonikerFile::Open
- AFXOLE/CMonikerFile::CreateBindContext
helpviewer_keywords:
- CMonikerFile [MFC], CMonikerFile
- CMonikerFile [MFC], Close
- CMonikerFile [MFC], Detach
- CMonikerFile [MFC], GetMoniker
- CMonikerFile [MFC], Open
- CMonikerFile [MFC], CreateBindContext
ms.assetid: 87be5966-f4f7-4235-bce2-1fa39e9417de
ms.openlocfilehash: 56283b56a1c0832d34ce23c7db47c47d9480aec8
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69504575"
---
# <a name="cmonikerfile-class"></a>Classe CMonikerFile

Rappresenta un flusso di dati ( [IStream](/windows/win32/api/objidl/nn-objidl-istream)) denominato da un oggetto [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker).

## <a name="syntax"></a>Sintassi

```
class CMonikerFile : public COleStreamFile
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMonikerFile::CMonikerFile](#cmonikerfile)|Costruisce un oggetto `CMonikerFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMonikerFile::Close](#close)|Scollega e rilascia il flusso e rilascia il moniker.|
|[CMonikerFile::Detach](#detach)|Disconnette l' `IMoniker` oggetto da questo `CMonikerFile` oggetto.|
|[CMonikerFile::GetMoniker](#getmoniker)|Restituisce il moniker corrente.|
|[CMonikerFile:: Open](#open)|Apre il file specificato per ottenere un flusso.|

### <a name="protected-methods"></a>Metodi protetti

|Name|DESCRIZIONE|
|----------|-----------------|
|[CMonikerFile::CreateBindContext](#createbindcontext)|Ottiene il contesto di associazione o crea un contesto di associazione inizializzato predefinito.|

## <a name="remarks"></a>Note

Un moniker contiene informazioni molto simili a un percorso di un file. Se è presente un puntatore all' `IMoniker` interfaccia di un oggetto moniker, è possibile ottenere l'accesso al file identificato senza avere altre informazioni specifiche sulla posizione in cui si trova il file.

Derivato da `COleStreamFile`, `CMonikerFile` accetta un moniker o una rappresentazione di stringa che può creare in un moniker e viene associato al flusso per il quale il moniker è un nome. È quindi possibile leggere e scrivere nel flusso. Lo scopo reale di `CMonikerFile` è quello di fornire un accesso `IStream`semplice alle istanze `IMoniker`di denominate da s, in modo che non sia necessario eseguire il binding `CFile` a un flusso, ma che siano disponibili funzionalità per il flusso.

`CMonikerFile`non può essere usato per eseguire il binding a un valore diverso da un flusso. Se si desidera eseguire l'associazione all'archiviazione o a un oggetto, è necessario `IMoniker` utilizzare direttamente l'interfaccia.

Per ulteriori informazioni sui flussi e sui moniker, vedere [COleStreamFile](../../mfc/reference/colestreamfile-class.md) in *riferimenti a MFC* e [IStream](/windows/win32/api/objidl/nn-objidl-istream) e [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) nel Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

`CMonikerFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="close"></a>CMonikerFile:: Close

Chiamare questa funzione per scollegare e rilasciare il flusso e per rilasciare il moniker.

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

Chiamare questa funzione per creare un contesto di Binding inizializzato predefinito.

```
IBindCtx* CreateBindContext(CFileException* pError);
```

### <a name="parameters"></a>Parametri

*pError*<br/>
Puntatore a un'eccezione del file. In caso di errore, verrà impostato sulla ragione.

### <a name="return-value"></a>Valore restituito

Puntatore al contesto di associazione [IBindCtx](/windows/win32/api/objidl/nn-objidl-ibindctx) a cui eseguire l'associazione in caso di esito positivo; in caso contrario, NULL. Se l'istanza di è stata aperta `IBindHost` con un'interfaccia, il contesto `IBindHost`di associazione viene recuperato da. Se non è presente `IBindHost` alcuna interfaccia o l'interfaccia non restituisce un contesto di associazione, viene creato un contesto di associazione. Per una descrizione dell'interfaccia [IBindHost](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/ms775076\(v=vs.85\)) , vedere la Windows SDK.

### <a name="remarks"></a>Note

Un contesto di associazione è un oggetto che archivia le informazioni relative a una particolare operazione di associazione del moniker. È possibile eseguire l'override di questa funzione per fornire un contesto di associazione personalizzato.

##  <a name="detach"></a>  CMonikerFile::Detach

Chiamare questa funzione per chiudere il flusso.

```
BOOL Detach(CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*pError*<br/>
Puntatore a un'eccezione del file. In caso di errore, verrà impostato sulla ragione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="getmoniker"></a>  CMonikerFile::GetMoniker

Chiamare questa funzione per recuperare un puntatore al moniker corrente.

```
IMoniker* GetMoniker() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia del moniker corrente ( [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker)).

### <a name="remarks"></a>Note

Poiché `CMonikerFile` non è un'interfaccia, il puntatore restituito non incrementa il conteggio dei riferimenti (tramite [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref)) e il moniker viene rilasciato quando l' `CMonikerFile` oggetto viene rilasciato. Se si desidera mantenere il moniker o rilasciarlo manualmente, è necessario `AddRef` .

##  <a name="open"></a>CMonikerFile:: Open

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

*lpszURL*<br/>
URL o nome file del file da aprire.

*pError*<br/>
Puntatore a un'eccezione del file. In caso di errore, verrà impostato sulla ragione.

*pMoniker*<br/>
Puntatore all'interfaccia `IMoniker` del moniker da usare per ottenere un flusso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Impossibile utilizzare il parametro *lpszURL* in un computer Macintosh. In un computer Macintosh è `Open` possibile utilizzare solo il formato pMoniker di.

È possibile usare un URL o un nome file per il parametro *lpszURL* . Ad esempio:

[!code-cpp[NVC_MFCWinInet#6](../../mfc/codesnippet/cpp/cmonikerfile-class_1.cpp)]

\- oppure -

[!code-cpp[NVC_MFCWinInet#7](../../mfc/codesnippet/cpp/cmonikerfile-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe COleStreamFile](../../mfc/reference/colestreamfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)
