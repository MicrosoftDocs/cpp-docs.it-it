---
description: 'Altre informazioni su: struttura HSE_VERSION_INFO'
title: Struttura HSE_VERSION_INFO
ms.date: 11/04/2016
f1_keywords:
- HSE_VERSION_INFO
helpviewer_keywords:
- HSE_VERSION_INFO structure [MFC]
ms.assetid: 4837312d-68c8-4d05-9afa-1934d7d49b20
ms.openlocfilehash: fe03f3c4e00f9af62398993838927ce75410f17b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219629"
---
# <a name="hse_version_info-structure"></a>Struttura HSE_VERSION_INFO

Questa struttura è indicata dal parametro *pVer* nella `CHttpServer::GetExtensionVersion` funzione membro. Fornisce il numero di versione ISA e una descrizione di testo di ISA.

## <a name="syntax"></a>Sintassi

```
typedef struct _HSE_VERSION_INFO {
    DWORD dwExtensionVersion;
    CHAR lpszExtensionDesc[HSE_MAX_EXT_DLL_NAME_LEN];
} HSE_VERSION_INFO, *LPHSE_VERSION_INFO;
```

#### <a name="parameters"></a>Parametri

*dwExtensionVersion*<br/>
Numero di versione di ISA.

*lpszExtensionDesc*<br/>
Descrizione del testo di ISA. L'implementazione predefinita fornisce testo segnaposto; eseguire l'override `CHttpServer::GetExtensionVersion` di per fornire una descrizione personalizzata.

## <a name="requirements"></a>Requisiti

**Intestazione:** Httpext. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)
