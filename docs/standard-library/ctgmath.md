---
description: 'Altre informazioni su: &lt; ctgmath&gt;'
title: '&lt;ctgmath&gt;'
ms.date: 07/11/2019
f1_keywords:
- <ctgmath>
helpviewer_keywords:
- ctgmath header
ms.assetid: ff521893-f445-4dc8-a2f6-699185bb7024
ms.openlocfilehash: 1968422bc32695eb15cff69c53fcaadf63ac5c14
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126585"
---
# <a name="ltctgmathgt"></a>&lt;ctgmath&gt;

Include in effetti le intestazioni della libreria standard C++ \<complex> e \<cmath> , che forniscono macro matematiche di tipo generico equivalenti a \<tgmath.h> .

> [!NOTE]
> L'intestazione della libreria standard C \<tgmath.h> non è inclusa \<ctgmath> in, perché viene sostituita in modo efficace dagli overload C++ in \<complex> e \<cmath> . Che rende \<ctgmath> ridondante l'intestazione. L' \<tgmath.h> intestazione è deprecata in C++. L' \<ctgmath> intestazione è deprecata in c++ 17 ed è stata rimossa nello standard bozza c++ 20.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<ctgmath>

**Spazio dei nomi:** std

## <a name="remarks"></a>Osservazioni

La funzionalità dell'intestazione della libreria standard C \<tgmath.h> viene fornita dagli overload in \<complex> e \<cmath> .

## <a name="see-also"></a>Vedere anche

[\<complex>](complex.md)\
[\<cmath>](cmath.md)\
[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Panoramica della libreria standard C++](cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)
