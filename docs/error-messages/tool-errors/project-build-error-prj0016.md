---
title: Errore di compilazione progetto PRJ0016
ms.date: 11/04/2016
f1_keywords:
- PRJ0016
helpviewer_keywords:
- PRJ0016
ms.assetid: e9745336-883a-4c70-9c40-7753e02f0325
ms.openlocfilehash: ada89b074fd8e0c2bfc75ba833e9c5966a145312
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62359423"
---
# <a name="project-build-error-prj0016"></a>Errore di compilazione progetto PRJ0016

Impostazioni di sicurezza dell'utente impediscono che il processo di creazione. Queste impostazioni sono necessarie per la compilazione.

Si è connessi come utente non dispone di autorizzazioni per creare i processi usando un processo. È necessario modificare i livelli di autorizzazione per l'account utente o contattare l'amministratore account.

Questo errore può verificarsi anche se è impostata la chiave del Registro di sistema seguente:

\\\HKCU\Software\Microsoft\Windows\CurrentVersion\Policies\Explorer\RestrictRun

Per risolvere questo errore, eliminare la chiave di RestrictRun. Se è necessaria questa chiave del Registro di sistema, aggiungere **vcspawn.exe** all'elenco di voci nella chiave.

Un'altra causa questo errore è che l'impostazione di criteri non sono inclusi VCSpawn.exe sotto la chiave del Registro di sistema HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Policies\RestrictRun come un programma finestra consentito per questo account utente.

Per altre informazioni, vedere [adesione alle impostazioni di criteri di sistema](https://msdn.microsoft.com/library/aa372139), nella sezione "Esecuzione consentite solo le applicazioni di Windows".