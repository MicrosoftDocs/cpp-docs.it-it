---
description: 'Altre informazioni su: &lt; cstdbool&gt;'
title: '&lt;cstdbool&gt;'
ms.date: 07/11/2019
f1_keywords:
- <cstdbool>
- cstdbool
helpviewer_keywords:
- cstdbool header
ms.assetid: 44ccb8b2-d808-4715-8097-58ba09ab33ed
ms.openlocfilehash: 0711c05ff136f90a701ff707976a172d2bcb1315
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324735"
---
# <a name="ltcstdboolgt"></a>&lt;cstdbool&gt;

Include l'intestazione della libreria standard C \<stdbool.h> e aggiunge i nomi associati allo `std` spazio dei nomi.

> [!NOTE]
> Poiché l' \<stdbool.h> intestazione definisce macro che sono parole chiave in C++, anche se non ha alcun effetto. L' \<stdbool.h> intestazione è deprecata in C++. L' \<cstdbool> intestazione è deprecata in c++ 17 ed è stata rimossa nello standard bozza c++ 20.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<cstdbool>

**Spazio dei nomi:** std

## <a name="remarks"></a>Commenti

L'inclusione di questa intestazione garantisce che i nomi dichiarati utilizzando il collegamento esterno nell'intestazione della libreria standard C vengano dichiarati nello `std` spazio dei nomi.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Panoramica della libreria standard C++](cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)
