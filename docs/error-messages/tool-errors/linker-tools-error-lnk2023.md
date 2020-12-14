---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2023'
title: Errore degli strumenti del linker LNK2023
ms.date: 11/04/2016
f1_keywords:
- LNK2023
helpviewer_keywords:
- LNK2023
ms.assetid: c99e35a8-739a-4a20-a715-29b8c3744703
ms.openlocfilehash: fbcddcb00d77fd1b51effb27bc032019fc803d3c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275815"
---
# <a name="linker-tools-error-lnk2023"></a>Errore degli strumenti del linker LNK2023

dll o punto di ingresso non valido \<dll or entry point>

Il linker sta caricando una versione non corretta di msobj90.dll. Verificare che link.exe e msobj90.dll nel percorso abbiano la stessa versione.

Potrebbe non essere presente una dipendenza di msobj90.dll. L'elenco di dipendenze per msobj90.dll è:

- Msvcr90.dll

- Kernel32.dll

Controllare se nel computer sono presenti altre copie di msobj90.dll che potrebbero non essere aggiornate.
