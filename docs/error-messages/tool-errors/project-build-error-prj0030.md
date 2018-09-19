---
title: Errore di compilazione PRJ0030 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0030
dev_langs:
- C++
helpviewer_keywords:
- PRJ0030
ms.assetid: c48b3727-e166-46e7-bcd7-3e5b2ac5c1d4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 964fedd40f577a8b337c4ad0c20ba80d33ed2a23
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46099920"
---
# <a name="project-build-error-prj0030"></a>Errore di compilazione progetto PRJ0030

Errore di espansione di macro. Valutazione della ricorsione superata i 32 livelli per $(macro).

Questo errore è causato da nelle macro di ricorsione. Ad esempio, se si imposta la **Directory intermedia** proprietà (vedere [General Property Page (Project)](../../ide/general-property-page-project.md)) $ (IntDir), si otterrà una ricorsione.

Per risolvere questo errore, non definire macro o proprietà in termini di macro che vengono usate per definire.