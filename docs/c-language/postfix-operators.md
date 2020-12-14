---
description: 'Altre informazioni su: operatori di suffisso'
title: Operatori di suffisso
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C], postfix
- postfix operators
ms.assetid: 76260011-1624-484e-8bef-72ae7ab556cc
ms.openlocfilehash: be8e7354d512174a4ab11ffcdcb82f9418baa894
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195866"
---
# <a name="postfix-operators"></a>Operatori di suffisso

Gli operatori di suffisso hanno la precedenza più elevata (l'associazione più stretta) nella valutazione di un'espressione.

## <a name="syntax"></a>Sintassi

*suffisso-espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*primary-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **[**  *espressione*  **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **(**  *argument-expression-list*<sub>opt</sub> **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **.**  *identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione* **->** *identificatore* di    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **++**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **--**

Gli operatori in questo livello di precedenza sono gli indici di matrice, le chiamate di funzione, la struttura e i membri di unione, nonché gli operatori di incremento e decremento in forma suffissa.

## <a name="see-also"></a>Vedi anche

[Operatori C](../c-language/c-operators.md)
