---
description: 'Altre informazioni su: &lt; ccomplex&gt;'
title: '&lt;ccomplex&gt;'
ms.date: 07/11/2019
f1_keywords:
- <ccomplex>
- ccomplex
helpviewer_keywords:
- ccomplex header
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
ms.openlocfilehash: d657d7b0b2a203bcbad93ff1c78f6b78eb4d7707
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325315"
---
# <a name="ltccomplexgt"></a>&lt;ccomplex&gt;

Include l'intestazione della libreria standard C++ [\<complex>](complex.md) .

> [!NOTE]
> L'intestazione della libreria standard C \<complex.h> non è inclusa \<ccomplex> in, perché viene sostituita in modo efficace dagli overload C++ in \<complex> e \<cmath> . Che rende \<ccomplex> ridondante l'intestazione. L' \<complex.h> intestazione è deprecata in C++. L' \<ccomplex> intestazione è deprecata in c++ 17 ed è stata rimossa nello standard bozza c++ 20.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<ccomplex>

**Spazio dei nomi:** std

## <a name="remarks"></a>Commenti

Il nome `clog` , dichiarato in \<complex.h> , non è definito nello `std` spazio dei nomi a causa di potenziali conflitti con il `clog` dichiarato in [\<iostream>](iostream.md) .

## <a name="see-also"></a>Vedi anche

[\<complex>](complex.md)\
[\<cmath>](cmath.md)\
[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Panoramica della libreria standard C++](cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)
