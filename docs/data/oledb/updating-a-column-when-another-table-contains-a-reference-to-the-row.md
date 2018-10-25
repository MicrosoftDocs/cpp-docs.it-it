---
title: Aggiornare una colonna quando un'altra tabella contiene un riferimento alla riga | Microsoft Docs
ms.custom: ''
ms.date: 10/24/2018
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
ms.openlocfilehash: 7998897c80e392326213324804c1809656e051f3
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50071823"
---
# <a name="updating-a-column-when-another-table-contains-a-reference-to-the-row"></a>Aggiornamento di una colonna quando un'altra tabella contiene un riferimento alla riga

Alcuni provider consentono di rilevare le colonne nella modifica della riga, ma non è più provider. Di conseguenza, l'aggiornamento di una colonna può comportare un errore quando è presente un riferimento alla riga che si desidera aggiornare. Per risolvere questo problema, creare una funzione di accesso separato contenente solo le colonne che si desidera modificare. Passare il numero di tale funzione di accesso da `SetData`.

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)