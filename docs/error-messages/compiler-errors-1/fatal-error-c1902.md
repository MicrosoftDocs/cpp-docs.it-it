---
title: Errore irreversibile C1902 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1902
dev_langs: C++
helpviewer_keywords: C1902
ms.assetid: 2dc066cc-fcb1-4725-8bcb-9f44dd0905b7
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4e5f6c22ea848a49a12cc85508fd80a4cfcb90e0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1902"></a>Errore irreversibile C1902
mancata corrispondenza del programma database manager; Verificare l'installazione  
  
Un file di database di programma (PDB) è stato creato utilizzando una versione più recente di mspdb*XXX*DLL di quella a cui il compilatore ha rilevato nel sistema. Questo errore generalmente indica che mspdbsrv.exe o risultano mancanti o che dispongono di versioni diverse di mspdb*XXX*. dll. (Il *XXX* segnaposto nel mspdb*XXX*modifiche al nome di file con estensione dll con ogni versione del prodotto. In Visual Studio 2015, ad esempio, il nome del file è mspdb140.dll.)  
  
Verificare le versioni corrispondenti di mspdbsrv.exe, e mspdb*XXX*DLL installate nel sistema. Verificare che le versioni non corrispondenti non sono state copiate nella directory che contiene gli strumenti del compilatore e collegamento per la piattaforma di destinazione. Ad esempio, è possibile che sono copiati i file in modo è possibile richiamare il compilatore o collegamento lo strumento dal prompt dei comandi senza impostare il **percorso** variabile di ambiente di conseguenza.