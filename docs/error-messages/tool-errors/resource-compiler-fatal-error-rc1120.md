---
title: Errore irreversibile del compilatore di risorse RC1120
ms.date: 11/04/2016
f1_keywords:
- RC1120
helpviewer_keywords:
- RC1120
ms.assetid: 4e462931-e42e-42e3-8bfc-847677194286
ms.openlocfilehash: 855a76ff63145695a7063944701d7acc684e0084
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80173010"
---
# <a name="resource-compiler-fatal-error-rc1120"></a>Errore irreversibile del compilatore di risorse RC1120

memoria insufficiente, numero di byte necessari

Il compilatore di risorse ha esaurito lo spazio di archiviazione per gli elementi archiviati nell'heap. Questo è in genere il risultato della presenza di un numero eccessivo di simboli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Aumentare lo spazio del file di scambio di Windows. Per ulteriori informazioni sull'aumento dello spazio del file di scambio, vedere la pagina relativa alla memoria virtuale nella Guida di Windows.

1. Eliminare i file di inclusione non necessari, in particolare quelli non necessari `#define`s e i prototipi di funzione.

1. Suddividere il file corrente in due o più file e compilarli separatamente.

1. Rimuovere gli altri programmi o driver in esecuzione nel sistema, che potrebbero comportare l'utilizzo di quantità significative di memoria.
