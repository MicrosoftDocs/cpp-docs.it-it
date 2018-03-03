---
title: Struttura HSE_VERSION_INFO | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- HSE_VERSION_INFO
dev_langs:
- C++
helpviewer_keywords:
- HSE_VERSION_INFO structure [MFC]
ms.assetid: 4837312d-68c8-4d05-9afa-1934d7d49b20
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 108f826ffaa17de65dafe246ab6724fac2b134f3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hseversioninfo-structure"></a>Struttura HSE_VERSION_INFO
Questa struttura viene fatto riferimento tramite il `pVer` parametro il `CHttpServer::GetExtensionVersion` funzione membro. Fornisce il numero di versione ISA e una descrizione di testo di ISA.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct _HSE_VERSION_INFO {  
    DWORD dwExtensionVersion;  
    CHAR lpszExtensionDesc[HSE_MAX_EXT_DLL_NAME_LEN];  
} HSE_VERSION_INFO, *LPHSE_VERSION_INFO;  
```  
  
#### <a name="parameters"></a>Parametri  
 *dwExtensionVersion*  
 Il numero di versione di ISA.  
  
 *lpszExtensionDesc*  
 La descrizione di testo di ISA. L'implementazione predefinita fornisce il testo segnaposto. eseguire l'override `CHttpServer::GetExtensionVersion` per fornire una propria descrizione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** httpext.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

