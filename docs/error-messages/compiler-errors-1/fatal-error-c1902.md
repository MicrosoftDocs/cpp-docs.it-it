---
title: Errore irreversibile C1902 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: b551b1a7e0ae03a7de5108a1d114155786972847
ms.openlocfilehash: 79987719614dfa3075f9a9090ca1d97f6546ceb3
ms.lasthandoff: 02/24/2017

---
# <a name="fatal-error-c1902"></a>Errore irreversibile C1902
mancata corrispondenza del programma database manager; Verificare l'installazione  
  
Un file di database di programma (PDB) è stato creato utilizzando una versione più recente di mspdb*XXX*. dll di quella rilevata nel sistema. Questo errore indica generalmente che mspdbsrv.exe o mancano o sono una versione diversa da mspdb*XXX*. dll. (Il *XXX* segnaposto nel mspdb*XXX*nome di file. dll cambia con ogni versione del prodotto. In Visual Studio 2015, ad esempio, il nome del file è mspdb140.dll.)  
  
Verificare le versioni corrispondenti di mspdbsrv.exe, mspdbcore e mspdb*XXX*. dll installate nel sistema. Assicurarsi che le versioni non corrispondenti non sono state copiate nella directory che contiene gli strumenti del compilatore e collegamento per la piattaforma di destinazione. Ad esempio, si è copiato i file in modo è possibile richiamare il compilatore o collegamento lo strumento dal prompt dei comandi senza impostare il **percorso** variabile di ambiente di conseguenza.
