---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4204'
title: Avviso degli strumenti del linker LNK4204
ms.date: 11/04/2016
f1_keywords:
- LNK4204
helpviewer_keywords:
- LNK4204
ms.assetid: 14adda20-0cbe-407b-90f6-9f81c93530e2
ms.openlocfilehash: e0e61967a7b3bf42eb2c084d73c7c0aa9485c47e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294197"
---
# <a name="linker-tools-warning-lnk4204"></a>Avviso degli strumenti del linker LNK4204

' filename ' mancano informazioni di debug per il modulo di riferimento; oggetto collegato senza informazioni di debug

Il file con estensione PDB ha una firma errata. Il linker continuerà a collegare l'oggetto senza informazioni di debug. Potrebbe essere necessario ricompilare il file oggetto utilizzando l'opzione [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) .

LNK4204 può verificarsi se alcuni degli oggetti nella libreria fanno riferimento a un file che non esiste più. Questo problema può verificarsi durante la ricompilazione della soluzione, ad esempio. è possibile che un file oggetto venga eliminato e non ricompilato a causa di un errore di compilazione. In questo caso, compilare con **/Z7** o **/FD** per aggiornare gli oggetti in modo che facciano riferimento a un singolo file per libreria (che non è il nome del file pdb predefinito).  Per altre informazioni, vedere [/Fd (Nome file database di programma)](../../build/reference/fd-program-database-file-name.md).  Verificare che il file con estensione pdb venga salvato con la libreria ogni volta che viene aggiornato nel sistema di controllo del codice sorgente.
