---
title: Errore di compilazione PRJ0016 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0016
dev_langs:
- C++
helpviewer_keywords:
- PRJ0016
ms.assetid: e9745336-883a-4c70-9c40-7753e02f0325
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ceb004cba243d6e2e9c44aadcaa40670ef7a0bbb
ms.sourcegitcommit: d3c41b16bf05af2149090e996d8e71cd6cd55c7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48890257"
---
# <a name="project-build-error-prj0016"></a>Errore di compilazione progetto PRJ0016

Impostazioni di sicurezza dell'utente impediscono che il processo di creazione. Queste impostazioni sono necessarie per la compilazione.

Si è connessi come utente non dispone di autorizzazioni per creare i processi usando un processo. È necessario modificare i livelli di autorizzazione per l'account utente o contattare l'amministratore account.

Questo errore può verificarsi anche se è impostata la chiave del Registro di sistema seguente:

\\\HKCU\Software\Microsoft\Windows\CurrentVersion\Policies\Explorer\RestrictRun

Per risolvere questo errore, eliminare la chiave di RestrictRun. Se è necessaria questa chiave del Registro di sistema, aggiungere **vcspawn.exe** all'elenco di voci nella chiave.

Un'altra causa questo errore è che l'impostazione di criteri non sono inclusi VCSpawn.exe sotto la chiave del Registro di sistema HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Policies\RestrictRun come un programma finestra consentito per questo account utente.

Per altre informazioni, vedere [adesione alle impostazioni di criteri di sistema](https://msdn.microsoft.com/library/aa372139), nella sezione "Esecuzione consentite solo le applicazioni di Windows".