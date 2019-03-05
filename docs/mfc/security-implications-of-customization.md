---
title: Implicazioni relative alla sicurezza della personalizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- security, MFC Feature Pack
- MFC Feature Pack, security
ms.assetid: 9be96b12-be38-43bd-a133-5d671265f7a1
ms.openlocfilehash: 9164983a6634e069195f3498bea56b595a2a2381
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267446"
---
# <a name="security-implications-of-customization"></a>Implicazioni relative alla sicurezza della personalizzazione

Questo argomento viene illustrato un potenziale punto debole nella sicurezza in MFC.

## <a name="potential-security-weakness"></a>Potenziali punti deboli nella sicurezza

MFC consente all'utente di personalizzare l'aspetto di un'interfaccia utente dell'applicazione, ad esempio, l'aspetto di pulsanti e le icone. MFC supporta anche strumenti definiti dall'utente, che consentono di eseguire i comandi della shell. Una vulnerabilità di sicurezza si verifica perché le impostazioni personalizzate dell'applicazione vengono salvate nel profilo utente nel Registro di sistema. Chiunque possa accedere Registro di sistema può modificare tali impostazioni e l'aspetto dell'applicazione o il comportamento. Ad esempio, un amministratore nel computer potrebbe rappresentare un utente facendo in modo l'applicazione dell'utente eseguire programmi arbitrari (anche da una condivisione di rete).

## <a name="workarounds"></a>Soluzioni

Si consiglia di uno di questi tre modi per chiudere le vulnerabilità nel Registro di sistema:

- Crittografare i dati archiviati vengono eliminati

- Store i dati in un file protetto anziché nel Registro di sistema.

   Per portare a termine questi primi due modi diversi, derivare una classe dalla classe [classe CSettingsStore](../mfc/reference/csettingsstore-class.md) ed eseguire l'override di metodi per implementare la crittografia o l'archiviazione all'esterno del Registro di sistema.

- È anche possibile disabilitare le personalizzazioni all'interno dell'applicazione.

## <a name="see-also"></a>Vedere anche

[Personalizzazione per MFC](../mfc/customization-for-mfc.md)
