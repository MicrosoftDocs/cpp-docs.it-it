---
title: Errore irreversibile C1052 | Documenti Microsoft
ms.custom: 
ms.date: 05/08/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1052
dev_langs:
- C++
helpviewer_keywords:
- C1052
ms.assetid: f2c09a2f-d3c1-4420-9501-ffcb65caf87b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6b9d7cc04fa863d30829c5484b328effc55125e6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1052"></a>Errore irreversibile C1052  
  
> file di database di programma '*filename*', è stato generato dal linker con /debug: fastlink; compilatore non può aggiornare questi file PDB;. eliminarlo o usare /Fd per specificare un nome di file PDB diverso  
  
Il compilatore non è possibile aggiornare gli stessi file di database di (programma PDB) di programma che vengono generati dal linker quando il [/debug: fastlink](../../build/reference/debug-generate-debug-info.md) opzione specificata. In genere i file PDB generato dal compilatore e i file PDB generato dal linker hanno nomi diversi. Tuttavia, se sono impostati per utilizzare gli stessi nomi, questo errore può verificarsi.  
  
Per risolvere questo problema, è possibile eliminare in modo esplicito i file PDB prima di compilare di nuovo oppure è possibile creare nomi diversi per i file PDB generato dal compilatore e generate dal linker.  
  
Per specificare il nome del file PDB generato dal compilatore della riga di comando, utilizzare il [/Fd](../../build/reference/fd-program-database-file-name.md) l'opzione del compilatore. Per specificare il nome del file PDB generato dal compilatore nell'IDE, aprire il **pagine delle proprietà** per il progetto e nella finestra di dialogo di **le proprietà di configurazione**, **C/C++**,  **I file di output** pagina, impostare il **nome di File di Database di programma** proprietà. Per impostazione predefinita, questa proprietà è `$(IntDir)vc$(PlatformToolsetVersion).pdb`.  
  
In alternativa, è possibile impostare il nome del file PDB generato dal linker. Per specificare il nome del file PDB generato dal linker nella riga di comando, utilizzare il [/PDB](../../build/reference/pdb-use-program-database.md) l'opzione del linker. Per specificare il nome del file PDB generato del linker nell'IDE, aprire il **pagine delle proprietà** per il progetto e nella finestra di dialogo di **le proprietà di configurazione**, **Linker**,  **Debug** pagina, impostare il **genera File del Database di programma** proprietà. Per impostazione predefinita, questa proprietà è impostata su `$(OutDir)$(TargetName).pdb`.  
