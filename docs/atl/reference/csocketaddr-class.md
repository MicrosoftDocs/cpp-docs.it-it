---
description: 'Altre informazioni su: classe CSocketAddr'
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
ms.openlocfilehash: eff93b6a8e6d0ea487e3571cd52973d9e17115d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140529"
---
# <a name="csocketaddr-class"></a>Classe CSocketAddr

Questa classe fornisce i metodi per convertire i nomi host in indirizzi host, supportando sia i formati IPv4 che IPV6.

## <a name="syntax"></a>Sintassi

```
class CSocketAddr
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSocketAddr:: CSocketAddr](#csocketaddr)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSocketAddr:: FindAddr](#findaddr)|Chiamare questo metodo per convertire il nome host specificato nell'indirizzo host.|
|[CSocketAddr:: FindINET4Addr](#findinet4addr)|Chiamare questo metodo per convertire il nome host IPv4 nell'indirizzo host.|
|[CSocketAddr:: FindINET6Addr](#findinet6addr)|Chiamare questo metodo per convertire il nome host IPv6 nell'indirizzo host.|
|[CSocketAddr:: funzione getaddrinfo](#getaddrinfo)|Chiamare questo metodo per restituire un puntatore a un elemento specifico dell' `addrinfo` elenco.|
|[CSocketAddr:: GetAddrInfoList](#getaddrinfolist)|Chiamare questo metodo per restituire un puntatore all' `addrinfo` elenco.|

## <a name="remarks"></a>Commenti

Questa classe fornisce un approccio indipendente dalla versione IP per la ricerca di indirizzi di rete da usare con le funzioni API Windows Sockets e i wrapper socket nelle librerie.

I membri di questa classe utilizzati per cercare indirizzi di rete utilizzano la funzione API Win32 [funzione getaddrinfo](/windows/win32/api/ws2tcpip/nf-ws2tcpip-getaddrinfo). La versione ANSI o UNICODE della funzione viene chiamata a seconda che il codice venga compilato per ANSI o UNICODE.

Questa classe supporta sia indirizzi di rete andIPv6 IPv4.

## <a name="requirements"></a>Requisiti

**Intestazione:** Atlsocket. h

## <a name="csocketaddrcsocketaddr"></a><a name="csocketaddr"></a> CSocketAddr:: CSocketAddr

Costruttore.

```
CSocketAddr();
```

### <a name="remarks"></a>Commenti

Crea un nuovo `CSocketAddr` oggetto e Inizializza l'elenco collegato contenente le informazioni di risposta sull'host.

## <a name="csocketaddrfindaddr"></a><a name="findaddr"></a> CSocketAddr:: FindAddr

Chiamare questo metodo per convertire il nome host specificato nell'indirizzo host.

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
Nome host o indirizzo IP punteggiato.

*szPortOrServiceName*<br/>
Il numero di porta o il nome del servizio nell'host.

*nPortNo*<br/>
Il numero della porta.

*flags*<br/>
0 o una combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.

*addr_family*<br/>
Famiglia di indirizzi, ad esempio PF_INET.

*sock_type*<br/>
Tipo di socket, ad esempio SOCK_STREAM.

*ai_proto*<br/>
Protocollo, ad esempio IPPROTO_IP o IPPROTO_IPV6.

### <a name="return-value"></a>Valore restituito

Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Windows Socket diverso da zero in caso di errore. In caso di esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato a cui è possibile fare riferimento utilizzando `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo` .

### <a name="remarks"></a>Commenti

Il parametro del nome host può essere in formato IPv4 o IPv6. Questo metodo chiama la funzione API Win32 [funzione getaddrinfo](/windows/win32/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.

## <a name="csocketaddrfindinet4addr"></a><a name="findinet4addr"></a> CSocketAddr:: FindINET4Addr

Chiamare questo metodo per convertire il nome host IPv4 nell'indirizzo host.

```
int FindINET4Addr(
    const TCHAR *szHost,
    int nPortNo,
    int flags = 0,
    int sock_type = SOCK_STREAM);
```

### <a name="parameters"></a>Parametri

*szHost*<br/>
Nome host o indirizzo IP punteggiato.

*nPortNo*<br/>
Il numero della porta.

*flags*<br/>
0 o una combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.

*sock_type*<br/>
Tipo di socket, ad esempio SOCK_STREAM.

### <a name="return-value"></a>Valore restituito

Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Windows Socket diverso da zero in caso di errore. In caso di esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato a cui è possibile fare riferimento utilizzando `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo` .

### <a name="remarks"></a>Commenti

Questo metodo chiama la funzione API Win32 [funzione getaddrinfo](/windows/win32/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.

## <a name="csocketaddrfindinet6addr"></a><a name="findinet6addr"></a> CSocketAddr:: FindINET6Addr

Chiamare questo metodo per convertire il nome host IPv6 nell'indirizzo host.

```
int FindINET6Addr(
    const TCHAR *szHost,
    int nPortNo,
    int flags = 0,
    int sock_type = SOCK_STREAM);
```

### <a name="parameters"></a>Parametri

*szHost*<br/>
Nome host o indirizzo IP punteggiato.

*nPortNo*<br/>
Il numero della porta.

*flags*<br/>
0 o una combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.

*sock_type*<br/>
Tipo di socket, ad esempio SOCK_STREAM.

### <a name="return-value"></a>Valore restituito

Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Windows Socket diverso da zero in caso di errore. In caso di esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato a cui è possibile fare riferimento utilizzando `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo` .

### <a name="remarks"></a>Commenti

Questo metodo chiama la funzione API Win32 [funzione getaddrinfo](/windows/win32/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.

## <a name="csocketaddrgetaddrinfo"></a><a name="getaddrinfo"></a> CSocketAddr:: funzione getaddrinfo

Chiamare questo metodo per restituire un puntatore a un elemento specifico dell' `addrinfo` elenco.

```
addrinfo* const GetAddrInfo(int nIndex = 0) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Riferimento a un elemento specifico nell'elenco [addrinfo](/windows/win32/api/ws2def/ns-ws2def-addrinfow) .

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla `addrinfo` struttura a cui fa riferimento *nIndex* nell'elenco collegato contenente le informazioni di risposta sull'host.

## <a name="csocketaddrgetaddrinfolist"></a><a name="getaddrinfolist"></a> CSocketAddr:: GetAddrInfoList

Chiamare questo metodo per restituire un puntatore all' `addrinfo` elenco.

```
addrinfo* const GetAddrInfoList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un elenco collegato di una o più `addrinfo` strutture contenenti informazioni di risposta sull'host. Per altre informazioni, vedere [struttura addrinfo](/windows/win32/api/ws2def/ns-ws2def-addrinfow).

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
