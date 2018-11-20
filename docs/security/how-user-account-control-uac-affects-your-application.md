---
title: Effetti del Controllo dell'account utente sull'applicazione
ms.date: 11/19/2018
helpviewer_keywords:
- UAC [C++]
- security [C++], User Account Control
- user accounts [C++]
- User Account Control [C++]
ms.assetid: 0d001870-253e-4989-b689-f78035953799
ms.openlocfilehash: 04bfc16f2d82863faca806d4cb8d5295104a0cc9
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52177043"
---
# <a name="how-user-account-control-uac-affects-your-application"></a>Effetti del Controllo dell'account utente sull'applicazione

Il Controllo dell'account utente è una funzionalità di Windows Vista in cui gli account utente dispongono di privilegi limitati. Per informazioni dettagliate sul Controllo dell'account utente, visitare i siti seguenti:

- [Developer Best Practices and Guidelines for Applications in un ambiente con privilegiato minimi](/windows/desktop/uxguide/winenv-uac)

## <a name="building-projects-after-enabling-uac"></a>Compilazione di progetti dopo aver attivato il Controllo dell'account utente

Se si compila un progetto Visual C++ in Windows Vista con il controllo dell'account utente disabilitato, e si decide di attivare la funzionalità in un secondo momento, è necessario cancellare i dati e ricompilare il progetto per far sì che funzioni correttamente.

## <a name="applications-that-require-administrative-privileges"></a>Applicazioni che richiedono privilegi di amministratore

Per impostazione predefinita, il linker di Visual C++ incorpora un frammento del controllo nel manifesto di un'applicazione con un livello di esecuzione `asInvoker`. Se l'applicazione richiede privilegi di amministratore per essere eseguita correttamente (ad esempio, se modifica il nodo HKLM del Registro di sistema o scrive in aree protette del disco, come la directory di Windows), è necessario modificarla.

La prima opzione consiste nel modificare il frammento del controllo del manifesto per modificare il livello di esecuzione *requireAdministrator*. L'applicazione richiederà quindi all'utente le credenziali amministrative prima dell'esecuzione. Per informazioni su come eseguire questa operazione, vedere [/MANIFESTUAC (incorpora UAC information nel manifesto)](../build/reference/manifestuac-embeds-uac-information-in-manifest.md).

La seconda opzione consiste nel non incorporare un frammento del controllo dell'account utente nel manifesto specificando l'opzione del linker `/MANIFESTUAC:NO`. In questo caso, l'applicazione verrà eseguita virtualizzata. Qualsiasi modifica apportata al Registro di sistema o al file system non viene conservata quando l'applicazione viene terminata.

Il diagramma di flusso riportato di seguito descrive la modalità di esecuzione dell'applicazione a seconda che il controllo dell'account utente sia attivato e che l'applicazione includa un manifesto del controllo dell'account utente.

![Comportamento del caricatore di Windows](media/uacflowchart.png "comportamento del caricatore di Windows")

## <a name="see-also"></a>Vedere anche

[Procedure di sicurezza consigliate](security-best-practices-for-cpp.md)
