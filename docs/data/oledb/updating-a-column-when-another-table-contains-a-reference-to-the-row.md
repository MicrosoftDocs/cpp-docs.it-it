---
title: Aggiornare una colonna quando un'altra tabella contiene un riferimento alla riga
ms.date: 10/24/2018
helpviewer_keywords:
- rowsets, column updates
ms.assetid: abb5db69-055d-431f-b12d-ad2940a661ba
ms.openlocfilehash: 95cddfd5f030c7bd8d1220cf040de4bc5a883226
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209482"
---
# <a name="updating-a-column-when-another-table-contains-a-reference-to-the-row"></a>Aggiornamento di una colonna quando un'altra tabella contiene un riferimento alla riga

Alcuni provider possono rilevare le colonne della riga modificate, ma molti provider non possono. Di conseguenza, l'aggiornamento di una colonna può comportare un errore quando è presente un riferimento alla riga che si sta tentando di aggiornare. Per risolvere questo problema, creare una funzione di accesso separata contenente solo le colonne che si desidera modificare. Passare il numero della funzione di accesso `SetData`.

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
