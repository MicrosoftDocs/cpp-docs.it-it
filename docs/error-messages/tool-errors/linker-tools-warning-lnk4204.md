---
title: Strumenti del linker LNK4204 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4204
dev_langs: C++
helpviewer_keywords: LNK4204
ms.assetid: 14adda20-0cbe-407b-90f6-9f81c93530e2
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 787d9ac2e4f5d18ea905cdf29a73530ff140a206
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="linker-tools-warning-lnk4204"></a>Avviso degli strumenti del linker LNK4204
'nomefile' mancano informazioni di debug per il modulo di riferimento; oggetto collegato senza informazioni di debug  
  
 Il file con estensione PDB ha una firma errata. Il linker continuerà a collegare l'oggetto senza informazioni di debug. Si consiglia di ricompilare il file oggetto utilizzando il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione.  
  
 LNK4204 può verificarsi se alcuni degli oggetti nella raccolta di riferimento a un file che non esiste più. Questo problema può verificarsi quando la ricompilazione della soluzione, ad esempio; un file oggetto potrebbe essere eliminato e non è stato ricreato a causa di un errore di compilazione. In questo caso, in cui eseguire la compilazione con **/Z7**, o **/Fd**per aggiornare gli oggetti per fare riferimento a un singolo file per ogni libreria (che non è il nome predefinito del file con estensione pdb).  Per altre informazioni, vedere [/Fd (Nome file database di programma)](../../build/reference/fd-program-database-file-name.md).  Verificare che il file PDB viene salvato con la libreria ogni volta che viene aggiornato nel sistema di controllo di origine.