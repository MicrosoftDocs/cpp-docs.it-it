---
title: Implicazioni di sicurezza della personalizzazione | Documenti Microsoft
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
- security, MFC Feature Pack
- MFC Feature Pack, security
ms.assetid: 9be96b12-be38-43bd-a133-5d671265f7a1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b408b4595e95016323d2b43f1ed51fc6e2e6d244
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="security-implications-of-customization"></a>Implicazioni relative alla sicurezza della personalizzazione
Questo argomento illustra una potenziale vulnerabilità di sicurezza in MFC.  
  
## <a name="potential-security-weakness"></a>Potenziali vulnerabilità di sicurezza  
 MFC consente all'utente di personalizzare l'aspetto di un'interfaccia utente dell'applicazione, ad esempio, l'aspetto di pulsanti e icone. MFC supporta anche strumenti definiti dall'utente, che consentono di eseguire i comandi della shell. Una vulnerabilità di sicurezza si verifica perché le impostazioni personalizzate dell'applicazione vengono salvate nel profilo utente nel Registro di sistema. Chiunque possa aver accesso Registro di sistema può modificare tali impostazioni e l'aspetto dell'applicazione o il comportamento. Ad esempio, un amministratore nel computer potrebbe rappresentare un utente, di conseguenza l'applicazione dell'utente di eseguire programmi arbitrari (anche da una condivisione di rete).  
  
## <a name="workarounds"></a>Soluzioni  
 Si consiglia di uno dei seguenti tre modi per chiudere le vulnerabilità nel Registro di sistema:  
  
-   Crittografare i dati sono archiviati  
  
-   Archiviare i dati in un file protetto anziché nel Registro di sistema.  
  
     Per eseguire uno di questi due modi, derivare una classe da [classe CSettingsStore](../mfc/reference/csettingsstore-class.md) ed eseguire l'override di metodi per implementare la crittografia o l'archiviazione all'esterno del Registro di sistema.  
  
-   È inoltre possibile disattivare le personalizzazioni dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Personalizzazione per MFC](../mfc/customization-for-mfc.md)

