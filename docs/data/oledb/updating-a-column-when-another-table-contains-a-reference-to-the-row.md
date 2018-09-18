---
title: Aggiornare una colonna quando un'altra tabella contiene un riferimento alla riga | Microsoft Docs
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
ms.openlocfilehash: 6d2d3509b51d083290339514083a541ef9a86b64
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46030664"
---
# <a name="updating-a-column-when-another-table-contains-a-reference-to-the-row"></a>Aggiornamento di una colonna quando un'altra tabella contiene un riferimento alla riga

Alcuni provider consentono di rilevare le colonne nella modifica della riga, ma non è più provider. Di conseguenza, l'aggiornamento di una colonna può comportare un errore quando è presente un riferimento alla riga a cui che si sta tentando di aggiornare. Per risolvere questo problema, creare una funzione di accesso separato contenente solo le colonne che si desidera modificare. Passare il numero di tale funzione di accesso da `SetData`.  
  
## <a name="see-also"></a>Vedere anche  

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)