---
title: '&lt;ccomplex&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- <ccomplex>
dev_langs:
- C++
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4ea7ffa0db396242ab072efd01ccdd3def75fea9
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltccomplexgt"></a>&lt;ccomplex&gt;

Include l'intestazione [\<complex>](../standard-library/complex.md) della libreria standard C++, che include l'intestazione della libreria C standard \<complex.h> e aggiunge i nomi associati allo spazio dei nomi `std`.

## <a name="syntax"></a>Sintassi

```cpp
#include <ccomplex>

```

## <a name="remarks"></a>Note

L'inclusione di questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria C standard vengano dichiarati nello spazio dei nomi `std`.

Il nome `clog` dichiarato in \<complex.h> non è definito nello spazio dei nomi `std` a causa dei conflitti potenziali con il `clog` dichiarato in [\<iostream>](../standard-library/iostream.md).

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)<br/>
