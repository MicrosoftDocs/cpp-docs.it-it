---
title: Classe CGopherLocator
ms.date: 11/04/2016
f1_keywords:
- CGopherLocator
- AFXINET/CGopherLocator
- AFXINET/CGopherLocator::CGopherLocator
- AFXINET/CGopherLocator::GetLocatorType
helpviewer_keywords:
- CGopherLocator [MFC], CGopherLocator
- CGopherLocator [MFC], GetLocatorType
ms.assetid: 6fcc015f-5ae6-4959-b936-858634c71019
ms.openlocfilehash: d23ef3dad68c62e74ec64454953ca372b8c31114
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373671"
---
# <a name="cgopherlocator-class"></a>Classe CGopherLocator

Ottiene un gopher "locator" da un server gopher, determina il tipo del localizzatore e rende il localizzatore disponibile per [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md).

> [!NOTE]
> Le `CGopherConnection`classi `CGopherFile` `CGopherFileFind`, `CGopherLocator` , e i relativi membri sono stati deprecati perché non funzionano sulla piattaforma Windows XP, ma continueranno a lavorare su piattaforme precedenti.

## <a name="syntax"></a>Sintassi

```
class CGopherLocator : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherLocator::CGopherLocator](#cgopherlocator)|Costruisce un oggetto `CGopherLocator`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherLocator::GetLocatorType](#getlocatortype)|Analizza un localizzatore gopher e ne determina gli attributi.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGopherLocator::operatorE LPCTSTR](#operator_lpctstr)|Accede direttamente ai caratteri `CGopherLocator` archiviati in un oggetto come stringa di tipo C.Directly accesses characters stored in a object as a C-style string.|

## <a name="remarks"></a>Osservazioni

Un'applicazione deve ottenere un localizzatore del server gopher prima di poter recuperare informazioni da tale server. Una volta che ha il localizzatore, deve trattare il localizzatore come un token opaco.

Ogni localizzatore gopher dispone di attributi che determinano il tipo di file o server trovato. Vedere [GetLocatorType](#getlocatortype) per un elenco di tipi di localizzatori gopher.

Un'applicazione utilizza in genere il localizzatore per le chiamate a [CGopherFileFind::FindFile](../../mfc/reference/cgopherfilefind-class.md#findfile) per recuperare un'informazione specifica.

Per ulteriori informazioni `CGopherLocator` sul funzionamento con le altre classi Internet MFC, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CGopherLocator`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="cgopherlocatorcgopherlocator"></a><a name="cgopherlocator"></a>CGopherLocator::CGopherLocator

Questa funzione membro viene `CGopherLocator` chiamata per creare un oggetto.

```
CGopherLocator(const CGopherLocator& ref);
```

### <a name="parameters"></a>Parametri

*ref*<br/>
Riferimento a un `CGopherLocator` oggetto costante.

### <a name="remarks"></a>Osservazioni

Non si `CGopherLocator` crea mai direttamente un oggetto. Chiamare [invece CGopherConnection::CreateLocator](../../mfc/reference/cgopherconnection-class.md#createlocator) per creare e `CGopherLocator` restituire un puntatore all'oggetto.

## <a name="cgopherlocatorgetlocatortype"></a><a name="getlocatortype"></a>CGopherLocator::GetLocatorType

Chiamare questa funzione membro per ottenere il tipo di localizzatore.

```
BOOL GetLocatorType(DWORD& dwRef) const;
```

### <a name="parameters"></a>Parametri

*dwRef (in modo di*<br/>
Riferimento a un DWORD che riceverà il tipo di localizzatore. Vedere **Osservazioni** per una tabella dei tipi di localizzatore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) può essere chiamata per determinare la causa dell'errore.

### <a name="remarks"></a>Osservazioni

I tipi possibili sono i seguenti:

|Valore|Significato|
|-----------|-------------|
|GOPHER_TYPE_TEXT_FILE|Un file di testo ASCII.|
|GOPHER_TYPE_DIRECTORY|Una directory di elementi Gopher aggiuntivi.|
|GOPHER_TYPE_CSO|Un server della rubrica CSO.|
|GOPHER_TYPE_ERROR|Indica una condizione di errore.|
|GOPHER_TYPE_MAC_BINHEX|Un file Macintosh in formato BINHEX.|
|GOPHER_TYPE_DOS_ARCHIVE|Un file di archivio DOS.|
|GOPHER_TYPE_UNIX_UUENCODED|Un file UUENCODED.|
|GOPHER_TYPE_INDEX_SERVER|Un server di indicizzazione.|
|GOPHER_TYPE_TELNET|Un server Telnet.|
|GOPHER_TYPE_BINARY|Un file binario.|
|GOPHER_TYPE_REDUNDANT|Un server duplicato. Le informazioni contenute all'interno sono un duplicato del server primario. Il server primario è l'ultima voce di directory che non dispone di un tipo di GOPHER_TYPE_REDUNDANT.|
|GOPHER_TYPE_TN3270|Un server TN3270.|
|GOPHER_TYPE_GIF|Un file di grafica GIF.|
|GOPHER_TYPE_IMAGE|Un file di immagine.|
|GOPHER_TYPE_BITMAP|Un file bitmap.|
|GOPHER_TYPE_MOVIE|Un file di film.|
|GOPHER_TYPE_SOUND|Un file audio.|
|GOPHER_TYPE_HTML|Documento HTML.|
|GOPHER_TYPE_PDF|Un file PDF.|
|GOPHER_TYPE_CALENDAR|Un file di calendario.|
|GOPHER_TYPE_INLINE|Un file inline.|
|GOPHER_TYPE_UNKNOWN|Il tipo di elemento è sconosciuto.|
|GOPHER_TYPE_ASK|Un oggetto Ask.|
|GOPHER_TYPE_GOPHER_PLUS|Un oggetto Gopher.|

## <a name="cgopherlocatoroperator-lpctstr"></a><a name="operator_lpctstr"></a>CGopherLocator::operatorE LPCTSTR

Questo utile operatore di cast fornisce un metodo efficiente per `CGopherLocator` accedere alla stringa C con terminazione null contenuta in un oggetto.

```
operator LPCTSTR () const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a i caratteri ai dati della stringa.

### <a name="remarks"></a>Osservazioni

Non viene copiato alcun carattere; viene restituito solo un puntatore.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)
