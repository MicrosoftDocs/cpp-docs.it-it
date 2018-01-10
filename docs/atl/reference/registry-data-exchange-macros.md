---
title: Macro di scambio di dati del Registro di sistema | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atlplus/ATL::BEGIN_RDX_MAP
- atlplus/ATL::END_RDX_MAP
- atlplus/ATL::RDX_BINARY
- atlplus/ATL::RDX_CSTRING_TEXT
- atlplus/ATL::RDX_DWORD
- atlplus/ATL::RDX_TEXT
dev_langs: C++
helpviewer_keywords: RegistryDataExchange function, macros
ms.assetid: c1bc5e79-2307-43d2-9d10-3a62ffadf473
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0bc12c48ef628a42c309c44ce0fc37abda9b6690
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="registry-data-exchange-macros"></a>Macro di scambio di dati del Registro di sistema
Queste macro eseguono le operazioni di scambio di dati del Registro di sistema.  
  
|||  
|-|-|  
|[BEGIN_RDX_MAP](#begin_rdx_map)|Contrassegna l'inizio della mappa di scambio di dati del Registro di sistema.|  
|[END_RDX_MAP](#end_rdx_map)|Contrassegna la fine della mappa di scambio di dati del Registro di sistema.|  
|[RDX_BINARY](#rdx_binary)|Associa la voce del Registro di sistema a una variabile membro di tipo BYTE.|  
|[RDX_CSTRING_TEXT](#rdx_cstring_text)|Associa una variabile membro specificato del tipo CString la voce del Registro di sistema.|  
|[RDX_DWORD](#rdx_dword)|Associa la voce del Registro di sistema a una variabile membro di tipo DWORD.|  
|[RDX_TEXT](#rdx_text)|Associa una variabile membro specificato del tipo TCHAR la voce del Registro di sistema.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlplus  
   
##  <a name="begin_rdx_map"></a>BEGIN_RDX_MAP  
 Contrassegna l'inizio della mappa di scambio di dati del Registro di sistema.  
  
```
BEGIN_RDX_MAP
```  
  
### <a name="remarks"></a>Note  
 Le macro seguenti vengono utilizzate all'interno della mappa di scambio di dati del Registro di sistema per leggere e scrivere voci nel Registro di sistema:  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[RDX_BINARY](#rdx_binary)|Associa la voce del Registro di sistema a una variabile membro di tipo BYTE.|  
|[RDX_DWORD](#rdx_dword)|Associa la voce del Registro di sistema a una variabile membro di tipo DWORD.|  
|[RDX_CSTRING_TEXT](#rdx_cstring_text)|Associa una variabile membro specificato del tipo CString la voce del Registro di sistema.|  
|[RDX_TEXT](#rdx_text)|Associa una variabile membro specificato del tipo TCHAR la voce del Registro di sistema.|  
  
 La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), o la funzione membro con lo stesso nome creato dal `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato ogni volta che il codice necessario per lo scambio di dati tra il Registro di sistema e variabili specificate nella mappa RDX.  
  
##  <a name="end_rdx_map"></a>END_RDX_MAP  
 Contrassegna la fine della mappa di scambio di dati del Registro di sistema.  
  
```
END_RDX_MAP
```  
  
##  <a name="rdx_binary"></a>RDX_BINARY  
 Associa la voce del Registro di sistema a una variabile membro di tipo BYTE.  
  
```
RDX_BINARY(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```  
  
### <a name="parameters"></a>Parametri  
 `rootkey`  
 Radice chiave del Registro di sistema.  
  
 `subkey`  
 La sottochiave del Registro di sistema.  
  
 `valuename`  
 La chiave del Registro di sistema.  
  
 `member`  
 La variabile membro per associare la voce del Registro di sistema.  
  
 `member_size`  
 Le dimensioni in byte, della variabile membro.  
  
### <a name="remarks"></a>Note  
 Questa macro viene usata in combinazione con il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), la funzione membro con lo stesso nome di autore o il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato per effettuare lo scambio di dati tra il Registro di sistema e il membro variabili nella mappa RDX.  
  
##  <a name="rdx_cstring_text"></a>RDX_CSTRING_TEXT  
 Associa una variabile membro specificato del tipo CString la voce del Registro di sistema.  
  
```
RDX_CSTRING_TEXT(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```  
  
### <a name="parameters"></a>Parametri  
 `rootkey`  
 Radice chiave del Registro di sistema.  
  
 `subkey`  
 La sottochiave del Registro di sistema.  
  
 `valuename`  
 La chiave del Registro di sistema.  
  
 `member`  
 La variabile membro per associare la voce del Registro di sistema.  
  
 `member_size`  
 Le dimensioni in byte, della variabile membro.  
  
### <a name="remarks"></a>Note  
 Questa macro viene usata in combinazione con il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), la funzione membro con lo stesso nome di autore o il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato per effettuare lo scambio di dati tra il Registro di sistema e il membro variabili nella mappa RDX.  
  
##  <a name="rdx_dword"></a>RDX_DWORD  
 Associa la voce del Registro di sistema a una variabile membro di tipo DWORD.  
  
```
RDX_DWORD(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```  
  
### <a name="parameters"></a>Parametri  
 `rootkey`  
 Radice chiave del Registro di sistema.  
  
 `subkey`  
 La sottochiave del Registro di sistema.  
  
 `valuename`  
 La chiave del Registro di sistema.  
  
 `member`  
 La variabile membro per associare la voce del Registro di sistema.  
  
 `member_size`  
 Le dimensioni in byte, della variabile membro.  
  
### <a name="remarks"></a>Note  
 Questa macro viene usata in combinazione con il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), la funzione membro con lo stesso nome di autore o il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato per effettuare lo scambio di dati tra il Registro di sistema e il membro variabili nella mappa RDX.  
  
##  <a name="rdx_text"></a>RDX_TEXT  
 Associa una variabile membro specificato del tipo TCHAR la voce del Registro di sistema.  
  
```
RDX_TEXT(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```  
  
### <a name="parameters"></a>Parametri  
 `rootkey`  
 Radice chiave del Registro di sistema.  
  
 `subkey`  
 La sottochiave del Registro di sistema.  
  
 `valuename`  
 La chiave del Registro di sistema.  
  
 `member`  
 La variabile membro per associare la voce del Registro di sistema.  
  
 `member_size`  
 Le dimensioni in byte, della variabile membro.  
  
### <a name="remarks"></a>Note  
 Questa macro viene usata in combinazione con il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), la funzione membro con lo stesso nome di autore o il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato per effettuare lo scambio di dati tra il Registro di sistema e il membro variabili nella mappa RDX.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)   
 [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange)







