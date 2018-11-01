---
title: Errore irreversibile C1902
ms.date: 11/04/2016
f1_keywords:
- C1902
helpviewer_keywords:
- C1902
ms.assetid: 2dc066cc-fcb1-4725-8bcb-9f44dd0905b7
ms.openlocfilehash: c425430a6d08ae8a97c4dcd0f5764f44dee43e5f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50488907"
---
# <a name="fatal-error-c1902"></a>Errore irreversibile C1902

mancata corrispondenza del programma database manager; Verificare l'installazione

Un file di database di programma (PDB) è stato creato utilizzando una versione più recente di mspdb*XXX*. dll di quella a cui il compilatore ha rilevato nel sistema. Questo errore generalmente indica che mspdbsrv.exe o risultano mancanti o che hanno una versione diversa da mspdb*XXX*. dll. (Il *XXX* segnaposto nel mspdb*XXX*modifiche ai nomi di file con estensione dll con ogni versione del prodotto. In Visual Studio 2015, ad esempio, il nome del file è mspdb140.dll.)

Verificare che le versioni corrispondenti di mspdbsrv.exe, mspdbcore e mspdb*XXX*. dll installate nel sistema. Assicurarsi che le versioni non corrispondenti non sono state copiate nella directory che contiene gli strumenti del compilatore e il collegamento per la piattaforma di destinazione. Ad esempio, potrebbe essere copiato i file in modo che è possibile richiamare lo strumento del compilatore o un collegamento al prompt dei comandi senza impostare il **percorso** variabile di ambiente di conseguenza.