---
title: Classe accelerator_view_removed
ms.date: 11/04/2016
f1_keywords:
- accelerator_view_removed
- AMPRT/accelerator_view_removed
- AMPRT/Concurrency::accelerator_view_removed:accelerator_view_removed
- AMPRT/Concurrency::accelerator_view_removed:get_view_removed_reason
helpviewer_keywords:
- AMPRT/Concurrency::accelerator_view_removed:accelerator_view_removed Class
ms.assetid: 262446de-311c-454e-a5ed-e2aaced0d88a
ms.openlocfilehash: 9b803b205ea925ed8cc07e36342a1646d576d7d4
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57263754"
---
# <a name="acceleratorviewremoved-class"></a>Classe accelerator_view_removed

Eccezione generata quando una chiamata sottostante di DirectX ha esito negativo a causa il meccanismo di rilevamento e ripristino timeout Windows.

## <a name="syntax"></a>Sintassi

```
class accelerator_view_removed : public runtime_exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore accelerator_view_removed](#ctor)|Inizializza una nuova istanza della classe `accelerator_view_removed`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_view_removed_reason](#get_view_removed_reason)|Restituisce un codice di errore HRESULT che indica la causa del `accelerator_view` la rimozione dell'oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`out_of_memory`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concorrenza

## <a name="ctor"></a> accelerator_view_removed

Inizializza una nuova istanza di [accelerator_view_removed](accelerator-view-removed-class.md) classe.

### <a name="syntax"></a>Sintassi

```
explicit accelerator_view_removed(
    const char * _Message,
    HRESULT _View_removed_reason ) throw();

explicit accelerator_view_removed(
    HRESULT _View_removed_reason ) throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Descrizione dell'errore.

*_View_removed_reason*<br/>
Un codice di errore HRESULT che indica la causa della rimozione del `accelerator_view` oggetto.

### <a name="return-value"></a>Valore restituito

Una nuova istanza della classe accelerator_view_removed.

## <a name="get_view_removed_reason_method"></a> get_view_removed_reason

Restituisce un codice di errore HRESULT che indica la causa del `accelerator_view` la rimozione dell'oggetto.

### <a name="syntax"></a>Sintassi

```
HRESULT get_view_removed_reason() const throw();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
