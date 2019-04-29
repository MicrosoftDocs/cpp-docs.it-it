---
title: Errore di compilazione progetto PRJ0030
ms.date: 11/04/2016
f1_keywords:
- PRJ0030
helpviewer_keywords:
- PRJ0030
ms.assetid: c48b3727-e166-46e7-bcd7-3e5b2ac5c1d4
ms.openlocfilehash: aa1c8539247287f7644742857c3cb7de321a20a2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385407"
---
# <a name="project-build-error-prj0030"></a>Errore di compilazione progetto PRJ0030

Errore di espansione di macro. Valutazione della ricorsione superata i 32 livelli per $(macro).

Questo errore è causato da nelle macro di ricorsione. Ad esempio, se si imposta la **Directory intermedia** proprietà (vedere [General Property Page (Project)](../../build/reference/general-property-page-project.md)) $ (IntDir), si otterrà una ricorsione.

Per risolvere questo errore, non definire macro o proprietà in termini di macro che vengono usate per definire.