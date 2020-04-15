---
title: _set_app_type
ms.date: 4/2/2020
api_name:
- _set_app_type
- _o__set_app_type
api_location:
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _set_app_type
- corecrt_startup/_set_app_type
ms.assetid: 1e7fe786-b587-4116-8c05-f7d762350100
ms.openlocfilehash: 9791cff55ccd55c32d124ab89cc43ab54c0f9c69
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360964"
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

|valore|Descrizione|
|----------------|-----------------|
|_crt_unknown_app|Tipo di applicazione sconosciuto.|
|_crt_console_app|Applicazione console (riga di comando).|
|_crt_gui_app|Applicazione GUI (Windows).|

## <a name="remarks"></a>Osservazioni

In genere, non è necessario chiamare questa funzione. Fa parte del codice di avvio del runtime C eseguito prima della chiamata di `main` nell'app.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_set_app_type|process.h|
