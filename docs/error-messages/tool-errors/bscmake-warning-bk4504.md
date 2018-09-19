---
title: Avviso BK4504 di BSCMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- BK4504
dev_langs:
- C++
helpviewer_keywords:
- BK4504
ms.assetid: b56ee2d4-ad44-40f4-98c0-75934ea44a6c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c8a2da8903dade37faf3b14175b65f3169efd908
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46049768"
---
# <a name="bscmake-warning-bk4504"></a>Avviso BK4504 di BSCMAKE

file contiene troppi riferimenti; ignorare ulteriori riferimenti da questa origine

Il file con estensione cpp contiene più di 64.000 riferimenti dei simboli. Quando BSCMAKE ha rilevato 64.000 riferimenti in un file, ignora eventuali ulteriormente riferimenti.

Per risolvere il problema, dividere il file in due o più file ciascuno dei quali ha meno di 64.000 riferimenti dei simboli oppure utilizzare la direttiva del preprocessore `#pragma component(browser)` per limitare i simboli generati per i riferimenti particolari. Per altre informazioni, vedere [componente](../../preprocessor/component.md).