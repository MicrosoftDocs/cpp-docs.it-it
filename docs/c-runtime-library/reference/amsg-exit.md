---
title: _amsg_exit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _amsg_exit
apilocation:
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
apitype: DLLExport
f1_keywords:
- _amsg_exit
dev_langs:
- C++
helpviewer_keywords:
- _amsg_exit
ms.assetid: 146d4faf-d763-43a4-b264-12711196456b
caps.latest.revision: 2
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e35d6f606f4862c8a326d70d2e103cb32c8cfda3
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="amsgexit"></a>_amsg_exit

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