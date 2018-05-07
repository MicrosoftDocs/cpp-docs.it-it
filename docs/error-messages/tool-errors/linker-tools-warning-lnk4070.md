---
title: Strumenti del linker LNK4070 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4070
dev_langs:
- C++
helpviewer_keywords:
- LNK4070
ms.assetid: f95f179a-fff9-427e-bd51-466b3934517f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9e4599e96552f1b98ef0b1af8d38995ebbe5a83e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4070"></a>Avviso degli strumenti del linker LNK4070
Direttiva /out: nomefile in. EXP differisce dal nome di file di output 'nomefile'; direttiva ignorata  
  
 Il `filename` specificato nella [nome](../../build/reference/name-c-cpp.md) o [libreria](../../build/reference/library.md) istruzione quando è stato creato il file. EXP differisce dall'output `filename` che è stato impostato per impostazione predefinita o specificato con il [/Out](../../build/reference/out-output-file-name.md) opzione.  
  
 Verrà visualizzato questo avviso se si modifica il nome di un file di output nell'ambiente di sviluppo e in cui non è stato aggiornato il file del progetto con estensione def. Aggiornare manualmente il file. def per risolvere il problema.  
  
 Un programma client che utilizza la DLL risulta che si verifichino problemi.