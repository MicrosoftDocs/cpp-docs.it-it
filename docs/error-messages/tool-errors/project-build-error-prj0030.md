---
title: Errore di compilazione progetto PRJ0030
ms.date: 11/04/2016
f1_keywords:
- PRJ0030
helpviewer_keywords:
- PRJ0030
ms.assetid: c48b3727-e166-46e7-bcd7-3e5b2ac5c1d4
ms.openlocfilehash: 2a6cde4ca48acb9aadfe3109084483dbb554e1e4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50488075"
---
# <a name="project-build-error-prj0030"></a>Errore di compilazione progetto PRJ0030

Errore di espansione di macro. Valutazione della ricorsione superata i 32 livelli per $(macro).

Questo errore è causato da nelle macro di ricorsione. Ad esempio, se si imposta la **Directory intermedia** proprietà (vedere [General Property Page (Project)](../../ide/general-property-page-project.md)) $ (IntDir), si otterrà una ricorsione.

Per risolvere questo errore, non definire macro o proprietà in termini di macro che vengono usate per definire.