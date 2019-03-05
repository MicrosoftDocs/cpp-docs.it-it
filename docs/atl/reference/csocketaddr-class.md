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
ms.openlocfilehash: e94d92b11a7f200edb1815a0b384d0fc0428001f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57280329"
---
# <a name="csocketaddr-class"></a>Classe CSocketAddr

Questa classe fornisce metodi per convertire nomi host per gli indirizzi host, che supportano i formati IPv4 e IPV6.

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
|[CSocketAddr::FindAddr](#findaddr)|Chiamare questo metodo per convertire il nome host specificato per l'indirizzo dell'host.|
|[CSocketAddr::FindINET4Addr](#findinet4addr)|Chiamare questo metodo per convertire il nome host IPv4 per l'indirizzo dell'host.|
|[CSocketAddr::FindINET6Addr](#findinet6addr)|Chiamare questo metodo per convertire il nome dell'host IPv6 per l'indirizzo dell'host.|
|[CSocketAddr::GetAddrInfo](#getaddrinfo)|Chiamare questo metodo per restituire un puntatore a un elemento specifico di `addrinfo` elenco.|
|[CSocketAddr::GetAddrInfoList](#getaddrinfolist)|Chiamare questo metodo per restituire un puntatore per il `addrinfo` elenco.|

## <a name="remarks"></a>Note

Questa classe fornisce una versione IP agnostica approccio per la ricerca di indirizzi di rete per l'uso con Windows sockets funzioni API e i wrapper di socket nelle librerie.

I membri di questa classe vengano utilizzati per cercare gli indirizzi di rete usano la funzione API Win32 [getaddrinfo](/windows/desktop/api/ws2tcpip/nf-ws2tcpip-getaddrinfo). La versione ANSI o UNICODE della funzione viene chiamata a seconda del fatto che il codice viene compilato per ANSI o UNICODE.

Questa classe supporta entrambi gli indirizzi di IPv4 andIPv6 rete.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsocket.h

##  <a name="csocketaddr"></a>  CSocketAddr::CSocketAddr

Costruttore.

```
CSocketAddr();
```

### <a name="remarks"></a>Note

Crea un nuovo `CSocketAddr` dell'oggetto e inizializza l'elenco collegato contenente informazioni relative alla risposta sull'host.

##  <a name="findaddr"></a>  CSocketAddr::FindAddr

Chiamare questo metodo per convertire il nome host specificato per l'indirizzo dell'host.

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

*szHost*<br/>
Il nome host o indirizzo IP punteggiato.

*szPortOrServiceName*<br/>
Il numero di porta o il nome del servizio nell'host.

*nPortNo*<br/>
Il numero di porta.

*flags*<br/>
0 o combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.

*addr_family*<br/>
Famiglia (ad esempio PF_INET) di indirizzi.

*sock_type*<br/>
Tipo di socket (ad esempio SOCK_STREAM).

*ai_proto*<br/>
Protocollo (ad esempio IPPROTO_IP o IPPROTO_IPV6).

### <a name="return-value"></a>Valore restituito

Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Socket di Windows diverso da zero in caso di errore. Se ha esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato che potrà farvi riferimento tramite `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo`.

### <a name="remarks"></a>Note

Il parametro del nome host può essere nel formato IPv4 o IPv6. Questo metodo chiama la funzione API Win32 [getaddrinfo](/windows/desktop/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.

##  <a name="findinet4addr"></a>  CSocketAddr::FindINET4Addr

Chiamare questo metodo per convertire il nome host IPv4 per l'indirizzo dell'host.

```
int FindINET4Addr(
    const TCHAR *szHost,
    int nPortNo,
    int flags = 0,
    int sock_type = SOCK_STREAM);
```

### <a name="parameters"></a>Parametri

*szHost*<br/>
Il nome host o indirizzo IP punteggiato.

*nPortNo*<br/>
Il numero di porta.

*flags*<br/>
0 o combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.

*sock_type*<br/>
Tipo di socket (ad esempio SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Socket di Windows diverso da zero in caso di errore. Se ha esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato che potrà farvi riferimento tramite `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo`.

### <a name="remarks"></a>Note

Questo metodo chiama la funzione API Win32 [getaddrinfo](/windows/desktop/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.

##  <a name="findinet6addr"></a>  CSocketAddr::FindINET6Addr

Chiamare questo metodo per convertire il nome dell'host IPv6 per l'indirizzo dell'host.

```
int FindINET6Addr(
    const TCHAR *szHost,
    int nPortNo,
    int flags = 0,
    int sock_type = SOCK_STREAM);
```

### <a name="parameters"></a>Parametri

*szHost*<br/>
Il nome host o indirizzo IP punteggiato.

*nPortNo*<br/>
Il numero di porta.

*flags*<br/>
0 o combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.

*sock_type*<br/>
Tipo di socket (ad esempio SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Socket di Windows diverso da zero in caso di errore. Se ha esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato che potrà farvi riferimento tramite `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo`.

### <a name="remarks"></a>Note

Questo metodo chiama la funzione API Win32 [getaddrinfo](/windows/desktop/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.

##  <a name="getaddrinfo"></a>  CSocketAddr::GetAddrInfo

Chiamare questo metodo per restituire un puntatore a un elemento specifico di `addrinfo` elenco.

```
addrinfo* const GetAddrInfo(int nIndex = 0) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Un riferimento a un elemento specifico di [addrinfo](/windows/desktop/api/ws2def/ns-ws2def-addrinfoa) elenco.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore per il `addrinfo` struttura fa *nIndex* nell'elenco collegato contenente informazioni relative alla risposta sull'host.

##  <a name="getaddrinfolist"></a>  CSocketAddr::GetAddrInfoList

Chiamare questo metodo per restituire un puntatore per il `addrinfo` elenco.

```
addrinfo* const GetAddrInfoList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un elenco collegato di uno o più `addrinfo` strutture contenenti informazioni relative alla risposta sull'host. Per altre informazioni, vedere [addrinfo struttura](/windows/desktop/api/ws2def/ns-ws2def-addrinfoa).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
