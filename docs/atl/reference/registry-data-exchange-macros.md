---
title: Macro di scambio di dati del Registro di sistema | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlplus/ATL::BEGIN_RDX_MAP
- atlplus/ATL::END_RDX_MAP
- atlplus/ATL::RDX_BINARY
- atlplus/ATL::RDX_CSTRING_TEXT
- atlplus/ATL::RDX_DWORD
- atlplus/ATL::RDX_TEXT
dev_langs:
- C++
helpviewer_keywords:
- RegistryDataExchange function, macros
ms.assetid: c1bc5e79-2307-43d2-9d10-3a62ffadf473
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1864fb953c53cba562856fed24a44b6157a03603
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43764215"
---
# <a name="registry-data-exchange-macros"></a>Macro di scambio di dati del Registro di sistema

Queste macro eseguono operazioni di scambio di dati del Registro di sistema.

|||
|-|-|
|[BEGIN_RDX_MAP](#begin_rdx_map)|Contrassegna l'inizio della mappa lo scambio di dati del Registro di sistema.|
|[END_RDX_MAP](#end_rdx_map)|Contrassegna la fine della mappa lo scambio di dati del Registro di sistema.|
|[RDX_BINARY](#rdx_binary)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo BYTE.|
|[RDX_CSTRING_TEXT](#rdx_cstring_text)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo CString.|
|[RDX_DWORD](#rdx_dword)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo DWORD.|
|[RDX_TEXT](#rdx_text)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo TCHAR.|  

## <a name="requirements"></a>Requisiti

**Intestazione:** atlplus

##  <a name="begin_rdx_map"></a>  BEGIN_RDX_MAP

Contrassegna l'inizio della mappa lo scambio di dati del Registro di sistema.

```
BEGIN_RDX_MAP
```

### <a name="remarks"></a>Note

Le macro seguenti sono usate all'interno della mappa di scambio di dati del Registro di sistema per leggere e scrivere voci nel Registro di sistema:

|Macro|Descrizione|
|-----------|-----------------|
|[RDX_BINARY](#rdx_binary)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo BYTE.|
|[RDX_DWORD](#rdx_dword)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo DWORD.|
|[RDX_CSTRING_TEXT](#rdx_cstring_text)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo CString.|
|[RDX_TEXT](#rdx_text)|Associa la voce del Registro di sistema a una variabile membro specificato del tipo TCHAR.|

La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), o la funzione membro con lo stesso nome creato dalle macro BEGIN_RDX_MAP ed END_RDX_MAP, deve essere usata ogni volta che il codice deve memorizzare i dati tra il Registro di sistema di exchange e il variabili specificate nella mappa RDX.

##  <a name="end_rdx_map"></a>  END_RDX_MAP

Contrassegna la fine della mappa lo scambio di dati del Registro di sistema.

```
END_RDX_MAP
```

##  <a name="rdx_binary"></a>  RDX_BINARY

Associa la voce del Registro di sistema a una variabile membro specificato del tipo BYTE.

```
RDX_BINARY(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```

### <a name="parameters"></a>Parametri

*Manca la chiave radice*  
Radice chiave del Registro di sistema.

*sottochiave*  
La sottochiave del Registro di sistema.

*valueName*  
La chiave del Registro di sistema.

*Membro*  
La variabile membro per associare la voce del Registro di sistema.

*member_size*  
Le dimensioni, in byte, della variabile membro.

### <a name="remarks"></a>Note

Questa macro viene usata in combinazione con le macro BEGIN_RDX_MAP ed END_RDX_MAP per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), o la funzione membro con lo stesso nome creato dalle macro BEGIN_RDX_MAP ed END_RDX_MAP, deve essere usata per eseguire lo scambio di dati tra il Registro di sistema e le variabili membro nella mappa RDX.

##  <a name="rdx_cstring_text"></a>  RDX_CSTRING_TEXT

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

*Manca la chiave radice*  
Radice chiave del Registro di sistema.

*sottochiave*  
La sottochiave del Registro di sistema.

*valueName*  
La chiave del Registro di sistema.

*Membro*  
La variabile membro per associare la voce del Registro di sistema.

*member_size*  
Le dimensioni, in byte, della variabile membro.

### <a name="remarks"></a>Note

Questa macro viene usata in combinazione con le macro BEGIN_RDX_MAP ed END_RDX_MAP per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), o la funzione membro con lo stesso nome creato dalle macro BEGIN_RDX_MAP ed END_RDX_MAP, deve essere usata per eseguire lo scambio di dati tra il Registro di sistema e le variabili membro nella mappa RDX.

##  <a name="rdx_dword"></a>  RDX_DWORD

Associa la voce del Registro di sistema a una variabile membro specificato del tipo DWORD.

```
RDX_DWORD(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```

### <a name="parameters"></a>Parametri

*Manca la chiave radice*  
Radice chiave del Registro di sistema.

*sottochiave*  
La sottochiave del Registro di sistema.

*valueName*  
La chiave del Registro di sistema.

*Membro*  
La variabile membro per associare la voce del Registro di sistema.

*member_size*  
Le dimensioni, in byte, della variabile membro.

### <a name="remarks"></a>Note

Questa macro viene usata in combinazione con le macro BEGIN_RDX_MAP ed END_RDX_MAP per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), o la funzione membro con lo stesso nome creato dalle macro BEGIN_RDX_MAP ed END_RDX_MAP, deve essere usata per eseguire lo scambio di dati tra il Registro di sistema e le variabili membro nella mappa RDX.

##  <a name="rdx_text"></a>  RDX_TEXT

Associa la voce del Registro di sistema a una variabile membro specificato del tipo TCHAR.

```
RDX_TEXT(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```

### <a name="parameters"></a>Parametri

*Manca la chiave radice*  
Radice chiave del Registro di sistema.

*sottochiave*  
La sottochiave del Registro di sistema.

*valueName*  
La chiave del Registro di sistema.

*Membro*  
La variabile membro per associare la voce del Registro di sistema.

*member_size*  
Le dimensioni, in byte, della variabile membro.

### <a name="remarks"></a>Note

Questa macro viene usata in combinazione con le macro BEGIN_RDX_MAP ed END_RDX_MAP per associare una variabile membro a una voce del Registro di sistema specificato. La funzione globale [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), o la funzione membro con lo stesso nome creato dalle macro BEGIN_RDX_MAP ed END_RDX_MAP, deve essere usata per eseguire lo scambio di dati tra il Registro di sistema e le variabili membro nella mappa RDX.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)   
[RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange)

