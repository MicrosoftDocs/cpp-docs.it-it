---
title: "Proprietà di un archivio remoto (C++ Linux) | Microsoft Docs"
ms.custom: 
ms.date: 9/26/2017
ms.reviewer: 
ms.suite: 
ms.technology: vs-ide-general
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 5ee1e44c-8337-4c3a-b2f3-35e4be954f9f
author: mikeblome
ms.author: mblome
manager: ghogen
f1_keywords:
- VC.Project.Ar.CreateIndex
- VC.Project.Ar.CreateThinArchive
- VC.Project.Ar.NoWarnOnCreate
- VC.Project.Ar.TruncateTimestamp
- VC.Project.Ar.SuppressStartupBanner
- VC.Project.Ar.Verbose
- vc.project.AdditionalOptionsPage
- VC.Project.Ar.OutputFile
- VC.Project.VCConfiguration.BuildLogFile
ms.openlocfilehash: 402fa1f752b311014c828027e45a92a3dc6a2917
ms.sourcegitcommit: ca2f94dfd015e0098a6eaf5c793ec532f1c97de1
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2017
---
# <a name="remote-archive-properties-c-linux"></a>Proprietà di un archivio remoto (C++ Linux)

Proprietà | Descrizione
--- | ---
Crea un indice archivio | Crea un indice archivio (vedere ranlib).  Velocizza il collegamento e riduce la dipendenza all'interno della propria libreria.
Crea archivio leggero | Crea un archivio leggero.  Un archivio leggero contiene i percorsi relativi degli oggetti invece di incorporare gli oggetti stessi.  Per passare da quello leggero a quello normale, è necessario eliminare la libreria esistente.
Nessun avviso durante la creazione | Non visualizza avvisi durante la creazione della libreria.
Tronca timestamp | Usa lo zero per timestamp e UID/GID.
Non visualizzare messaggio di avvio | Non visualizza il numero di versione.
Dettagliato | Dettagliato
Opzioni aggiuntive | Opzioni aggiuntive.
File di output | L'opzione /OUT sostituisce il nome e il percorso predefiniti del programma creato dalla libreria.
Archiver | Consente di specificare il programma da richiamare durante il collegamento di oggetti statici oppure il percorso dell'archiver nel sistema remoto.
Timeout archiver | Timeout dell'archiver remoto in millisecondi.
Copia output | Consente di specificare se copiare il file di output di compilazione dal sistema remoto al computer locale.
