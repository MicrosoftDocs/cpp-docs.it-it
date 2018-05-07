---
title: Strumenti del linker LNK4204 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4204
dev_langs:
- C++
helpviewer_keywords:
- LNK4204
ms.assetid: 14adda20-0cbe-407b-90f6-9f81c93530e2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f000fa42357a299c943eda0cd5f8697aee138f4a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4204"></a>Avviso degli strumenti del linker LNK4204
'nomefile' mancano informazioni di debug per il modulo di riferimento; oggetto collegato senza informazioni di debug  
  
 Il file con estensione PDB ha una firma errata. Il linker continuerà a collegare l'oggetto senza informazioni di debug. Si consiglia di ricompilare il file oggetto utilizzando il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione.  
  
 LNK4204 può verificarsi se alcuni degli oggetti nella raccolta di riferimento a un file che non esiste più. Questo problema può verificarsi quando la ricompilazione della soluzione, ad esempio; un file oggetto potrebbe essere eliminato e non è stato ricreato a causa di un errore di compilazione. In questo caso, in cui eseguire la compilazione con **/Z7**, o **/Fd**per aggiornare gli oggetti per fare riferimento a un singolo file per ogni libreria (che non è il nome predefinito del file con estensione pdb).  Per altre informazioni, vedere [/Fd (Nome file database di programma)](../../build/reference/fd-program-database-file-name.md).  Verificare che il file PDB viene salvato con la libreria ogni volta che viene aggiornato nel sistema di controllo di origine.