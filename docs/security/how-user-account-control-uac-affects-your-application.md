---
title: Effetti del Controllo dell'account utente sull'applicazione
ms.date: 11/19/2018
helpviewer_keywords:
- UAC [C++]
- security [C++], User Account Control
- user accounts [C++]
- User Account Control [C++]
ms.assetid: 0d001870-253e-4989-b689-f78035953799
ms.openlocfilehash: 8c283e86a71092bb510892b6361f3d0fddc2abb6
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69510138"
---
# <a name="how-user-account-control-uac-affects-your-application"></a>Effetti del Controllo dell'account utente sull'applicazione

Il Controllo dell'account utente è una funzionalità di Windows Vista in cui gli account utente dispongono di privilegi limitati. Per informazioni dettagliate sul Controllo dell'account utente, visitare i siti seguenti:

- [Procedure consigliate e linee guida per gli sviluppatori per le applicazioni in un ambiente con privilegi minimi](/windows/win32/uxguide/winenv-uac)

## <a name="building-projects-after-enabling-uac"></a>Compilazione di progetti dopo aver attivato il Controllo dell'account utente

Se si compila un progetto di C++ Visual Studio in Windows Vista con UAC disabilitato e successivamente si Abilita UAC, è necessario pulire e ricompilare il progetto affinché funzioni correttamente.

## <a name="applications-that-require-administrative-privileges"></a>Applicazioni che richiedono privilegi di amministratore

Per impostazione predefinita, il C++ linker visivo incorpora un frammento del controllo dell'account utente nel manifesto di un'applicazione con `asInvoker`un livello di esecuzione di. Se l'applicazione richiede privilegi di amministratore per essere eseguita correttamente (ad esempio, se modifica il nodo HKLM del Registro di sistema o scrive in aree protette del disco, come la directory di Windows), è necessario modificarla.

La prima opzione consiste nel modificare il frammento UAC del manifesto per modificare il livello di esecuzione in *requireAdministrator*. L'applicazione richiederà quindi all'utente le credenziali amministrative prima dell'esecuzione. Per informazioni su come eseguire questa operazione, vedere [/MANIFESTUAC (incorpora le informazioni sul controllo dell'account utente nel manifesto)](../build/reference/manifestuac-embeds-uac-information-in-manifest.md).

La seconda opzione consiste nel non incorporare un frammento del controllo dell'account utente nel manifesto specificando l'opzione del linker `/MANIFESTUAC:NO`. In questo caso, l'applicazione verrà eseguita virtualizzata. Qualsiasi modifica apportata al Registro di sistema o al file system non viene conservata quando l'applicazione viene terminata.

Il diagramma di flusso riportato di seguito descrive la modalità di esecuzione dell'applicazione a seconda che il controllo dell'account utente sia attivato e che l'applicazione includa un manifesto del controllo dell'account utente.

![Comportamento del caricatore di Windows](media/uacflowchart.png "Comportamento del caricatore di Windows")

## <a name="see-also"></a>Vedere anche

[Procedure di sicurezza consigliate](security-best-practices-for-cpp.md)
