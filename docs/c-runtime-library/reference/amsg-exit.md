---
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
ms.openlocfilehash: 2d577bfcf0584ef982ab43ff98674d0cfadd14ba
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939691"
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

## <a name="remarks"></a>Note

Questa funzione genera il messaggio di errore di runtime in **stderr** per le applicazioni di console oppure visualizza il messaggio in una finestra di messaggio per le applicazioni Windows. In modalità di debug, è possibile richiamare il debugger prima di chiudere l'applicazione.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_amsg_exit|internal.h|