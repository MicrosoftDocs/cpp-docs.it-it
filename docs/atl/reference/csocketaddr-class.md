---
title: Classe CSocketAddr
ms.date: 10/22/2018
f1_keywords:
- CSocketAddr
- ATLSOCKET/ATL::CSocketAddr
- ATLSOCKET/ATL::CSocketAddr::CSocketAddr
- ATLSOCKET/ATL::CSocketAddr::FindAddr
- ATLSOCKET/ATL::CSocketAddr::FindINET4Addr
- ATLSOCKET/ATL::CSocketAddr::FindINET6Addr
- ATLSOCKET/ATL::CSocketAddr::GetAddrInfo
- ATLSOCKET/ATL::CSocketAddr::GetAddrInfoList
helpviewer_keywords:
- CSocketAddr class
ms.assetid: 2fb2d8a7-899e-4a36-a342-cc9f4fcdd68c
ms.openlocfilehash: 66d33d62212389a2b0f318250c1c16a99167c6eb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330689"
---
# <a name="csocketaddr-class"></a>Classe CSocketAddr

Questa classe fornisce metodi per convertire i nomi host in indirizzi host, supportando entrambi i formati IPv4 e IPV6.

## <a name="syntax"></a>Sintassi

```
class CSocketAddr
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSocketAddr::CSocketAddr](#csocketaddr)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSocketAddr::FindAddr](#findaddr)|Chiamare questo metodo per convertire il nome host fornito nell'indirizzo host.|
|[CSocketAddr::FindINET4Addr](#findinet4addr)|Chiamare questo metodo per convertire il nome host IPv4 nell'indirizzo host.|
|[CSocketAddr::FindINET6Addr](#findinet6addr)|Chiamare questo metodo per convertire il nome host IPv6 nell'indirizzo host.|
|[CSocketAddr::GetAddrInfo](#getaddrinfo)|Chiamare questo metodo per restituire un puntatore a un elemento specifico nell'elenco. `addrinfo`|
|[CSocketAddr::GetAddrInfoList](#getaddrinfolist)|Chiamare questo metodo per restituire `addrinfo` un puntatore all'elenco.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce un approccio indipendente dalla versione IP per la ricerca di indirizzi di rete da utilizzare con le funzioni API dei socket di Windows e i wrapper socket nelle librerie.

I membri di questa classe utilizzati per cercare gli indirizzi di rete utilizzano la funzione API Win32 [getaddrinfo](/windows/win32/api/ws2tcpip/nf-ws2tcpip-getaddrinfo). La versione ANSI o UNICODE della funzione viene chiamata a seconda che il codice sia compilato per ANSI o UNICODE.

Questa classe supporta gli indirizzi di rete IPv4 e IPv6.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsocket.h

## <a name="csocketaddrcsocketaddr"></a><a name="csocketaddr"></a>CSocketAddr::CSocketAddr

Costruttore.

```
CSocketAddr();
```

### <a name="remarks"></a>Osservazioni

Crea un `CSocketAddr` nuovo oggetto e inizializza l'elenco collegato contenente le informazioni sulla risposta relative all'host.

## <a name="csocketaddrfindaddr"></a><a name="findaddr"></a>CSocketAddr::FindAddr

Chiamare questo metodo per convertire il nome host fornito nell'indirizzo host.

```
int FindAddr(
    const TCHAR *szHost,
    const TCHAR *szPortOrServiceName,
    int flags,
    int addr_family,
    int sock_type,
    int ai_proto);

int FindAddr(
    const TCHAR *szHost,
    int nPortNo,
    int flags,
    int addr_family,
    int sock_type,
    int ai_proto);
```

### <a name="parameters"></a>Parametri

*szHost (szHost)*<br/>
Il nome host o l'indirizzo IP punteggiato.

*szPortOrNomeServizio*<br/>
Il numero di porta o il nome del servizio nell'host.

*nPortaNo*<br/>
Il numero della porta.

*Bandiere*<br/>
0 o combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.

*addr_family*<br/>
Famiglia di indirizzi (ad esempio PF_INET).

*sock_type*<br/>
Tipo di socket (ad esempio SOCK_STREAM).

*ai_proto*<br/>
(ad esempio IPPROTO_IP o IPPROTO_IPV6).

### <a name="return-value"></a>Valore restituito

Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Windows Socket diverso da zero in caso di errore. In caso di esito positivo, l'indirizzo calcolato `CSocketAddr::GetAddrInfoList` viene `CSocketAddr::GetAddrInfo`memorizzato in un elenco collegato a cui è possibile fare riferimento utilizzando e .

### <a name="remarks"></a>Osservazioni

Il parametro del nome host può essere in formato IPv4 o IPv6. Questo metodo chiama la funzione API Win32 [getaddrinfo](/windows/win32/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.

## <a name="csocketaddrfindinet4addr"></a><a name="findinet4addr"></a>CSocketAddr::FindINET4Addr

Chiamare questo metodo per convertire il nome host IPv4 nell'indirizzo host.

```
int FindINET4Addr(
    const TCHAR *szHost,
    int nPortNo,
    int flags = 0,
    int sock_type = SOCK_STREAM);
```

### <a name="parameters"></a>Parametri

*szHost (szHost)*<br/>
Il nome host o l'indirizzo IP punteggiato.

*nPortaNo*<br/>
Il numero della porta.

*Bandiere*<br/>
0 o combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.

*sock_type*<br/>
Tipo di socket (ad esempio SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Windows Socket diverso da zero in caso di errore. In caso di esito positivo, l'indirizzo calcolato `CSocketAddr::GetAddrInfoList` viene `CSocketAddr::GetAddrInfo`memorizzato in un elenco collegato a cui è possibile fare riferimento utilizzando e .

### <a name="remarks"></a>Osservazioni

Questo metodo chiama la funzione API Win32 [getaddrinfo](/windows/win32/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.

## <a name="csocketaddrfindinet6addr"></a><a name="findinet6addr"></a>CSocketAddr::FindINET6Addr

Chiamare questo metodo per convertire il nome host IPv6 nell'indirizzo host.

```
int FindINET6Addr(
    const TCHAR *szHost,
    int nPortNo,
    int flags = 0,
    int sock_type = SOCK_STREAM);
```

### <a name="parameters"></a>Parametri

*szHost (szHost)*<br/>
Il nome host o l'indirizzo IP punteggiato.

*nPortaNo*<br/>
Il numero della porta.

*Bandiere*<br/>
0 o combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.

*sock_type*<br/>
Tipo di socket (ad esempio SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Windows Socket diverso da zero in caso di errore. In caso di esito positivo, l'indirizzo calcolato `CSocketAddr::GetAddrInfoList` viene `CSocketAddr::GetAddrInfo`memorizzato in un elenco collegato a cui è possibile fare riferimento utilizzando e .

### <a name="remarks"></a>Osservazioni

Questo metodo chiama la funzione API Win32 [getaddrinfo](/windows/win32/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.

## <a name="csocketaddrgetaddrinfo"></a><a name="getaddrinfo"></a>CSocketAddr::GetAddrInfo

Chiamare questo metodo per restituire un puntatore a un elemento specifico nell'elenco. `addrinfo`

```
addrinfo* const GetAddrInfo(int nIndex = 0) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Riferimento a un elemento specifico nell'elenco [addrinfo.](/windows/win32/api/ws2def/ns-ws2def-addrinfow)

### <a name="return-value"></a>Valore restituito

Restituisce un `addrinfo` puntatore alla struttura a cui fa riferimento *nIndex* nell'elenco collegato contenente le informazioni di risposta sull'host.

## <a name="csocketaddrgetaddrinfolist"></a><a name="getaddrinfolist"></a>CSocketAddr::GetAddrInfoList

Chiamare questo metodo per restituire `addrinfo` un puntatore all'elenco.

```
addrinfo* const GetAddrInfoList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un elenco `addrinfo` collegato di una o più strutture contenenti informazioni di risposta sull'host. Per ulteriori informazioni, consultate [struttura addrinfo.](/windows/win32/api/ws2def/ns-ws2def-addrinfow)

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
