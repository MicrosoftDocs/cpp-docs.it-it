---
title: Classe CSocketAddr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CSocketAddr
- ATLSOCKET/ATL::CSocketAddr
- ATLSOCKET/ATL::CSocketAddr::CSocketAddr
- ATLSOCKET/ATL::CSocketAddr::FindAddr
- ATLSOCKET/ATL::CSocketAddr::FindINET4Addr
- ATLSOCKET/ATL::CSocketAddr::FindINET6Addr
- ATLSOCKET/ATL::CSocketAddr::GetAddrInfo
- ATLSOCKET/ATL::CSocketAddr::GetAddrInfoList
dev_langs:
- C++
helpviewer_keywords:
- CSocketAddr class
ms.assetid: 2fb2d8a7-899e-4a36-a342-cc9f4fcdd68c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cb0b50170de0ba5a5c38c1850369092d8453445a
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43203200"
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
  
 I membri di questa classe vengano utilizzati per cercare gli indirizzi di rete usano la funzione API Win32 [getaddrinfo](/windows/desktop/api/ws2tcpip/nf-ws2tcpip-getaddrinfo).  
  
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
    const char *szHost,
    const char *szPortOrServiceName,
    int flags,
    int addr_family,
    int sock_type,
    int ai_proto);

int FindAddr(
    const char *szHost,
    int nPortNo,
    int flags,
    int addr_family,
    int sock_type,
    int ai_proto);
```  
  
### <a name="parameters"></a>Parametri  
 *szHost*  
 Il nome host o indirizzo IP punteggiato.  
  
 *szPortOrServiceName*  
 Il numero di porta o il nome del servizio nell'host.  
  
 *nPortNo*  
 Il numero di porta.  
  
 *flags*  
 0 o combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.  
  
 *addr_family*  
 Famiglia (ad esempio PF_INET) di indirizzi.  
  
 *sock_type*  
 Tipo di socket (ad esempio SOCK_STREAM).  
  
 *ai_proto*  
 Protocollo (ad esempio IPPROTO_IP o IPPROTO_IPV6).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Socket di Windows diverso da zero in caso di errore. Se ha esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato che potrà farvi riferimento tramite `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo`.  
  
### <a name="remarks"></a>Note  
 Il parametro del nome host può essere nel formato IPv4 o IPv6. Questo metodo chiama la funzione API Win32 [getaddrinfo](/windows/desktop/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.  
  
##  <a name="findinet4addr"></a>  CSocketAddr::FindINET4Addr  
 Chiamare questo metodo per convertire il nome host IPv4 per l'indirizzo dell'host.  
  
```
int FindINET4Addr(
    const char *szHost,
    int nPortNo,
    int flags,
    int sock_type,);
```  
  
### <a name="parameters"></a>Parametri  
 *szHost*  
 Il nome host o indirizzo IP punteggiato.  
  
 *nPortNo*  
 Il numero di porta.  
  
 *flags*  
 0 o combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.  
  
 *sock_type*  
 Tipo di socket (ad esempio SOCK_STREAM).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Socket di Windows diverso da zero in caso di errore. Se ha esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato che potrà farvi riferimento tramite `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo`.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama la funzione API Win32 [getaddrinfo](/windows/desktop/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.  
  
##  <a name="findinet6addr"></a>  CSocketAddr::FindINET6Addr  
 Chiamare questo metodo per convertire il nome dell'host IPv6 per l'indirizzo dell'host.  
  
```
int FindINET6Addr(
    const char *szHost,
    int nPortNo,
    int flags,
    int sock_type,);
```  
  
### <a name="parameters"></a>Parametri  
 *szHost*  
 Il nome host o indirizzo IP punteggiato.  
  
 *nPortNo*  
 Il numero di porta.  
  
 *flags*  
 0 o combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.  
  
 *sock_type*  
 Tipo di socket (ad esempio SOCK_STREAM).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero se l'indirizzo viene calcolato correttamente. Restituisce un codice di errore di Socket di Windows diverso da zero in caso di errore. Se ha esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato che potrà farvi riferimento tramite `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo`.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama la funzione API Win32 [getaddrinfo](/windows/desktop/api/ws2tcpip/nf-ws2tcpip-getaddrinfo) per eseguire la conversione.  
  
##  <a name="getaddrinfo"></a>  CSocketAddr::GetAddrInfo  
 Chiamare questo metodo per restituire un puntatore a un elemento specifico di `addrinfo` elenco.  
  
```
addrinfo* const GetAddrInfoint nIndex = 0) const;
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un riferimento a un elemento specifico di [addrinfo](https://msdn.microsoft.com/library/windows/desktop/ms737530) elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il `addrinfo` struttura fa *nIndex* nell'elenco collegato contenente informazioni relative alla risposta sull'host.  
  
##  <a name="getaddrinfolist"></a>  CSocketAddr::GetAddrInfoList  
 Chiamare questo metodo per restituire un puntatore per il `addrinfo` elenco.  
  
```
addrinfo* const GetAddrInfoList() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un elenco collegato di uno o più `addrinfo` strutture contenenti informazioni relative alla risposta sull'host. Per altre informazioni, vedere [addrinfo struttura](https://msdn.microsoft.com/library/windows/desktop/ms737530).
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
