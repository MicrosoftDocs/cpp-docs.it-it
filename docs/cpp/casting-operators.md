---
title: Operatori di cast
ms.custom: index-page
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C++], casting
- casting operators [C++]
ms.assetid: 16240348-26bc-4f77-8eab-57253f00ce52
ms.openlocfilehash: eac274a0207be675b8d13532c3110c6e71bd55c9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190100"
---
# <a name="casting-operators"></a>Operatori di cast

Nel linguaggio C++ sono disponibili numerosi operatori di cast specifici. Tali operatori consentono di rimuovere parte dell'ambiguità e alcuni problemi relativi agli operatori cast obsoleti del linguaggio C. Gli operatori sono i seguenti:

- [dynamic_cast](../cpp/dynamic-cast-operator.md) Utilizzato per la conversione di tipi polimorfici.

- [static_cast](../cpp/static-cast-operator.md) Utilizzato per la conversione di tipi nonpolymorphic.

- [const_cast](../cpp/const-cast-operator.md) Utilizzato per rimuovere gli attributi **const**, **volatile**e **__unaligned** .

- [reinterpret_cast](../cpp/reinterpret-cast-operator.md) Usato per la riinterpretazione semplice dei bit.

- [safe_cast](../extensions/safe-cast-cpp-component-extensions.md) Utilizzato in C++/CLI per produrre codice MSIL verificabile.

Usare **const_cast** e **reinterpret_cast** come ultima risorsa, poiché questi operatori presentano gli stessi rischi dei cast di tipo precedente. Tali operatori sono tuttavia ancora necessari per sostituire completamente gli operatori cast obsoleti.

## <a name="see-also"></a>Vedere anche

[Cast](../cpp/casting.md)
