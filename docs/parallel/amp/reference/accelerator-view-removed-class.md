---
title: Classe accelerator_view_removed
ms.date: 03/27/2019
f1_keywords:
- accelerator_view_removed
- AMPRT/accelerator_view_removed
- AMPRT/Concurrency::accelerator_view_removed::accelerator_view_removed
- AMPRT/Concurrency::accelerator_view_removed::get_view_removed_reason
helpviewer_keywords:
- AMPRT/Concurrency::accelerator_view_removed::accelerator_view_removed Class
ms.assetid: 262446de-311c-454e-a5ed-e2aaced0d88a
ms.openlocfilehash: eddcf44966d197068113c5e7817dad37841261a3
ms.sourcegitcommit: 00e26915924869cd7eb3c971a7d0604388abd316
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2019
ms.locfileid: "65524850"
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
    const char * message,
    HRESULT view_removed_reason ) throw();

explicit accelerator_view_removed(
    HRESULT view_removed_reason ) throw();
```

### <a name="parameters"></a>Parametri

*message*<br/>
Descrizione dell'errore.

*view_removed_reason*<br/>
Un codice di errore HRESULT che indica la causa della rimozione del `accelerator_view` oggetto.

### <a name="return-value"></a>Valore restituito

Nuova istanza della classe `accelerator_view_removed`.

## <a name="get_view_removed_reason"></a> get_view_removed_reason

Restituisce un codice di errore HRESULT che indica la causa del `accelerator_view` la rimozione dell'oggetto.

### <a name="syntax"></a>Sintassi

```
HRESULT get_view_removed_reason() const throw();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
