---
title: Errore di compilazione progetto PRJ0034
ms.date: 11/04/2016
f1_keywords:
- PRJ0034
helpviewer_keywords:
- PRJ0034
ms.assetid: 1da4a55b-231b-4476-8545-6997628fbc00
ms.openlocfilehash: 7c078a3d2aef24df9151cb10f81c1b7423809e68
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62347587"
---
# <a name="project-build-error-prj0034"></a>Errore di compilazione progetto PRJ0034

La proprietà "Dipendenze aggiuntive" per l'oggetto personalizzato a livello di progetto di compilazione passaggio contenuto "macro" che restituisce "espansione".

Un'istruzione di compilazione personalizzata a un progetto è presente un errore nella dipendenza aggiuntiva probabilmente a causa di un problema di valutazione della macro. Questo errore può anche significare che il percorso non è corretto, che contiene caratteri o delle combinazioni di caratteri che non sono validi in un percorso di file.

Per risolvere questo errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.