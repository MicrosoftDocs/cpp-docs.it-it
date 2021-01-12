---
description: 'Altre informazioni su: &lt; ccomplex&gt;'
title: '&lt;ccomplex&gt;'
ms.date: 07/11/2019
f1_keywords:
- <ccomplex>
helpviewer_keywords:
- ccomplex header
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
ms.openlocfilehash: 6c9aa717031238681fa04bc20ab6ca93429553ec
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126676"
---
# <a name="ltccomplexgt"></a>&lt;ccomplex&gt;

Include l'intestazione della libreria standard C++ [\<complex>](complex.md) .

> [!NOTE]
> L'intestazione della libreria standard C \<complex.h> non è inclusa \<ccomplex> in, perché viene sostituita in modo efficace dagli overload C++ in \<complex> e \<cmath> . Che rende \<ccomplex> ridondante l'intestazione. L' \<complex.h> intestazione è deprecata in C++. L' \<ccomplex> intestazione è deprecata in c++ 17 ed è stata rimossa nello standard bozza c++ 20.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<ccomplex>

**Spazio dei nomi:** std

## <a name="remarks"></a>Osservazioni

Il nome `clog` , dichiarato in \<complex.h> , non è definito nello `std` spazio dei nomi a causa di potenziali conflitti con il `clog` dichiarato in [\<iostream>](iostream.md) .

## <a name="see-also"></a>Vedere anche

[\<complex>](complex.md)\
[\<cmath>](cmath.md)\
[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Panoramica della libreria standard C++](cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)
