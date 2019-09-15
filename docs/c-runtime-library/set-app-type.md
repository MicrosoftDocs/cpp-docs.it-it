---
title: _set_app_type
ms.date: 11/04/2016
api_name:
- _set_app_type
api_location:
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _set_app_type
- corecrt_startup/_set_app_type
ms.assetid: 1e7fe786-b587-4116-8c05-f7d762350100
ms.openlocfilehash: 7e04d88d9e9981e35b7d4c80c11d27c868219f65
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957919"
---
# <a name="_set_app_type"></a>_set_app_type

Funzione interna usata all'avvio per comunicare a CRT se l'app è un'app console o un'app GUI.

## <a name="syntax"></a>Sintassi

```cpp
typedef enum _crt_app_type
{
    _crt_unknown_app,
    _crt_console_app,
    _crt_gui_app
} _crt_app_type;

void __cdecl _set_app_type(
    _crt_app_type appType
    );
```

## <a name="parameters"></a>Parametri

*appType*<br/>
Un valore che indica il tipo di applicazione. I valori possibili sono:

|Value|DESCRIZIONE|
|----------------|-----------------|
|_crt_unknown_app|Tipo di applicazione sconosciuto.|
|_crt_console_app|Applicazione console (riga di comando).|
|_crt_gui_app|Applicazione GUI (Windows).|

## <a name="remarks"></a>Note

In genere, non è necessario chiamare questa funzione. Fa parte del codice di avvio del runtime C eseguito prima della chiamata di `main` nell'app.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_set_app_type|process.h|
