---
title: Struttura HSE_VERSION_INFO
ms.date: 11/04/2016
f1_keywords:
- HSE_VERSION_INFO
helpviewer_keywords:
- HSE_VERSION_INFO structure [MFC]
ms.assetid: 4837312d-68c8-4d05-9afa-1934d7d49b20
ms.openlocfilehash: 6bdb668be037dfaa07e1121e4b61ea332e430e31
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50577288"
---
# <a name="hseversioninfo-structure"></a>Struttura HSE_VERSION_INFO

Questa struttura viene fatto riferimento tramite il *pVer* parametro nel `CHttpServer::GetExtensionVersion` funzione membro. Fornisce il numero di versione ISA e una descrizione testuale dell'ISA.

## <a name="syntax"></a>Sintassi

```
typedef struct _HSE_VERSION_INFO {
    DWORD dwExtensionVersion;
    CHAR lpszExtensionDesc[HSE_MAX_EXT_DLL_NAME_LEN];
} HSE_VERSION_INFO, *LPHSE_VERSION_INFO;
```

#### <a name="parameters"></a>Parametri

*dwExtensionVersion*<br/>
Il numero di versione dell'ISA.

*lpszExtensionDesc*<br/>
La descrizione testuale dell'ISA. L'implementazione predefinita fornisce il testo segnaposto; eseguire l'override `CHttpServer::GetExtensionVersion` per fornire una propria descrizione.

## <a name="requirements"></a>Requisiti

**Intestazione:** httpext.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

