---
title: Progetto PRJ0016 errore di compilazione | Documenti Microsoft
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
ms.openlocfilehash: 6184e5bb251a2b74e8500cc195a38f2d814c1b5f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33319052"
---
# <a name="project-build-error-prj0016"></a>Errore di compilazione progetto PRJ0016
Le impostazioni di sicurezza dell'utente impediscono al processo di creazione. Queste impostazioni sono necessarie per la compilazione.  
  
 Si è connessi come utente non dispone di autorizzazioni per creare processi che utilizzano un processo. È necessario modificare i livelli di autorizzazione per l'account utente o contattare l'amministratore dell'account.  
  
 Questo errore può verificarsi anche se è impostata la chiave del Registro di sistema seguente:  
  
 \\\HKCU\Software\Microsoft\Windows\CurrentVersion\Policies\Explorer\RestrictRun  
  
 Per correggere l'errore, eliminare la chiave RestrictRun. Se è necessaria la chiave del Registro di sistema, aggiungere **vcspawn.exe** all'elenco di voci nella chiave.  
  
 Un'altra causa di questo errore è che l'impostazione di criteri non include VCSpawn.exe sotto la chiave del Registro di sistema HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Policies\RestrictRun come un programma finestra consentito per questo account utente.  
  
 Per ulteriori informazioni, vedere:  
  
-   Della Knowledge Base 324153, disponibile nel [ http://support.microsoft.com/default.aspx?scid=kb; en-us; 324153](http://support.microsoft.com/default.aspx?scid=kb;en-us;324153).  
  
-   [Aderente alle impostazioni dei criteri di sistema](http://msdn.microsoft.com/library/aa372139), la sezione "Esecuzione consentite solo le applicazioni di Windows".