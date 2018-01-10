---
title: _set_app_type | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
apiname: _set_app_type
apilocation: api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _set_app_type
- corecrt_startup/_set_app_type
dev_langs: C++
ms.assetid: 1e7fe786-b587-4116-8c05-f7d762350100
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: adfd7344b01360df6af3ccf7a153eda3451d2482
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="setapptype"></a>_set_app_type
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
 `appType`  
 Un valore che indica il tipo di applicazione. I valori possibili sono:  
  
|Valore|Descrizione|  
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

