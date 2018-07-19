---
title: Struttura HSE_VERSION_INFO | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- HSE_VERSION_INFO
dev_langs:
- C++
helpviewer_keywords:
- HSE_VERSION_INFO structure [MFC]
ms.assetid: 4837312d-68c8-4d05-9afa-1934d7d49b20
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: daf1565c2fe2d7a4620f83b765671fea80502102
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37335815"
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
 *dwExtensionVersion*  
 Il numero di versione dell'ISA.  
  
 *lpszExtensionDesc*  
 La descrizione testuale dell'ISA. L'implementazione predefinita fornisce il testo segnaposto; eseguire l'override `CHttpServer::GetExtensionVersion` per fornire una propria descrizione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** httpext.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

