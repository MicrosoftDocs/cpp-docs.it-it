---
title: Errore della riga di comando D8027 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D8027
dev_langs:
- C++
helpviewer_keywords:
- D8027
ms.assetid: f228220f-0c7f-49a6-a6e0-1f7bd4745aa6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc93edb939001a1e1bed5d3f7a4113e8483e81dd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33296120"
---
# <a name="command-line-error-d8027"></a>Errore della riga di comando D8027
Impossibile eseguire 'componente'  
  
 Il compilatore non è possibile eseguire il componente specificato del compilatore o del linker.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Memoria insufficiente per caricare il componente. Se il compilatore, eseguire il compilatore di fuori del makefile richiamato da NMAKE.  
  
2.  Il sistema operativo corrente non è riuscito a eseguire il componente. Verificare che il percorso punta ai file eseguibili appropriato al sistema operativo.  
  
3.  Il componente è stato danneggiato. Copiare il componente dai dischi di distribuzione, utilizzando il programma di installazione.  
  
4.  Un'opzione è stata specificata correttamente. Ad esempio:  
  
    ```  
    cl /B1 file1.c  
    ```