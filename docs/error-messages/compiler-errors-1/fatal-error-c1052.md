---
title: Errore irreversibile C1052 | Documenti Microsoft
ms.custom: 
ms.date: 05/08/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1052
dev_langs:
- C++
helpviewer_keywords:
- C1052
ms.assetid: f2c09a2f-d3c1-4420-9501-ffcb65caf87b
caps.latest.revision: 0
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 128bd124c2536d86c8b673b54abc4b5505526b41
ms.openlocfilehash: f3ab91c1c79b822a4d9a33fb0ab5fbd88146fff0
ms.contentlocale: it-it
ms.lasthandoff: 05/10/2017

---
# <a name="fatal-error-c1052"></a>Errore irreversibile C1052
file di database di programma '*filename*', è stato generato dal linker con /debug: fastlink; compilatore non può aggiornare questi file PDB;. eliminarlo o usare /Fd per specificare un nome di file PDB diverso  
  
Il compilatore non è possibile aggiornare gli stessi file di database di (programma PDB) di programma che vengono generati dal linker quando il [/debug: fastlink](../../build/reference/debug-generate-debug-info.md) opzione specificata. In genere i file PDB generato dal compilatore e i file PDB generato dal linker hanno nomi diversi. Tuttavia, se sono impostati per utilizzare gli stessi nomi, questo errore può verificarsi.  
  
Per risolvere questo problema, è possibile eliminare in modo esplicito i file PDB prima di compilare di nuovo oppure è possibile creare nomi diversi per i file PDB generato dal compilatore e generate dal linker. Per creare più i nomi di file PDB generato dal compilatore sulla riga di comando, utilizzare il [/Fd](../../build/reference/fd-program-database-file-name.md) opzione. Per generare nomi di file PDB diversi nell'IDE, aprire il **pagine delle proprietà** per il progetto e nella finestra di dialogo di **le proprietà di configurazione**, **C/C++**, **i file di Output** pagina, impostare il **nome di File di Database di programma** proprietà. Per impostazione predefinita, questa proprietà è `$(IntDir)vc$(PlatformToolsetVersion).pdb`. In alternativa, è possibile impostare il nome del file PDB generato dal linker. Aprire il **pagine delle proprietà** per il progetto e nella finestra di dialogo di **le proprietà di configurazione**, **Linker**, **debug** pagina, impostare il **genera File del Database di programma** proprietà. Per impostazione predefinita, questa proprietà è impostata su `$(OutDir)$(TargetName).pdb`.  

