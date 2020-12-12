---
description: 'Altre informazioni su: &lt; ctgmath&gt;'
title: '&lt;ctgmath&gt;'
ms.date: 07/11/2019
f1_keywords:
- <ctgmath>
- ctgmath
helpviewer_keywords:
- ctgmath header
ms.assetid: ff521893-f445-4dc8-a2f6-699185bb7024
ms.openlocfilehash: f1033a944699f4c124114c49e0e30f8b30804a1e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324695"
---
# <a name="ltctgmathgt"></a>&lt;ctgmath&gt;

Include in effetti le intestazioni della libreria standard C++ \<complex> e \<cmath> , che forniscono macro matematiche di tipo generico equivalenti a \<tgmath.h> .

> [!NOTE]
> L'intestazione della libreria standard C \<tgmath.h> non è inclusa \<ctgmath> in, perché viene sostituita in modo efficace dagli overload C++ in \<complex> e \<cmath> . Che rende \<ctgmath> ridondante l'intestazione. L' \<tgmath.h> intestazione è deprecata in C++. L' \<ctgmath> intestazione è deprecata in c++ 17 ed è stata rimossa nello standard bozza c++ 20.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<ctgmath>

**Spazio dei nomi:** std

## <a name="remarks"></a>Commenti

La funzionalità dell'intestazione della libreria standard C \<tgmath.h> viene fornita dagli overload in \<complex> e \<cmath> .

## <a name="see-also"></a>Vedi anche

[\<complex>](complex.md)\
[\<cmath>](cmath.md)\
[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Panoramica della libreria standard C++](cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)
