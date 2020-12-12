---
description: 'Altre informazioni su: classe CGopherLocator'
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
ms.openlocfilehash: f615ce6fbda150d923f6664acff207fdebdbba3f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184023"
---
# <a name="cgopherlocator-class"></a>Classe CGopherLocator

Ottiene un "Localizzatore" gopher da un server gopher, determina il tipo di localizzatore e rende disponibile il localizzatore per [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md).

> [!NOTE]
> Le classi `CGopherConnection` , `CGopherFile` , `CGopherFileFind` `CGopherLocator` e i relativi membri sono state deprecate perché non funzionano sulla piattaforma Windows XP, ma continueranno a funzionare su piattaforme precedenti.

## <a name="syntax"></a>Sintassi

```
class CGopherLocator : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CGopherLocator:: CGopherLocator](#cgopherlocator)|Costruisce un oggetto `CGopherLocator`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CGopherLocator:: GetLocatorType](#getlocatortype)|Analizza un localizzatore Gopher e ne determina i relativi attributi.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CGopherLocator:: operator LPCTSTR](#operator_lpctstr)|Accede direttamente ai caratteri archiviati in un `CGopherLocator` oggetto come una stringa di tipo C.|

## <a name="remarks"></a>Commenti

Per poter recuperare informazioni da tale server, un'applicazione deve ottenere un localizzatore del server gopher. Una volta creato, il localizzatore deve considerare il localizzatore come token opaco.

Ogni localizzatore Gopher dispone di attributi che determinano il tipo di file o server trovati. Per un elenco dei tipi di localizzatori Gopher, vedere [GetLocatorType](#getlocatortype) .

Un'applicazione usa in genere il localizzatore per le chiamate a [CGopherFileFind:: FindFile](../../mfc/reference/cgopherfilefind-class.md#findfile) per recuperare informazioni specifiche.

Per ulteriori informazioni sul `CGopherLocator` funzionamento con le altre classi Internet MFC, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CGopherLocator`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

## <a name="cgopherlocatorcgopherlocator"></a><a name="cgopherlocator"></a> CGopherLocator:: CGopherLocator

Questa funzione membro viene chiamata per creare un `CGopherLocator` oggetto.

```
CGopherLocator(const CGopherLocator& ref);
```

### <a name="parameters"></a>Parametri

*ref*<br/>
Riferimento a un oggetto costante `CGopherLocator` .

### <a name="remarks"></a>Commenti

Non è mai possibile creare `CGopherLocator` direttamente un oggetto. In alternativa, chiamare [CGopherConnection:: CreateLocator](../../mfc/reference/cgopherconnection-class.md#createlocator) per creare e restituire un puntatore all' `CGopherLocator` oggetto.

## <a name="cgopherlocatorgetlocatortype"></a><a name="getlocatortype"></a> CGopherLocator:: GetLocatorType

Chiamare questa funzione membro per ottenere il tipo di localizzatore.

```
BOOL GetLocatorType(DWORD& dwRef) const;
```

### <a name="parameters"></a>Parametri

*dwRef*<br/>
Riferimento a un valore DWORD che riceverà il tipo di localizzatore. Vedere la **sezione Osservazioni** per una tabella di tipi di localizzatori.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, è possibile chiamare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per determinare la cause dell'errore.

### <a name="remarks"></a>Commenti

I tipi possibili sono i seguenti:

|Valore|Significato|
|-----------|-------------|
|GOPHER_TYPE_TEXT_FILE|Un file di testo ASCII.|
|GOPHER_TYPE_DIRECTORY|Una directory di elementi Gopher aggiuntivi.|
|GOPHER_TYPE_CSO|Un server della rubrica CSO.|
|GOPHER_TYPE_ERROR|Indica una condizione di errore.|
|GOPHER_TYPE_MAC_BINHEX|Un file Macintosh in formato BINHEX.|
|GOPHER_TYPE_DOS_ARCHIVE|Un file di archivio DOS.|
|GOPHER_TYPE_UNIX_UUENCODED|File UUENCODEd.|
|GOPHER_TYPE_INDEX_SERVER|Server di indicizzazione.|
|GOPHER_TYPE_TELNET|Un server Telnet.|
|GOPHER_TYPE_BINARY|File binario.|
|GOPHER_TYPE_REDUNDANT|Server duplicato. Le informazioni contenute in sono un duplicato del server primario. Il server primario è l'ultima voce di directory che non dispone di un tipo di GOPHER_TYPE_REDUNDANT.|
|GOPHER_TYPE_TN3270|Un server TN3270.|
|GOPHER_TYPE_GIF|Un file di grafica GIF.|
|GOPHER_TYPE_IMAGE|Un file di immagine.|
|GOPHER_TYPE_BITMAP|File bitmap.|
|GOPHER_TYPE_MOVIE|Un file di film.|
|GOPHER_TYPE_SOUND|Un file audio.|
|GOPHER_TYPE_HTML|Documento HTML.|
|GOPHER_TYPE_PDF|Un file PDF.|
|GOPHER_TYPE_CALENDAR|Un file di calendario.|
|GOPHER_TYPE_INLINE|File inline.|
|GOPHER_TYPE_UNKNOWN|Il tipo di elemento è sconosciuto.|
|GOPHER_TYPE_ASK|Elemento Ask +.|
|GOPHER_TYPE_GOPHER_PLUS|Gopher + elemento.|

## <a name="cgopherlocatoroperator-lpctstr"></a><a name="operator_lpctstr"></a> CGopherLocator:: operator LPCTSTR

Questo utile operatore di cast fornisce un metodo efficiente per accedere alla stringa C con terminazione null contenuta in un `CGopherLocator` oggetto.

```
operator LPCTSTR () const;
```

### <a name="return-value"></a>Valore restituito

Puntatore di caratteri ai dati della stringa.

### <a name="remarks"></a>Commenti

Nessun carattere copiato; viene restituito solo un puntatore.

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)
