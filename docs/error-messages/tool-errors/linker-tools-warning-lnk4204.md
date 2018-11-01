---
title: Avviso degli strumenti del linker LNK4204
ms.date: 11/04/2016
f1_keywords:
- LNK4204
helpviewer_keywords:
- LNK4204
ms.assetid: 14adda20-0cbe-407b-90f6-9f81c93530e2
ms.openlocfilehash: 790b0fa25bbf41c38b843e1a2ea757fdc0d10b9a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475166"
---
# <a name="linker-tools-warning-lnk4204"></a>Avviso degli strumenti del linker LNK4204

'filename' mancano informazioni per il riferimento modulo; di debug oggetto collegato senza informazioni di debug

Il file con estensione PDB contiene una firma errata. Il linker continuerà a collegare l'oggetto senza informazioni di debug. È possibile ricompilare il file oggetto usando il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione.

LNK4204 può verificarsi se alcuni degli oggetti nella libreria fanno riferimento a un file che non esiste più. Questo problema può verificarsi quando la ricompilazione della soluzione, ad esempio; un file oggetto potrebbe essere eliminato e ricompilato non a causa di un errore di compilazione. In questo caso, eseguire la compilazione con **/Z7**, o **/Fd**, per aggiornare gli oggetti per fare riferimento a un singolo file per ogni libreria (che non è il nome predefinito del file con estensione pdb).  Per altre informazioni, vedere [/Fd (Nome file database di programma)](../../build/reference/fd-program-database-file-name.md).  Assicurarsi che il file PDB viene salvato con la libreria ogni volta che viene aggiornata nel sistema di controllo di origine.