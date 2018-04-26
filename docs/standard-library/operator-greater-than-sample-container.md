---
title: operator&gt; (&lt;sample container&gt;) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- std::operator>
- operator>
- std::>
- '>'
dev_langs:
- C++
helpviewer_keywords:
- '> operator, comparing specific objects'
- operator >
ms.assetid: 49bd417a-3305-4ffa-9884-39d3904ed87d
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5535b9dcd9ad38ca658df70f2f473e878f52b59d
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="operatorgt-ltsample-containergt"></a>operator&gt; (&lt;sample container&gt;)

> [!NOTE]
> Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

Esegue l'overload di **operator>** per confrontare due oggetti della classe modello [Container](../standard-library/sample-container-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
bool operator*gt;(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## <a name="return-value"></a>Valore restituito

Restituisce `right < left`.

## <a name="see-also"></a>Vedere anche

[\<sample container>](../standard-library/sample-container.md)<br/>
