---
title: Errore di compilazione progetto PRJ0016
ms.date: 11/04/2016
f1_keywords:
- PRJ0016
helpviewer_keywords:
- PRJ0016
ms.assetid: e9745336-883a-4c70-9c40-7753e02f0325
ms.openlocfilehash: 0cab1e35a36ab78426923d60acafb5cdf2942469
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80192744"
---
# <a name="project-build-error-prj0016"></a>Errore di compilazione progetto PRJ0016

Le impostazioni di sicurezza dell'utente impediscono la creazione del processo. Queste impostazioni sono necessarie per la compilazione.

Si è connessi come utente che non dispone delle autorizzazioni per la creazione di processi mediante un processo. È necessario modificare i livelli di autorizzazione per l'account utente o contattare l'amministratore dell'account.

Questo errore può verificarsi anche se è stata impostata la seguente chiave del registro di sistema:

\\\HKCU\Software\Microsoft\Windows\CurrentVersion\Policies\Explorer\RestrictRun

Per correggere l'errore, eliminare la chiave RestrictRun. Se questa chiave del registro di sistema è necessaria, aggiungere **vcspawn. exe** all'elenco di voci nella chiave.

Un'altra causa di questo errore è che l'impostazione dei criteri non include VCSpawn. exe nella chiave del registro di sistema HKEY_CURRENT_USER \Software\Microsoft\Windows\CurrentVersion\Policies\RestrictRun come programma finestra consentita per questo account utente.

Per ulteriori informazioni, vedere l'argomento relativo [alla conformità alle impostazioni dei criteri di sistema](/previous-versions/windows/desktop/Policy/adhering-to-system-policy-settings)nella sezione "esecuzione solo di applicazioni Windows consentite".
