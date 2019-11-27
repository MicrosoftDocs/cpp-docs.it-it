---
title: LOCAL (MASM)
ms.date: 08/30/2018
f1_keywords:
- Local
helpviewer_keywords:
- LOCAL directive
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
ms.openlocfilehash: c3a04f68b7fd17b2b6459c219a98fd99ec2d62d4
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397246"
---
# <a name="local-masm"></a>LOCAL (MASM)

Nella prima direttiva, all'interno di una macro, **local** definisce le etichette univoche per ogni istanza della macro.

## <a name="syntax"></a>Sintassi

> *LocalName* locale ⟦, *localName* ... ⟧
>
> *Label* locale ⟦ __\[__ *count* __]__ ⟧ ⟦ __:__ *tipo*⟧ ⟦ __,__ *Label* ⟦ __\[__ *count* __]__ ⟧ ⟦*Type*⟧... ⟧

## <a name="remarks"></a>Note

Nella seconda direttiva, all'interno di una definizione di procedura (**proc**), **local** crea variabili basate su stack che esistono per la durata della procedura. L' *etichetta* può essere una variabile semplice o una matrice contenente gli elementi *count* .

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
