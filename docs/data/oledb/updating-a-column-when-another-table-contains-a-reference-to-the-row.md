---
title: Aggiornare una colonna quando un'altra tabella contiene un riferimento alla riga | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- rowsets, column updates
ms.assetid: abb5db69-055d-431f-b12d-ad2940a661ba
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 17d260f522432a78729c9998c518398dfa41275a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33102885"
---
# <a name="updating-a-column-when-another-table-contains-a-reference-to-the-row"></a>Aggiornamento di una colonna quando un'altra tabella contiene un riferimento alla riga
Alcuni provider consente di rilevare le colonne nella modifica della riga, ma non tutti i provider. Di conseguenza, l'aggiornamento di una colonna può comportare un errore quando è presente un riferimento alla riga che si sta tentando di aggiornare. Per risolvere questo problema, creare una funzione di accesso separato contenente solo le colonne che si desidera modificare. Passare il numero di tale funzione di accesso per `SetData`.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)