---
description: 'Altre informazioni su: errore irreversibile del compilatore di risorse risorse RC1120'
title: Errore irreversibile del compilatore di risorse RC1120
ms.date: 11/04/2016
f1_keywords:
- RC1120
helpviewer_keywords:
- RC1120
ms.assetid: 4e462931-e42e-42e3-8bfc-847677194286
ms.openlocfilehash: bc0c90bf5d8dd4290ab20369235c53fcd2c80182
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272032"
---
# <a name="resource-compiler-fatal-error-rc1120"></a>Errore irreversibile del compilatore di risorse RC1120

memoria insufficiente, numero di byte necessari

Il compilatore di risorse ha esaurito lo spazio di archiviazione per gli elementi archiviati nell'heap. Questo è in genere il risultato della presenza di un numero eccessivo di simboli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Aumentare lo spazio del file di scambio di Windows. Per ulteriori informazioni sull'aumento dello spazio del file di scambio, vedere la pagina relativa alla memoria virtuale nella Guida di Windows.

1. Eliminare i file di inclusione non necessari, in particolare quelli non necessari `#define` e i prototipi di funzione.

1. Suddividere il file corrente in due o più file e compilarli separatamente.

1. Rimuovere gli altri programmi o driver in esecuzione nel sistema, che potrebbero comportare l'utilizzo di quantità significative di memoria.
