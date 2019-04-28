---
title: Avviso degli strumenti del linker LNK4014
ms.date: 11/04/2016
f1_keywords:
- LNK4014
helpviewer_keywords:
- LNK4014
ms.assetid: 394903e9-3ded-4ea4-b7c0-a3535d4b4da4
ms.openlocfilehash: f67990ed74f500f1b954edcf1d6437f64f93f0d6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62298607"
---
# <a name="linker-tools-warning-lnk4014"></a>Avviso degli strumenti del linker LNK4014

Impossibile trovare l'oggetto membro "nomeoggetto"

Non è stato trovato `objectname` nella libreria.

Il **/Remove** e **/estrarre** opzioni richiedono che il nome completo dell'oggetto membro che deve essere eliminato o copiati in un file. Il nome completo include il percorso del file oggetto originale. Per visualizzare i nomi completi di oggetti membro in una raccolta, usare DUMPBIN [/ARCHIVEMEMBERS](../../build/reference/archivemembers.md) o LIB [/List](../../build/reference/managing-a-library.md).