---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0030'
title: Errore di compilazione progetto PRJ0030
ms.date: 11/04/2016
f1_keywords:
- PRJ0030
helpviewer_keywords:
- PRJ0030
ms.assetid: c48b3727-e166-46e7-bcd7-3e5b2ac5c1d4
ms.openlocfilehash: a8fdb99e7444383f3634730b3053b00b81661aed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160285"
---
# <a name="project-build-error-prj0030"></a>Errore di compilazione progetto PRJ0030

Errore di espansione della macro. Valutazione della ricorsione superata 32 livelli per $ (macro).

Questo errore è causato dalla ricorsione nelle macro. Se ad esempio si imposta la proprietà **directory intermedia** (vedere la [pagina delle proprietà generale (progetto)](../../build/reference/general-property-page-project.md)) su $ (IntDir), sarà presente una ricorsione.

Per correggere l'errore, non definire macro o proprietà in termini di macro che vengono usate per definire.
