---
title: Classe CSocketAddr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: ee3f69874460d09e495a237985a98ace19134a01
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="csocketaddr-class"></a>Classe CSocketAddr
Questa classe fornisce metodi per la conversione di nomi host in indirizzi host, che supporta i formati IPv4 e IPV6.  
  
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
|[CSocketAddr::FindAddr](#findaddr)|Chiamare questo metodo per convertire il nome host fornito per l'indirizzo dell'host.|  
|[CSocketAddr::FindINET4Addr](#findinet4addr)|Chiamare questo metodo per convertire il nome host IPv4 per l'indirizzo dell'host.|  
|[CSocketAddr::FindINET6Addr](#findinet6addr)|Chiamare questo metodo per convertire il nome dell'host IPv6 per l'indirizzo dell'host.|  
|[CSocketAddr::GetAddrInfo](#getaddrinfo)|Chiamare questo metodo per restituire un puntatore a un elemento specifico di **addrinfo** elenco.|  
|[CSocketAddr::GetAddrInfoList](#getaddrinfolist)|Chiamare questo metodo per restituire un puntatore per il **addrinfo** elenco.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce una versione IP agnostico approccio per la ricerca di indirizzi di rete per l'utilizzo con Windows sockets funzioni API e socket wrapper nelle raccolte.  
  
 I membri di questa classe che vengono utilizzati per cercare gli indirizzi di rete utilizzano la funzione API Win32 [getaddrinfo](http://msdn.microsoft.com/library/windows/desktop/ms738520).  
  
 Questa classe supporta sia indirizzi di rete IPv4 andIPv6.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsocket.h  
  
##  <a name="csocketaddr"></a>CSocketAddr::CSocketAddr  
 Costruttore.  
  
```
CSocketAddr();
```  
  
### <a name="remarks"></a>Note  
 Crea un nuovo `CSocketAddr` dell'oggetto e inizializza l'elenco collegato contenente informazioni di risposta sull'host.  
  
##  <a name="findaddr"></a>CSocketAddr::FindAddr  
 Chiamare questo metodo per convertire il nome host fornito per l'indirizzo dell'host.  
  
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
 `szHost`  
 Il nome host o l'indirizzo IP punteggiato.  
  
 *szPortOrServiceName*  
 Il numero di porta o il nome del servizio nell'host.  
  
 `nPortNo`  
 Il numero di porta.  
  
 `flags`  
 0 o una combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.  
  
 *addr_family*  
 Indirizzo famiglia (ad esempio PF_INET).  
  
 `sock_type`  
 Tipo di socket (ad esempio SOCK_STREAM).  
  
 *ai_proto*  
 Protocollo (ad esempio IPPROTO_IP o IPPROTO_IPV6).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero se l'indirizzo è calcolata correttamente. Restituisce un codice di errore di Socket di Windows diverso da zero in caso di errore. Se ha esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato di riferimento utilizzando `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo`.  
  
### <a name="remarks"></a>Note  
 Il parametro di nome host può essere in formato IPv4 o IPv6. Questo metodo chiama la funzione API Win32 [getaddrinfo](http://msdn.microsoft.com/library/windows/desktop/ms738520) per eseguire la conversione.  
  
##  <a name="findinet4addr"></a>CSocketAddr::FindINET4Addr  
 Chiamare questo metodo per convertire il nome host IPv4 per l'indirizzo dell'host.  
  
```
int FindINET4Addr(
    const char *szHost,
    int nPortNo,
    int flags,
    int sock_type,);
```  
  
### <a name="parameters"></a>Parametri  
 `szHost`  
 Il nome host o l'indirizzo IP punteggiato.  
  
 `nPortNo`  
 Il numero di porta.  
  
 `flags`  
 0 o una combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.  
  
 `sock_type`  
 Tipo di socket (ad esempio SOCK_STREAM).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero se l'indirizzo è calcolata correttamente. Restituisce un codice di errore di Socket di Windows diverso da zero in caso di errore. Se ha esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato di riferimento utilizzando `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo`.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama la funzione API Win32 [getaddrinfo](http://msdn.microsoft.com/library/windows/desktop/ms738520) per eseguire la conversione.  
  
##  <a name="findinet6addr"></a>CSocketAddr::FindINET6Addr  
 Chiamare questo metodo per convertire il nome dell'host IPv6 per l'indirizzo dell'host.  
  
```
int FindINET6Addr(
    const char *szHost,
    int nPortNo,
    int flags,
    int sock_type,);
```  
  
### <a name="parameters"></a>Parametri  
 `szHost`  
 Il nome host o l'indirizzo IP punteggiato.  
  
 `nPortNo`  
 Il numero di porta.  
  
 `flags`  
 0 o una combinazione di AI_PASSIVE, AI_CANONNAME o AI_NUMERICHOST.  
  
 `sock_type`  
 Tipo di socket (ad esempio SOCK_STREAM).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero se l'indirizzo è calcolata correttamente. Restituisce un codice di errore di Socket di Windows diverso da zero in caso di errore. Se ha esito positivo, l'indirizzo calcolato viene archiviato in un elenco collegato di riferimento utilizzando `CSocketAddr::GetAddrInfoList` e `CSocketAddr::GetAddrInfo`.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama la funzione API Win32 [getaddrinfo](http://msdn.microsoft.com/library/windows/desktop/ms738520) per eseguire la conversione.  
  
##  <a name="getaddrinfo"></a>CSocketAddr::GetAddrInfo  
 Chiamare questo metodo per restituire un puntatore a un elemento specifico di **addrinfo** elenco.  
  
```
addrinfo* const GetAddrInfoint nIndex = 0) const;
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Un riferimento a un elemento specifico di [addrinfo](http://msdn.microsoft.com/library/windows/desktop/ms737530) elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il **addrinfo** struttura a cui fa riferimento `nIndex` nell'elenco collegato contenente informazioni di risposta sull'host.  
  
##  <a name="getaddrinfolist"></a>CSocketAddr::GetAddrInfoList  
 Chiamare questo metodo per restituire un puntatore per il **addrinfo** elenco.  
  
```
addrinfo* const GetAddrInfoList() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un elenco collegato di uno o più `addrinfo` strutture che contengono informazioni di risposta dell'host. Per ulteriori informazioni di `addrinfo` struttura, vedere l'articolo "addrinfo" il [MSDN Library](http://go.microsoft.com/fwlink/linkid=556)  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

