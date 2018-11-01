---
title: Avviso BK4504 di BSCMAKE
ms.date: 11/04/2016
f1_keywords:
- BK4504
helpviewer_keywords:
- BK4504
ms.assetid: b56ee2d4-ad44-40f4-98c0-75934ea44a6c
ms.openlocfilehash: 7ffcb7c2e6ae512006ccd29c87b05c53fdfcaef5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50450297"
---
# <a name="bscmake-warning-bk4504"></a>Avviso BK4504 di BSCMAKE

file contiene troppi riferimenti; ignorare ulteriori riferimenti da questa origine

Il file con estensione cpp contiene più di 64.000 riferimenti dei simboli. Quando BSCMAKE ha rilevato 64.000 riferimenti in un file, ignora eventuali ulteriormente riferimenti.

Per risolvere il problema, dividere il file in due o più file ciascuno dei quali ha meno di 64.000 riferimenti dei simboli oppure utilizzare la direttiva del preprocessore `#pragma component(browser)` per limitare i simboli generati per i riferimenti particolari. Per altre informazioni, vedere [componente](../../preprocessor/component.md).