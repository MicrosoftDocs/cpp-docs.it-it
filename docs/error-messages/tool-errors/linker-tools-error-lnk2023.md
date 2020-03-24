---
title: Errore degli strumenti del linker LNK2023
ms.date: 11/04/2016
f1_keywords:
- LNK2023
helpviewer_keywords:
- LNK2023
ms.assetid: c99e35a8-739a-4a20-a715-29b8c3744703
ms.openlocfilehash: 363b6ef0ea9991ff5d657044282e99c558257fb9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194629"
---
# <a name="linker-tools-error-lnk2023"></a>Errore degli strumenti del linker LNK2023

dll o punto di ingresso \<dll o punto di ingresso non valido >

Il linker sta caricando una versione non corretta di msobj90. dll. Verificare che link. exe e msobj90. dll nel percorso abbiano la stessa versione.

Potrebbe non essere presente una dipendenza di msobj90. dll. L'elenco di dipendenze per msobj90. dll è:

- Msvcr90. dll

- Kernel32.dll

Controllare se nel computer sono presenti altre copie di msobj90. dll che potrebbero non essere aggiornate.
