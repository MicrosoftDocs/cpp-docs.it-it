---
description: 'Altre informazioni su: classe CGopherFile'
title: Classe CGopherFile
ms.date: 11/04/2016
f1_keywords:
- CGopherFile
- AFXINET/CGopherFile
- AFXINET/CGopherFile::CGopherFile
helpviewer_keywords:
- CGopherFile [MFC], CGopherFile
ms.assetid: 3ca9898f-8cdb-4495-bbde-46d40100feda
ms.openlocfilehash: 8f511bdaf3ae6417972ea19465c0392832a2b408
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184075"
---
# <a name="cgopherfile-class"></a>Classe CGopherFile

Fornisce la funzionalità per individuare e leggere file in un server gopher.

> [!NOTE]
> Le classi `CGopherConnection` , `CGopherFile` , `CGopherFileFind` `CGopherLocator` e i relativi membri sono state deprecate perché non funzionano sulla piattaforma Windows XP, ma continueranno a funzionare su piattaforme precedenti.

## <a name="syntax"></a>Sintassi

```
class CGopherFile : public CInternetFile
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[CGopherFile:: CGopherFile](#cgopherfile)|Costruisce un oggetto `CGopherFile`.|

## <a name="remarks"></a>Commenti

Il servizio Gopher non consente agli utenti di scrivere dati in un file Gopher perché questo servizio funziona principalmente come interfaccia basata su menu per la ricerca di informazioni. Le `CGopherFile` funzioni membro `Write` , `WriteString` e `Flush` non sono implementate per `CGopherFile` . Chiamando queste funzioni su un `CGopherFile` oggetto, restituisce un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Per ulteriori informazioni sul `CGopherFile` funzionamento con le altre classi Internet MFC, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

[CInternetFile](../../mfc/reference/cinternetfile-class.md)

`CGopherFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

## <a name="cgopherfilecgopherfile"></a><a name="cgopherfile"></a> CGopherFile:: CGopherFile

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
Riferimento a un oggetto [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) .

*pConnection*<br/>
Puntatore a un oggetto [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) .

*hSession*<br/>
Handle per la sessione Internet corrente.

*pstrLocator*<br/>
Puntatore a una stringa utilizzata per individuare il server gopher. Per ulteriori informazioni sui localizzatori Gopher, vedere [sessioni Gopher](cgopherlocator-class.md) .

*dwLocLen*<br/>
Valore DWORD contenente il numero di byte in *pstrLocator*.

*dwContext*<br/>
Puntatore all'identificatore di contesto del file da aprire.

### <a name="remarks"></a>Commenti

È necessario un `CGopherFile` oggetto per la lettura da un file durante una sessione Internet Gopher.

Non è mai possibile creare `CGopherFile` direttamente un oggetto. In alternativa, chiamare [CGopherConnection:: OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) per aprire un file in un server gopher.

## <a name="see-also"></a>Vedi anche

[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)<br/>
[Classe CGopherLocator](../../mfc/reference/cgopherlocator-class.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)<br/>
[Classe CGopherConnection](../../mfc/reference/cgopherconnection-class.md)
