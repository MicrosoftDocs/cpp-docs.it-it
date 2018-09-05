---
title: Usando un Template Library (ATL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- template libraries
ms.assetid: 5e80ec6e-a61c-41ce-b34b-9a6252c46265
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 91a9c10bef285780ded145e33800ebd3db198827
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43754794"
---
# <a name="using-a-template-library"></a>Usando una libreria di modelli

Un modello è pressoché simile a una macro. Come con una macro, richiamare un modello provoca l'espansione (con la sostituzione dei parametri appropriati) al codice scritto dall'utente. Tuttavia, un modello va avanti rispetto a questa opzione per consentire la creazione di nuove classi di base ai tipi passati come parametri. Queste nuove classi implementano modi indipendente dai tipi dell'esecuzione dell'operazione espresso nel codice del modello.

Le librerie di modelli, ad esempio ATL differiscono dalle librerie di classi C++ tradizionali in genere vengono forniti solo come codice sorgente (o come codice sorgente con una minima di supporto runtime) e non sono intrinsecamente o necessariamente natura gerarchiche. Invece di derivazione da una classe per ottenere la funzionalità desiderata, l'istanza di una classe da un modello.

## <a name="see-also"></a>Vedere anche

[Introduzione a ATL](../atl/introduction-to-atl.md)

