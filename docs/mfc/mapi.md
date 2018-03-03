---
title: MAPI | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- messaging [MFC], client applications
- enabling applications for MAPI [MFC]
- MAPI support in MFC
- e-mail [MFC], enabling
- mail [MFC], enabling your application
- MAPI, MFC
- enabling applications for mail [MFC]
ms.assetid: 193449f7-b131-4ab0-9301-8d4f6cd1e7c4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: de955ecc25137f5305806ca5ba03ed15930574dd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mapi"></a>MAPI
In questo articolo viene illustrata l'interfaccia Messaging Application Programming Interface (MAPI) di Microsoft per gli sviluppatori di applicazioni di messaggistica client. MFC fornisce supporto per un sottoinsieme di MAPI nella classe **CDocument** ma non include l'intera API. Per ulteriori informazioni, vedere [supporto MAPI in MFC](../mfc/mapi-support-in-mfc.md).  
  
 L'interfaccia MAPI è un set di funzioni che le applicazioni abilitate e che supportano la posta elettronica utilizzano per creare, modificare, trasferire e archiviare i messaggi di posta elettronica. Offre agli sviluppatori di applicazioni gli strumenti per definire lo scopo e il contenuto dei messaggi di posta elettronica e offre loro flessibilità nella gestione dei messaggi di posta elettronica archiviati. L'interfaccia MAPI inoltre fornisce un'interfaccia comune che gli sviluppatori di applicazioni possono utilizzare per creare applicazioni abilitate alla posta elettronica indipendentemente dal sistema di messaggistica sottostante.  
  
 I client di messaggistica forniscono un'interfaccia umana per l'interazione con il sistema di messaggistica (WMS) di Microsoft Windows. Questa interazione include in genere la richiesta di servizi dai provider con conformità MAPI come gli archivi messaggi e le rubriche.  
  
 Per ulteriori informazioni su MAPI, vedere gli articoli nella Guida in messaggistica Win32 (MAPI) di Windows SDK.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Supporto MAPI in MFC](../mfc/mapi-support-in-mfc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [CDocument:: OnFileSendMail](../mfc/reference/cdocument-class.md#onfilesendmail)   
 [CDocument:: OnUpdateFileSendMail](../mfc/reference/cdocument-class.md#onupdatefilesendmail)   
 [COleDocument::OnFileSendMail](../mfc/reference/coledocument-class.md#onfilesendmail)

