---
title: Errore irreversibile C1052
ms.date: 05/08/2017
f1_keywords:
- C1052
helpviewer_keywords:
- C1052
ms.assetid: f2c09a2f-d3c1-4420-9501-ffcb65caf87b
ms.openlocfilehash: b381cc3cfe27d4c4a9d744a6b854a0e43727fe71
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62243677"
---
# <a name="fatal-error-c1052"></a>Errore irreversibile C1052

> file di database di programma, '*filename*', è stato generato dal linker con /debug: fastlink; compilatore non può aggiornare questi file PDB;. eliminarlo o usare /Fd per specificare un nome file PDB diverso

Il compilatore non è possibile aggiornare gli stessi file di database (PDB) di programma che vengono generati dal linker quando il [/debug: fastlink](../../build/reference/debug-generate-debug-info.md) opzione specificata. In genere i file PDB generato dal compilatore e i file PDB generato dal linker hanno nomi diversi. Tuttavia, se sono impostati per usare gli stessi nomi, questo errore può verificarsi.

Per risolvere questo problema, è possibile eliminare in modo esplicito i file PDB prima che si esegue nuovamente la compilazione oppure è possibile creare nomi diversi per i file PDB generato dal compilatore e generate dal linker.

Per specificare il nome del file PDB generato dal compilatore della riga di comando, usare il [/Fd](../../build/reference/fd-program-database-file-name.md) opzione del compilatore. Per specificare il nome del file PDB generato dal compilatore nell'IDE, aprire il **pagine delle proprietà** per il progetto e nella finestra di dialogo il **delle proprietà di configurazione**, **C/C++**,  **File di output** pagina, impostare il **il nome di File di Database di programma** proprietà. Per impostazione predefinita, questa proprietà è `$(IntDir)vc$(PlatformToolsetVersion).pdb`.

In alternativa, è possibile impostare il nome del file PDB generato dal linker. Per specificare il nome del file PDB generato dal linker nella riga di comando, usare il [/PDB](../../build/reference/pdb-use-program-database.md) l'opzione del linker. Per specificare il nome del file PDB generato dal linker nell'IDE, aprire il **pagine delle proprietà** per il progetto e nella finestra di dialogo il **delle proprietà di configurazione**, **Linker**,  **Debugging** pagina, impostare il **genera File del Database di programma** proprietà. Per impostazione predefinita, questa proprietà è impostata su `$(OutDir)$(TargetName).pdb`.
