---
title: Operatori di cast
ms.custom: index-page
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C++], casting
- casting operators [C++]
ms.assetid: 16240348-26bc-4f77-8eab-57253f00ce52
ms.openlocfilehash: e2ac8e9079b1d30dca077363bbb6cef35960902e
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58768952"
---
# <a name="casting-operators"></a>Operatori di cast

Nel linguaggio C++ sono disponibili numerosi operatori di cast specifici. Tali operatori consentono di rimuovere parte dell'ambiguità e alcuni problemi relativi agli operatori cast obsoleti del linguaggio C. Gli operatori sono i seguenti:

- [dynamic_cast](../cpp/dynamic-cast-operator.md) utilizzato per la conversione dei tipi polimorfici.

- [static_cast](../cpp/static-cast-operator.md) utilizzato per la conversione dei tipi non polimorfici.

- [const_cast](../cpp/const-cast-operator.md) utilizzato per rimuovere il **const**, **volatile**, e **unaligned** attributi.

- [reinterpret_cast](../cpp/reinterpret-cast-operator.md) utilizzato per la reinterpretazione semplice dei bit.

- [safe_cast](../extensions/safe-cast-cpp-component-extensions.md) usato in C++/CLI generi codice MSIL verificabile.

Uso **const_cast** e **reinterpret_cast** come ultima risorsa, poiché questi operatori provocare gli stessi cast obsoleti. Tali operatori sono tuttavia ancora necessari per sostituire completamente gli operatori cast obsoleti.

## <a name="see-also"></a>Vedere anche

[Cast](../cpp/casting.md)