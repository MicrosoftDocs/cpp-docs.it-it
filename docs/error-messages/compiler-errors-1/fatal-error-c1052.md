---
description: 'Altre informazioni su: errore irreversibile C1052'
title: Errore irreversibile C1052
ms.date: 05/08/2017
f1_keywords:
- C1052
helpviewer_keywords:
- C1052
ms.assetid: f2c09a2f-d3c1-4420-9501-ffcb65caf87b
ms.openlocfilehash: 818210cc4c3658167de30b9e666c600695389330
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251739"
---
# <a name="fatal-error-c1052"></a>Errore irreversibile C1052

> il file di database di programma,'*filename*', è stato generato dal linker con/debug: FASTLINK; il compilatore non può aggiornare tali file PDB; eliminarlo o usare/FD per specificare un nome file PDB diverso

Il compilatore non può aggiornare gli stessi file di database di programma (PDB) generati dal linker quando si specifica l'opzione [/debug: FASTLINK](../../build/reference/debug-generate-debug-info.md) . In genere i file PDB generati dal compilatore e i file PDB generati dal linker hanno nomi diversi. Tuttavia, se sono impostati per utilizzare gli stessi nomi, questo errore può verificarsi.

Per risolvere questo problema, è possibile eliminare in modo esplicito i file PDB prima di eseguire di nuovo la compilazione oppure è possibile creare nomi diversi per i file PDB generati dal compilatore e dal linker.

Per specificare il nome del file PDB generato dal compilatore nella riga di comando, usare l'opzione del compilatore [/FD](../../build/reference/fd-program-database-file-name.md) . Per specificare il nome del file PDB generato dal compilatore nell'IDE, aprire la finestra di dialogo **pagine delle proprietà** del progetto e nella pagina **proprietà di configurazione**, **C/C++**, **file di output** , impostare la proprietà **nome file del database di programma** . Per impostazione predefinita, questa proprietà è `$(IntDir)vc$(PlatformToolsetVersion).pdb` .

In alternativa, è possibile impostare il nome del file PDB generato dal linker. Per specificare il nome del file PDB generato dal linker nella riga di comando, usare l'opzione del linker [/PDB](../../build/reference/pdb-use-program-database.md) . Per specificare il nome del file PDB generato dal linker nell'IDE, aprire la finestra di dialogo **pagine delle proprietà** del progetto e nella pagina **proprietà di configurazione**, **linker**, **debug** , impostare la proprietà **genera file di database di programma** . Per impostazione predefinita, questa proprietà è impostata su `$(OutDir)$(TargetName).pdb`.
