---
title: CGopherFile (classe)
ms.date: 11/04/2016
f1_keywords:
- CGopherFile
- AFXINET/CGopherFile
- AFXINET/CGopherFile::CGopherFile
helpviewer_keywords:
- CGopherFile [MFC], CGopherFile
ms.assetid: 3ca9898f-8cdb-4495-bbde-46d40100feda
ms.openlocfilehash: 9bb242cb53593862cb51e0c193eb739625127adc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62380286"
---
# <a name="cgopherfile-class"></a>CGopherFile (classe)

Fornisce la funzionalità per individuare e leggere file in un server gopher.

> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i relativi membri sono stati deprecati perché non funzionano nella piattaforma Windows XP, ma continueranno a funzionare in piattaforme precedenti.

## <a name="syntax"></a>Sintassi

```
class CGopherFile : public CInternetFile
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CGopherFile::CGopherFile](#cgopherfile)|Costruisce un oggetto `CGopherFile`.|

## <a name="remarks"></a>Note

Il servizio gopher non consente agli utenti di scrivere dati in un file gopher, poiché questo servizio funge essenzialmente da un'interfaccia basata su menu per la ricerca di informazioni. Il `CGopherFile` funzioni membro `Write`, `WriteString`, e `Flush` non sono state implementate `CGopherFile`. Chiamare queste funzioni in un `CGopherFile` dell'oggetto, restituisce un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Per altre informazioni su come `CGopherFile` funziona con le altre classi MFC Internet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

[CInternetFile](../../mfc/reference/cinternetfile-class.md)

`CGopherFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

##  <a name="cgopherfile"></a>  CGopherFile::CGopherFile

Questa funzione membro viene chiamata per costruire un `CGopherFile` oggetto.

```
CGopherFile(
    HINTERNET hFile,
    CGopherLocator& refLocator,
    CGopherConnection* pConnection);

CGopherFile(
    HINTERNET hFile,
    HINTERNET hSession,
    LPCTSTR pstrLocator,
    DWORD dwLocLen,
    DWORD_PTR dwContext);
```

### <a name="parameters"></a>Parametri

*hFile*<br/>
Handle per un file HINTERNET.

*refLocator*<br/>
Un riferimento a un [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto.

*pConnection*<br/>
Un puntatore a un [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) oggetto.

*hSession*<br/>
Handle per la sessione corrente di Internet.

*pstrLocator*<br/>
Un puntatore a una stringa utilizzata per individuare il server gopher. Visualizzare [sessioni Gopher](cgopherlocator-class.md) per altre informazioni sui localizzatori gopher.

*dwLocLen*<br/>
Un valore DWORD contenente il numero di byte in *pstrLocator*.

*dwContext*<br/>
Un puntatore all'identificatore di contesto del file in fase di apertura.

### <a name="remarks"></a>Note

È necessario un `CGopherFile` oggetto da leggere da un file durante una sessione di Internet gopher.

È non creare mai un `CGopherFile` direttamente l'oggetto. Chiamare invece [CGopherConnection:: OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) per aprire un file in un server gopher.

## <a name="see-also"></a>Vedere anche

[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherLocator](../../mfc/reference/cgopherlocator-class.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)<br/>
[Classe CGopherConnection](../../mfc/reference/cgopherconnection-class.md)
