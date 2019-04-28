---
title: Usando un Template Library (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- template libraries
ms.assetid: 5e80ec6e-a61c-41ce-b34b-9a6252c46265
ms.openlocfilehash: 7b1a6b0befcfd7ecf0a150653b5c32239b7f9543
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62195131"
---
# <a name="using-a-template-library"></a>Usando una libreria di modelli

Un modello è pressoché simile a una macro. Come con una macro, richiamare un modello provoca l'espansione (con la sostituzione dei parametri appropriati) al codice scritto dall'utente. Tuttavia, un modello va avanti rispetto a questa opzione per consentire la creazione di nuove classi di base ai tipi passati come parametri. Queste nuove classi implementano modi indipendente dai tipi dell'esecuzione dell'operazione espresso nel codice del modello.

Le librerie di modelli, ad esempio ATL differiscono dalle librerie di classi C++ tradizionali in genere vengono forniti solo come codice sorgente (o come codice sorgente con una minima di supporto runtime) e non sono intrinsecamente o necessariamente natura gerarchiche. Invece di derivazione da una classe per ottenere la funzionalità desiderata, l'istanza di una classe da un modello.

## <a name="see-also"></a>Vedere anche

[Introduzione a ATL](../atl/introduction-to-atl.md)
