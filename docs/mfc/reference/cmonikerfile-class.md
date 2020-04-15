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
ms.openlocfilehash: fc74ad2499fcde63faa2c5859a87fd9ffd2846eb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319779"
---
# <a name="cmonikerfile-class"></a>Classe CMonikerFile

Rappresenta un flusso di dati ( [IStream](/windows/win32/api/objidl/nn-objidl-istream)) denominato da un [oggetto IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker).

## <a name="syntax"></a>Sintassi

```
class CMonikerFile : public COleStreamFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMonikerFile::CMonikerFile (File)CMonikerFile::CMonikerFile](#cmonikerfile)|Costruisce un oggetto `CMonikerFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMonikerFile::Close](#close)|Scollega e rilascia il flusso e rilascia il moniker.|
|[CMonikerFile::Detach](#detach)|Scollega `IMoniker` l'oggetto `CMonikerFile` da questo oggetto.|
|[CMonikerFile::GetMoniker](#getmoniker)|Restituisce il moniker corrente.|
|[CMonikerFile::Open](#open)|Apre il file specificato per ottenere un flusso.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMonikerFile::CreateBindContext](#createbindcontext)|Ottiene il contesto di associazione o crea un contesto di associazione inizializzato predefinito.|

## <a name="remarks"></a>Osservazioni

Un moniker contiene informazioni molto simili a un percorso di un file. Se si dispone di un puntatore `IMoniker` all'interfaccia di un oggetto moniker, è possibile ottenere l'accesso al file identificato senza avere altre informazioni specifiche sulla posizione effettiva del file.

Derivato `COleStreamFile` `CMonikerFile` da , accetta un moniker o una rappresentazione di stringa che può trasformare in un moniker e si associa al flusso per il quale il moniker è un nome. È quindi possibile leggere e scrivere in tale flusso. Il vero `CMonikerFile` scopo di è `IStream`quello di `IMoniker`fornire un semplice accesso a s denominato da `CFile` s in modo che non è necessario associare a un flusso manualmente, ma disporre di funzionalità per il flusso.

`CMonikerFile`non può essere utilizzato per eseguire l'associazione a un valore diverso da un flusso. Se si desidera eseguire l'associazione all'archiviazione o a un oggetto, è necessario utilizzare direttamente l'interfaccia. `IMoniker`

Per ulteriori informazioni su flussi e moniker, vedere [COleStreamFile](../../mfc/reference/colestreamfile-class.md) in *Riferimenti a MFC* e [IStream](/windows/win32/api/objidl/nn-objidl-istream) e [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) in Windows SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

`CMonikerFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="cmonikerfileclose"></a><a name="close"></a>CMonikerFile::Close

Chiamare questa funzione per scollegare e rilasciare il flusso e rilasciare il moniker.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

Può essere chiamato su flussi non aperti o già chiusi.

## <a name="cmonikerfilecmonikerfile"></a><a name="cmonikerfile"></a>CMonikerFile::CMonikerFile (File)CMonikerFile::CMonikerFile

Costruisce un oggetto `CMonikerFile`.

```
CMonikerFile();
```

## <a name="cmonikerfilecreatebindcontext"></a><a name="createbindcontext"></a>CMonikerFile::CreateBindContext

Chiamare questa funzione per creare un contesto di associazione inizializzato predefinito.

```
IBindCtx* CreateBindContext(CFileException* pError);
```

### <a name="parameters"></a>Parametri

*pError*<br/>
Puntatore a un'eccezione di file. In caso di errore, verrà impostato sulla causa.

### <a name="return-value"></a>Valore restituito

Un puntatore al contesto di associazione [IBindCtx](/windows/win32/api/objidl/nn-objidl-ibindctx) per l'associazione con se ha esito positivo; in caso contrario NULL. Se l'istanza è `IBindHost` stata aperta con un'interfaccia, il contesto di associazione viene recuperato dall'oggetto `IBindHost`. Se non `IBindHost` è presente alcuna interfaccia o l'interfaccia non restituisce un contesto di associazione, viene creato un contesto di associazione. Per una descrizione dell'interfaccia [IBindHost,](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/ms775076\(v=vs.85\)) vedere Windows SDK.

### <a name="remarks"></a>Osservazioni

Un contesto di associazione è un oggetto che archivia informazioni su una particolare operazione di associazione del moniker. È possibile eseguire l'override di questa funzione per fornire un contesto di associazione personalizzato.

## <a name="cmonikerfiledetach"></a><a name="detach"></a>CMonikerFile::Detach

Chiamare questa funzione per chiudere il flusso.

```
BOOL Detach(CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*pError*<br/>
Puntatore a un'eccezione di file. In caso di errore, verrà impostato sulla causa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="cmonikerfilegetmoniker"></a><a name="getmoniker"></a>CMonikerFile::GetMoniker

Chiamare questa funzione per recuperare un puntatore al moniker corrente.

```
IMoniker* GetMoniker() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia del moniker corrente ( [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker)).

### <a name="remarks"></a>Osservazioni

Poiché `CMonikerFile` non è un'interfaccia, il puntatore restituito non incrementa il conteggio dei `CMonikerFile` riferimenti (tramite [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref)) e il moniker viene rilasciato quando l'oggetto viene rilasciato. Se vuoi aggrapparti al moniker o rilasciarlo `AddRef` da solo, devi farlo.

## <a name="cmonikerfileopen"></a><a name="open"></a>CMonikerFile::Open

Chiamare questa funzione membro per aprire un file o un oggetto moniker.

```
virtual BOOL Open(
    LPCTSTR lpszURL,
    CFileException* pError = NULL);

virtual BOOL Open(
    IMoniker* pMoniker,
    CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*URL lpsz*<br/>
Un URL o un nome file del file da aprire.

*pError*<br/>
Puntatore a un'eccezione di file. In caso di errore, verrà impostato sulla causa.

*pMoniker*<br/>
Puntatore all'interfaccia `IMoniker` del moniker da utilizzare per ottenere un flusso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il parametro *lpszURL* non può essere utilizzato su un Macintosh. Solo la forma *pMoniker* di `Open` può essere utilizzata su un Macintosh.

È possibile utilizzare un URL o un nome file per il parametro *lpszURL.* Ad esempio:

[!code-cpp[NVC_MFCWinInet#6](../../mfc/codesnippet/cpp/cmonikerfile-class_1.cpp)]

\- - oppure -

[!code-cpp[NVC_MFCWinInet#7](../../mfc/codesnippet/cpp/cmonikerfile-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe COleStreamFile](../../mfc/reference/colestreamfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)
