---
title: Errore del compilatore C2722
ms.date: 11/04/2016
f1_keywords:
- C2722
helpviewer_keywords:
- C2722
ms.assetid: 4cc2c7fa-cb12-4bcf-9df1-6d627ef62973
ms.openlocfilehash: 7426df1970dee58cd4363ee345e2286165e375b6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202175"
---
# <a name="compiler-error-c2722"></a>Errore del compilatore C2722

':: operator ': comando dell'operatore seguente non valido; USA ' operatore operator '

Un'istruzione `operator` ridefinisce `::new` o `::delete`. Gli operatori `new` e `delete` sono globali, quindi l'operatore di risoluzione dell'ambito (`::`) non è significativo. Rimuovere l'operatore `::` .
