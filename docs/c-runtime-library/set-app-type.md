---
description: 'Altre informazioni su: _set_app_type'
title: _set_app_type
ms.date: 4/2/2020
api_name:
- _set_app_type
- _o__set_app_type
api_location:
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _set_app_type
- corecrt_startup/_set_app_type
ms.assetid: 1e7fe786-b587-4116-8c05-f7d762350100
ms.openlocfilehash: cd04f1c17f7876c08f8eafb4ef77960073fb3f33
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277102"
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

|Valore|Description|
|----------------|-----------------|
|_crt_unknown_app|Tipo di applicazione sconosciuto.|
|_crt_console_app|Applicazione console (riga di comando).|
|_crt_gui_app|Applicazione GUI (Windows).|

## <a name="remarks"></a>Commenti

In genere, non è necessario chiamare questa funzione. Fa parte del codice di avvio del runtime C eseguito prima della chiamata di `main` nell'app.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|_set_app_type|process.h|
