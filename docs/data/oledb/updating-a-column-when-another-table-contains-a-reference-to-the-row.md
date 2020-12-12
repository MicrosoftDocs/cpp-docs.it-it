---
description: "Altre informazioni su: aggiornamento di una colonna quando un'altra tabella contiene un riferimento alla riga"
title: Aggiornare una colonna quando un'altra tabella contiene un riferimento alla riga
ms.date: 10/24/2018
helpviewer_keywords:
- rowsets, column updates
ms.assetid: abb5db69-055d-431f-b12d-ad2940a661ba
ms.openlocfilehash: 5c4562aaaa435c9745bedd146c04c98158d50cc5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272617"
---
# <a name="updating-a-column-when-another-table-contains-a-reference-to-the-row"></a>Aggiornamento di una colonna quando un'altra tabella contiene un riferimento alla riga

Alcuni provider possono rilevare le colonne della riga modificate, ma molti provider non possono. Di conseguenza, l'aggiornamento di una colonna può comportare un errore quando è presente un riferimento alla riga che si sta tentando di aggiornare. Per risolvere questo problema, creare una funzione di accesso separata contenente solo le colonne che si desidera modificare. Passare il numero di tale funzione di accesso a `SetData` .

## <a name="see-also"></a>Vedi anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
