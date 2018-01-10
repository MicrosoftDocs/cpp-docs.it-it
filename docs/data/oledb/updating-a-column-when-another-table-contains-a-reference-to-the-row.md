---
title: Aggiornare una colonna quando un'altra tabella contiene un riferimento alla riga | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: rowsets, column updates
ms.assetid: abb5db69-055d-431f-b12d-ad2940a661ba
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4c5fdf37cedd2c20430f87e15446244321c68bdf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="updating-a-column-when-another-table-contains-a-reference-to-the-row"></a>Aggiornamento di una colonna quando un'altra tabella contiene un riferimento alla riga
Alcuni provider consente di rilevare le colonne nella modifica della riga, ma non tutti i provider. Di conseguenza, l'aggiornamento di una colonna può comportare un errore quando è presente un riferimento alla riga che si sta tentando di aggiornare. Per risolvere questo problema, creare una funzione di accesso separato contenente solo le colonne che si desidera modificare. Passare il numero di tale funzione di accesso per `SetData`.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)