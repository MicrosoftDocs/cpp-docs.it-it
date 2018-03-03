---
title: Strumenti del linker LNK4070 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4070
dev_langs:
- C++
helpviewer_keywords:
- LNK4070
ms.assetid: f95f179a-fff9-427e-bd51-466b3934517f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1c3c683593b9019851b1a330a613adcf7a18c4a1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4070"></a>Avviso degli strumenti del linker LNK4070
Direttiva /out: nomefile in. EXP differisce dal nome di file di output 'nomefile'; direttiva ignorata  
  
 Il `filename` specificato nella [nome](../../build/reference/name-c-cpp.md) o [libreria](../../build/reference/library.md) istruzione quando è stato creato il file. EXP differisce dall'output `filename` che è stato impostato per impostazione predefinita o specificato con il [/Out](../../build/reference/out-output-file-name.md) opzione.  
  
 Verrà visualizzato questo avviso se si modifica il nome di un file di output nell'ambiente di sviluppo e in cui non è stato aggiornato il file del progetto con estensione def. Aggiornare manualmente il file. def per risolvere il problema.  
  
 Un programma client che utilizza la DLL risulta che si verifichino problemi.