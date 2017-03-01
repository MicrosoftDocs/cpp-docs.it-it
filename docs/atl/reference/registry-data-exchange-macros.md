---
title: Macro di scambio di dati del Registro di sistema | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- RegistryDataExchange function, macros
ms.assetid: c1bc5e79-2307-43d2-9d10-3a62ffadf473
caps.latest.revision: 16
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
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: ee3c1d639ee4a6c6bd6cf26a8c59bb1a37a4fa02
ms.lasthandoff: 02/24/2017

---
# <a name="registry-data-exchange-macros"></a>Macro per lo scambio dei dati del Registro di sistema
Queste macro eseguono le operazioni di scambio di dati del Registro di sistema.  
  
|||  
|-|-|  
|[BEGIN_RDX_MAP](#begin_rdx_map)|Contrassegna l'inizio della mappa di scambio di dati del Registro di sistema.|  
|[END_RDX_MAP](#end_rdx_map)|Contrassegna la fine della mappa di scambio di dati del Registro di sistema.|  
|[RDX_BINARY](#rdx_binary)|Associa la voce del Registro di sistema a una variabile membro di tipo BYTE.|  
|[RDX_CSTRING_TEXT](#rdx_cstring_text)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo CString.|  
|[RDX_DWORD](#rdx_dword)|Associa la voce del Registro di sistema a una variabile membro di tipo DWORD.|  
|[RDX_TEXT](#rdx_text)|Associa una variabile membro specificato del tipo TCHAR la voce del Registro di sistema.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlplus  
   
##  <a name="a-namebeginrdxmapa--beginrdxmap"></a><a name="begin_rdx_map"></a>BEGIN_RDX_MAP  
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
|[RDX_CSTRING_TEXT](#rdx_cstring_text)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo CString.|  
|[RDX_TEXT](#rdx_text)|Associa una variabile membro specificato del tipo TCHAR la voce del Registro di sistema.|  
  
 La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), la funzione membro con lo stesso nome autore o il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato quando il codice necessario per lo scambio di dati tra il Registro di sistema e le variabili specificate nella mappa RDX.  
  
##  <a name="a-nameendrdxmapa--endrdxmap"></a><a name="end_rdx_map"></a>END_RDX_MAP  
 Contrassegna la fine della mappa di scambio di dati del Registro di sistema.  
  
```
END_RDX_MAP
```  
  
##  <a name="a-namerdxbinarya--rdxbinary"></a><a name="rdx_binary"></a>RDX_BINARY  
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
 La radice di chiave del Registro di sistema.  
  
 `subkey`  
 La sottochiave del Registro di sistema.  
  
 `valuename`  
 La chiave del Registro di sistema.  
  
 `member`  
 La variabile membro per associare la voce del Registro di sistema.  
  
 `member_size`  
 Le dimensioni in byte, della variabile membro.  
  
### <a name="remarks"></a>Note  
 Questa macro viene utilizzata in combinazione con il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), la funzione membro con lo stesso nome autore o il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato per effettuare lo scambio di dati tra il Registro di sistema e le variabili membro della mappa RDX.  
  
##  <a name="a-namerdxcstringtexta--rdxcstringtext"></a><a name="rdx_cstring_text"></a>RDX_CSTRING_TEXT  
 Associa la voce del Registro di sistema a una variabile membro specificato del tipo CString.  
  
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
 La radice di chiave del Registro di sistema.  
  
 `subkey`  
 La sottochiave del Registro di sistema.  
  
 `valuename`  
 La chiave del Registro di sistema.  
  
 `member`  
 La variabile membro per associare la voce del Registro di sistema.  
  
 `member_size`  
 Le dimensioni in byte, della variabile membro.  
  
### <a name="remarks"></a>Note  
 Questa macro viene utilizzata in combinazione con il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), la funzione membro con lo stesso nome autore o il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato per effettuare lo scambio di dati tra il Registro di sistema e le variabili membro della mappa RDX.  
  
##  <a name="a-namerdxdworda--rdxdword"></a><a name="rdx_dword"></a>RDX_DWORD  
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
 La radice di chiave del Registro di sistema.  
  
 `subkey`  
 La sottochiave del Registro di sistema.  
  
 `valuename`  
 La chiave del Registro di sistema.  
  
 `member`  
 La variabile membro per associare la voce del Registro di sistema.  
  
 `member_size`  
 Le dimensioni in byte, della variabile membro.  
  
### <a name="remarks"></a>Note  
 Questa macro viene utilizzata in combinazione con il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), la funzione membro con lo stesso nome autore o il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato per effettuare lo scambio di dati tra il Registro di sistema e le variabili membro della mappa RDX.  
  
##  <a name="a-namerdxtexta--rdxtext"></a><a name="rdx_text"></a>RDX_TEXT  
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
 La radice di chiave del Registro di sistema.  
  
 `subkey`  
 La sottochiave del Registro di sistema.  
  
 `valuename`  
 La chiave del Registro di sistema.  
  
 `member`  
 La variabile membro per associare la voce del Registro di sistema.  
  
 `member_size`  
 Le dimensioni in byte, della variabile membro.  
  
### <a name="remarks"></a>Note  
 Questa macro viene utilizzata in combinazione con il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), la funzione membro con lo stesso nome autore o il `BEGIN_RDX_MAP` e `END_RDX_MAP` macro, deve essere utilizzato per effettuare lo scambio di dati tra il Registro di sistema e le variabili membro della mappa RDX.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)   
 [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange)








