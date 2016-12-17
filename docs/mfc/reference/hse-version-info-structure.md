---
title: "Struttura HSE_VERSION_INFO | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "HSE_VERSION_INFO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HSE_VERSION_INFO (struttura)"
ms.assetid: 4837312d-68c8-4d05-9afa-1934d7d49b20
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura HSE_VERSION_INFO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa struttura è indicata dal parametro di `pVer` nella funzione membro di `CHttpServer::GetExtensionVersion`.  Fornisce il numero di versione ISA e una descrizione di testo di verifica.  
  
## Sintassi  
  
```  
  
      typedef struct _HSE_VERSION_INFO {  
   DWORD dwExtensionVersion;  
   CHAR lpszExtensionDesc[HSE_MAX_EXT_DLL_NAME_LEN];  
} HSE_VERSION_INFO, *LPHSE_VERSION_INFO;  
```  
  
#### Parametri  
 *dwExtensionVersion*  
 Numero di versione di ISA.  
  
 *lpszExtensionDesc*  
 La descrizione di testo di verifica.  L'implementazione predefinita fornisce il testo segnaposto; override `CHttpServer::GetExtensionVersion` per fornire una descrizione.  
  
## Requisiti  
 **Intestazione:** httpext.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)