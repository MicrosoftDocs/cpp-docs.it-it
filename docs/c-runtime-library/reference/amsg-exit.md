---
description: 'Altre informazioni su: _amsg_exit'
title: _amsg_exit
ms.date: 11/04/2016
api_name:
- _amsg_exit
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _amsg_exit
helpviewer_keywords:
- _amsg_exit
ms.assetid: 146d4faf-d763-43a4-b264-12711196456b
ms.openlocfilehash: d00283f3222a217db8337129f66b377f7c0d494e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97211401"
---
# <a name="_amsg_exit"></a>_amsg_exit

Genera un messaggio di errore di runtime specificato e chiude l'applicazione con codice di errore 255.

## <a name="syntax"></a>Sintassi

```cpp
void _amsg_exit ( int rterrnum );
```

### <a name="parameters"></a>Parametri

*rterrnum*<br/>
Numero di identificazione di un messaggio di errore di runtime definito dal sistema.

## <a name="remarks"></a>Commenti

Questa funzione genera il messaggio di errore di runtime in **stderr** per le applicazioni di console oppure visualizza il messaggio in una finestra di messaggio per le applicazioni Windows. In modalità di debug, è possibile richiamare il debugger prima di chiudere l'applicazione.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_amsg_exit|internal.h|
