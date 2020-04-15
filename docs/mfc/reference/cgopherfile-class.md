---
title: Classe CGopherFile
ms.date: 11/04/2016
f1_keywords:
- CGopherFile
- AFXINET/CGopherFile
- AFXINET/CGopherFile::CGopherFile
helpviewer_keywords:
- CGopherFile [MFC], CGopherFile
ms.assetid: 3ca9898f-8cdb-4495-bbde-46d40100feda
ms.openlocfilehash: e157a4509fe30b814a1834690a675906ac82afe7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373699"
---
# <a name="cgopherfile-class"></a>Classe CGopherFile

Fornisce la funzionalità per individuare e leggere file in un server gopher.

> [!NOTE]
> Le `CGopherConnection`classi `CGopherFile` `CGopherFileFind`, `CGopherLocator` , e i relativi membri sono stati deprecati perché non funzionano sulla piattaforma Windows XP, ma continueranno a lavorare su piattaforme precedenti.

## <a name="syntax"></a>Sintassi

```
class CGopherFile : public CInternetFile
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[FileCGopherFile::CGopherFile](#cgopherfile)|Costruisce un oggetto `CGopherFile`.|

## <a name="remarks"></a>Osservazioni

Il servizio gopher non consente agli utenti di scrivere dati in un file gopher perché questo servizio funziona principalmente come interfaccia basata su menu per la ricerca di informazioni. Le `CGopherFile` funzioni `Write` `WriteString`membro `Flush` , e `CGopherFile`non vengono implementate per . La chiamata di `CGopherFile` queste funzioni su un oggetto restituisce [un'eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Per ulteriori informazioni `CGopherFile` sul funzionamento con le altre classi Internet MFC, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

[CInternetFile](../../mfc/reference/cinternetfile-class.md)

`CGopherFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="cgopherfilecgopherfile"></a><a name="cgopherfile"></a>FileCGopherFile::CGopherFile

Questa funzione membro viene `CGopherFile` chiamata per costruire un oggetto.

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

*hFile (File)*<br/>
Handle per un file HINTERNET.

*refLocator (individuazione e commato*<br/>
Riferimento a un oggetto [CGopherLocator.](../../mfc/reference/cgopherlocator-class.md)

*pConnection*<br/>
Puntatore a un oggetto [CGopherConnection.](../../mfc/reference/cgopherconnection-class.md)

*hSessione*<br/>
Handle per la sessione Internet corrente.

*pstrLocator (informazioni in base al pstrLocator*<br/>
Puntatore a una stringa utilizzata per individuare il server gopher. Per ulteriori informazioni sui localizzatori Gopher, vedere [Gopher Sessions.](cgopherlocator-class.md)

*dwLocLen*<br/>
Valore DWORD contenente il numero di byte in *pstrLocator*.

*dwContext*<br/>
Puntatore all'identificatore di contesto del file aperto.

### <a name="remarks"></a>Osservazioni

È necessario `CGopherFile` un oggetto per leggere da un file durante una sessione Internet gopher.

Non si `CGopherFile` crea mai direttamente un oggetto. Chiamare invece [CGopherConnection::OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) per aprire un file su un server gopher.

## <a name="see-also"></a>Vedere anche

[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherLocator](../../mfc/reference/cgopherlocator-class.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)<br/>
[Classe CGopherConnection](../../mfc/reference/cgopherconnection-class.md)
