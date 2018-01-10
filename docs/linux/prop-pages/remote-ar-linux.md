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
ms.workload:
- cplusplus
- linux
ms.openlocfilehash: 83b69c8aea824f08f3db6aa5f5b7bf01cacb339e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
