---
title: Errore del compilatore di risorse RC2151
ms.date: 11/04/2016
f1_keywords:
- RC2151
helpviewer_keywords:
- RC2151
ms.assetid: 3c47e535-c78d-4338-aab9-9b47e2c34728
ms.openlocfilehash: 9d4eea92321ca8373f3ad5f121f4a8e96d878e79
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80191262"
---
# <a name="resource-compiler-error-rc2151"></a>Errore del compilatore di risorse RC2151

non è possibile riutilizzare le costanti stringa

Si sta utilizzando lo stesso valore due volte in un'istruzione **un'STRINGTABLE** . Assicurarsi che non si stiano combinando valori decimali e esadecimali sovrapposti.

Ogni ID in una **un'STRINGTABLE** deve essere univoco. Per la massima efficienza, usare costanti contigue che iniziano per un multiplo di 16.
