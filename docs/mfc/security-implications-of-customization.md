---
description: 'Altre informazioni su: implicazioni sulla sicurezza della personalizzazione'
title: Implicazioni relative alla sicurezza della personalizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- security, MFC Feature Pack
- MFC Feature Pack, security
ms.assetid: 9be96b12-be38-43bd-a133-5d671265f7a1
ms.openlocfilehash: 64a1029dd3486e3cd653f5e692aa1a14ba6f82b5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217757"
---
# <a name="security-implications-of-customization"></a>Implicazioni relative alla sicurezza della personalizzazione

In questo argomento viene illustrata una potenziale debolezza della sicurezza in MFC.

## <a name="potential-security-weakness"></a>Potenziale debolezza della sicurezza

MFC consente all'utente di personalizzare l'aspetto di un'interfaccia utente dell'applicazione, ad esempio l'aspetto di pulsanti e icone. MFC supporta inoltre strumenti definiti dall'utente, che consentono all'utente di eseguire i comandi della shell. Una vulnerabilità di sicurezza si verifica perché le impostazioni personalizzate dell'applicazione vengono salvate nel profilo utente nel registro di sistema. Chiunque possa accedere al registro di sistema può modificare tali impostazioni e modificare l'aspetto o il comportamento dell'applicazione. Ad esempio, un amministratore del computer potrebbe rappresentare un utente causando l'esecuzione di programmi arbitrari (anche da una condivisione di rete) da parte dell'applicazione dell'utente.

## <a name="workarounds"></a>Soluzioni alternative

Per chiudere le vulnerabilità nel registro di sistema, è consigliabile usare uno dei tre modi seguenti:

- Crittografare i dati archiviati

- Archiviare i dati in un file protetto anziché nel registro di sistema.

   Per eseguire uno di questi primi due modi, derivare una classe dalla [Classe CSettingsStore](../mfc/reference/csettingsstore-class.md) ed eseguire l'override dei relativi metodi per implementare la crittografia o l'archiviazione all'esterno del registro di sistema.

- È anche possibile disabilitare le personalizzazioni nell'applicazione.

## <a name="see-also"></a>Vedi anche

[Personalizzazione per MFC](../mfc/customization-for-mfc.md)
