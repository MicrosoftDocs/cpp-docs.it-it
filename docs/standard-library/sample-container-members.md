---
title: Membri sample container | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- container classes
ms.assetid: dc5a1998-a31b-4adf-b888-8abe5b87a4e0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7c844416151874714aa86a2ffe9762949c6a62a3
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33856098"
---
# <a name="sample-container-members"></a>Membri contenitore di esempio

> [!NOTE]
> Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

## <a name="reference"></a>Riferimenti

## <a name="typedefs"></a>Definizioni typedef

|||
|-|-|
|[const_iterator](../standard-library/container-class-const-iterator.md)|Descrive un oggetto che può essere usato come iteratore costante per la sequenza controllata.|
|[const_reference](../standard-library/container-class-const-reference.md)|Descrive un oggetto che può essere usato come riferimento costante a un elemento della sequenza controllata.|
|[const_reverse_iterator](../standard-library/container-class-const-reverse-iterator.md)|Descrive un oggetto che può essere usato come iteratore inverso costante per la sequenza controllata.|
|[difference_type](../standard-library/container-class-difference-type.md)|Descrive un oggetto che può rappresentare la differenza tra gli indirizzi di due qualsiasi elementi nella sequenza controllata.|
|[iterator](../standard-library/container-class-iterator.md)|Descrive un oggetto che può essere usato come iteratore per la sequenza controllata.|
|[reference](../standard-library/container-class-reference.md)|Descrive un oggetto che può essere usato come riferimento a un elemento della sequenza controllata.|
|[reverse_iterator](../standard-library/container-class-reverse-iterator.md)|Descrive un oggetto che può essere usato come iteratore inverso per la sequenza controllata.|
|[size_type](../standard-library/container-class-size-type.md)|Descrive un oggetto che può rappresentare la lunghezza di una sequenza controllata.|
|[value_type](../standard-library/container-class-value-type.md)|Funge da sinonimo del parametro di modello **Ty**.|

## <a name="member-functions"></a>Funzioni membro

|||
|-|-|
|[begin](../standard-library/container-class-begin.md)|Restituisce un iteratore che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota).|
|[clear](../standard-library/container-class-clear.md)|Chiama [erase](../standard-library/container-class-erase.md)( [begin](../standard-library/container-class-begin.md), [end](../standard-library/container-class-end.md)).|
|[empty](../standard-library/container-class-empty.md)|Restituisce **true** per una sequenza controllata vuota.|
|[end](../standard-library/container-class-end.md)|Restituisce un iteratore che punta poco oltre la fine della sequenza.|
|[erase](../standard-library/container-class-erase.md)|Cancella un elemento.|
|[max_size](../standard-library/container-class-max-size.md)|Restituisce la lunghezza della sequenza più lunga che l'oggetto può controllare, in un tempo costante indipendentemente dalla lunghezza della sequenza controllata.|
|[rbegin](../standard-library/container-class-rbegin.md)|Restituisce un iteratore inverso che punta oltre la fine della sequenza controllata, designando l'inizio della sequenza inversa.|
|[rend](../standard-library/container-class-rend.md)|La funzione membro restituisce un iteratore inverso che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota), designando la fine della sequenza inversa.|
|[size](../standard-library/container-class-size.md)|Restituisce la lunghezza della sequenza controllata, in un tempo costante indipendentemente dalla lunghezza della sequenza controllata.|
|[swap](../standard-library/container-class-swap.md)
