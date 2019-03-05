---
title: Struttura HSE_VERSION_INFO
ms.date: 11/04/2016
f1_keywords:
- HSE_VERSION_INFO
helpviewer_keywords:
- HSE_VERSION_INFO structure [MFC]
ms.assetid: 4837312d-68c8-4d05-9afa-1934d7d49b20
ms.openlocfilehash: 97f34bebae8a486a825d04b23c5a92fbd4aefa42
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267836"
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
