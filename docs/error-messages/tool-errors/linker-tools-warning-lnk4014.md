---
title: Avviso degli strumenti del linker LNK4014
ms.date: 11/04/2016
f1_keywords:
- LNK4014
helpviewer_keywords:
- LNK4014
ms.assetid: 394903e9-3ded-4ea4-b7c0-a3535d4b4da4
ms.openlocfilehash: 5de53abc2342e3ed743f6b4abb871e05606dfc37
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194278"
---
# <a name="linker-tools-warning-lnk4014"></a>Avviso degli strumenti del linker LNK4014

Impossibile trovare l'oggetto membro "ObjectName"

LIB non è stato in grado di trovare `objectname` nella libreria.

Le opzioni **/Remove** e **/Extract** richiedono il nome completo dell'oggetto membro da eliminare o copiare in un file. Il nome completo include il percorso del file oggetto originale. Per visualizzare i nomi completi degli oggetti membro in una raccolta, utilizzare DUMPBIN [/ARCHIVEMEMBERS](../../build/reference/archivemembers.md) o lib [/List](../../build/reference/managing-a-library.md).
