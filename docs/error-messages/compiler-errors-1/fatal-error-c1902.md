---
title: Errore irreversibile C1902 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1902
dev_langs:
- C++
helpviewer_keywords:
- C1902
ms.assetid: 2dc066cc-fcb1-4725-8bcb-9f44dd0905b7
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 89354565f67c8704eee8c8b5f9dcb94523800c63
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="fatal-error-c1902"></a>Errore irreversibile C1902
mancata corrispondenza del programma database manager; Verificare l'installazione  
  
Un file di database di programma (PDB) è stato creato utilizzando una versione più recente di mspdb*XXX*DLL di quella a cui il compilatore ha rilevato nel sistema. Questo errore generalmente indica che mspdbsrv.exe o risultano mancanti o che dispongono di versioni diverse di mspdb*XXX*. dll. (Il *XXX* segnaposto nel mspdb*XXX*modifiche al nome di file con estensione dll con ogni versione del prodotto. In Visual Studio 2015, ad esempio, il nome del file è mspdb140.dll.)  
  
Verificare le versioni corrispondenti di mspdbsrv.exe, e mspdb*XXX*DLL installate nel sistema. Verificare che le versioni non corrispondenti non sono state copiate nella directory che contiene gli strumenti del compilatore e collegamento per la piattaforma di destinazione. Ad esempio, è possibile che sono copiati i file in modo è possibile richiamare il compilatore o collegamento lo strumento dal prompt dei comandi senza impostare il **percorso** variabile di ambiente di conseguenza.
