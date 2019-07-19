---
title: '&lt;cstdbool&gt;'
ms.date: 07/11/2019
f1_keywords:
- <cstdbool>
- cstdbool
helpviewer_keywords:
- cstdbool header
ms.assetid: 44ccb8b2-d808-4715-8097-58ba09ab33ed
ms.openlocfilehash: ed780e059a5e456731fd6a4f651639e282016f5e
ms.sourcegitcommit: 0867d648e0955ebad7260b5fbebfd6cd4d58f3c7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/19/2019
ms.locfileid: "68341094"
---
# <a name="ltcstdboolgt"></a>&lt;cstdbool&gt;

Include l'intestazione \<della libreria standard C stdbool. h > e aggiunge i nomi associati `std` allo spazio dei nomi.

> [!NOTE]
> Poiché l' \<intestazione di > stdbool. h definisce le macro che sono C++parole chiave in, incluso non ha alcun effetto. L' \<intestazione di > stdbool. h è deprecata C++in. L' \<intestazione di > cstdbool è deprecata in c++ 17 ed è stata rimossa nello standard bozza c++ 20.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> cstdbool

**Spazio dei nomi:** std

## <a name="remarks"></a>Note

L'inclusione di questa intestazione garantisce che i nomi dichiarati utilizzando il collegamento esterno nell'intestazione della libreria `std` standard C vengano dichiarati nello spazio dei nomi.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[C++Panoramica della libreria standard](cpp-standard-library-overview.md)\
[Thread safety nella C++ libreria standard](thread-safety-in-the-cpp-standard-library.md)
