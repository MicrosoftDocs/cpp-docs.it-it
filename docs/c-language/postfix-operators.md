---
title: Operatori di suffisso
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C], postfix
- postfix operators
ms.assetid: 76260011-1624-484e-8bef-72ae7ab556cc
ms.openlocfilehash: a86ede25feeaee3a9fb1c6b146cf9667b85c0c2f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62232247"
---
# <a name="postfix-operators"></a>Operatori di suffisso

Gli operatori di suffisso hanno la precedenza più elevata (l'associazione più stretta) nella valutazione di un'espressione.

## <a name="syntax"></a>Sintassi

*suffisso-espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*primary-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **[**  *espressione*  **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **(**  *argument-expression-list*<sub>opt</sub> **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **.**  *identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-identificatore di espressione***->***identifier*    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **++**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **--**

Gli operatori in questo livello di precedenza sono gli indici di matrice, le chiamate di funzione, la struttura e i membri di unione, nonché gli operatori di incremento e decremento in forma suffissa.

## <a name="see-also"></a>Vedere anche

[Operatori C](../c-language/c-operators.md)
