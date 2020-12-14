---
description: 'Altre informazioni su: BSCMAKE Warning BK4504'
title: Avviso BK4504 di BSCMAKE
ms.date: 11/04/2016
f1_keywords:
- BK4504
helpviewer_keywords:
- BK4504
ms.assetid: b56ee2d4-ad44-40f4-98c0-75934ea44a6c
ms.openlocfilehash: 8b07c15b03a040ea19ec368c6f869d02f3e36f79
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237829"
---
# <a name="bscmake-warning-bk4504"></a>Avviso BK4504 di BSCMAKE

il file contiene troppi riferimenti. Ulteriori riferimenti da questa origine verranno ignorati

Il file con estensione cpp contiene più di 64.000 riferimenti dei simboli. Quando BSCMAKE ha rilevato 64.000 riferimenti in un file, ignora eventuali ulteriormente riferimenti.

Per risolvere il problema, dividere il file in due o più file ciascuno dei quali ha meno di 64.000 riferimenti dei simboli oppure utilizzare la direttiva del preprocessore `#pragma component(browser)` per limitare i simboli generati per i riferimenti particolari. Per ulteriori informazioni, vedere [Component](../../preprocessor/component.md).
